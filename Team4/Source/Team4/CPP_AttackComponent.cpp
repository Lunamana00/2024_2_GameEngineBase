// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_AttackComponent.h"
#include "MotionWarpingComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "RootMotionModifier.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/AudioComponent.h"
#include "CPP_AttributeForPlayerComponent.h"
#include "CPP_TestCharacter.h"
#include "Engine/OverlapResult.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "CPP_MeleeWeapon.h"
#include "CPP_EnemyTest.h"
#include "InputActionValue.h"
#include "CPP_Projectile.h"


#define TRACE_LENGTH 80000.f
#define ATTACK_DISTANCE 110.f

// Sets default values for this component's properties
UCPP_AttackComponent::UCPP_AttackComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called every frame
void UCPP_AttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FHitResult HitResult;
	TraceUnderCrosshairs(HitResult);


	if (UCameraComponent* Camera = Character->GetFollowCamera())
	{
		float TargetFOV = bIsAiming ? AimFOV : DefaultFOV;
		FVector CamTargetLocation = bIsAiming ? DefaultCameraLocation : DefaultCameraLocation;
		float NewFOV = FMath::FInterpTo(Camera->FieldOfView, TargetFOV, DeltaTime, 10.f);
		FVector NewCamLocation = FMath::VInterpTo(Camera->GetRelativeLocation(), CamTargetLocation, DeltaTime, 15.f);
		Camera->SetRelativeLocation(NewCamLocation);
		Camera->SetFieldOfView(NewFOV);
	}

	if (!bHasLockOnTarget)
	{
		if (ACharacter* FoundTarget = FindTarget())
		{
			CurrentTarget = FoundTarget;
			AddMotionWarpTarget(CurrentTarget);
			bHasTarget = true;
			bCanRotateToInputDirection = false;
		}
		else
		{
			if (bHasTarget)
			{
				RemoveMotionWarpTarget(FName("AttackTarget")); // Remove only if we previously had a target
				bHasTarget = false; // No target anymore
			}
			CurrentTarget = nullptr;
			if (bCanRotateToInputDirection)
			{
				RotateToInputDirection(DeltaTime);
			}
		}
	}
	else // If we have a lock on target
	{
		if (FVector::Distance(Character->GetActorLocation(), CurrentLockOnTargetActor->GetActorLocation()) < AutoTargetRange)
		{
			AddMotionWarpTarget(CurrentLockOnTargetActor);
		}
		else
		{
			RemoveMotionWarpTarget(FName(TEXT("AttackTarget")));
		}
	}



	// DrawDebugLine(GetWorld(), Character->GetActorLocation(),
	// 	Character->GetActorLocation() + AttackDirection * 100.f,
	// 	FColor::Red, false, -1, 0, 1.f);


	if (IsValid(CurrentLockOnTargetActor))
	{
		FVector CurrentLocation = Character->GetActorLocation();
		FVector TargetLocation = CurrentLockOnTargetActor->GetActorLocation();
		double TargetDistance = FVector::Distance(CurrentLocation, TargetLocation);

		if (TargetDistance >= LockOnBreakDistance)
		{
			EndLockOn();
		}
		else if (IsValid(CurrentLockOnTargetActor))
		{
			TargetLocation.Z -= 50.f;
			FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(
				CurrentLocation, TargetLocation);
			GetWorld()->GetFirstPlayerController()->SetControlRotation(NewRotation);
		}
	}

}

// Called when the game starts
void UCPP_AttackComponent::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<ACPP_TestCharacter>(GetOwner());
	DefaultCameraLocation = Character->GetFollowCamera()->GetRelativeLocation();
	
}

void UCPP_AttackComponent::ResetCombo()
{
	AttackState = EAttackState::EAS_Unoccupied;
	ComboCount = 0;
}

void UCPP_AttackComponent::ResetAttackState()
{
	AttackState = EAttackState::EAS_Unoccupied;
}

ACharacter* UCPP_AttackComponent::FindTarget()
{
	if (!Character) return nullptr;

	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Character);

	FVector CharacterLocation = Character->GetActorLocation();
	GetWorld()->OverlapMultiByChannel(
		OverlapResults,
		CharacterLocation,
		FQuat::Identity,
		ECC_Pawn,
		FCollisionShape::MakeSphere(AutoTargetRange),
		QueryParams
	);

	ACharacter* Target = nullptr;
	float SmallestAngle = FLT_MAX;

	for (const FOverlapResult& Result : OverlapResults)
	{
		if (ACharacter* Enemy = Cast<ACharacter>(Result.GetActor()))
		{
			FVector ToTarget = Enemy->GetActorLocation() - CharacterLocation;

			ToTarget.Z = 0;
			float Angle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(AttackDirection, ToTarget.GetSafeNormal())));
			// DrawDebugLine(GetWorld(), CharacterLocation, CharacterLocation + ToTarget * 100.f, FColor::Blue, false, -1, 0, 10.f);
			if (Angle <= AutoTargetAngle && Angle < SmallestAngle)
			{
				Target = Enemy;
				SmallestAngle = Angle;
			}
		}
	}
	if (Target)
	{
		// DrawDebugSphere(GetWorld(), Target->GetActorLocation(), 100.f, 24, FColor::Red, false, -1, 0, 0.5f);
	}

	return Target;
}

