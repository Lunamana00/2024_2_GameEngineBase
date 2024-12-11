// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_EnemyTest.h"
#include "Runtime/Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_EnemyTest() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
TEAM4_API UClass* Z_Construct_UClass_ACPP_EnemyTest();
TEAM4_API UClass* Z_Construct_UClass_ACPP_EnemyTest_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeComponent_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_EnemyInterface_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_HitInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ACPP_EnemyTest Function GetAttribute
struct Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics
{
	struct CPP_EnemyTest_eventGetAttribute_Parms
	{
		UCPP_AttributeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_EnemyTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventGetAttribute_Parms, ReturnValue), Z_Construct_UClass_UCPP_AttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_EnemyTest, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::CPP_EnemyTest_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::CPP_EnemyTest_eventGetAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_EnemyTest::execGetAttribute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCPP_AttributeComponent**)Z_Param__Result=P_THIS->GetAttribute();
	P_NATIVE_END;
}
// End Class ACPP_EnemyTest Function GetAttribute

// Begin Class ACPP_EnemyTest Function GetHit
struct Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics
{
	struct CPP_EnemyTest_eventGetHit_Parms
	{
		FVector ImpactPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_EnemyTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventGetHit_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPoint_MetaData), NewProp_ImpactPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::NewProp_ImpactPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_EnemyTest, nullptr, "GetHit", nullptr, nullptr, Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::CPP_EnemyTest_eventGetHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::CPP_EnemyTest_eventGetHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_EnemyTest_GetHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_EnemyTest_GetHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_EnemyTest::execGetHit)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHit(Z_Param_Out_ImpactPoint);
	P_NATIVE_END;
}
// End Class ACPP_EnemyTest Function GetHit

// Begin Class ACPP_EnemyTest Function TakeDamage
struct Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics
{
	struct CPP_EnemyTest_eventTakeDamage_Parms
	{
		float DamageAmount;
		FDamageEvent DamageEvent;
		AController* EventInstigator;
		AActor* DamageCauser;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_EnemyTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEvent_MetaData), NewProp_DamageEvent_MetaData) }; // 3306819763
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_EnemyTest_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_DamageEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_EventInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_EnemyTest, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::CPP_EnemyTest_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::CPP_EnemyTest_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_EnemyTest::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
	P_GET_OBJECT(AController,Z_Param_EventInstigator);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class ACPP_EnemyTest Function TakeDamage

// Begin Class ACPP_EnemyTest
void ACPP_EnemyTest::StaticRegisterNativesACPP_EnemyTest()
{
	UClass* Class = ACPP_EnemyTest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttribute", &ACPP_EnemyTest::execGetAttribute },
		{ "GetHit", &ACPP_EnemyTest::execGetHit },
		{ "TakeDamage", &ACPP_EnemyTest::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_EnemyTest);
UClass* Z_Construct_UClass_ACPP_EnemyTest_NoRegister()
{
	return ACPP_EnemyTest::StaticClass();
}
struct Z_Construct_UClass_ACPP_EnemyTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_EnemyTest.h" },
		{ "ModuleRelativePath", "CPP_EnemyTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "CPP_EnemyTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_EnemyTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_EnemyTest_GetAttribute, "GetAttribute" }, // 3493635831
		{ &Z_Construct_UFunction_ACPP_EnemyTest_GetHit, "GetHit" }, // 2572099469
		{ &Z_Construct_UFunction_ACPP_EnemyTest_TakeDamage, "TakeDamage" }, // 998527464
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_EnemyTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_EnemyTest_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnemyTest, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactMontage_MetaData), NewProp_HitReactMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_EnemyTest_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnemyTest, Attribute), Z_Construct_UClass_UCPP_AttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_EnemyTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnemyTest_Statics::NewProp_HitReactMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnemyTest_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnemyTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_EnemyTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnemyTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_EnemyTest_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCPP_EnemyInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_EnemyTest, ICPP_EnemyInterface), false },  // 1567764100
	{ Z_Construct_UClass_UCPP_HitInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_EnemyTest, ICPP_HitInterface), false },  // 3970077905
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_EnemyTest_Statics::ClassParams = {
	&ACPP_EnemyTest::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_EnemyTest_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnemyTest_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnemyTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_EnemyTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_EnemyTest()
{
	if (!Z_Registration_Info_UClass_ACPP_EnemyTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_EnemyTest.OuterSingleton, Z_Construct_UClass_ACPP_EnemyTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_EnemyTest.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ACPP_EnemyTest>()
{
	return ACPP_EnemyTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_EnemyTest);
ACPP_EnemyTest::~ACPP_EnemyTest() {}
// End Class ACPP_EnemyTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_EnemyTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_EnemyTest, ACPP_EnemyTest::StaticClass, TEXT("ACPP_EnemyTest"), &Z_Registration_Info_UClass_ACPP_EnemyTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_EnemyTest), 2071343210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_EnemyTest_h_3850742907(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_EnemyTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_EnemyTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
