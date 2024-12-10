// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_HitInterface.h"
#include "CPP_EnemyInterface.h"
#include "UObject/Interface.h"
#include "CPP_EnemyTest.generated.h"

class UCPP_AttributeComponent;

UCLASS()
class TEAM4_API ACPP_EnemyTest : public ACharacter, public ICPP_EnemyInterface, public ICPP_HitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_EnemyTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UFUNCTION(BlueprintCallable)
	//void PlayHitReactMontage(const FName& SectionName);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	void DirectionalHitReact(const FVector& ImpactPoint);
	
	UFUNCTION(BlueprintCallable)
	virtual void GetHit(const FVector& ImpactPoint) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditDefaultsOnly, Category = Attributes)
	UCPP_AttributeComponent* Attribute;

	UFUNCTION(BlueprintCallable)
	UCPP_AttributeComponent* GetAttribute() const { return Attribute; }

};
