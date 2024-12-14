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

	//if (bDebugMode)
	//{
	//	FVector CenterPoint = UKismetMathLibrary::VLerp(BoxTraceStart->GetComponentLocation(),
	//		BoxTraceEnd->GetComponentLocation(), 0.5f);
	//	UKismetSystemLibrary::DrawDebugBox(
	//		this,
	//		CenterPoint,
	//		Box.GetExtent(),
	//		bHasFoundTargets ? FColor::Green : FColor::Red,
	//		BoxTraceStart->GetComponentRotation(),
	//		1.f,
	//		2.f
	//	);
	//}

	FDamageEvent TargetAttackedEvent;

	for (const FHitResult& WeaponHit : WeaponHits)
	{
		if (ACharacter* TargetEnemy = Cast<ACharacter>(WeaponHit.GetActor()))
		{

			if (TargetsToIgnore.Contains(TargetEnemy)) continue;

			UGameplayStatics::PlayWorldCameraShake(GetWorld(), CamShake, GetActorLocation(),
				0, 1000.f, 1.f, false);


			if (ICPP_HitInterface* HitInterface = Cast<ICPP_HitInterface>(WeaponHit.GetActor()))
			{
				HitInterface->GetHit(WeaponHit.ImpactPoint);
			}

			if (ACPP_TestCharacter* PlayerCharacter = Cast<ACPP_TestCharacter>(GetInstigator()))
			{
				//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "PlayerCharacter");
				float DamageAmount = PlayerCharacter->GetAttribute()->GetBaseDamage();
				TargetEnemy ->TakeDamage(DamageAmount, TargetAttackedEvent,
					PlayerCharacter->GetController(), GetInstigator());
			}
			TargetsToIgnore.AddUnique(TargetEnemy);
		};

	}


}

void ACPP_MeleeWeapon::EmptyIgnoreActorsArray()
{
	TargetsToIgnore.Empty();
}

