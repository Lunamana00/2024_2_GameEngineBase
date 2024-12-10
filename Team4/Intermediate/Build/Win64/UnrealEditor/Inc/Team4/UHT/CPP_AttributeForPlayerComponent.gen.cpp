// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_AttributeForPlayerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AttributeForPlayerComponent() {}

// Begin Cross Module References
TEAM4_API UClass* Z_Construct_UClass_ACPP_TestCharacter_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeComponent();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeForPlayerComponent();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeForPlayerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UCPP_AttributeForPlayerComponent
void UCPP_AttributeForPlayerComponent::StaticRegisterNativesUCPP_AttributeForPlayerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_AttributeForPlayerComponent);
UClass* Z_Construct_UClass_UCPP_AttributeForPlayerComponent_NoRegister()
{
	return UCPP_AttributeForPlayerComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_AttributeForPlayerComponent.h" },
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// stamina \n" },
#endif
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mana\n" },
#endif
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRestorePerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//stamina auto recovered\n" },
#endif
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "stamina auto recovered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "CPP_AttributeForPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRestorePerSecond;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_AttributeForPlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeForPlayerComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeForPlayerComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeForPlayerComponent, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeForPlayerComponent, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_StaminaRestorePerSecond = { "StaminaRestorePerSecond", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeForPlayerComponent, StaminaRestorePerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRestorePerSecond_MetaData), NewProp_StaminaRestorePerSecond_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeForPlayerComponent, Character), Z_Construct_UClass_ACPP_TestCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_StaminaRestorePerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_AttributeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::ClassParams = {
	&UCPP_AttributeForPlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_AttributeForPlayerComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_AttributeForPlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_AttributeForPlayerComponent.OuterSingleton, Z_Construct_UClass_UCPP_AttributeForPlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_AttributeForPlayerComponent.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UCPP_AttributeForPlayerComponent>()
{
	return UCPP_AttributeForPlayerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_AttributeForPlayerComponent);
UCPP_AttributeForPlayerComponent::~UCPP_AttributeForPlayerComponent() {}
// End Class UCPP_AttributeForPlayerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttributeForPlayerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_AttributeForPlayerComponent, UCPP_AttributeForPlayerComponent::StaticClass, TEXT("UCPP_AttributeForPlayerComponent"), &Z_Registration_Info_UClass_UCPP_AttributeForPlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_AttributeForPlayerComponent), 1613576587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttributeForPlayerComponent_h_3039634332(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttributeForPlayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_AttributeForPlayerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
