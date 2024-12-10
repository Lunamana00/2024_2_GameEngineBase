// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/DrawingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAM4_API UClass* Z_Construct_UClass_UDrawingComponent();
TEAM4_API UClass* Z_Construct_UClass_UDrawingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UDrawingComponent Function StartDrawing
struct Z_Construct_UFunction_UDrawingComponent_StartDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "DrawingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xed\x95\xa8\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDrawingComponent_StartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDrawingComponent, nullptr, "StartDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDrawingComponent_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDrawingComponent_StartDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDrawingComponent_StartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDrawingComponent_StartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDrawingComponent::execStartDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDrawing();
	P_NATIVE_END;
}
// End Class UDrawingComponent Function StartDrawing

// Begin Class UDrawingComponent Function StopDrawing
struct Z_Construct_UFunction_UDrawingComponent_StopDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DrawingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDrawingComponent_StopDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDrawingComponent, nullptr, "StopDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDrawingComponent_StopDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDrawingComponent_StopDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDrawingComponent_StopDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDrawingComponent_StopDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDrawingComponent::execStopDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopDrawing();
	P_NATIVE_END;
}
// End Class UDrawingComponent Function StopDrawing

// Begin Class UDrawingComponent Function UpdateDrawing
struct Z_Construct_UFunction_UDrawingComponent_UpdateDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DrawingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDrawingComponent_UpdateDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDrawingComponent, nullptr, "UpdateDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDrawingComponent_UpdateDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDrawingComponent_UpdateDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDrawingComponent_UpdateDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDrawingComponent_UpdateDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDrawingComponent::execUpdateDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDrawing();
	P_NATIVE_END;
}
// End Class UDrawingComponent Function UpdateDrawing

// Begin Class UDrawingComponent
void UDrawingComponent::StaticRegisterNativesUDrawingComponent()
{
	UClass* Class = UDrawingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartDrawing", &UDrawingComponent::execStartDrawing },
		{ "StopDrawing", &UDrawingComponent::execStopDrawing },
		{ "UpdateDrawing", &UDrawingComponent::execUpdateDrawing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawingComponent);
UClass* Z_Construct_UClass_UDrawingComponent_NoRegister()
{
	return UDrawingComponent::StaticClass();
}
struct Z_Construct_UClass_UDrawingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DrawingComponent.h" },
		{ "ModuleRelativePath", "DrawingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDrawingComponent_StartDrawing, "StartDrawing" }, // 2904522144
		{ &Z_Construct_UFunction_UDrawingComponent_StopDrawing, "StopDrawing" }, // 1122189738
		{ &Z_Construct_UFunction_UDrawingComponent_UpdateDrawing, "UpdateDrawing" }, // 2771086795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDrawingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawingComponent_Statics::ClassParams = {
	&UDrawingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawingComponent()
{
	if (!Z_Registration_Info_UClass_UDrawingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawingComponent.OuterSingleton, Z_Construct_UClass_UDrawingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawingComponent.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UDrawingComponent>()
{
	return UDrawingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawingComponent);
UDrawingComponent::~UDrawingComponent() {}
// End Class UDrawingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_JMKIM_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawingComponent, UDrawingComponent::StaticClass, TEXT("UDrawingComponent"), &Z_Registration_Info_UClass_UDrawingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawingComponent), 821444161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JMKIM_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_2651050459(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_JMKIM_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JMKIM_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_DrawingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
