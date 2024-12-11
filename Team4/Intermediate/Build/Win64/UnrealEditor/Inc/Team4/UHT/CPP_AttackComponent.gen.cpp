// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_AttackComponent.h"
#include "Team4/CPP_Datatype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AttackComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAM4_API UClass* Z_Construct_UClass_ACPP_Projectile_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_ACPP_TestCharacter_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttackComponent();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttackComponent_NoRegister();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_EAttackRange();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_EAttackState();
TEAM4_API UFunction* Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature();
TEAM4_API UScriptStruct* Z_Construct_UScriptStruct_FAttack();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Delegate FOnUpdatedTargetSignature
struct Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics
{
	struct _Script_Team4_eventOnUpdatedTargetSignature_Parms
	{
		AActor* NewTargetActorRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetActorRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::NewProp_NewTargetActorRef = { "NewTargetActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Team4_eventOnUpdatedTargetSignature_Parms, NewTargetActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::NewProp_NewTargetActorRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Team4, nullptr, "OnUpdatedTargetSignature__DelegateSignature", "CPP_AttackComponent", "OnUpdatedTargetDelegate", Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::_Script_Team4_eventOnUpdatedTargetSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::_Script_Team4_eventOnUpdatedTargetSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUpdatedTargetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatedTargetSignature, AActor* NewTargetActorRef)
{
	struct _Script_Team4_eventOnUpdatedTargetSignature_Parms
	{
		AActor* NewTargetActorRef;
	};
	_Script_Team4_eventOnUpdatedTargetSignature_Parms Parms;
	Parms.NewTargetActorRef=NewTargetActorRef;
	OnUpdatedTargetSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUpdatedTargetSignature

// Begin Class UCPP_AttackComponent Function GetCurrentAttackState
struct Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics
{
	struct CPP_AttackComponent_eventGetCurrentAttackState_Parms
	{
		EAttackState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttackComponent_eventGetCurrentAttackState_Parms, ReturnValue), Z_Construct_UEnum_Team4_EAttackState, METADATA_PARAMS(0, nullptr) }; // 1787572842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttackComponent, nullptr, "GetCurrentAttackState", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::CPP_AttackComponent_eventGetCurrentAttackState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::CPP_AttackComponent_eventGetCurrentAttackState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttackComponent::execGetCurrentAttackState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAttackState*)Z_Param__Result=P_THIS->GetCurrentAttackState();
	P_NATIVE_END;
}
// End Class UCPP_AttackComponent Function GetCurrentAttackState

// Begin Class UCPP_AttackComponent Function ResetAttackState
struct Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttackComponent, nullptr, "ResetAttackState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttackComponent::execResetAttackState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAttackState();
	P_NATIVE_END;
}
// End Class UCPP_AttackComponent Function ResetAttackState

// Begin Class UCPP_AttackComponent Function ResetCombo
struct Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttackComponent, nullptr, "ResetCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttackComponent::execResetCombo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCombo();
	P_NATIVE_END;
}
// End Class UCPP_AttackComponent Function ResetCombo

// Begin Class UCPP_AttackComponent Function SetCurrentAttackState
struct Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics
{
	struct CPP_AttackComponent_eventSetCurrentAttackState_Parms
	{
		EAttackState InAttackState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttackState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAttackState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAttackState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::NewProp_InAttackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::NewProp_InAttackState = { "InAttackState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_AttackComponent_eventSetCurrentAttackState_Parms, InAttackState), Z_Construct_UEnum_Team4_EAttackState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttackState_MetaData), NewProp_InAttackState_MetaData) }; // 1787572842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::NewProp_InAttackState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::NewProp_InAttackState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttackComponent, nullptr, "SetCurrentAttackState", nullptr, nullptr, Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::CPP_AttackComponent_eventSetCurrentAttackState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::CPP_AttackComponent_eventSetCurrentAttackState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttackComponent::execSetCurrentAttackState)
{
	P_GET_ENUM_REF(EAttackState,Z_Param_Out_InAttackState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentAttackState((EAttackState&)(Z_Param_Out_InAttackState));
	P_NATIVE_END;
}
// End Class UCPP_AttackComponent Function SetCurrentAttackState

// Begin Class UCPP_AttackComponent Function SpawnProjectile
struct Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttackComponent, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_AttackComponent::execSpawnProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile();
	P_NATIVE_END;
}
// End Class UCPP_AttackComponent Function SpawnProjectile

// Begin Class UCPP_AttackComponent
void UCPP_AttackComponent::StaticRegisterNativesUCPP_AttackComponent()
{
	UClass* Class = UCPP_AttackComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentAttackState", &UCPP_AttackComponent::execGetCurrentAttackState },
		{ "ResetAttackState", &UCPP_AttackComponent::execResetAttackState },
		{ "ResetCombo", &UCPP_AttackComponent::execResetCombo },
		{ "SetCurrentAttackState", &UCPP_AttackComponent::execSetCurrentAttackState },
		{ "SpawnProjectile", &UCPP_AttackComponent::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_AttackComponent);
UClass* Z_Construct_UClass_UCPP_AttackComponent_NoRegister()
{
	return UCPP_AttackComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_AttackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_AttackComponent.h" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFlying_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackState_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttacks_MetaData[] = {
		{ "Category", "Combat|Attacks" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangedAttacks_MetaData[] = {
		{ "Category", "Combat|Attacks" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCount_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "CPP_AttackComponent" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoTargetRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoTargetAngle_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDirection_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTarget_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRotateToInputDirection_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnBreakDistance_MetaData[] = {
		{ "Category", "CPP_AttackComponent" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimFOV_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidget_MetaData[] = {
		{ "Category", "CombatUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdatedTargetDelegate_MetaData[] = {
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLockOnTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLockOnTarget_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CPP_AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRange;
	static void NewProp_bIsFlying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFlying;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeAttacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeAttacks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangedAttacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RangedAttacks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoTargetRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoTargetAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static void NewProp_bHasTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTarget;
	static void NewProp_bCanRotateToInputDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRotateToInputDirection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LockOnBreakDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairWidget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdatedTargetDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentLockOnTargetActor;
	static void NewProp_bHasLockOnTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLockOnTarget;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_AttackComponent_GetCurrentAttackState, "GetCurrentAttackState" }, // 2764174548
		{ &Z_Construct_UFunction_UCPP_AttackComponent_ResetAttackState, "ResetAttackState" }, // 3687323576
		{ &Z_Construct_UFunction_UCPP_AttackComponent_ResetCombo, "ResetCombo" }, // 3254253862
		{ &Z_Construct_UFunction_UCPP_AttackComponent_SetCurrentAttackState, "SetCurrentAttackState" }, // 1636456581
		{ &Z_Construct_UFunction_UCPP_AttackComponent_SpawnProjectile, "SpawnProjectile" }, // 1774704543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_AttackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, Character), Z_Construct_UClass_ACPP_TestCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentRange = { "CurrentRange", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, CurrentRange), Z_Construct_UEnum_Team4_EAttackRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRange_MetaData), NewProp_CurrentRange_MetaData) }; // 2408776091
void Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsFlying_SetBit(void* Obj)
{
	((UCPP_AttackComponent*)Obj)->bIsFlying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsFlying = { "bIsFlying", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_AttackComponent), &Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsFlying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFlying_MetaData), NewProp_bIsFlying_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AttackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AttackState = { "AttackState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, AttackState), Z_Construct_UEnum_Team4_EAttackState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackState_MetaData), NewProp_AttackState_MetaData) }; // 1787572842
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_MeleeAttacks_Inner = { "MeleeAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(0, nullptr) }; // 4042316160
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_MeleeAttacks = { "MeleeAttacks", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, MeleeAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttacks_MetaData), NewProp_MeleeAttacks_MetaData) }; // 4042316160
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_RangedAttacks_Inner = { "RangedAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttack, METADATA_PARAMS(0, nullptr) }; // 4042316160
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_RangedAttacks = { "RangedAttacks", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, RangedAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangedAttacks_MetaData), NewProp_RangedAttacks_MetaData) }; // 4042316160
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, ComboCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCount_MetaData), NewProp_ComboCount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_Projectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AutoTargetRange = { "AutoTargetRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, AutoTargetRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoTargetRange_MetaData), NewProp_AutoTargetRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AutoTargetAngle = { "AutoTargetAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, AutoTargetAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoTargetAngle_MetaData), NewProp_AutoTargetAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AttackDirection = { "AttackDirection", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, AttackDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDirection_MetaData), NewProp_AttackDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, CurrentTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
void Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasTarget_SetBit(void* Obj)
{
	((UCPP_AttackComponent*)Obj)->bHasTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasTarget = { "bHasTarget", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_AttackComponent), &Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTarget_MetaData), NewProp_bHasTarget_MetaData) };
void Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bCanRotateToInputDirection_SetBit(void* Obj)
{
	((UCPP_AttackComponent*)Obj)->bCanRotateToInputDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bCanRotateToInputDirection = { "bCanRotateToInputDirection", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_AttackComponent), &Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bCanRotateToInputDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRotateToInputDirection_MetaData), NewProp_bCanRotateToInputDirection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_LockOnBreakDistance = { "LockOnBreakDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, LockOnBreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnBreakDistance_MetaData), NewProp_LockOnBreakDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AimFOV = { "AimFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, AimFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimFOV_MetaData), NewProp_AimFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, DefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFOV_MetaData), NewProp_DefaultFOV_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CrosshairWidget = { "CrosshairWidget", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, CrosshairWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairWidget_MetaData), NewProp_CrosshairWidget_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_OnUpdatedTargetDelegate = { "OnUpdatedTargetDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, OnUpdatedTargetDelegate), Z_Construct_USparseDelegateFunction_Team4_OnUpdatedTargetSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdatedTargetDelegate_MetaData), NewProp_OnUpdatedTargetDelegate_MetaData) }; // 1538656488
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentLockOnTargetActor = { "CurrentLockOnTargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_AttackComponent, CurrentLockOnTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLockOnTargetActor_MetaData), NewProp_CurrentLockOnTargetActor_MetaData) };
void Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasLockOnTarget_SetBit(void* Obj)
{
	((UCPP_AttackComponent*)Obj)->bHasLockOnTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasLockOnTarget = { "bHasLockOnTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_AttackComponent), &Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasLockOnTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLockOnTarget_MetaData), NewProp_bHasLockOnTarget_MetaData) };
void Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((UCPP_AttackComponent*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_AttackComponent), &Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_AttackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsFlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AttackState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AttackState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_MeleeAttacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_MeleeAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_RangedAttacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_RangedAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_ComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AutoTargetRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AutoTargetAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AttackDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bCanRotateToInputDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_LockOnBreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_AimFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_DefaultFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CrosshairWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_OnUpdatedTargetDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_CurrentLockOnTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bHasLockOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_AttackComponent_Statics::NewProp_bIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_AttackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_AttackComponent_Statics::ClassParams = {
	&UCPP_AttackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_AttackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttackComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_AttackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_AttackComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_AttackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_AttackComponent.OuterSingleton, Z_Construct_UClass_UCPP_AttackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_AttackComponent.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UCPP_AttackComponent>()
{
	return UCPP_AttackComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_AttackComponent);
UCPP_AttackComponent::~UCPP_AttackComponent() {}
// End Class UCPP_AttackComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttackComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_AttackComponent, UCPP_AttackComponent::StaticClass, TEXT("UCPP_AttackComponent"), &Z_Registration_Info_UClass_UCPP_AttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_AttackComponent), 754155078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttackComponent_h_4090602695(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_AttackComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
