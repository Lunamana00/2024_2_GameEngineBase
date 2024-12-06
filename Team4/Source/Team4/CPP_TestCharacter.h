// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_Datatype.h"
#include "CPP_TestCharacter.generated.h"

class UBoxComponent;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class UCPP_AttributeComponent;
class UCPP_AttackComponent;
class ACPP_MeleeWeapon;
class UCPP_AttributeForPlayerComponent;
class UMotionWarpingComponent;


UCLASS()
class TEAM4_API ACPP_TestCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DodgeAction;

public:
	// Sets default values for this character's properties
	ACPP_TestCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() ;

	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void StopMoving();

	void Dodge();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float RestoreHealthPerSecond = 1.5f;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* ForwardDodgeMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* RightDodgeMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* LeftDodgeMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* BackwardDodgeMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* DeathMontage;

	FTimerHandle DodgeTimerHandle;
	
	bool bIsDodgeOnCooldown = false;
	
	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	float DodgeCooldown = 2.f;
	
	void OnDodgeCooldownEnd();
	
	void StopDodge();
	
	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	float DodgeSpeed = 1500.f;
	
	bool bCanMoveInput = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(VisibleAnywhere, Category = Attribute)
	
	UCPP_AttributeForPlayerComponent* Attribute;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, meta = (AllowPrivateAccess = "true"))
	UCPP_AttackComponent* AttackComponent;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	TSubclassOf<ACPP_MeleeWeapon> WeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = Weapon)
	ACPP_MeleeWeapon* Weapon;

	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* NormalAttackAction;
	
	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* AimAction;
	
	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* LockOnAction;
	
	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* SkillAction;

	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* StartJumpAction;
	
	UPROPERTY(EditDefaultsOnly, Category = Input)
	UInputAction* EndJumpAction;

	UPROPERTY(VisibleDefaultsOnly, Category = Input)
	FVector2D MovementInputVector;

	void NormalAttack();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Attack, meta = (AllowPrivateAccess = "true"))
	UMotionWarpingComponent* MotionWarpingComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = State, meta = (AllowPrivateAccess = "true"))
	ECharacterState CharacterState = ECharacterState::ECS_Idle;

public:
	UFUNCTION(BlueprintCallable, Category = Attribute)
	FORCEINLINE	UCPP_AttributeForPlayerComponent* GetAttribute() const { return Attribute; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ACPP_MeleeWeapon* GetWeapon() const { return Weapon; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ECharacterState GetState() const { return CharacterState; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetState(const ECharacterState State) { CharacterState = State; }

	UFUNCTION(BluePrintCallable)
	void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);

	UFUNCTION(BlueprintCallable)
	void SwitchWeaponSocket(bool bIsRight) const;

	UFUNCTION(BluePrintCallable)
	void SetAllowPhysicsRotationDuringAnimRootMotion(bool bAllowRotation);

	FORCEINLINE UMotionWarpingComponent* GetMotionWarpingComponent() const { return MotionWarpingComponent; }

	FORCEINLINE FVector2D GetMovementInputVector() const { return MovementInputVector; }

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE class UCPP_AttackComponent* GetAttackComponent() const { return AttackComponent; }
	
	UFUNCTION(BlueprintCallable)
	void Die();
	
	UFUNCTION(BlueprintCallable)
	void Respawn();
	
	bool bIsDying = false;

	//Jong Add
	UFUNCTION(BlueprintCallable, Category = "Dodge")
	float GetCurrentDodgeCooldown() const;


	float GetDodgeMaxCooldown();
};

