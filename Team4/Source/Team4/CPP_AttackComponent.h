// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/ActorComponent.h"
#include "CPP_Datatype.h"
#include "CPP_AttackComponent.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnUpdatedTargetSignature,
	UCPP_AttackComponent, OnUpdatedTargetDelegate,
	AActor*, NewTargetActorRef
);
struct FInputActionValue;
class ACPP_TestCharacter;
class UCPP_AttributeComponent;
class UCPP_AttributeForPlayerComponent;
class ACPP_MeleeWeapon;
class ACPP_EnemyTest;
class ACPP_Projectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAM4_API UCPP_AttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_AttackComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Player")
	ACPP_TestCharacter* Character;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	EAttackRange CurrentRange = EAttackRange::Melee;

	UPROPERTY(VisibleAnywhere, Category = "Color")
	EColor CurrentColor = EColor::EC_None;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	bool bIsFlying = false;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	EAttackState AttackState = EAttackState::EAS_Unoccupied;

	UPROPERTY(EditDefaultsOnly, Category = "Combat|Attacks")
	TArray<FAttack> MeleeAttacks;

	UPROPERTY(EditDefaultsOnly, Category = "Combat|Attacks")
	TArray<FAttack> RangedAttacks;


	UPROPERTY(VisibleDefaultsOnly, Category = "Combat")
	int32 ComboCount = 0;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetCombo();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetAttackState();

	TSubclassOf<ACPP_Projectile> ProjectileClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACPP_Projectile> ProjectileClass_R;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACPP_Projectile> ProjectileClass_G;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACPP_Projectile> ProjectileClass_B;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACPP_Projectile> ProjectileClass_N;

	FVector HitLocation;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float AutoTargetRange = 150.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float AutoTargetAngle = 90.f;

	UPROPERTY(VisibleDefaultsOnly, Category = "Combat")
	FVector AttackDirection;

	UPROPERTY()
	ACharacter* CurrentTarget = nullptr;

	ACharacter* FindTarget();

	void AddMotionWarpTarget(const AActor* Target) const;

	void RemoveMotionWarpTarget(FName WarpTargetName) const;
	
	void RotateToInputDirection(float DeltaTime);



	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	bool bHasTarget = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat")
	bool bCanRotateToInputDirection = false;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SpawnProjectile();

	bool bIsRangedAttacking = false;
	FVector CachedHitLocation;

	UPROPERTY(EditAnywhere)
	double LockOnBreakDistance = 1500.f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AimFOV = 65.f;
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float DefaultFOV = 90.f;

	FVector DefaultCameraLocation;

	UPROPERTY(EditDefaultsOnly, Category = "CombatUI")
	UUserWidget* CrosshairWidget;

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SpawnProjectile(FVector MuzzleLocation, FRotator SpawnRotation, EColor ProjectileColor);

	void SpawnProjectile_Internal(FVector MuzzleLocation, FRotator SpawnRotation, EColor ProjectileColor);


public:	

	UPROPERTY(BlueprintAssignable)
	FOnUpdatedTargetSignature OnUpdatedTargetDelegate;

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);
	
	void AimDownSight(const FInputActionValue& Value);
	
	UFUNCTION(BlueprintCallable)
	void SetCurrentColor(EColor inColor);

	FORCEINLINE FAttack* GetNormalAttack();

	FORCEINLINE ACharacter* GetCurrentTarget() const { return CurrentTarget; }
	UFUNCTION(BlueprintCallable)
	FORCEINLINE EAttackState GetCurrentAttackState() const { return AttackState; }
	UFUNCTION(BlueprintCallable)

	void SetCurrentAttackState(const EAttackState& InAttackState) { AttackState = InAttackState; }
	
	void UseNormalAttack();

	void UseRangedAttack();
	
	void StartLockOn();
	
	void EndLockOn();
	
	void ToggleLockOn();

	bool bComboCooldownActive = false;

	FTimerHandle ComboCooldownTimerHandle;

	float ComboCooldownTime = 1.0f;
	
	UPROPERTY()
	AActor* CurrentLockOnTargetActor;
	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bHasLockOnTarget = false;
	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bIsAiming = false;

};
