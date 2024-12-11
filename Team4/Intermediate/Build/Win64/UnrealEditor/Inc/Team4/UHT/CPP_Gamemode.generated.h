// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Gamemode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CPP_Gamemode_generated_h
#error "CPP_Gamemode.generated.h already included, missing '#pragma once' in CPP_Gamemode.h"
#endif
#define TEAM4_CPP_Gamemode_generated_h

#define FID_Team4_Source_Team4_CPP_Gamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Gamemode(); \
	friend struct Z_Construct_UClass_ACPP_Gamemode_Statics; \
public: \
	DECLARE_CLASS(ACPP_Gamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Gamemode)


#define FID_Team4_Source_Team4_CPP_Gamemode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_Gamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_Gamemode(ACPP_Gamemode&&); \
	ACPP_Gamemode(const ACPP_Gamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Gamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Gamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_Gamemode) \
	NO_API virtual ~ACPP_Gamemode();


#define FID_Team4_Source_Team4_CPP_Gamemode_h_12_PROLOG
#define FID_Team4_Source_Team4_CPP_Gamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_Gamemode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_Gamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ACPP_Gamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_Gamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
