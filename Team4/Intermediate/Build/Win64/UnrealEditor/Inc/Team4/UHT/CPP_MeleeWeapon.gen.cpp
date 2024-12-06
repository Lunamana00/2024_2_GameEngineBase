// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_MeleeWeapon.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MeleeWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_ACPP_MeleeWeapon();
TEAM4_API UClass* Z_Construct_UClass_ACPP_MeleeWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ACPP_MeleeWeapon Function EmptyIgnoreActorsArray
struct Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MeleeWeapon, nullptr, "EmptyIgnoreActorsArray", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_MeleeWeapon::execEmptyIgnoreActorsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EmptyIgnoreActorsArray();
	P_NATIVE_END;
}
// End Class ACPP_MeleeWeapon Function EmptyIgnoreActorsArray

// Begin Class ACPP_MeleeWeapon Function OnWeaponBoxEndOverlap
struct Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics
{
	struct CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MeleeWeapon, nullptr, "OnWeaponBoxEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::CPP_MeleeWeapon_eventOnWeaponBoxEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_MeleeWeapon::execOnWeaponBoxEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponBoxEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ACPP_MeleeWeapon Function OnWeaponBoxEndOverlap

// Begin Class ACPP_MeleeWeapon Function OnWeaponBoxOverlap
struct Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics
{
	struct CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms), &Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MeleeWeapon, nullptr, "OnWeaponBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::CPP_MeleeWeapon_eventOnWeaponBoxOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_MeleeWeapon::execOnWeaponBoxOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ACPP_MeleeWeapon Function OnWeaponBoxOverlap

// Begin Class ACPP_MeleeWeapon
void ACPP_MeleeWeapon::StaticRegisterNativesACPP_MeleeWeapon()
{
	UClass* Class = ACPP_MeleeWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EmptyIgnoreActorsArray", &ACPP_MeleeWeapon::execEmptyIgnoreActorsArray },
		{ "OnWeaponBoxEndOverlap", &ACPP_MeleeWeapon::execOnWeaponBoxEndOverlap },
		{ "OnWeaponBoxOverlap", &ACPP_MeleeWeapon::execOnWeaponBoxOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_MeleeWeapon);
UClass* Z_Construct_UClass_ACPP_MeleeWeapon_NoRegister()
{
	return ACPP_MeleeWeapon::StaticClass();
}
struct Z_Construct_UClass_ACPP_MeleeWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_MeleeWeapon.h" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "CPP_MeleeWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBox_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceStart_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceEnd_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMuzzle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CamShake_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetsToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
		{ "Category", "CPP_MeleeWeapon" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "CPP_MeleeWeapon" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireHitNiagaraSystem_MetaData[] = {
		{ "Category", "CPP_MeleeWeapon" },
		{ "ModuleRelativePath", "CPP_MeleeWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTraceStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTraceEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMuzzle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CamShake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetsToIgnore;
	static void NewProp_bDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSoundCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireHitNiagaraSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_MeleeWeapon_EmptyIgnoreActorsArray, "EmptyIgnoreActorsArray" }, // 215256026
		{ &Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxEndOverlap, "OnWeaponBoxEndOverlap" }, // 1717645495
		{ &Z_Construct_UFunction_ACPP_MeleeWeapon_OnWeaponBoxOverlap, "OnWeaponBoxOverlap" }, // 1660688087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MeleeWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_WeaponBox = { "WeaponBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, WeaponBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBox_MetaData), NewProp_WeaponBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_BoxTraceStart = { "BoxTraceStart", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, BoxTraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceStart_MetaData), NewProp_BoxTraceStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_BoxTraceEnd = { "BoxTraceEnd", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, BoxTraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceEnd_MetaData), NewProp_BoxTraceEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_WeaponMuzzle = { "WeaponMuzzle", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, WeaponMuzzle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMuzzle_MetaData), NewProp_WeaponMuzzle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_CamShake = { "CamShake", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, CamShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CamShake_MetaData), NewProp_CamShake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_TargetsToIgnore_Inner = { "TargetsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_TargetsToIgnore = { "TargetsToIgnore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, TargetsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetsToIgnore_MetaData), NewProp_TargetsToIgnore_MetaData) };
void Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bDebugMode_SetBit(void* Obj)
{
	((ACPP_MeleeWeapon*)Obj)->bDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_MeleeWeapon), &Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugMode_MetaData), NewProp_bDebugMode_MetaData) };
void Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((ACPP_MeleeWeapon*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_MeleeWeapon), &Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_HitSoundCue = { "HitSoundCue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, HitSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSoundCue_MetaData), NewProp_HitSoundCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_FireHitNiagaraSystem = { "FireHitNiagaraSystem", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MeleeWeapon, FireHitNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireHitNiagaraSystem_MetaData), NewProp_FireHitNiagaraSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_MeleeWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_WeaponBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_BoxTraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_BoxTraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_WeaponMuzzle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_CamShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_TargetsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_TargetsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_HitSoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MeleeWeapon_Statics::NewProp_FireHitNiagaraSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MeleeWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_MeleeWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MeleeWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MeleeWeapon_Statics::ClassParams = {
	&ACPP_MeleeWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_MeleeWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MeleeWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MeleeWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_MeleeWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_MeleeWeapon()
{
	if (!Z_Registration_Info_UClass_ACPP_MeleeWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_MeleeWeapon.OuterSingleton, Z_Construct_UClass_ACPP_MeleeWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_MeleeWeapon.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ACPP_MeleeWeapon>()
{
	return ACPP_MeleeWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_MeleeWeapon);
ACPP_MeleeWeapon::~ACPP_MeleeWeapon() {}
// End Class ACPP_MeleeWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MeleeWeapon, ACPP_MeleeWeapon::StaticClass, TEXT("ACPP_MeleeWeapon"), &Z_Registration_Info_UClass_ACPP_MeleeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MeleeWeapon), 4120431125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_1172482339(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_CPP_MeleeWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
