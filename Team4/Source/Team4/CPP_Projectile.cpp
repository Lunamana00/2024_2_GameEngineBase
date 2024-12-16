// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Projectile.h"
#include "Components/SphereComponent.h" 
#include "Engine/DamageEvents.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "CPP_EnemyTest.h"

// Sets default values
ACPP_Projectile::ACPP_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicateMovement(true);// 발사체 복제 활성화   // 발사체의 움직임도 복제
	
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	SetRootComponent(CollisionSphere);

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

	//CollisionSphere->OnComponentHit.AddDynamic(this, &ACPP_Projectile::OnHit);
}

void ACPP_Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor)
	{FDamageEvent DamageEvent;
		OtherActor->TakeDamage(BaseDamge, DamageEvent, GetWorld()->GetFirstPlayerController(), this);
	}

	Destroy();
}

// Called every frame
void ACPP_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (GetVelocity().Size() == 0.0f)
	{
		Destroy();
	}
}

void ACPP_Projectile::Destroyed()
{
	Super::Destroyed();
}

