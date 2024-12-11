// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/AIC_Enemy_Red.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIC_Enemy_Red() {}

// Begin Cross Module References
TEAM4_API UClass* Z_Construct_UClass_AAIC_Boss();
TEAM4_API UClass* Z_Construct_UClass_AAIC_Enemy_Red();
TEAM4_API UClass* Z_Construct_UClass_AAIC_Enemy_Red_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class AAIC_Enemy_Red
void AAIC_Enemy_Red::StaticRegisterNativesAAIC_Enemy_Red()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIC_Enemy_Red);
UClass* Z_Construct_UClass_AAIC_Enemy_Red_NoRegister()
{
	return AAIC_Enemy_Red::StaticClass();
}
struct Z_Construct_UClass_AAIC_Enemy_Red_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIC_Enemy_Red.h" },
		{ "ModuleRelativePath", "AIC_Enemy_Red.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_Enemy_Red>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIC_Enemy_Red_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIC_Boss,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Enemy_Red_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_Enemy_Red_Statics::ClassParams = {
	&AAIC_Enemy_Red::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Enemy_Red_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIC_Enemy_Red_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIC_Enemy_Red()
{
	if (!Z_Registration_Info_UClass_AAIC_Enemy_Red.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_Enemy_Red.OuterSingleton, Z_Construct_UClass_AAIC_Enemy_Red_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIC_Enemy_Red.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<AAIC_Enemy_Red>()
{
	return AAIC_Enemy_Red::StaticClass();
}
AAIC_Enemy_Red::AAIC_Enemy_Red() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_Enemy_Red);
AAIC_Enemy_Red::~AAIC_Enemy_Red() {}
// End Class AAIC_Enemy_Red

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Enemy_Red_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_Enemy_Red, AAIC_Enemy_Red::StaticClass, TEXT("AAIC_Enemy_Red"), &Z_Registration_Info_UClass_AAIC_Enemy_Red, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_Enemy_Red), 846894625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Enemy_Red_h_3588229602(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Enemy_Red_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Enemy_Red_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
