// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "CPP_MeleeWeapon.generated.h"

UCLASS()
class TEAM4_API ACPP_MeleeWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_MeleeWeapon();

	TArray<AActor*> IgnoreActors;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnWeaponBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnWeaponBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	UBoxComponent* WeaponBox;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	USceneComponent* BoxTraceStart;
	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	USceneComponent* BoxTraceEnd;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	USceneComponent* WeaponMuzzle;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	TSubclassOf<UCameraShakeBase> CamShake;

	UPROPERTY()
	TArray<AActor*> TargetsToIgnore;

public:

	UPROPERTY(EditAnywhere)
	bool bDebugMode = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAttacking = false;
	FORCEINLINE USceneComponent* GetWeaponMuzzle() const { return WeaponMuzzle; }
	FORCEINLINE UBoxComponent* GetWeaponBox() const { return WeaponBox; }

	UFUNCTION(BlueprintCallable)
	void EmptyIgnoreActorsArray();

	UPROPERTY(EditDefaultsOnly, Category = Audio)
	class USoundCue* HitSoundCue;

	UPROPERTY(EditDefaultsOnly)
	class UNiagaraSystem* FireHitNiagaraSystem;

	UPROPERTY(EditAnywhere)
	float ImpulsePower=1000.0f;
};
