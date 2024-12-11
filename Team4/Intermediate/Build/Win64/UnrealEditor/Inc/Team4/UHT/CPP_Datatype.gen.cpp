// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_Datatype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Datatype() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_EAttackRange();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_EAttackState();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_EAttackType();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_ECharacterState();
TEAM4_API UScriptStruct* Z_Construct_UScriptStruct_FAttack();
TEAM4_API UScriptStruct* Z_Construct_UScriptStruct_FSkill();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Enum EAttackRange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackRange;
static UEnum* EAttackRange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackRange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Team4_EAttackRange, (UObject*)Z_Construct_UPackage__Script_Team4(), TEXT("EAttackRange"));
	}
	return Z_Registration_Info_UEnum_EAttackRange.OuterSingleton;
}
template<> TEAM4_API UEnum* StaticEnum<EAttackRange>()
{
	return EAttackRange_StaticEnum();
}
struct Z_Construct_UEnum_Team4_EAttackRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "EAttackRange::Melee" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
		{ "Ranged.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "EAttackRange::Ranged" },
		{ "Ranged.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackRange::Melee", (int64)EAttackRange::Melee },
		{ "EAttackRange::Ranged", (int64)EAttackRange::Ranged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Team4_EAttackRange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Team4,
	nullptr,
	"EAttackRange",
	"EAttackRange",
	Z_Construct_UEnum_Team4_EAttackRange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_EAttackRange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_EAttackRange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Team4_EAttackRange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Team4_EAttackRange()
{
	if (!Z_Registration_Info_UEnum_EAttackRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackRange.InnerSingleton, Z_Construct_UEnum_Team4_EAttackRange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackRange.InnerSingleton;
}
// End Enum EAttackRange

// Begin Enum EAttackType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackType;
static UEnum* EAttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Team4_EAttackType, (UObject*)Z_Construct_UPackage__Script_Team4(), TEXT("EAttackType"));
	}
	return Z_Registration_Info_UEnum_EAttackType.OuterSingleton;
}
template<> TEAM4_API UEnum* StaticEnum<EAttackType>()
{
	return EAttackType_StaticEnum();
}
struct Z_Construct_UEnum_Team4_EAttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EAttackType::Normal" },
		{ "Skill.DisplayName", "Skill" },
		{ "Skill.Name", "EAttackType::Skill" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackType::Normal", (int64)EAttackType::Normal },
		{ "EAttackType::Skill", (int64)EAttackType::Skill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Team4_EAttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Team4,
	nullptr,
	"EAttackType",
	"EAttackType",
	Z_Construct_UEnum_Team4_EAttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_EAttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_EAttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Team4_EAttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Team4_EAttackType()
{
	if (!Z_Registration_Info_UEnum_EAttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackType.InnerSingleton, Z_Construct_UEnum_Team4_EAttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackType.InnerSingleton;
}
// End Enum EAttackType

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Team4_ECharacterState, (UObject*)Z_Construct_UPackage__Script_Team4(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> TEAM4_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_Team4_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ECS_Attacking.DisplayName", "Attacking" },
		{ "ECS_Attacking.Name", "ECharacterState::ECS_Attacking" },
		{ "ECS_Dodging.DisplayName", "Dodging" },
		{ "ECS_Dodging.Name", "ECharacterState::ECS_Dodging" },
		{ "ECS_Hit.DisplayName", "Hit" },
		{ "ECS_Hit.Name", "ECharacterState::ECS_Hit" },
		{ "ECS_Idle.DisplayName", "Idle" },
		{ "ECS_Idle.Name", "ECharacterState::ECS_Idle" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::ECS_Idle", (int64)ECharacterState::ECS_Idle },
		{ "ECharacterState::ECS_Attacking", (int64)ECharacterState::ECS_Attacking },
		{ "ECharacterState::ECS_Dodging", (int64)ECharacterState::ECS_Dodging },
		{ "ECharacterState::ECS_Hit", (int64)ECharacterState::ECS_Hit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Team4_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Team4,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_Team4_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Team4_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Team4_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_Team4_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Enum EAttackState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackState;
static UEnum* EAttackState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Team4_EAttackState, (UObject*)Z_Construct_UPackage__Script_Team4(), TEXT("EAttackState"));
	}
	return Z_Registration_Info_UEnum_EAttackState.OuterSingleton;
}
template<> TEAM4_API UEnum* StaticEnum<EAttackState>()
{
	return EAttackState_StaticEnum();
}
struct Z_Construct_UEnum_Team4_EAttackState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAS_Dodging.DisplayName", "Dodging" },
		{ "EAS_Dodging.Name", "EAttackState::EAS_Dodging" },
		{ "EAS_MeleeAttacking.DisplayName", "MeleeAttacking" },
		{ "EAS_MeleeAttacking.Name", "EAttackState::EAS_MeleeAttacking" },
		{ "EAS_RangedAttacking.DisplayName", "RangedAttacking" },
		{ "EAS_RangedAttacking.Name", "EAttackState::EAS_RangedAttacking" },
		{ "EAS_Unoccupied.DisplayName", "Unoccupied" },
		{ "EAS_Unoccupied.Name", "EAttackState::EAS_Unoccupied" },
		{ "EAS_UsingFireGroundSkill.DisplayName", "Using Fire Ground Skill" },
		{ "EAS_UsingFireGroundSkill.Name", "EAttackState::EAS_UsingFireGroundSkill" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackState::EAS_RangedAttacking", (int64)EAttackState::EAS_RangedAttacking },
		{ "EAttackState::EAS_MeleeAttacking", (int64)EAttackState::EAS_MeleeAttacking },
		{ "EAttackState::EAS_UsingFireGroundSkill", (int64)EAttackState::EAS_UsingFireGroundSkill },
		{ "EAttackState::EAS_Unoccupied", (int64)EAttackState::EAS_Unoccupied },
		{ "EAttackState::EAS_Dodging", (int64)EAttackState::EAS_Dodging },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Team4_EAttackState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Team4,
	nullptr,
	"EAttackState",
	"EAttackState",
	Z_Construct_UEnum_Team4_EAttackState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_EAttackState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Team4_EAttackState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Team4_EAttackState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Team4_EAttackState()
{
	if (!Z_Registration_Info_UEnum_EAttackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackState.InnerSingleton, Z_Construct_UEnum_Team4_EAttackState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackState.InnerSingleton;
}
// End Enum EAttackState

// Begin ScriptStruct FAttack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Attack;
class UScriptStruct* FAttack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Attack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Attack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttack, (UObject*)Z_Construct_UPackage__Script_Team4(), TEXT("Attack"));
	}
	return Z_Registration_Info_UScriptStruct_Attack.OuterSingleton;
}
template<> TEAM4_API UScriptStruct* StaticStruct<FAttack>()
{
	return FAttack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontages_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Range_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Range;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttack, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Range_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttack, Range), Z_Construct_UEnum_Team4_EAttackRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 2408776091
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttack, AttackType), Z_Construct_UEnum_Team4_EAttackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackType_MetaData), NewProp_AttackType_MetaData) }; // 1384900435
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontages_Inner = { "AttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontages = { "AttackMontages", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttack, AttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontages_MetaData), NewProp_AttackMontages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Range_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_AttackMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
	nullptr,
	&NewStructOps,
	"Attack",
	Z_Construct_UScriptStruct_FAttack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::PropPointers),
	sizeof(FAttack),
	alignof(FAttack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttack()
{
	if (!Z_Registration_Info_UScriptStruct_Attack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Attack.InnerSingleton, Z_Construct_UScriptStruct_FAttack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Attack.InnerSingleton;
}
// End ScriptStruct FAttack

// Begin ScriptStruct FSkill
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Skill;
class UScriptStruct* FSkill::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Skill.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Skill.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkill, (UObject*)Z_Construct_UPackage__Script_Team4(), TEXT("Skill"));
	}
	return Z_Registration_Info_UScriptStruct_Skill.OuterSingleton;
}
template<> TEAM4_API UScriptStruct* StaticStruct<FSkill>()
{
	return FSkill::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNiagara_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[] = {
		{ "Category", "Skill Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Skill Info" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFlyingSkill_MetaData[] = {
		{ "Category", "Skill Info" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Projectile\")\n// TSubclassOf<AFractProjectile> ProjectileClass;\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Projectile\")\nTSubclassOf<AFractProjectile> ProjectileClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCount_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpread_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd9\xbf\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillMontage_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "CPP_Datatype.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastEffectNiagara_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastEffectCascade_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastSound_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "CPP_Datatype.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsNiagara_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNiagara;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bIsFlyingSkill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFlyingSkill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectileCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastEffectNiagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastEffectCascade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkill>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsNiagara_SetBit(void* Obj)
{
	((FSkill*)Obj)->bIsNiagara = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsNiagara = { "bIsNiagara", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkill), &Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsNiagara_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNiagara_MetaData), NewProp_bIsNiagara_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, SkillName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillName_MetaData), NewProp_SkillName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsFlyingSkill_SetBit(void* Obj)
{
	((FSkill*)Obj)->bIsFlyingSkill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsFlyingSkill = { "bIsFlyingSkill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkill), &Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsFlyingSkill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFlyingSkill_MetaData), NewProp_bIsFlyingSkill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, DamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageRadius_MetaData), NewProp_DamageRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_ProjectileCount = { "ProjectileCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, ProjectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCount_MetaData), NewProp_ProjectileCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_ProjectileSpread = { "ProjectileSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, ProjectileSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpread_MetaData), NewProp_ProjectileSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_SkillMontage = { "SkillMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillMontage_MetaData), NewProp_SkillMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_CastEffectNiagara = { "CastEffectNiagara", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, CastEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastEffectNiagara_MetaData), NewProp_CastEffectNiagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_CastEffectCascade = { "CastEffectCascade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, CastEffectCascade), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastEffectCascade_MetaData), NewProp_CastEffectCascade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkill_Statics::NewProp_CastSound = { "CastSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkill, CastSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastSound_MetaData), NewProp_CastSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_SkillName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_bIsFlyingSkill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_DamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_ProjectileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_ProjectileSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_SkillMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_CastEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_CastEffectCascade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkill_Statics::NewProp_CastSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkill_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
	nullptr,
	&NewStructOps,
	"Skill",
	Z_Construct_UScriptStruct_FSkill_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Statics::PropPointers),
	sizeof(FSkill),
	alignof(FSkill),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkill_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkill_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkill()
{
	if (!Z_Registration_Info_UScriptStruct_Skill.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Skill.InnerSingleton, Z_Construct_UScriptStruct_FSkill_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Skill.InnerSingleton;
}
// End ScriptStruct FSkill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Datatype_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttackRange_StaticEnum, TEXT("EAttackRange"), &Z_Registration_Info_UEnum_EAttackRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2408776091U) },
		{ EAttackType_StaticEnum, TEXT("EAttackType"), &Z_Registration_Info_UEnum_EAttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1384900435U) },
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3923328704U) },
		{ EAttackState_StaticEnum, TEXT("EAttackState"), &Z_Registration_Info_UEnum_EAttackState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1787572842U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttack::StaticStruct, Z_Construct_UScriptStruct_FAttack_Statics::NewStructOps, TEXT("Attack"), &Z_Registration_Info_UScriptStruct_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttack), 4042316160U) },
		{ FSkill::StaticStruct, Z_Construct_UScriptStruct_FSkill_Statics::NewStructOps, TEXT("Skill"), &Z_Registration_Info_UScriptStruct_Skill, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkill), 1843076497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Datatype_h_2741361694(TEXT("/Script/Team4"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Datatype_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Datatype_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Datatype_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Datatype_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
