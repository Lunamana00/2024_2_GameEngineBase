// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AttributeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeComponent();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UCPP_AttributeComponent Function GetBaseDamage
struct Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics
{
	struct CPP_AttributeComponent_eventGetBaseDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttributeComponent_eventGetBaseDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttributeComponent, nullptr, "GetBaseDamage", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::CPP_AttributeComponent_eventGetBaseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::CPP_AttributeComponent_eventGetBaseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttributeComponent::execGetBaseDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBaseDamage();
	P_NATIVE_END;
}
// End Class UCPP_AttributeComponent Function GetBaseDamage

// Begin Class UCPP_AttributeComponent Function GetCurrentHealth
struct Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics
{
	struct CPP_AttributeComponent_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttributeComponent_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttributeComponent, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::CPP_AttributeComponent_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::CPP_AttributeComponent_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttributeComponent::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UCPP_AttributeComponent Function GetCurrentHealth

// Begin Class UCPP_AttributeComponent Function GetHealthPercent
struct Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics
{
	struct CPP_AttributeComponent_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttributeComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttributeComponent, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::CPP_AttributeComponent_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::CPP_AttributeComponent_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttributeComponent::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// End Class UCPP_AttributeComponent Function GetHealthPercent

// Begin Class UCPP_AttributeComponent Function HealHealth
struct Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics
{
	struct CPP_AttributeComponent_eventHealHealth_Parms
	{
		float HealAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttributeComponent_eventHealHealth_Parms, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::NewProp_HealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttributeComponent, nullptr, "HealHealth", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::CPP_AttributeComponent_eventHealHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::CPP_AttributeComponent_eventHealHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttributeComponent::execHealHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealHealth(Z_Param_HealAmount);
	P_NATIVE_END;
}
// End Class UCPP_AttributeComponent Function HealHealth

// Begin Class UCPP_AttributeComponent Function IsAlive
struct Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics
{
	struct CPP_AttributeComponent_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CPP_AttributeComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPP_AttributeComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttributeComponent, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::CPP_AttributeComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::CPP_AttributeComponent_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttributeComponent::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class UCPP_AttributeComponent Function IsAlive

// Begin Class UCPP_AttributeComponent Function ReceiveDamage
struct Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics
{
	struct CPP_AttributeComponent_eventReceiveDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttributeComponent_eventReceiveDamage_Parms, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttributeComponent, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::CPP_AttributeComponent_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::CPP_AttributeComponent_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttributeComponent::execReceiveDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class UCPP_AttributeComponent Function ReceiveDamage

// Begin Class UCPP_AttributeComponent
void UCPP_AttributeComponent::StaticRegisterNativesUCPP_AttributeComponent()
{
	UClass* Class = UCPP_AttributeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBaseDamage", &UCPP_AttributeComponent::execGetBaseDamage },
		{ "GetCurrentHealth", &UCPP_AttributeComponent::execGetCurrentHealth },
		{ "GetHealthPercent", &UCPP_AttributeComponent::execGetHealthPercent },
		{ "HealHealth", &UCPP_AttributeComponent::execHealHealth },
		{ "IsAlive", &UCPP_AttributeComponent::execIsAlive },
		{ "ReceiveDamage", &UCPP_AttributeComponent::execReceiveDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_AttributeComponent);
UClass* Z_Construct_UClass_UCPP_AttributeComponent_NoRegister()
{
	return UCPP_AttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_AttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_AttributeComponent.h" },
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CPP_AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_AttributeComponent_GetBaseDamage, "GetBaseDamage" }, // 1636478616
		{ &Z_Construct_UFunction_UCPP_AttributeComponent_GetCurrentHealth, "GetCurrentHealth" }, // 3139254742
		{ &Z_Construct_UFunction_UCPP_AttributeComponent_GetHealthPercent, "GetHealthPercent" }, // 643815111
		{ &Z_Construct_UFunction_UCPP_AttributeComponent_HealHealth, "HealHealth" }, // 3409788022
		{ &Z_Construct_UFunction_UCPP_AttributeComponent_IsAlive, "IsAlive" }, // 2278195253
		{ &Z_Construct_UFunction_UCPP_AttributeComponent_ReceiveDamage, "ReceiveDamage" }, // 3589547899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_AttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttributeComponent_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttributeComponent, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_AttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttributeComponent_Statics::NewProp_BaseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_AttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_AttributeComponent_Statics::ClassParams = {
	&UCPP_AttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_AttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_AttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_AttributeComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_AttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_AttributeComponent.OuterSingleton, Z_Construct_UClass_UCPP_AttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_AttributeComponent.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UCPP_AttributeComponent>()
{
	return UCPP_AttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_AttributeComponent);
UCPP_AttributeComponent::~UCPP_AttributeComponent() {}
// End Class UCPP_AttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_AttributeComponent, UCPP_AttributeComponent::StaticClass, TEXT("UCPP_AttributeComponent"), &Z_Registration_Info_UClass_UCPP_AttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_AttributeComponent), 303997439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttributeComponent_h_2819856597(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
