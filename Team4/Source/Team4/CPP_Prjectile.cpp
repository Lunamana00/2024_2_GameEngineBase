// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Prjectile.h"

// Sets default values
ACPP_Prjectile::ACPP_Prjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Prjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Prjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

