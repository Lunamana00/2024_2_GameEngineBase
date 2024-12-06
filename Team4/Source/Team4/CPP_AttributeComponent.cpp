// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_AttributeComponent.h"

// Sets default values for this component's properties
UCPP_AttributeComponent::UCPP_AttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCPP_AttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	//hp first setting
}


// Called every frame
void UCPP_AttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCPP_AttributeComponent::ReceiveDamage(const float DamageAmount)
{
	CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.f, MaxHealth);
}

void UCPP_AttributeComponent::HealHealth(const float HealAmount)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + HealAmount, 0.f, MaxHealth);
}

bool UCPP_AttributeComponent::IsAlive() const
{
	return CurrentHealth > 0.f;
}

