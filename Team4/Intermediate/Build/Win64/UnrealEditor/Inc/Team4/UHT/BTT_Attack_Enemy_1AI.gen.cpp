// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/BTT_Attack_Enemy_1AI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_Attack_Enemy_1AI() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
TEAM4_API UClass* Z_Construct_UClass_UBTT_Attack_Enemy_1AI();
TEAM4_API UClass* Z_Construct_UClass_UBTT_Attack_Enemy_1AI_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UBTT_Attack_Enemy_1AI
void UBTT_Attack_Enemy_1AI::StaticRegisterNativesUBTT_Attack_Enemy_1AI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_Attack_Enemy_1AI);
UClass* Z_Construct_UClass_UBTT_Attack_Enemy_1AI_NoRegister()
{
	return UBTT_Attack_Enemy_1AI::StaticClass();
}
struct Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTT_Attack_Enemy_1AI.h" },
		{ "ModuleRelativePath", "BTT_Attack_Enemy_1AI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_Attack_Enemy_1AI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics::ClassParams = {
	&UBTT_Attack_Enemy_1AI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_Attack_Enemy_1AI()
{
	if (!Z_Registration_Info_UClass_UBTT_Attack_Enemy_1AI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_Attack_Enemy_1AI.OuterSingleton, Z_Construct_UClass_UBTT_Attack_Enemy_1AI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_Attack_Enemy_1AI.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UBTT_Attack_Enemy_1AI>()
{
	return UBTT_Attack_Enemy_1AI::StaticClass();
}
UBTT_Attack_Enemy_1AI::UBTT_Attack_Enemy_1AI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_Attack_Enemy_1AI);
UBTT_Attack_Enemy_1AI::~UBTT_Attack_Enemy_1AI() {}
// End Class UBTT_Attack_Enemy_1AI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_khw17_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BTT_Attack_Enemy_1AI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_Attack_Enemy_1AI, UBTT_Attack_Enemy_1AI::StaticClass, TEXT("UBTT_Attack_Enemy_1AI"), &Z_Registration_Info_UClass_UBTT_Attack_Enemy_1AI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_Attack_Enemy_1AI), 1700172028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_khw17_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BTT_Attack_Enemy_1AI_h_1914365367(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_khw17_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BTT_Attack_Enemy_1AI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_khw17_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_BTT_Attack_Enemy_1AI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
