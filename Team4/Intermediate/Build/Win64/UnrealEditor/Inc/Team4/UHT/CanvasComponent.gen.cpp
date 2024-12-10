// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CanvasComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAM4_API UClass* Z_Construct_UClass_UCanvasComponent();
TEAM4_API UClass* Z_Construct_UClass_UCanvasComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UCanvasComponent Function AdjustCanvasDistance
struct Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics
{
	struct CanvasComponent_eventAdjustCanvasDistance_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CanvasComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasComponent_eventAdjustCanvasDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasComponent, nullptr, "AdjustCanvasDistance", nullptr, nullptr, Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::CanvasComponent_eventAdjustCanvasDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::CanvasComponent_eventAdjustCanvasDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasComponent::execAdjustCanvasDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustCanvasDistance(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UCanvasComponent Function AdjustCanvasDistance

// Begin Class UCanvasComponent Function StartPlacingCanvas
struct Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CanvasComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasComponent, nullptr, "StartPlacingCanvas", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasComponent::execStartPlacingCanvas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPlacingCanvas();
	P_NATIVE_END;
}
// End Class UCanvasComponent Function StartPlacingCanvas

// Begin Class UCanvasComponent Function StopPlacingCanvas
struct Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CanvasComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasComponent, nullptr, "StopPlacingCanvas", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasComponent::execStopPlacingCanvas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlacingCanvas();
	P_NATIVE_END;
}
// End Class UCanvasComponent Function StopPlacingCanvas

// Begin Class UCanvasComponent
void UCanvasComponent::StaticRegisterNativesUCanvasComponent()
{
	UClass* Class = UCanvasComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustCanvasDistance", &UCanvasComponent::execAdjustCanvasDistance },
		{ "StartPlacingCanvas", &UCanvasComponent::execStartPlacingCanvas },
		{ "StopPlacingCanvas", &UCanvasComponent::execStopPlacingCanvas },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvasComponent);
UClass* Z_Construct_UClass_UCanvasComponent_NoRegister()
{
	return UCanvasComponent::StaticClass();
}
struct Z_Construct_UClass_UCanvasComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CanvasComponent.h" },
		{ "ModuleRelativePath", "CanvasComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBlueprintClass_MetaData[] = {
		{ "Category", "Canvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "CanvasComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasActorClass_MetaData[] = {
		{ "Category", "Canvas" },
		{ "ModuleRelativePath", "CanvasComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewBlueprintClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CanvasActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasComponent_AdjustCanvasDistance, "AdjustCanvasDistance" }, // 2521795986
		{ &Z_Construct_UFunction_UCanvasComponent_StartPlacingCanvas, "StartPlacingCanvas" }, // 1627210188
		{ &Z_Construct_UFunction_UCanvasComponent_StopPlacingCanvas, "StopPlacingCanvas" }, // 1990394310
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCanvasComponent_Statics::NewProp_PreviewBlueprintClass = { "PreviewBlueprintClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanvasComponent, PreviewBlueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBlueprintClass_MetaData), NewProp_PreviewBlueprintClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCanvasComponent_Statics::NewProp_CanvasActorClass = { "CanvasActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanvasComponent, CanvasActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasActorClass_MetaData), NewProp_CanvasActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasComponent_Statics::NewProp_PreviewBlueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasComponent_Statics::NewProp_CanvasActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCanvasComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvasComponent_Statics::ClassParams = {
	&UCanvasComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCanvasComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanvasComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanvasComponent()
{
	if (!Z_Registration_Info_UClass_UCanvasComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvasComponent.OuterSingleton, Z_Construct_UClass_UCanvasComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanvasComponent.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UCanvasComponent>()
{
	return UCanvasComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasComponent);
UCanvasComponent::~UCanvasComponent() {}
// End Class UCanvasComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanvasComponent, UCanvasComponent::StaticClass, TEXT("UCanvasComponent"), &Z_Registration_Info_UClass_UCanvasComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasComponent), 3136452295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_2538416563(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
