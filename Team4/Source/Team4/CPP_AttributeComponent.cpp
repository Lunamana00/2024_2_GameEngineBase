// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_AttributeComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UCPP_AttributeComponent::UCPP_AttributeComponent()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;

    SetIsReplicatedByDefault(true);
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
    if (GetOwner()->HasAuthority())
    {
        CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.f, MaxHealth);
        //서버에서 적용된 데미지
        UE_LOG(LogTemp, Log, TEXT("Damage applied on Server. New Health: %f"), CurrentHealth);
    }
    else
    {
        //서버로 데미지 요청함
        UE_LOG(LogTemp, Log, TEXT("Damage request sent to Server: %f"), DamageAmount);
        Server_ReceiveDamage(DamageAmount);
    }
}

void UCPP_AttributeComponent::Server_ReceiveDamage_Implementation(float DamageAmount)
{
    ReceiveDamage(DamageAmount);
}

bool UCPP_AttributeComponent::Server_ReceiveDamage_Validate(float DamageAmount)
{
    return DamageAmount > 0.f; // 간단한 검증
}

void UCPP_AttributeComponent::HealHealth(const float HealAmount)
{
    if (GetOwner()->HasAuthority())
    {
        CurrentHealth = FMath::Clamp(CurrentHealth + HealAmount, 0.f, MaxHealth);
    }
    else
    {
        Server_HealHealth(HealAmount);
    }
}

void UCPP_AttributeComponent::Server_HealHealth_Implementation(float HealAmount)
{
    HealHealth(HealAmount);
}

bool UCPP_AttributeComponent::Server_HealHealth_Validate(float HealAmount)
{
    return HealAmount > 0.f; // 간단한 검증
}



bool UCPP_AttributeComponent::IsAlive() const
{
    return CurrentHealth > 0.f;
}

void UCPP_AttributeComponent::OnRep_CurrentHealth()
{
    // 클라이언트에서 UI 업데이트 등의 작업을 수행할 수 있음
    // 체력 로그 보임
    UE_LOG(LogTemp, Log, TEXT("OnRep_CurrentHealth called on Client. New Health: %f"), CurrentHealth);
}

void UCPP_AttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // CurrentHealth를 복제 속성으로 등록
    DOREPLIFETIME(UCPP_AttributeComponent, CurrentHealth);
}