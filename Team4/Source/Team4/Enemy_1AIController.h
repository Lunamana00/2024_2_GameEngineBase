// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enemy_1AIController.generated.h"


/**
 * 
 */
UCLASS()
class TEAM4_API AEnemy_1AIController : public AAIController
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaSecondes) override;

protected:
	virtual void BeginPlay() override;

private:
	class UBehaviorTree* AIBehavior;
	
};
