// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_Datatype.generated.h"

class UNiagaraSystem;
class UAnimMontage;
class UParticleSystem;
class USoundBase;

// ���� ����
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

// ���� ���� Ÿ��
UENUM(BlueprintType)
enum class EAttackRange : uint8
{
    Melee UMETA(DisplayName = "Melee"), // ����
    Ranged UMETA(DisplayName = "Ranged") //���Ÿ�
};

// ��ų���� �⺻ ��������
UENUM(BlueprintType)
enum class EAttackType : uint8
{
    Normal UMETA(DisplayName = "Normal"),
    Skill UMETA(DisplayName = "Skill")
};

// ĳ���� ������Ʈ
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

UENUM(BlueprintType)
enum class EColor : uint8
{
    EC_None UMETA(DisplayName = "None"),
    EC_Blue UMETA(DisplayName = "Blue"),
    EC_Red UMETA(DisplayName = "Red"),
    EC_Green UMETA(DisplayName = "Green")
};


// �⺻ ���� ����ü
USTRUCT(BlueprintType)
struct FAttack
{
    GENERATED_BODY()

    // �⺻ �Ӽ�
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAttackRange Range = EAttackRange::Melee;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAttackType AttackType = EAttackType::Normal;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<UAnimMontage*> AttackMontages;

};
