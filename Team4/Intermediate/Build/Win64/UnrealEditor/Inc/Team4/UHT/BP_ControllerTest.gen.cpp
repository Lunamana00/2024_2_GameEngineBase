// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/BP_ControllerTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_ControllerTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TEAM4_API UClass* Z_Construct_UClass_ABP_ControllerTest();
TEAM4_API UClass* Z_Construct_UClass_ABP_ControllerTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ABP_ControllerTest
void ABP_ControllerTest::StaticRegisterNativesABP_ControllerTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_ControllerTest);
UClass* Z_Construct_UClass_ABP_ControllerTest_NoRegister()
{
	return ABP_ControllerTest::StaticClass();
}
struct Z_Construct_UClass_ABP_ControllerTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BP_ControllerTest.h" },
		{ "ModuleRelativePath", "BP_ControllerTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_ControllerTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABP_ControllerTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ControllerTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_ControllerTest_Statics::ClassParams = {
	&ABP_ControllerTest::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ControllerTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_ControllerTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_ControllerTest()
{
	if (!Z_Registration_Info_UClass_ABP_ControllerTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_ControllerTest.OuterSingleton, Z_Construct_UClass_ABP_ControllerTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_ControllerTest.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ABP_ControllerTest>()
{
	return ABP_ControllerTest::StaticClass();
}
ABP_ControllerTest::ABP_ControllerTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_ControllerTest);
ABP_ControllerTest::~ABP_ControllerTest() {}
// End Class ABP_ControllerTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BP_ControllerTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_ControllerTest, ABP_ControllerTest::StaticClass, TEXT("ABP_ControllerTest"), &Z_Registration_Info_UClass_ABP_ControllerTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_ControllerTest), 1266056581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BP_ControllerTest_h_3981060605(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BP_ControllerTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BP_ControllerTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
