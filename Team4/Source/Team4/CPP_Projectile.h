// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Projectile.generated.h"

UCLASS()
class TEAM4_API ACPP_Projectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Projectile();
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit);

public:	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	float BaseDamge = 10.f;

	UPROPERTY(EditAnywhere)
	class USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* ProjectileMovementComponent;

};
