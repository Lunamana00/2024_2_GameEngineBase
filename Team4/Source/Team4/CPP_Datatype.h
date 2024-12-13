// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Datatype.generated.h"

class UNiagaraSystem;
class UAnimMontage;
class UParticleSystem;
class USoundBase;

// 원소 종류
//UENUM(BlueprintType)
//enum class EElementType : uint8
//{
//    None UMETA(DisplayName = "None"),
//    Fire UMETA(DisplayName = "Fire"),
//    Water UMETA(DisplayName = "Water"),
//    Earth UMETA(DisplayName = "Earth"),
//    Wind UMETA(DisplayName = "Wind"),
//    Player UMETA(DisplayName = "Player")
//};

// 공격 범위 타입
UENUM(BlueprintType)
enum class EAttackRange : uint8
{
    Melee UMETA(DisplayName = "Melee"), // 근접
    Ranged UMETA(DisplayName = "Ranged") //원거리
};

// 스킬인지 기본 공격인지
UENUM(BlueprintType)
enum class EAttackType : uint8
{
    Normal UMETA(DisplayName = "Normal"),
    Skill UMETA(DisplayName = "Skill")
};

// 캐릭터 스테이트
UENUM(BlueprintType)
enum class ECharacterState : uint8
{
    ECS_Idle UMETA(DisplayName = "Idle"),
    ECS_Attacking UMETA(DisplayName = "Attacking"),
    ECS_Dodging UMETA(DisplayName = "Dodging"),
    ECS_Hit UMETA(DisplayName = "Hit"),
};

UENUM(BlueprintType)
enum class EAttackState : uint8
{
    EAS_RangedAttacking UMETA(DisplayName = "RangedAttacking"),
    EAS_MeleeAttacking UMETA(DisplayName = "MeleeAttacking"),
    EAS_UsingFireGroundSkill UMETA(DisplayName = "Using Fire Ground Skill"),
    EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
    EAS_Dodging UMETA(DisplayName = "Dodging"),
};

// 기본 공격 구조체
USTRUCT(BlueprintType)
struct FAttack
{
    GENERATED_BODY()

    // 기본 속성
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAttackRange Range = EAttackRange::Melee;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAttackType AttackType = EAttackType::Normal;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<UAnimMontage*> AttackMontages;

};
