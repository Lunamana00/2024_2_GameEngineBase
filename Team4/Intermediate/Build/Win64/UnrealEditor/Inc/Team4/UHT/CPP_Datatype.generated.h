// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Datatype.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CPP_Datatype_generated_h
#error "CPP_Datatype.generated.h already included, missing '#pragma once' in CPP_Datatype.h"
#endif
#define TEAM4_CPP_Datatype_generated_h

#define FID_Team4_Source_Team4_CPP_Datatype_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttack_Statics; \
	TEAM4_API static class UScriptStruct* StaticStruct();


template<> TEAM4_API UScriptStruct* StaticStruct<struct FAttack>();

#define FID_Team4_Source_Team4_CPP_Datatype_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkill_Statics; \
	TEAM4_API static class UScriptStruct* StaticStruct();


template<> TEAM4_API UScriptStruct* StaticStruct<struct FSkill>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_Datatype_h


#define FOREACH_ENUM_EATTACKRANGE(op) \
	op(EAttackRange::Melee) \
	op(EAttackRange::Ranged) 

enum class EAttackRange : uint8;
template<> struct TIsUEnumClass<EAttackRange> { enum { Value = true }; };
template<> TEAM4_API UEnum* StaticEnum<EAttackRange>();

#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::Normal) \
	op(EAttackType::Skill) 

enum class EAttackType : uint8;
template<> struct TIsUEnumClass<EAttackType> { enum { Value = true }; };
template<> TEAM4_API UEnum* StaticEnum<EAttackType>();

#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Idle) \
	op(ECharacterState::ECS_Attacking) \
	op(ECharacterState::ECS_Dodging) \
	op(ECharacterState::ECS_Hit) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> TEAM4_API UEnum* StaticEnum<ECharacterState>();

#define FOREACH_ENUM_EATTACKSTATE(op) \
	op(EAttackState::EAS_RangedAttacking) \
	op(EAttackState::EAS_MeleeAttacking) \
	op(EAttackState::EAS_UsingFireGroundSkill) \
	op(EAttackState::EAS_Unoccupied) \
	op(EAttackState::EAS_Dodging) 

enum class EAttackState : uint8;
template<> struct TIsUEnumClass<EAttackState> { enum { Value = true }; };
template<> TEAM4_API UEnum* StaticEnum<EAttackState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
