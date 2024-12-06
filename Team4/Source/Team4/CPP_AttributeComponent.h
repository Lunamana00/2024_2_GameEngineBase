// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPP_AttributeComponent.generated.h"

class ACPP_TestCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAM4_API UCPP_AttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_AttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	float MaxHealth = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes")
	float BaseDamage = 20.f;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ReceiveDamage(const float DamageAmount);

	UFUNCTION(BlueprintCallable)
	void HealHealth(const float HealAmount);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetHealthPercent() const { return CurrentHealth / MaxHealth; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetBaseDamage() const { return BaseDamage; }

	UFUNCTION(BlueprintCallable)
	bool IsAlive() const;

};
