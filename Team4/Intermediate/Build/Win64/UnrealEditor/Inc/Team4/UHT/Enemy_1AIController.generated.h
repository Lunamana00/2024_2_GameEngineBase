// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy_1AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_Enemy_1AIController_generated_h
#error "Enemy_1AIController.generated.h already included, missing '#pragma once' in Enemy_1AIController.h"
#endif
#define TEAM4_Enemy_1AIController_generated_h

#define FID_Team4_Source_Team4_Enemy_1AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_1AIController(); \
	friend struct Z_Construct_UClass_AEnemy_1AIController_Statics; \
public: \
	DECLARE_CLASS(AEnemy_1AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_1AIController)


#define FID_Team4_Source_Team4_Enemy_1AIController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_1AIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy_1AIController(AEnemy_1AIController&&); \
	AEnemy_1AIController(const AEnemy_1AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_1AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_1AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_1AIController) \
	NO_API virtual ~AEnemy_1AIController();


#define FID_Team4_Source_Team4_Enemy_1AIController_h_13_PROLOG
#define FID_Team4_Source_Team4_Enemy_1AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_Enemy_1AIController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_Enemy_1AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class AEnemy_1AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_Enemy_1AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
