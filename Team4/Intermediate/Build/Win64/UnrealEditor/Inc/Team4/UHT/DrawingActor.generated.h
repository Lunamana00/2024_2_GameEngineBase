// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DrawingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4_DrawingActor_generated_h
#error "DrawingActor.generated.h already included, missing '#pragma once' in DrawingActor.h"
#endif
#define TEAM4_DrawingActor_generated_h

#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveDrawing); \
	DECLARE_FUNCTION(execDrawAtLocation);


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrawingActor(); \
	friend struct Z_Construct_UClass_ADrawingActor_Statics; \
public: \
	DECLARE_CLASS(ADrawingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team4"), NO_API) \
	DECLARE_SERIALIZER(ADrawingActor)


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADrawingActor(ADrawingActor&&); \
	ADrawingActor(const ADrawingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrawingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrawingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrawingActor) \
	NO_API virtual ~ADrawingActor();


#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_7_PROLOG
#define FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM4_API UClass* StaticClass<class ADrawingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
