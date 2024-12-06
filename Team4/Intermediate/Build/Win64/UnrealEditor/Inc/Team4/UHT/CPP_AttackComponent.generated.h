// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_AttackComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAttackState : uint8;
#ifdef TEAM4_CPP_AttackComponent_generated_h
#error "CPP_AttackComponent.generated.h already included, missing '#pragma once' in CPP_AttackComponent.h"
#endif
#define TEAM4_CPP_AttackComponent_generated_h

#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_17_DELEGATE \
TEAM4_API void FOnUpdatedTargetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatedTargetSignature, AActor* NewTargetActorRef);


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentAttackState); \
	DECLARE_FUNCTION(execGetCurrentAttackState); \
	DECLARE_FUNCTION(execResetAttackState); \
	DECLARE_FUNCTION(execResetCombo);


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_AttackComponent(); \
	friend struct Z_Construct_UClass_UCPP_AttackComponent_Statics; \
public: \
	DECLARE_CLASS(UCPP_AttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(UCPP_AttackComponent)


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_AttackComponent(UCPP_AttackComponent&&); \
	UCPP_AttackComponent(const UCPP_AttackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_AttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_AttackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPP_AttackComponent) \
	NO_API virtual ~UCPP_AttackComponent();


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_32_PROLOG
#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class UCPP_AttackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
