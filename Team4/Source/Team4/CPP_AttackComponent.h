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


//class AFractTestEnemy;
//class AFractProjectile;
//class AFractPlayerWeapon;
//class UFractPlayerAttributeComponent;

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

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	bool bIsFlying = false;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	EAttackState AttackState = EAttackState::EAS_Unoccupied;

	UPROPERTY(EditDefaultsOnly, Category = "Combat|Attacks")
	TArray<FAttack> MeleeAttacks;

	UPROPERTY(EditDefaultsOnly, Category = "Combat|Attacks")
	TArray<FAttack> RangedAttacks;

	//UPROPERTY(EditDefaultsOnly, Category = "Combat|Skills")
	//TArray<FFractSkill> Skills;

	UPROPERTY(VisibleDefaultsOnly, Category = "Combat")
	int32 ComboCount = 0;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetCombo();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetAttackState();

	//UPROPERTY(EditAnywhere)
	//TSubclassOf<AFractProjectile> ProjectileClass;

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

	/*UFUNCTION(BlueprintCallable, Category = "Combat")
	void SpawnProjectile();*/


	bool bIsRangedAttacking = false;
	FVector CachedHitLocation;

	UPROPERTY(EditAnywhere)
	double LockOnBreakDistance = 1500.f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AimFOV = 65.f;
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float DefaultFOV = 90.f;

	FVector DefaultCameraLocation;

	UPROPERTY(EditDefaultsOnly, Category = "Combat|UI")
	UUserWidget* CrosshairWidget;

	//UFUNCTION(BlueprintCallable)
	//void FireGroundSkillEnd();
	//UFUNCTION(BlueprintCallable)
	//void ActivateFireGroundSkill();
	//UFUNCTION(BlueprintCallable)

	//void DeactivateFireGroundSkill();

	//void ApplyFireGroundSkillDamage();
	//FTimerHandle FireGroundSkillDamageTimerHandle;

	//UPROPERTY(EditDefaultsOnly, Category = "Combat")
	//UParticleSystemComponent* FireGroundSkillParticleSystemComponent;

	//UPROPERTY(EditDefaultsOnly, Category = "Combat|UI")
	//UUserWidget* CrosshairWidget;

	//UPROPERTY(EditDefaultsOnly, Category = "Combat")
	//bool bIsGroundSkillOnCooldown = false;
	//UPROPERTY(EditDefaultsOnly, Category = "Combat")
	//bool bIsAerialSkillOnCooldown = false;

	//UFUNCTION()
	//void OnGroundSkillCooldownEnd();
	//UFUNCTION()
	//void OnAerialSkillCooldownEnd();

public:	

	UPROPERTY(BlueprintAssignable)
	FOnUpdatedTargetSignature OnUpdatedTargetDelegate;

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);
	
	void AimDownSight(const FInputActionValue& Value);
	
	FORCEINLINE FAttack* GetNormalAttack();
	
	//FORCEINLINE FFractSkill* GetSkill();

	FORCEINLINE ACharacter* GetCurrentTarget() const { return CurrentTarget; }
	UFUNCTION(BlueprintCallable)

	FORCEINLINE EAttackState GetCurrentAttackState() const { return AttackState; }
	UFUNCTION(BlueprintCallable)
	
	void SetCurrentAttackState(const EAttackState& InAttackState) { AttackState = InAttackState; }
	
	//void CancelFireGroundSkill();
	
	void UseNormalAttack();
	
	//void UseSkill();
	
	void StartLockOn();
	
	void EndLockOn();
	
	void ToggleLockOn();
	
	UPROPERTY()
	AActor* CurrentLockOnTargetActor;
	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bHasLockOnTarget = false;
	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bIsAiming = false;
	UPROPERTY()
	bool bIsCancellingSkill = false;

	//float GetCurrentSkillCooldown();
	//
	//UPROPERTY()
	//UAudioComponent* FireGroundSkillAudioComponent;
	//
	//UPROPERTY(EditDefaultsOnly, Category = "Combat")
	//USoundBase* FireGroundSkillSound;

	//UFUNCTION(BlueprintCallable)
	//void PlayFireGroundSkillSound();
	//UFUNCTION(BlueprintCallable)
	//void StopFireGroundSkillSound();

};
