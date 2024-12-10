// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_AttributeComponent.h"
#include "CPP_AttributeForPlayerComponent.generated.h"

class ACPP_TestCharacter;

UCLASS()
class TEAM4_API UCPP_AttributeForPlayerComponent : public UCPP_AttributeComponent
{
	GENERATED_BODY()

private:
	// stamina 
	UPROPERTY(EditAnywhere, Category = "Attributes")
	float CurrentStamina;
	UPROPERTY(EditAnywhere, Category = "Attributes")
	float MaxStamina = 100.f;

	//mana
	UPROPERTY(EditAnywhere, Category = "Attributes")
	float CurrentMana;
	UPROPERTY(EditAnywhere, Category = "Attributes")
	float MaxMana;

	//stamina auto recovered
	UPROPERTY(EditAnywhere, Category = "Attributes", meta = (AllowPrivateAccess = true))
	float StaminaRestorePerSecond = 2.5f;

	UPROPERTY()
	ACPP_TestCharacter* Character;
public:	
	// Sets default values for this component's properties
	UCPP_AttributeForPlayerComponent();

	//value output for blueprint
	FORCEINLINE float GetCurrentStamina() const;
	FORCEINLINE float GetCurrentMana() const;

	//stamina base
	void UseStamina(const float StaminaAmount);
	void RestoreStamina(const float StaminaAmount);

	//mana base
	void UseMana(const float ManaAmount);

	//component base setting
	virtual void BeginPlay() override;

	float GetCurrentStaminaPercent() const { return CurrentStamina / MaxStamina; }

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
