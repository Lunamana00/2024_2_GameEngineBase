// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/DrawingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawingActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_ADrawingActor();
TEAM4_API UClass* Z_Construct_UClass_ADrawingActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ADrawingActor Function DrawAtLocation
struct Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics
{
	struct DrawingActor_eventDrawAtLocation_Parms
	{
		FVector HitLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb7\xb8\xeb\xa6\xac\xea\xb8\xb0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "DrawingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb7\xb8\xeb\xa6\xac\xea\xb8\xb0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DrawingActor_eventDrawAtLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::NewProp_HitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrawingActor, nullptr, "DrawAtLocation", nullptr, nullptr, Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::DrawingActor_eventDrawAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::DrawingActor_eventDrawAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADrawingActor_DrawAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrawingActor_DrawAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrawingActor::execDrawAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawAtLocation(Z_Param_Out_HitLocation);
	P_NATIVE_END;
}
// End Class ADrawingActor Function DrawAtLocation

// Begin Class ADrawingActor Function SaveDrawing
struct Z_Construct_UFunction_ADrawingActor_SaveDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "DrawingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrawingActor_SaveDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrawingActor, nullptr, "SaveDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrawingActor_SaveDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrawingActor_SaveDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrawingActor_SaveDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrawingActor_SaveDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrawingActor::execSaveDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveDrawing();
	P_NATIVE_END;
}
// End Class ADrawingActor Function SaveDrawing

// Begin Class ADrawingActor
void ADrawingActor::StaticRegisterNativesADrawingActor()
{
	UClass* Class = ADrawingActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawAtLocation", &ADrawingActor::execDrawAtLocation },
		{ "SaveDrawing", &ADrawingActor::execSaveDrawing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrawingActor);
UClass* Z_Construct_UClass_ADrawingActor_NoRegister()
{
	return ADrawingActor::StaticClass();
}
struct Z_Construct_UClass_ADrawingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawingActor.h" },
		{ "ModuleRelativePath", "DrawingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "DrawingActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\x93\xa4\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[] = {
		{ "Category", "DrawingActor" },
		{ "ModuleRelativePath", "DrawingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "DrawingActor" },
		{ "ModuleRelativePath", "DrawingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictedClass_MetaData[] = {
		{ "Category", "Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xec\xa0\x84\xec\x97\xad \xeb\xb3\x80\xec\x88\x98 \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "DrawingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xec\xa0\x84\xec\x97\xad \xeb\xb3\x80\xec\x88\x98 \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PredictedClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrawingActor_DrawAtLocation, "DrawAtLocation" }, // 2155110430
		{ &Z_Construct_UFunction_ADrawingActor_SaveDrawing, "SaveDrawing" }, // 1448853213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawingActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawingActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawingActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawingActor, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial_MetaData), NewProp_DynamicMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrawingActor_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawingActor, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADrawingActor_Statics::NewProp_PredictedClass = { "PredictedClass", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrawingActor, PredictedClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictedClass_MetaData), NewProp_PredictedClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrawingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawingActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawingActor_Statics::NewProp_DynamicMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawingActor_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawingActor_Statics::NewProp_PredictedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrawingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrawingActor_Statics::ClassParams = {
	&ADrawingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADrawingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrawingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrawingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrawingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrawingActor()
{
	if (!Z_Registration_Info_UClass_ADrawingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrawingActor.OuterSingleton, Z_Construct_UClass_ADrawingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrawingActor.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ADrawingActor>()
{
	return ADrawingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrawingActor);
ADrawingActor::~ADrawingActor() {}
// End Class ADrawingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrawingActor, ADrawingActor::StaticClass, TEXT("ADrawingActor"), &Z_Registration_Info_UClass_ADrawingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrawingActor), 712523245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_91924495(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
