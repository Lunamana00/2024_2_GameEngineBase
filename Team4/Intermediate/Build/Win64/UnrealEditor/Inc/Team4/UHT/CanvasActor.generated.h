// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CanvasActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CanvasActor_generated_h
#error "CanvasActor.generated.h already included, missing '#pragma once' in CanvasActor.h"
#endif
#define TEAM4_CanvasActor_generated_h

#define FID_Team4_Source_Team4_CanvasActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACanvasActor(); \
	friend struct Z_Construct_UClass_ACanvasActor_Statics; \
public: \
	DECLARE_CLASS(ACanvasActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ACanvasActor)


#define FID_Team4_Source_Team4_CanvasActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACanvasActor(ACanvasActor&&); \
	ACanvasActor(const ACanvasActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACanvasActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACanvasActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACanvasActor) \
	NO_API virtual ~ACanvasActor();


#define FID_Team4_Source_Team4_CanvasActor_h_7_PROLOG
#define FID_Team4_Source_Team4_CanvasActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CanvasActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CanvasActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ACanvasActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CanvasActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
