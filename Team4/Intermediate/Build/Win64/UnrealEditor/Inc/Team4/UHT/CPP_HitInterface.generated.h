// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_HitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CPP_HitInterface_generated_h
#error "CPP_HitInterface.generated.h already included, missing '#pragma once' in CPP_HitInterface.h"
#endif
#define TEAM4_CPP_HitInterface_generated_h

#define FID_Team4_Source_Team4_CPP_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEAM4_API UCPP_HitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_HitInterface(UCPP_HitInterface&&); \
	UCPP_HitInterface(const UCPP_HitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEAM4_API, UCPP_HitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_HitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_HitInterface) \
	TEAM4_API virtual ~UCPP_HitInterface();


#define FID_Team4_Source_Team4_CPP_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCPP_HitInterface(); \
	friend struct Z_Construct_UClass_UCPP_HitInterface_Statics; \
public: \
	DECLARE_CLASS(UCPP_HitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Team4"), TEAM4_API) \
	DECLARE_SERIALIZER(UCPP_HitInterface)


#define FID_Team4_Source_Team4_CPP_HitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Team4_Source_Team4_CPP_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Team4_Source_Team4_CPP_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Team4_Source_Team4_CPP_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICPP_HitInterface() {} \
public: \
	typedef UCPP_HitInterface UClassType; \
	typedef ICPP_HitInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Team4_Source_Team4_CPP_HitInterface_h_10_PROLOG
#define FID_Team4_Source_Team4_CPP_HitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class UCPP_HitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_HitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
