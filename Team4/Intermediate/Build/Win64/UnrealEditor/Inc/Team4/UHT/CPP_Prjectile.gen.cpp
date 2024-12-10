// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_Prjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Prjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEAM4_API UClass* Z_Construct_UClass_ACPP_Prjectile();
TEAM4_API UClass* Z_Construct_UClass_ACPP_Prjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ACPP_Prjectile
void ACPP_Prjectile::StaticRegisterNativesACPP_Prjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Prjectile);
UClass* Z_Construct_UClass_ACPP_Prjectile_NoRegister()
{
	return ACPP_Prjectile::StaticClass();
}
struct Z_Construct_UClass_ACPP_Prjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Prjectile.h" },
		{ "ModuleRelativePath", "CPP_Prjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Prjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_Prjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Prjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Prjectile_Statics::ClassParams = {
	&ACPP_Prjectile::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Prjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Prjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_Prjectile()
{
	if (!Z_Registration_Info_UClass_ACPP_Prjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Prjectile.OuterSingleton, Z_Construct_UClass_ACPP_Prjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_Prjectile.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ACPP_Prjectile>()
{
	return ACPP_Prjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Prjectile);
ACPP_Prjectile::~ACPP_Prjectile() {}
// End Class ACPP_Prjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Prjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Prjectile, ACPP_Prjectile::StaticClass, TEXT("ACPP_Prjectile"), &Z_Registration_Info_UClass_ACPP_Prjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Prjectile), 3327837452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Prjectile_h_1951919957(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Prjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_Prjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
