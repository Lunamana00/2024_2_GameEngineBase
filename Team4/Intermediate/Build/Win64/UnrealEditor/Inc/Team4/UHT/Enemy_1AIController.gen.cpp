// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/Enemy_1AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_1AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TEAM4_API UClass* Z_Construct_UClass_AEnemy_1AIController();
TEAM4_API UClass* Z_Construct_UClass_AEnemy_1AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class AEnemy_1AIController
void AEnemy_1AIController::StaticRegisterNativesAEnemy_1AIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_1AIController);
UClass* Z_Construct_UClass_AEnemy_1AIController_NoRegister()
{
	return AEnemy_1AIController::StaticClass();
}
struct Z_Construct_UClass_AEnemy_1AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy_1AIController.h" },
		{ "ModuleRelativePath", "Enemy_1AIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_1AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_1AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_1AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_1AIController_Statics::ClassParams = {
	&AEnemy_1AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_1AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_1AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_1AIController()
{
	if (!Z_Registration_Info_UClass_AEnemy_1AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_1AIController.OuterSingleton, Z_Construct_UClass_AEnemy_1AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_1AIController.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<AEnemy_1AIController>()
{
	return AEnemy_1AIController::StaticClass();
}
AEnemy_1AIController::AEnemy_1AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_1AIController);
AEnemy_1AIController::~AEnemy_1AIController() {}
// End Class AEnemy_1AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_Enemy_1AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_1AIController, AEnemy_1AIController::StaticClass, TEXT("AEnemy_1AIController"), &Z_Registration_Info_UClass_AEnemy_1AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_1AIController), 541295074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_Enemy_1AIController_h_3541439804(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_Enemy_1AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_Enemy_1AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
