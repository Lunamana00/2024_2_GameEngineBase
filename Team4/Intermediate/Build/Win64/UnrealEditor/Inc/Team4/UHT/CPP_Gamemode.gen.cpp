// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_Gamemode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Gamemode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TEAM4_API UClass* Z_Construct_UClass_ACPP_Gamemode();
TEAM4_API UClass* Z_Construct_UClass_ACPP_Gamemode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ACPP_Gamemode
void ACPP_Gamemode::StaticRegisterNativesACPP_Gamemode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Gamemode);
UClass* Z_Construct_UClass_ACPP_Gamemode_NoRegister()
{
	return ACPP_Gamemode::StaticClass();
}
struct Z_Construct_UClass_ACPP_Gamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_Gamemode.h" },
		{ "ModuleRelativePath", "CPP_Gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Gamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_Gamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Gamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Gamemode_Statics::ClassParams = {
	&ACPP_Gamemode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Gamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Gamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_Gamemode()
{
	if (!Z_Registration_Info_UClass_ACPP_Gamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Gamemode.OuterSingleton, Z_Construct_UClass_ACPP_Gamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_Gamemode.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ACPP_Gamemode>()
{
	return ACPP_Gamemode::StaticClass();
}
ACPP_Gamemode::ACPP_Gamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Gamemode);
ACPP_Gamemode::~ACPP_Gamemode() {}
// End Class ACPP_Gamemode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_Gamemode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Gamemode, ACPP_Gamemode::StaticClass, TEXT("ACPP_Gamemode"), &Z_Registration_Info_UClass_ACPP_Gamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Gamemode), 1605083788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_Gamemode_h_3647228144(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_Gamemode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_Gamemode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