void UCPP_AttackComponent::AddMotionWarpTarget(const AActor* Target) const
{
	if (!Character || !Target) return;

	UMotionWarpingComponent* MotionWarpingComponent = Character->GetMotionWarpingComponent();
	if (!MotionWarpingComponent) return;

	FVector CharacterLocation = Character->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();
	FVector ToTarget = TargetLocation - CharacterLocation;
	ToTarget.Z = 0;
	float DistanceToTarget = ToTarget.Size();

	const float AttackDistance = ATTACK_DISTANCE;

	FRotator TargetRotation = ToTarget.Rotation();

	FMotionWarpingTarget WarpTarget;
	FVector WarpLocation;
	WarpTarget.Name = FName("AttackTarget");

	if (DistanceToTarget >= ATTACK_DISTANCE * 0.7f && DistanceToTarget <= ATTACK_DISTANCE)
	{
		WarpLocation = CharacterLocation;  // Stay where we are
	}
	else
	{
		// Position ourselves ATTACK_DISTANCE units away from the target
		WarpLocation = TargetLocation - (ToTarget.GetSafeNormal() * ATTACK_DISTANCE);
	}
	WarpLocation.Z = TargetLocation.Z - 10.f;
	WarpTarget.Location = WarpLocation;
	WarpTarget.Rotation = TargetRotation;

	MotionWarpingComponent->AddOrUpdateWarpTarget(WarpTarget);
}

void UCPP_AttackComponent::RemoveMotionWarpTarget(FName WarpTargetName) const
{
	if (UMotionWarpingComponent* MotionWarpingComponent = Character->GetMotionWarpingComponent())
	{
		MotionWarpingComponent->RemoveWarpTarget(WarpTargetName);
	}
}

void UCPP_AttackComponent::RotateToInputDirection(float DeltaTime)
{
	FRotator InitialRotation = Character->GetActorRotation();
	FRotator TargetRotation = AttackDirection.Rotation();
	FRotator InterpRotation = FMath::RInterpTo(InitialRotation, TargetRotation, DeltaTime, 10.f);
	Character->SetActorRotation(InterpRotation);
}

void UCPP_AttackComponent::SpawnProjectile()
{
	if (!Character || !ProjectileClass_N || !ProjectileClass_R || !ProjectileClass_B || !ProjectileClass_G) return;

	FVector MuzzleLocation = Character->GetWeapon()->GetWeaponMuzzle()->GetComponentLocation();
	FVector AimDirection = HitLocation - MuzzleLocation;
	AimDirection = AimDirection.GetSafeNormal();
	FRotator SpawnRotation = AimDirection.Rotation();

	if (GetOwner()->HasAuthority()) // 서버 권한 확인
	{
		SpawnProjectile_Internal(MuzzleLocation, SpawnRotation, CurrentColor);
	}
	else
	{
		// 클라이언트에서 서버로 발사체 생성 요청
		Server_SpawnProjectile(MuzzleLocation, SpawnRotation, CurrentColor);
	}
}


void UCPP_AttackComponent::Server_SpawnProjectile_Implementation(FVector MuzzleLocation, FRotator SpawnRotation, EColor ProjectileColor)
{
	SpawnProjectile_Internal(MuzzleLocation, SpawnRotation, ProjectileColor);
}

bool UCPP_AttackComponent::Server_SpawnProjectile_Validate(FVector MuzzleLocation, FRotator SpawnRotation, EColor ProjectileColor)
{
	// 추가적인 검증 로직 필요 시 구현 가능
	return true;
}

