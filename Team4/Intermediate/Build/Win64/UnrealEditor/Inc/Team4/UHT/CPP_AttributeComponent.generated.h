// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_AttributeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CPP_AttributeComponent_generated_h
#error "CPP_AttributeComponent.generated.h already included, missing '#pragma once' in CPP_AttributeComponent.h"
#endif
#define TEAM4_CPP_AttributeComponent_generated_h

#define FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetBaseDamage); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execHealHealth); \
	DECLARE_FUNCTION(execReceiveDamage);


#define FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_AttributeComponent(); \
	friend struct Z_Construct_UClass_UCPP_AttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UCPP_AttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(UCPP_AttributeComponent)


#define FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_AttributeComponent(UCPP_AttributeComponent&&); \
	UCPP_AttributeComponent(const UCPP_AttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_AttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_AttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPP_AttributeComponent) \
	NO_API virtual ~UCPP_AttributeComponent();


#define FID_Team4_Source_Team4_CPP_AttributeComponent_h_11_PROLOG
#define FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_AttributeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class UCPP_AttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_AttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
