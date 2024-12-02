// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CanvasActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_ACanvasActor();
TEAM4_API UClass* Z_Construct_UClass_ACanvasActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ACanvasActor
void ACanvasActor::StaticRegisterNativesACanvasActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACanvasActor);
UClass* Z_Construct_UClass_ACanvasActor_NoRegister()
{
	return ACanvasActor::StaticClass();
}
struct Z_Construct_UClass_ACanvasActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CanvasActor.h" },
		{ "ModuleRelativePath", "CanvasActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasMesh_MetaData[] = {
		{ "Category", "Canvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xba\x94\xeb\xb2\x84\xec\x8a\xa4 \xeb\xa9\x94\xec\x89\xac\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CanvasActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x94\xeb\xb2\x84\xec\x8a\xa4 \xeb\xa9\x94\xec\x89\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasRenderTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Render Target\n" },
#endif
		{ "ModuleRelativePath", "CanvasActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render Target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8f\x99\xec\xa0\x81 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "CanvasActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8f\x99\xec\xa0\x81 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACanvasActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACanvasActor_Statics::NewProp_CanvasMesh = { "CanvasMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACanvasActor, CanvasMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasMesh_MetaData), NewProp_CanvasMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACanvasActor_Statics::NewProp_CanvasRenderTarget = { "CanvasRenderTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACanvasActor, CanvasRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasRenderTarget_MetaData), NewProp_CanvasRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACanvasActor_Statics::NewProp_CanvasMaterialInstance = { "CanvasMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACanvasActor, CanvasMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasMaterialInstance_MetaData), NewProp_CanvasMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACanvasActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACanvasActor_Statics::NewProp_CanvasMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACanvasActor_Statics::NewProp_CanvasRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACanvasActor_Statics::NewProp_CanvasMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACanvasActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACanvasActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACanvasActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACanvasActor_Statics::ClassParams = {
	&ACanvasActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACanvasActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACanvasActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACanvasActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACanvasActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACanvasActor()
{
	if (!Z_Registration_Info_UClass_ACanvasActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACanvasActor.OuterSingleton, Z_Construct_UClass_ACanvasActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACanvasActor.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ACanvasActor>()
{
	return ACanvasActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACanvasActor);
ACanvasActor::~ACanvasActor() {}
// End Class ACanvasActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACanvasActor, ACanvasActor::StaticClass, TEXT("ACanvasActor"), &Z_Registration_Info_UClass_ACanvasActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACanvasActor), 1873021330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasActor_h_639934150(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CanvasActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
