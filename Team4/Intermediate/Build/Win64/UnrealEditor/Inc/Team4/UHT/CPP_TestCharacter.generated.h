// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_TestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACPP_MeleeWeapon;
class UCPP_AttackComponent;
class UCPP_AttributeForPlayerComponent;
enum class ECharacterState : uint8;
#ifdef TEAM4_CPP_TestCharacter_generated_h
#error "CPP_TestCharacter.generated.h already included, missing '#pragma once' in CPP_TestCharacter.h"
#endif
#define TEAM4_CPP_TestCharacter_generated_h

#define FID_Team4_Source_Team4_CPP_TestCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentDodgeCooldown); \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execGetAttackComponent); \
	DECLARE_FUNCTION(execSetAllowPhysicsRotationDuringAnimRootMotion); \
	DECLARE_FUNCTION(execSwitchWeaponSocket); \
	DECLARE_FUNCTION(execSetWeaponCollisionEnabled); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetAttribute);


#define FID_Team4_Source_Team4_CPP_TestCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_TestCharacter(); \
	friend struct Z_Construct_UClass_ACPP_TestCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPP_TestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ACPP_TestCharacter)


#define FID_Team4_Source_Team4_CPP_TestCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_TestCharacter(ACPP_TestCharacter&&); \
	ACPP_TestCharacter(const ACPP_TestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_TestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_TestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_TestCharacter) \
	NO_API virtual ~ACPP_TestCharacter();


#define FID_Team4_Source_Team4_CPP_TestCharacter_h_23_PROLOG
#define FID_Team4_Source_Team4_CPP_TestCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_TestCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_TestCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_TestCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ACPP_TestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
