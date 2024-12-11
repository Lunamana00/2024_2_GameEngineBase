// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_EnemyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CPP_EnemyInterface_generated_h
#error "CPP_EnemyInterface.generated.h already included, missing '#pragma once' in CPP_EnemyInterface.h"
#endif
#define TEAM4_CPP_EnemyInterface_generated_h

#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_CALLBACK_WRAPPERS
#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEAM4_API UCPP_EnemyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_EnemyInterface(UCPP_EnemyInterface&&); \
	UCPP_EnemyInterface(const UCPP_EnemyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEAM4_API, UCPP_EnemyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_EnemyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_EnemyInterface) \
	TEAM4_API virtual ~UCPP_EnemyInterface();


#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCPP_EnemyInterface(); \
	friend struct Z_Construct_UClass_UCPP_EnemyInterface_Statics; \
public: \
	DECLARE_CLASS(UCPP_EnemyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Team4"), TEAM4_API) \
	DECLARE_SERIALIZER(UCPP_EnemyInterface)


#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICPP_EnemyInterface() {} \
public: \
	typedef UCPP_EnemyInterface UClassType; \
	typedef ICPP_EnemyInterface ThisClass; \
	static void Execute_OnDeselect(UObject* O); \
	static void Execute_OnSelect(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_10_PROLOG
#define FID_Team4_Source_Team4_CPP_EnemyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_CALLBACK_WRAPPERS \
	FID_Team4_Source_Team4_CPP_EnemyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class UCPP_EnemyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_EnemyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
