// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_EnemyTest.h"
#include "CPP_AttributeComponent.h"

// Sets default values
ACPP_EnemyTest::ACPP_EnemyTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ACPP_EnemyTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_EnemyTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ACPP_EnemyTest::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (Attribute)
	{
		Attribute->ReceiveDamage(DamageAmount);
	}
	return DamageAmount;
}

void ACPP_EnemyTest::DirectionalHitReact(const FVector& ImpactPoint)
{
	const FVector Forward = GetActorForwardVector();

	const FVector ImpactLowered(ImpactPoint.X, ImpactPoint.Y, GetActorLocation().Z);
	const FVector ToHit = (ImpactLowered - GetActorForwardVector()).GetSafeNormal();

	const double CosTheta = FVector::DotProduct(ToHit, Forward);
	double Theta = FMath::Acos(CosTheta);
	Theta = FMath::RadiansToDegrees(Theta);
	// If CrossProduct points down, Theta is negative. Otherwise, the opposite.
	const FVector CrossProduct = FVector::CrossProduct(Forward, ToHit);
	if (CrossProduct.Z < 0)
	{
		Theta *= -1.f;
	}
	FName Section("FromBack");
	if (Theta >= -45.f && Theta < 45.f)
	{
		Section = FName("FromFront");
	}
	else if (Theta >= -135.f && Theta < -45.f)
	{
		Section = FName("FromLeft");
	}
	else if (Theta >= 45.f && Theta < 135.f)
	{
		Section = FName("FromRight");
	}
	//PlayHitReactMontage(Section);
}

void ACPP_EnemyTest::GetHit(const FVector& ImpactPoint)
{
	DirectionalHitReact(ImpactPoint);
}

// Called to bind functionality to input
void ACPP_EnemyTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

