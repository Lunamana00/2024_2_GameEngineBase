// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_AttributeForPlayerComponent.h"
#include "CPP_TestCharacter.h"

// Sets default values for this component's properties
UCPP_AttributeForPlayerComponent::UCPP_AttributeForPlayerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


float UCPP_AttributeForPlayerComponent::GetCurrentStamina() const
{
	return CurrentStamina;
}

float UCPP_AttributeForPlayerComponent::GetCurrentMana() const
{
	return CurrentMana;
}

void UCPP_AttributeForPlayerComponent::UseStamina(const float StaminaAmount)
{
	CurrentStamina = FMath::Clamp(CurrentStamina - StaminaAmount, 0.f, MaxStamina);
}

void UCPP_AttributeForPlayerComponent::RestoreStamina(const float StaminaAmount)
{
	CurrentStamina = FMath::Clamp(CurrentStamina + StaminaAmount, 0.f, MaxStamina);
}

void UCPP_AttributeForPlayerComponent::UseMana(const float ManaAmount)
{
	CurrentMana = FMath::Clamp(CurrentMana - ManaAmount, 0.f, MaxMana);
}

// Called when the game starts
void UCPP_AttributeForPlayerComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentStamina = MaxStamina;
	CurrentMana = MaxMana;
	Character = Cast<ACPP_TestCharacter>(GetOwner());
	
}


// Called every frame
void UCPP_AttributeForPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

