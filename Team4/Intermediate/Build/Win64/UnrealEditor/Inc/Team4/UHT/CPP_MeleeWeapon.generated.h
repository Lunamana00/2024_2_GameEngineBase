// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_MeleeWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM4_CPP_MeleeWeapon_generated_h
#error "CPP_MeleeWeapon.generated.h already included, missing '#pragma once' in CPP_MeleeWeapon.h"
#endif
#define TEAM4_CPP_MeleeWeapon_generated_h

#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEmptyIgnoreActorsArray); \
	DECLARE_FUNCTION(execOnWeaponBoxEndOverlap); \
	DECLARE_FUNCTION(execOnWeaponBoxOverlap);


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_MeleeWeapon(); \
	friend struct Z_Construct_UClass_ACPP_MeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(ACPP_MeleeWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ACPP_MeleeWeapon)


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_MeleeWeapon(ACPP_MeleeWeapon&&); \
	ACPP_MeleeWeapon(const ACPP_MeleeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_MeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_MeleeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_MeleeWeapon) \
	NO_API virtual ~ACPP_MeleeWeapon();


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_10_PROLOG
#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ACPP_MeleeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
