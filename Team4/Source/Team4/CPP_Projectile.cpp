// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Projectile.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/BoxComponent.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "CPP_EnemyTest.h"

// Sets default values
ACPP_Projectile::ACPP_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicatingMovement(true);

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	SetRootComponent(CollisionBox);

	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->InitialSpeed = 2000.f;
	ProjectileMovementComponent->MaxSpeed = 2000.f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;
}

// Called when the game starts or when spawned
void ACPP_Projectile::BeginPlay()
{
	Super::BeginPlay();
	
	if (TracerEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(
			TracerEffect,
			GetRootComponent(),          // Attach to the root component or any other component
			NAME_None,
			FVector::ZeroVector,         // Relative location
			FRotator::ZeroRotator,       // Relative rotation
			EAttachLocation::KeepRelativeOffset,
			true                         // Auto destroy
		);
	}

	CollisionBox->OnComponentHit.AddDynamic(this, &ACPP_Projectile::OnHit);
}

void ACPP_Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!HasAuthority()) return;

	if (ACPP_EnemyTest* TargetEnemy = Cast<ACPP_EnemyTest>(OtherActor))
	{
		FDamageEvent DamageEvent;
		TargetEnemy->TakeDamage(10.f, DamageEvent, GetWorld()->GetFirstPlayerController(), this);
	}
	if (ICPP_HitInterface* HitInterface = Cast<ICPP_HitInterface>(OtherActor))
	{
		HitInterface->GetHit(Hit.ImpactPoint);
	}
	MulticastPlayImpactEffects();

	Destroy();
}

// Called every frame
void ACPP_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_Projectile::Destroyed()
{
	Super::Destroyed();
}

// Multicast RPC to play impact effects
void ACPP_Projectile::MulticastPlayImpactEffects_Implementation()
{
	// Spawn visual effect
	if (ImpactEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactEffect, GetActorLocation(), GetActorRotation());
	}

	// Play sound effect
	if (ImpactSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());
	}
}

