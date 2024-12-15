// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_TestCharacter.h"
#include "AITypes.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MotionWarpingComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "CPP_AttackComponent.h"
#include "CPP_AttributeComponent.h"
#include "CPP_AttributeForPlayerComponent.h"
#include "CPP_MeleeWeapon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CPP_MeleeWeapon.h"
#include "Components/BoxComponent.h"

#include <Kismet/GameplayStatics.h>

// Sets default values
ACPP_TestCharacter::ACPP_TestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;


	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate


	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;


	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	Attribute = CreateDefaultSubobject<UCPP_AttributeForPlayerComponent>(TEXT("Player Attribute Component"));
	AttackComponent = CreateDefaultSubobject<UCPP_AttackComponent>(TEXT("Player Attack Component"));
	MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("Motion Warping Component"));
	
}

// Called when the game starts or when spawned
void ACPP_TestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (WeaponClass)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = this;

		Weapon = GetWorld()->SpawnActor<ACPP_MeleeWeapon>(
			WeaponClass,
			GetActorLocation(),
			GetActorRotation(),
			SpawnParams
		);
	}

	if (Weapon)
	{
		Weapon->AttachToComponent(
			GetMesh(),
			FAttachmentTransformRules::SnapToTargetIncludingScale,
			"SOC_hand_r");
	}

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;

}

// Called every frame
void ACPP_TestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (!Attribute->IsAlive() && !bIsDying)
	{
		bIsDying = true;
		Die();
	}
}

// Called to bind functionality to input
void ACPP_TestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACPP_TestCharacter::Move);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &ACPP_TestCharacter::StopMoving);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Started, this, &ACPP_TestCharacter::Dodge);
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACPP_TestCharacter::Look);
		// Attacking
		EnhancedInputComponent->BindAction(NormalAttackAction, ETriggerEvent::Started, this, &ACPP_TestCharacter::OnAttackPressed);
		EnhancedInputComponent->BindAction(NormalAttackAction, ETriggerEvent::Completed, this, &ACPP_TestCharacter::OnAttackReleased);

		
		
		EnhancedInputComponent->BindAction(LockOnAction, ETriggerEvent::Started, AttackComponent, &UCPP_AttackComponent::ToggleLockOn);

}

}

void ACPP_TestCharacter::Move(const FInputActionValue& Value)
{

	if (!bCanMoveInput) return;
	FVector2D MovementVector = Value.Get<FVector2D>();
	MovementInputVector = MovementVector;

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ACPP_TestCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ACPP_TestCharacter::StopMoving()
{
	MovementInputVector = FVector2D::ZeroVector;
}

void ACPP_TestCharacter::Dodge()
{
	if (bIsDodgeOnCooldown || AttackComponent->bIsAiming ||
		AttackComponent->GetCurrentAttackState() != EAttackState::EAS_Unoccupied) return;
	AttackComponent->SetCurrentAttackState(EAttackState::EAS_Dodging);
	bCanMoveInput = false;
	bIsDodgeOnCooldown = true;
	GetWorld()->GetTimerManager().SetTimer(
		DodgeTimerHandle,
		this,
		&ACPP_TestCharacter::OnDodgeCooldownEnd,
		DodgeCooldown,
		false);

	FVector BaseForwardVector;
	FVector BaseRightVector;
	if (AttackComponent->bHasLockOnTarget)
	{
		BaseForwardVector = GetActorForwardVector();
		BaseRightVector = GetActorRightVector();
	}
	else
	{
		BaseForwardVector = FollowCamera->GetForwardVector();
		BaseRightVector = FollowCamera->GetRightVector();
		BaseForwardVector.Z = 0;
		BaseRightVector.Z = 0;
		BaseForwardVector = BaseForwardVector.GetSafeNormal();
		BaseRightVector = BaseRightVector.GetSafeNormal();
	}
	FVector InputVector = (BaseForwardVector * MovementInputVector.Y + BaseRightVector * MovementInputVector.X).GetSafeNormal();
	float Angle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(GetActorForwardVector(), InputVector)));
	FVector CrossProduct = FVector::CrossProduct(GetActorForwardVector(), InputVector).GetSafeNormal();
	if (CrossProduct.Z < 0) Angle *= -1;
	if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
	{

		if (Angle >= 135 && Angle <= -135)
		{
			AnimInstance->Montage_Play(BackwardDodgeMontage);
		}
		else if (Angle > -135 && Angle < -45)
		{
			AnimInstance->Montage_Play(LeftDodgeMontage);
		}
		else if (Angle >= -45 && Angle <= 45)
		{
			AnimInstance->Montage_Play(ForwardDodgeMontage);
		}
		else if (Angle > 45 && Angle < 135)
		{
			AnimInstance->Montage_Play(RightDodgeMontage);
		}
		bCanMoveInput = false;
		GetCharacterMovement()->GroundFriction = 0.f;
		GetCharacterMovement()->Velocity = InputVector * DodgeSpeed + GetCharacterMovement()->Velocity.Z;
		FTimerHandle StopDodgeHandle;

		GetWorld()->GetTimerManager().SetTimer(
			StopDodgeHandle,
			this,
			&ACPP_TestCharacter::StopDodge,
			0.5f,
			false
		);
	}


}

