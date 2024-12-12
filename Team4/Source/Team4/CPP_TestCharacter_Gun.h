// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_TestCharacter.h"
#include "CPP_TestCharacter_Gun.generated.h"

/**
 * 
 */
UCLASS()
class TEAM4_API ACPP_TestCharacter_Gun : public ACPP_TestCharacter
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NormalAttack() override;


};
