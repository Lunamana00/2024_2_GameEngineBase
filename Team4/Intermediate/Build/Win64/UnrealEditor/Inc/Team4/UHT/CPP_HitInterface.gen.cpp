// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_HitInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_HitInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TEAM4_API UClass* Z_Construct_UClass_UCPP_HitInterface();
TEAM4_API UClass* Z_Construct_UClass_UCPP_HitInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Interface UCPP_HitInterface
void UCPP_HitInterface::StaticRegisterNativesUCPP_HitInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_HitInterface);
UClass* Z_Construct_UClass_UCPP_HitInterface_NoRegister()
{
	return UCPP_HitInterface::StaticClass();
}
struct Z_Construct_UClass_UCPP_HitInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_HitInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_HitInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_HitInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_HitInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_HitInterface_Statics::ClassParams = {
	&UCPP_HitInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_HitInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_HitInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_HitInterface()
{
	if (!Z_Registration_Info_UClass_UCPP_HitInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_HitInterface.OuterSingleton, Z_Construct_UClass_UCPP_HitInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_HitInterface.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UCPP_HitInterface>()
{
	return UCPP_HitInterface::StaticClass();
}
UCPP_HitInterface::UCPP_HitInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_HitInterface);
UCPP_HitInterface::~UCPP_HitInterface() {}
// End Interface UCPP_HitInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_HitInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_HitInterface, UCPP_HitInterface::StaticClass, TEXT("UCPP_HitInterface"), &Z_Registration_Info_UClass_UCPP_HitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_HitInterface), 3970077905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_HitInterface_h_1296939774(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_HitInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_HitInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
