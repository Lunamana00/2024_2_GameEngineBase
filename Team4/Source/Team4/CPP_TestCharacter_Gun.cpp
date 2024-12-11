// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_TestCharacter_Gun.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "CPP_AttackComponent.h"

void ACPP_TestCharacter_Gun::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	
}

void ACPP_TestCharacter_Gun::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::Super::SetupPlayerInputComponent(PlayerInputComponent);

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
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Triggered, AttackComponent, &UCPP_AttackComponent::AimDownSight);
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Completed, AttackComponent, &UCPP_AttackComponent::AimDownSight);
		EnhancedInputComponent->BindAction(NormalAttackAction, ETriggerEvent::Started, this, &ACPP_TestCharacter_Gun::NormalAttack);
	}
}

void ACPP_TestCharacter_Gun::NormalAttack()
{
	EAttackState AttackState = AttackComponent->GetCurrentAttackState();
	if (AttackState == EAttackState::EAS_Unoccupied)
	{
		AttackComponent->UseRangedAttack();
	}
}