void ACPP_TestCharacter::OnDodgeCooldownEnd()
{
	bIsDodgeOnCooldown = false;
}

void ACPP_TestCharacter::StopDodge()
{
	bCanMoveInput = true;
	AttackComponent->SetCurrentAttackState(EAttackState::EAS_Unoccupied);
	GetCharacterMovement()->GroundFriction = 8.f;
}


//
//void ACPP_TestCharacter::NormalAttack()
//{
//
//
//	EAttackState AttackState = AttackComponent->GetCurrentAttackState();
//	if (AttackState == EAttackState::EAS_Unoccupied)
//	{
//	
//		AttackComponent->UseNormalAttack();
//	}
//	else if (AttackState == EAttackState::EAS_UsingFireGroundSkill)
//	{
//		 //AttackComponent->CancelFireGroundSkill();
//	}
//}




void ACPP_TestCharacter::OnAttackPressed(const FInputActionValue& Value)
{
	if (bIsPressed)
	{
		return;
	}

	bIsPressed = true;
	bIsReleased = false;
	bIsLongPress = false;

	PressedTime = GetWorld()->GetTimeSeconds();

	GetWorld()->GetTimerManager().ClearTimer(AttackHandle);

	GetWorld()->GetTimerManager().SetTimer(
		AttackHandle,
		TFunction<void()>([this,Value]() {
			if (!bIsReleased) 
			{
				bIsPressed = false;
				bIsReleased = true; 
				
				AttackComponent->AimDownSight(Value);
			}
			}),
		0.5f, 
		false 
	);
}

void ACPP_TestCharacter::OnAttackReleased(const FInputActionValue& Value)
{

	EAttackState AttackState = AttackComponent->GetCurrentAttackState();
	
	AttackComponent->AimDownSight(Value);
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;

	if (!bIsPressed)
	{
		return;
	}

	bIsPressed = false;
	bIsReleased = true;

	float HeldTime = GetWorld()->GetTimeSeconds() - PressedTime;

	
	if (HeldTime < 0.5f)
	{
		if (AttackState == EAttackState::EAS_Unoccupied)
		{
			AttackComponent->UseNormalAttack();
		}
	}

	AttackComponent->AimDownSight(Value);
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;

	GetWorld()->GetTimerManager().ClearTimer(AttackHandle);

	
}



void ACPP_TestCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled)
{
	if (Weapon && Weapon->GetWeaponBox())
	{
		Weapon->IgnoreActors.Empty();
		Weapon->GetWeaponBox()->SetCollisionEnabled(CollisionEnabled);
	}
}

void ACPP_TestCharacter::SwitchWeaponSocket(bool bIsRight) const
{
	if (Weapon && GetMesh())
	{
		if (bIsRight)
		{
			Weapon->AttachToComponent(GetMesh(),
				FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("SOC_hand_r"));
		}
		else
		{
			Weapon->AttachToComponent(GetMesh(),
				FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("SOC_hand_l"));
		}
	}
}

void ACPP_TestCharacter::SetAllowPhysicsRotationDuringAnimRootMotion(bool bAllowRotation)
{
	if (AttackComponent->GetCurrentTarget())
		return;
	GetCharacterMovement()->bAllowPhysicsRotationDuringAnimRootMotion = bAllowRotation;
}

void ACPP_TestCharacter::Die()
{
	StopMoving();
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		DisableInput(PC);
	}

	FTimerHandle RespawnTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(
		RespawnTimerHandle,
		this,
		&ACPP_TestCharacter::Respawn,
		5.0f,
		false
	);
}

void ACPP_TestCharacter::Respawn()
{
	AActor* RespawnPoint = nullptr;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("RespawnPoint"), FoundActors);

	// Get the first (and only) respawn point
	if (FoundActors.Num() > 0)
	{
		RespawnPoint = FoundActors[0];
	}

	if (RespawnPoint)
	{
		SetActorLocation(RespawnPoint->GetActorLocation());
		SetActorRotation(RespawnPoint->GetActorRotation());

		Attribute->HealHealth(100.f);
		bIsDying = false;

		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC)
		{
			EnableInput(PC);
		}
	}
}

float ACPP_TestCharacter::GetCurrentDodgeCooldown() const
{
	if (bIsDodgeOnCooldown)
	{
		return GetWorld()->GetTimerManager().GetTimerRemaining(DodgeTimerHandle);
	}
	return 0.0f;
}

float ACPP_TestCharacter::GetDodgeMaxCooldown()
{
	return DodgeCooldown;
}

