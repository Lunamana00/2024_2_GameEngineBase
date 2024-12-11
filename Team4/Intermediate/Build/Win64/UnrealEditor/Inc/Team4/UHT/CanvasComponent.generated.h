// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CanvasComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_CanvasComponent_generated_h
#error "CanvasComponent.generated.h already included, missing '#pragma once' in CanvasComponent.h"
#endif
#define TEAM4_CanvasComponent_generated_h

#define FID_Team4_Source_Team4_CanvasComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAdjustCanvasDistance); \
	DECLARE_FUNCTION(execStopPlacingCanvas); \
	DECLARE_FUNCTION(execStartPlacingCanvas);


#define FID_Team4_Source_Team4_CanvasComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvasComponent(); \
	friend struct Z_Construct_UClass_UCanvasComponent_Statics; \
public: \
	DECLARE_CLASS(UCanvasComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(UCanvasComponent)


#define FID_Team4_Source_Team4_CanvasComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCanvasComponent(UCanvasComponent&&); \
	UCanvasComponent(const UCanvasComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCanvasComponent) \
	NO_API virtual ~UCanvasComponent();


#define FID_Team4_Source_Team4_CanvasComponent_h_10_PROLOG
#define FID_Team4_Source_Team4_CanvasComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Team4_Source_Team4_CanvasComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CanvasComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Team4_Source_Team4_CanvasComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class UCanvasComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Team4_Source_Team4_CanvasComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
