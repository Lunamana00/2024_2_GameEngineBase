// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam4_init() {}
	TEAM4_API UFunction* Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Team4;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Team4()
	{
		if (!Z_Registration_Info_UPackage__Script_Team4.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Team4",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x40C15F5A,
				0xC610ED17,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Team4.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Team4.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Team4(Z_Construct_UPackage__Script_Team4, TEXT("/Script/Team4"), Z_Registration_Info_UPackage__Script_Team4, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x40C15F5A, 0xC610ED17));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
