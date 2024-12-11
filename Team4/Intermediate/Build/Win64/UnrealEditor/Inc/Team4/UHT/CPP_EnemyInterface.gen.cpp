// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_EnemyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_EnemyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TEAM4_API UClass* Z_Construct_UClass_UCPP_EnemyInterface();
TEAM4_API UClass* Z_Construct_UClass_UCPP_EnemyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Interface UCPP_EnemyInterface Function OnDeselect
void ICPP_EnemyInterface::OnDeselect()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeselect instead.");
}
static FName NAME_UCPP_EnemyInterface_OnDeselect = FName(TEXT("OnDeselect"));
void ICPP_EnemyInterface::Execute_OnDeselect(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCPP_EnemyInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCPP_EnemyInterface_OnDeselect);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_EnemyInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_EnemyInterface, nullptr, "OnDeselect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCPP_EnemyInterface Function OnDeselect

// Begin Interface UCPP_EnemyInterface Function OnSelect
void ICPP_EnemyInterface::OnSelect()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelect instead.");
}
static FName NAME_UCPP_EnemyInterface_OnSelect = FName(TEXT("OnSelect"));
void ICPP_EnemyInterface::Execute_OnSelect(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCPP_EnemyInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCPP_EnemyInterface_OnSelect);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_EnemyInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_EnemyInterface, nullptr, "OnSelect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCPP_EnemyInterface Function OnSelect

// Begin Interface UCPP_EnemyInterface
void UCPP_EnemyInterface::StaticRegisterNativesUCPP_EnemyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_EnemyInterface);
UClass* Z_Construct_UClass_UCPP_EnemyInterface_NoRegister()
{
	return UCPP_EnemyInterface::StaticClass();
}
struct Z_Construct_UClass_UCPP_EnemyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_EnemyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_EnemyInterface_OnDeselect, "OnDeselect" }, // 1612402072
		{ &Z_Construct_UFunction_UCPP_EnemyInterface_OnSelect, "OnSelect" }, // 3934726239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_EnemyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_EnemyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_EnemyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_EnemyInterface_Statics::ClassParams = {
	&UCPP_EnemyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_EnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_EnemyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_EnemyInterface()
{
	if (!Z_Registration_Info_UClass_UCPP_EnemyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_EnemyInterface.OuterSingleton, Z_Construct_UClass_UCPP_EnemyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_EnemyInterface.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UCPP_EnemyInterface>()
{
	return UCPP_EnemyInterface::StaticClass();
}
UCPP_EnemyInterface::UCPP_EnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_EnemyInterface);
UCPP_EnemyInterface::~UCPP_EnemyInterface() {}
// End Interface UCPP_EnemyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_EnemyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_EnemyInterface, UCPP_EnemyInterface::StaticClass, TEXT("UCPP_EnemyInterface"), &Z_Registration_Info_UClass_UCPP_EnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_EnemyInterface), 1567764100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_EnemyInterface_h_3862600041(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_EnemyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_EnemyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
