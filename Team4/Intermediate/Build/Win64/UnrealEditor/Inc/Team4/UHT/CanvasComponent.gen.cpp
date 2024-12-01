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
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCanvasComponent();
TEAM4_API UClass* Z_Construct_UClass_UCanvasComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UCanvasComponent
void UCanvasComponent::StaticRegisterNativesUCanvasComponent()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasMesh_MetaData[] = {
		{ "Category", "Canvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xba\x94\xeb\xb2\x84\xec\x8a\xa4 \xeb\xa9\x94\xec\x89\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CanvasComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x94\xeb\xb2\x84\xec\x8a\xa4 \xeb\xa9\x94\xec\x89\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanvasComponent_Statics::NewProp_CanvasMesh = { "CanvasMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanvasComponent, CanvasMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasMesh_MetaData), NewProp_CanvasMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasComponent_Statics::NewProp_CanvasMesh,
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
	nullptr,
	Z_Construct_UClass_UCanvasComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UCanvasComponent, UCanvasComponent::StaticClass, TEXT("UCanvasComponent"), &Z_Registration_Info_UClass_UCanvasComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasComponent), 2987660529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_2398296526(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
