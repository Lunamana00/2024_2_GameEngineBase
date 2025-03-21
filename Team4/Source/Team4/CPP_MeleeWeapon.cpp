// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MeleeWeapon.h"
#include "Sound/SoundCue.h"
#include "CPP_AttributeForPlayerComponent.h"
#include "Engine/DamageEvents.h"
#include "CPP_HitInterface.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "PhysicsEngine/ShapeElem.h"
#include "NiagaraFunctionLibrary.h"
#include "CPP_TestCharacter.h"


// Sets default values
ACPP_MeleeWeapon::ACPP_MeleeWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMeshComponent"));
	WeaponMesh->SetupAttachment(RootComponent);
	WeaponBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponBoxComponent"));
	WeaponBox->SetupAttachment(WeaponMesh);

	WeaponMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	WeaponMuzzle->SetupAttachment(WeaponMesh);

	BoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("BoxTraceStart"));
	BoxTraceStart->SetupAttachment(WeaponMesh);
	BoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("BoxTraceEnd"));
	BoxTraceEnd->SetupAttachment(WeaponMesh);
}

// Called when the game starts or when spawned
void ACPP_MeleeWeapon::BeginPlay()
{
	Super::BeginPlay();

	WeaponBox->OnComponentBeginOverlap.AddDynamic(this, &ACPP_MeleeWeapon::OnWeaponBoxOverlap);
	WeaponBox->OnComponentEndOverlap.AddDynamic(this, &ACPP_MeleeWeapon::OnWeaponBoxEndOverlap);
	this->SetOwner(Cast<ACPP_TestCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)));
	this->SetInstigator(Cast<ACPP_TestCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)));
}

void ACPP_MeleeWeapon::OnWeaponBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ACPP_MeleeWeapon::OnWeaponBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

// Called every frame
void ACPP_MeleeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (!bIsAttacking) return;

	TArray<FHitResult> WeaponHits;
	FCollisionQueryParams IgnoreParams(
		FName(TEXT("Ignore Params")),
		false,
		GetOwner());

	FCollisionShape Box = FCollisionShape::MakeBox(FVector(45.f, 15.f, 15.f));

	bool bHasFoundTargets = GetWorld()->SweepMultiByChannel(
		WeaponHits,
		BoxTraceStart->GetComponentLocation(),
		BoxTraceEnd->GetComponentLocation(),
		BoxTraceStart->GetComponentQuat(),
		ECC_GameTraceChannel1,
		Box,
		IgnoreParams);


	FDamageEvent TargetAttackedEvent;

	for (const FHitResult& WeaponHit : WeaponHits)
	{
		if (ACharacter* TargetEnemy = Cast<ACharacter>(WeaponHit.GetActor()))
		{

			if (TargetsToIgnore.Contains(TargetEnemy)) continue;

			UGameplayStatics::PlayWorldCameraShake(GetWorld(), CamShake, GetActorLocation(),
				0, 1000.f, 1.f, false);



			if (ACPP_TestCharacter* PlayerCharacter = Cast<ACPP_TestCharacter>(GetInstigator()))
			{
				FVector PlayerLocation = PlayerCharacter->GetActorLocation();
				FVector TargetLocation = TargetEnemy->GetActorLocation();
				FVector DirectionToPush = TargetLocation - PlayerLocation;
				DirectionToPush.Z=0;

				UAnimInstance* AnimInstance = TargetEnemy->GetMesh()->GetAnimInstance();
				if (AnimInstance)
				{
					AnimInstance->StopAllMontages(0.01f);
				}

				TargetEnemy->LaunchCharacter(DirectionToPush.GetSafeNormal() * ImpulsePower, true, false);
				
				FVector NewTargetLocation = TargetEnemy->GetActorLocation();
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Target New Location: %s"), *NewTargetLocation.ToString()));

				float DamageAmount = PlayerCharacter->GetAttribute()->GetBaseDamage();
				TargetEnemy->TakeDamage(DamageAmount, TargetAttackedEvent,
					PlayerCharacter->GetController(), GetInstigator());
			}
			TargetsToIgnore.AddUnique(TargetEnemy);
		}

		else if (APawn* TargetEnemy_p = Cast<APawn>(WeaponHit.GetActor()))
		{

			if (TargetsToIgnore.Contains(TargetEnemy_p)) continue;

			UGameplayStatics::PlayWorldCameraShake(GetWorld(), CamShake, GetActorLocation(),
				0, 1000.f, 1.f, false);


			if (ACPP_TestCharacter* PlayerCharacter = Cast<ACPP_TestCharacter>(GetInstigator()))
			{
				float DamageAmount = PlayerCharacter->GetAttribute()->GetBaseDamage();
				TargetEnemy_p->TakeDamage(DamageAmount, TargetAttackedEvent,
					PlayerCharacter->GetController(), GetInstigator());
			}
			TargetsToIgnore.AddUnique(TargetEnemy_p);
		}
	}


}

void ACPP_MeleeWeapon::EmptyIgnoreActorsArray()
{
	TargetsToIgnore.Empty();
}

