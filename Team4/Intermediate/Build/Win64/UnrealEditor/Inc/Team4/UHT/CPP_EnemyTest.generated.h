// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_EnemyTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UCPP_AttributeComponent;
struct FDamageEvent;
#ifdef TEAM4_CPP_EnemyTest_generated_h
#error "CPP_EnemyTest.generated.h already included, missing '#pragma once' in CPP_EnemyTest.h"
#endif
#define TEAM4_CPP_EnemyTest_generated_h

#define FID_Team4_Source_Team4_CPP_EnemyTest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execGetHit); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Team4_Source_Team4_CPP_EnemyTest_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_EnemyTest(); \
	friend struct Z_Construct_UClass_ACPP_EnemyTest_Statics; \
public: \
	DECLARE_CLASS(ACPP_EnemyTest, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ACPP_EnemyTest) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_EnemyTest*>(this); }


#define FID_Team4_Source_Team4_CPP_EnemyTest_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_EnemyTest(ACPP_EnemyTest&&); \
	ACPP_EnemyTest(const ACPP_EnemyTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_EnemyTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_EnemyTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_EnemyTest) \
	NO_API virtual ~ACPP_EnemyTest();


#define FID_Team4_Source_Team4_CPP_EnemyTest_h_14_PROLOG
#define FID_Team4_Source_Team4_CPP_EnemyTest_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_EnemyTest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_EnemyTest_h_17_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_EnemyTest_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ACPP_EnemyTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_EnemyTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
