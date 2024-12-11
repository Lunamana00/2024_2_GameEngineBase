// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM4_CPP_Projectile_generated_h
#error "CPP_Projectile.generated.h already included, missing '#pragma once' in CPP_Projectile.h"
#endif
#define TEAM4_CPP_Projectile_generated_h

#define FID_Team4_Source_Team4_CPP_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Team4_Source_Team4_CPP_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Projectile(); \
	friend struct Z_Construct_UClass_ACPP_Projectile_Statics; \
public: \
	DECLARE_CLASS(ACPP_Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Projectile)


#define FID_Team4_Source_Team4_CPP_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_Projectile(ACPP_Projectile&&); \
	ACPP_Projectile(const ACPP_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Projectile) \
	NO_API virtual ~ACPP_Projectile();


#define FID_Team4_Source_Team4_CPP_Projectile_h_9_PROLOG
#define FID_Team4_Source_Team4_CPP_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CPP_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CPP_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ACPP_Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CPP_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
