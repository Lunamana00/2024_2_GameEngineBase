// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_1AIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AEnemy_1AIController::BeginPlay() {

	Super::BeginPlay();
	APawn* PlayerPawn = UGameplayStatics::UGameplayStatics::GetPlayerPawn(GetWorld(), 0);


	

	

}

void AEnemy_1AIController::Tick(float DeltaSeconds) {

	Super::Tick(DeltaSeconds);
	APawn* PlayerPawn = UGameplayStatics::UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
	GetBlackboardComponent()->SetValueAsVector(TEXT("ActorLocation"), GetPawn()->GetActorLocation());


	float Distance = FVector::Dist(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation());
	GetBlackboardComponent()->SetValueAsFloat(TEXT("Distance"), Distance);



}