void UCPP_AttackComponent::SpawnProjectile_Internal(FVector MuzzleLocation, FRotator SpawnRotation, EColor ProjectileColor)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = GetOwner();
	SpawnParams.Instigator = Cast<APawn>(GetOwner());

	TSubclassOf<ACPP_Projectile> ChosenProjectileClass = nullptr;

	// 현재 색상에 따른 발사체 클래스 선택
	switch (ProjectileColor)
	{
	case EColor::EC_None:
		ChosenProjectileClass = ProjectileClass_N;
		break;
	case EColor::EC_Red:
		ChosenProjectileClass = ProjectileClass_R;
		break;
	case EColor::EC_Blue:
		ChosenProjectileClass = ProjectileClass_B;
		break;
	default:
		ChosenProjectileClass = ProjectileClass_G;
		break;
	}

	if (ChosenProjectileClass)
	{
		ACPP_Projectile* SpawnedProjectile = GetWorld()->SpawnActor<ACPP_Projectile>(
			ChosenProjectileClass,
			MuzzleLocation,
			SpawnRotation,
			SpawnParams
		);

		if (SpawnedProjectile)
		{
			// 필요시 추가 설정 가능
			SpawnedProjectile->SetOwner(GetOwner());
		}
	}
}


void UCPP_AttackComponent::TraceUnderCrosshairs(FHitResult& TraceHitResult)
{
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	FVector2D CrosshairLocation(ViewportSize.X / 2, ViewportSize.Y / 2);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0), CrosshairLocation,
		CrosshairWorldPosition, CrosshairWorldDirection);
	if (bScreenToWorld)
	{
		FVector Start = CrosshairWorldPosition;
		FVector End = Start + CrosshairWorldDirection * TRACE_LENGTH;

		GetWorld()->LineTraceSingleByChannel(
			TraceHitResult, Start, End, ECC_Visibility);
		if (!TraceHitResult.bBlockingHit)
		{
			TraceHitResult.ImpactPoint = End;
			HitLocation = End;
		}
		else
		{
			HitLocation = TraceHitResult.ImpactPoint;
			// DrawDebugSphere(GetWorld(), TraceHitResult.ImpactPoint, 12.f, 12, FColor::Red);
		}
	}
}

void UCPP_AttackComponent::AimDownSight(const FInputActionValue& Value)
{
	if (AttackState != EAttackState::EAS_Unoccupied && AttackState != EAttackState::EAS_RangedAttacking) return;
	
	if (bHasLockOnTarget)
	{
		EndLockOn();
	}
	
	bIsAiming = Value.Get<bool>();

	if (bIsAiming)
	{
		if (CrosshairWidget && !CrosshairWidget->IsInViewport())
		{
			CrosshairWidget->AddToViewport();
		}
		CurrentRange = EAttackRange::Ranged;
		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
		Character->GetCharacterMovement()->bUseControllerDesiredRotation = true;
		
		if (CrosshairWidget && !CrosshairWidget->IsInViewport())
		{
			CrosshairWidget->AddToViewport();
		}
		CurrentRange = EAttackRange::Ranged;
		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
		Character->GetCharacterMovement()->bUseControllerDesiredRotation = true;
		
	}
	else
	{
		if (CrosshairWidget)
		{
			CrosshairWidget->RemoveFromParent();
		
		}
		CurrentRange = EAttackRange::Melee;
	}
}

void UCPP_AttackComponent::SetCurrentColor(EColor inColor)
{
	CurrentColor = inColor;
}


FAttack* UCPP_AttackComponent::GetNormalAttack()
{
	if (CurrentRange == EAttackRange::Melee && MeleeAttacks.Num() > 0)
	{
	
		return &MeleeAttacks[0];			
	
	}

	if (CurrentRange == EAttackRange::Ranged && RangedAttacks.Num() > 0)
	{
		return &RangedAttacks[0];
	}
	return nullptr;
}


void UCPP_AttackComponent::UseNormalAttack()
{
	if (AttackState == EAttackState::EAS_Unoccupied
		&& !Character->GetCharacterMovement()->IsFalling())
	{
		if (const FAttack* Attack = GetNormalAttack())
		{
			if (UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance())
			{
				const FVector2D InputVector = Character->GetMovementInputVector();
				FVector CameraForwardVector = Character->GetFollowCamera()->GetForwardVector();
				FVector CameraRightVector = Character->GetFollowCamera()->GetRightVector();
				CameraForwardVector.Z = 0;
				CameraRightVector.Z = 0;

				if (!InputVector.IsZero())
				{
					AttackDirection = (CameraForwardVector * InputVector.Y +
						CameraRightVector * InputVector.X).GetSafeNormal();
				}
				else
				{
					AttackDirection = Character->GetActorForwardVector();
				}

				if (Attack->Range == EAttackRange::Melee)
				{
					AttackState = EAttackState::EAS_MeleeAttacking;
					if (CurrentTarget)
					{
						AddMotionWarpTarget(CurrentTarget);
					}
				}

				ComboCount = ComboCount % Attack->AttackMontages.Num();
				AnimInstance->Montage_Play(Attack->AttackMontages[ComboCount]);
				ComboCount++;
			}

		}
	}
}

