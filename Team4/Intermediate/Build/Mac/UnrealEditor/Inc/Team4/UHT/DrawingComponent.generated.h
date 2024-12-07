// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DrawingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_DrawingComponent_generated_h
#error "DrawingComponent.generated.h already included, missing '#pragma once' in DrawingComponent.h"
#endif
#define TEAM4_DrawingComponent_generated_h

#define FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDrawing); \
	DECLARE_FUNCTION(execStopDrawing); \
	DECLARE_FUNCTION(execStartDrawing);


#define FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrawingComponent(); \
	friend struct Z_Construct_UClass_UDrawingComponent_Statics; \
public: \
	DECLARE_CLASS(UDrawingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(UDrawingComponent)


#define FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDrawingComponent(UDrawingComponent&&); \
	UDrawingComponent(const UDrawingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrawingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrawingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDrawingComponent) \
	NO_API virtual ~UDrawingComponent();


#define FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_7_PROLOG
#define FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class UDrawingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hyunwookim_Desktop_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
