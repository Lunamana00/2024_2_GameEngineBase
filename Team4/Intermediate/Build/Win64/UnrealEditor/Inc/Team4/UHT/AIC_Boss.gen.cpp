// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/AIC_Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIC_Boss() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
TEAM4_API UClass* Z_Construct_UClass_AAIC_Boss();
TEAM4_API UClass* Z_Construct_UClass_AAIC_Boss_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class AAIC_Boss Function SetBlackboardValueAsBool
struct Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics
{
	struct AIC_Boss_eventSetBlackboardValueAsBool_Parms
	{
		FName KeyName;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIC_Boss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsBool_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((AIC_Boss_eventSetBlackboardValueAsBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIC_Boss_eventSetBlackboardValueAsBool_Parms), &Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIC_Boss, nullptr, "SetBlackboardValueAsBool", nullptr, nullptr, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::AIC_Boss_eventSetBlackboardValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::AIC_Boss_eventSetBlackboardValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIC_Boss::execSetBlackboardValueAsBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlackboardValueAsBool(Z_Param_KeyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AAIC_Boss Function SetBlackboardValueAsBool

// Begin Class AAIC_Boss Function SetBlackboardValueAsInt
struct Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics
{
	struct AIC_Boss_eventSetBlackboardValueAsInt_Parms
	{
		FName KeyName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIC_Boss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsInt_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIC_Boss, nullptr, "SetBlackboardValueAsInt", nullptr, nullptr, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::AIC_Boss_eventSetBlackboardValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::AIC_Boss_eventSetBlackboardValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIC_Boss::execSetBlackboardValueAsInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlackboardValueAsInt(Z_Param_KeyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AAIC_Boss Function SetBlackboardValueAsInt

// Begin Class AAIC_Boss Function SetBlackboardValueAsObject
struct Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics
{
	struct AIC_Boss_eventSetBlackboardValueAsObject_Parms
	{
		FName KeyName;
		UObject* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIC_Boss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsObject_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIC_Boss, nullptr, "SetBlackboardValueAsObject", nullptr, nullptr, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::AIC_Boss_eventSetBlackboardValueAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::AIC_Boss_eventSetBlackboardValueAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIC_Boss::execSetBlackboardValueAsObject)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlackboardValueAsObject(Z_Param_KeyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AAIC_Boss Function SetBlackboardValueAsObject

// Begin Class AAIC_Boss Function SetBlackboardValueAsVector
struct Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics
{
	struct AIC_Boss_eventSetBlackboardValueAsVector_Parms
	{
		FName KeyName;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions to Set Blackboard Values\n" },
#endif
		{ "ModuleRelativePath", "AIC_Boss.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions to Set Blackboard Values" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsVector_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_Boss_eventSetBlackboardValueAsVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIC_Boss, nullptr, "SetBlackboardValueAsVector", nullptr, nullptr, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::AIC_Boss_eventSetBlackboardValueAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::AIC_Boss_eventSetBlackboardValueAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIC_Boss::execSetBlackboardValueAsVector)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlackboardValueAsVector(Z_Param_KeyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AAIC_Boss Function SetBlackboardValueAsVector

// Begin Class AAIC_Boss
void AAIC_Boss::StaticRegisterNativesAAIC_Boss()
{
	UClass* Class = AAIC_Boss::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBlackboardValueAsBool", &AAIC_Boss::execSetBlackboardValueAsBool },
		{ "SetBlackboardValueAsInt", &AAIC_Boss::execSetBlackboardValueAsInt },
		{ "SetBlackboardValueAsObject", &AAIC_Boss::execSetBlackboardValueAsObject },
		{ "SetBlackboardValueAsVector", &AAIC_Boss::execSetBlackboardValueAsVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIC_Boss);
UClass* Z_Construct_UClass_AAIC_Boss_NoRegister()
{
	return AAIC_Boss::StaticClass();
}
struct Z_Construct_UClass_AAIC_Boss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIC_Boss.h" },
		{ "ModuleRelativePath", "AIC_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Behavior Tree Asset\n" },
#endif
		{ "ModuleRelativePath", "AIC_Boss.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior Tree Asset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsBool, "SetBlackboardValueAsBool" }, // 1341657586
		{ &Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsInt, "SetBlackboardValueAsInt" }, // 4120140133
		{ &Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsObject, "SetBlackboardValueAsObject" }, // 3663296469
		{ &Z_Construct_UFunction_AAIC_Boss_SetBlackboardValueAsVector, "SetBlackboardValueAsVector" }, // 143025553
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_Boss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIC_Boss_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIC_Boss, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIC_Boss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIC_Boss_Statics::NewProp_BehaviorTreeAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Boss_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIC_Boss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Boss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_Boss_Statics::ClassParams = {
	&AAIC_Boss::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAIC_Boss_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Boss_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Boss_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIC_Boss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIC_Boss()
{
	if (!Z_Registration_Info_UClass_AAIC_Boss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_Boss.OuterSingleton, Z_Construct_UClass_AAIC_Boss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIC_Boss.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<AAIC_Boss>()
{
	return AAIC_Boss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_Boss);
AAIC_Boss::~AAIC_Boss() {}
// End Class AAIC_Boss

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_Boss, AAIC_Boss::StaticClass, TEXT("AAIC_Boss"), &Z_Registration_Info_UClass_AAIC_Boss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_Boss), 3807114324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_2365771574(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_AIC_Boss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
