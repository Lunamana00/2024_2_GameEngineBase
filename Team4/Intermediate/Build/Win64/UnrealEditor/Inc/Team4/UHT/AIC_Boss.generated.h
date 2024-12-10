// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIC_Boss.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef TEAM4_AIC_Boss_generated_h
#error "AIC_Boss.generated.h already included, missing '#pragma once' in AIC_Boss.h"
#endif
#define TEAM4_AIC_Boss_generated_h

#define FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector);


#define FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIC_Boss(); \
	friend struct Z_Construct_UClass_AAIC_Boss_Statics; \
public: \
	DECLARE_CLASS(AAIC_Boss, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(AAIC_Boss)


#define FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIC_Boss(AAIC_Boss&&); \
	AAIC_Boss(const AAIC_Boss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIC_Boss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIC_Boss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIC_Boss) \
	NO_API virtual ~AAIC_Boss();


#define FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_11_PROLOG
#define FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class AAIC_Boss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