void UCPP_AttackComponent::UseRangedAttack()
{
	CurrentRange = EAttackRange::Ranged;

	if (bIsRangedAttacking) return;

	if (AttackState == EAttackState::EAS_Unoccupied
		&& !Character->GetCharacterMovement()->IsFalling())
	{
		if (const FAttack* Attack = GetNormalAttack())
		{
			if (UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance())
			{
				const FVector2D InputVector = Character->GetMovementInputVector();
				FVector CameraForwardVector = Character->GetFollowCamera()->GetForwardVector();
				FVector CameraRightVector = Character->GetFollowCamera()->GetRightVector();
				CameraForwardVector.Z = 0;
				CameraRightVector.Z = 0;

				if (!InputVector.IsZero())
				{
					AttackDirection = (CameraForwardVector * InputVector.Y +
						CameraRightVector * InputVector.X).GetSafeNormal();
				}
				else
				{
					AttackDirection = Character->GetActorForwardVector();
				}

				if (Attack->Range == EAttackRange::Ranged)
				{
					AttackState = EAttackState::EAS_RangedAttacking;
					FHitResult TraceResult;
					TraceUnderCrosshairs(TraceResult);
					CachedHitLocation = TraceResult.ImpactPoint;

					bIsRangedAttacking = true;

					SpawnProjectile();
				}
				AnimInstance->Montage_Play(Attack->AttackMontages[ComboCount]);
			}

		}
	}
	bIsRangedAttacking = false;
	ResetAttackState();
}

void UCPP_AttackComponent::StartLockOn()
{
	if (bIsAiming) return;
	TArray<FHitResult> OutResults;
	FVector CurrentLocation = Character->GetActorLocation();
	FCollisionShape Sphere = FCollisionShape::MakeSphere(1000.f);
	FCollisionQueryParams IgnoreParams{ FName(TEXT("Ignore Collision Params")),
			false,
			Character };
	bool bHasFoundTarget = GetWorld()->SweepMultiByChannel(
		OutResults,
		CurrentLocation,
		CurrentLocation,
		FQuat::Identity,
		ECollisionChannel::ECC_Pawn,
		Sphere,
		IgnoreParams
	);

	if (!bHasFoundTarget) return;

	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	FVector2D CrosshairLocation(ViewportSize.X / 2, ViewportSize.Y / 2);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	float SmallestAngle = MAX_FLT;
	ACharacter* TargetEnemy = nullptr;


	for (const FHitResult& OutResult : OutResults)
	{
		AActor* PotentialTarget = OutResult.GetActor();

		UGameplayStatics::DeprojectScreenToWorld(
			UGameplayStatics::GetPlayerController(this, 0), CrosshairLocation,
			CrosshairWorldPosition, CrosshairWorldDirection);

		if (ACharacter* CastedTarget = Cast<ACharacter>(PotentialTarget))
		{
			FVector ToTarget = (CastedTarget->GetActorLocation() - CurrentLocation).GetSafeNormal();
			float Angle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(
				CrosshairWorldDirection, ToTarget)));
			if (Angle < SmallestAngle && Angle <= 60)
			{
				SmallestAngle = Angle;
				TargetEnemy = CastedTarget;
			}
		}
	}

	if (!TargetEnemy) return;

	CurrentLockOnTargetActor = TargetEnemy;
	bHasLockOnTarget = true;

	GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
	Character->GetCharacterMovement()->bOrientRotationToMovement = false;
	Character->GetCharacterMovement()->bUseControllerDesiredRotation = true;
	Character->GetCameraBoom()->TargetOffset = FVector(0.f, 0.f, 50.f);

	OnUpdatedTargetDelegate.Broadcast(CurrentLockOnTargetActor);
}

void UCPP_AttackComponent::EndLockOn()
{
	/*IFractEnemyInterface::Execute_OnDeselect(CurrentLockOnTargetActor);*/
	RemoveMotionWarpTarget(FName(TEXT("AttackTarget")));
	CurrentLockOnTargetActor = nullptr;
	Character->GetCharacterMovement()->bOrientRotationToMovement = true;
	Character->GetCharacterMovement()->bUseControllerDesiredRotation = false;
	Character->GetCameraBoom()->TargetOffset = FVector::ZeroVector;
	GetWorld()->GetFirstPlayerController()->ResetIgnoreLookInput();
	bHasLockOnTarget = false;
	bCanRotateToInputDirection = false;
	OnUpdatedTargetDelegate.Broadcast(CurrentLockOnTargetActor);
}

void UCPP_AttackComponent::ToggleLockOn()
{
	if (IsValid(CurrentLockOnTargetActor))
	{
		EndLockOn();
	}
	else
	{
		StartLockOn();
	}
}


