// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/CPP_TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_TestCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_ACPP_MeleeWeapon_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_ACPP_TestCharacter();
TEAM4_API UClass* Z_Construct_UClass_ACPP_TestCharacter_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttackComponent_NoRegister();
TEAM4_API UClass* Z_Construct_UClass_UCPP_AttributeForPlayerComponent_NoRegister();
TEAM4_API UEnum* Z_Construct_UEnum_Team4_ECharacterState();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class ACPP_TestCharacter Function Die
struct Z_Construct_UFunction_ACPP_TestCharacter_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function Die

// Begin Class ACPP_TestCharacter Function GetAttackComponent
struct Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics
{
	struct CPP_TestCharacter_eventGetAttackComponent_Parms
	{
		UCPP_AttackComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventGetAttackComponent_Parms, ReturnValue), Z_Construct_UClass_UCPP_AttackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "GetAttackComponent", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::CPP_TestCharacter_eventGetAttackComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::CPP_TestCharacter_eventGetAttackComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execGetAttackComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCPP_AttackComponent**)Z_Param__Result=P_THIS->GetAttackComponent();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function GetAttackComponent

// Begin Class ACPP_TestCharacter Function GetAttribute
struct Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics
{
	struct CPP_TestCharacter_eventGetAttribute_Parms
	{
		UCPP_AttributeForPlayerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventGetAttribute_Parms, ReturnValue), Z_Construct_UClass_UCPP_AttributeForPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::CPP_TestCharacter_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::CPP_TestCharacter_eventGetAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execGetAttribute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCPP_AttributeForPlayerComponent**)Z_Param__Result=P_THIS->GetAttribute();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function GetAttribute

// Begin Class ACPP_TestCharacter Function GetCurrentDodgeCooldown
struct Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics
{
	struct CPP_TestCharacter_eventGetCurrentDodgeCooldown_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dodge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Jong Add\n" },
#endif
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jong Add" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventGetCurrentDodgeCooldown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "GetCurrentDodgeCooldown", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::CPP_TestCharacter_eventGetCurrentDodgeCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::CPP_TestCharacter_eventGetCurrentDodgeCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execGetCurrentDodgeCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentDodgeCooldown();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function GetCurrentDodgeCooldown

// Begin Class ACPP_TestCharacter Function GetState
struct Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics
{
	struct CPP_TestCharacter_eventGetState_Parms
	{
		ECharacterState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Team4_ECharacterState, METADATA_PARAMS(0, nullptr) }; // 3923328704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::CPP_TestCharacter_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::CPP_TestCharacter_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECharacterState*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function GetState

// Begin Class ACPP_TestCharacter Function GetWeapon
struct Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics
{
	struct CPP_TestCharacter_eventGetWeapon_Parms
	{
		ACPP_MeleeWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_ACPP_MeleeWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "GetWeapon", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::CPP_TestCharacter_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::CPP_TestCharacter_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execGetWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACPP_MeleeWeapon**)Z_Param__Result=P_THIS->GetWeapon();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function GetWeapon

// Begin Class ACPP_TestCharacter Function Respawn
struct Z_Construct_UFunction_ACPP_TestCharacter_Respawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "Respawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_Respawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_Respawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_Respawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_Respawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Respawn();
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function Respawn

// Begin Class ACPP_TestCharacter Function SetAllowPhysicsRotationDuringAnimRootMotion
struct Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics
{
	struct CPP_TestCharacter_eventSetAllowPhysicsRotationDuringAnimRootMotion_Parms
	{
		bool bAllowRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::NewProp_bAllowRotation_SetBit(void* Obj)
{
	((CPP_TestCharacter_eventSetAllowPhysicsRotationDuringAnimRootMotion_Parms*)Obj)->bAllowRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::NewProp_bAllowRotation = { "bAllowRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPP_TestCharacter_eventSetAllowPhysicsRotationDuringAnimRootMotion_Parms), &Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::NewProp_bAllowRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::NewProp_bAllowRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "SetAllowPhysicsRotationDuringAnimRootMotion", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::CPP_TestCharacter_eventSetAllowPhysicsRotationDuringAnimRootMotion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::CPP_TestCharacter_eventSetAllowPhysicsRotationDuringAnimRootMotion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execSetAllowPhysicsRotationDuringAnimRootMotion)
{
	P_GET_UBOOL(Z_Param_bAllowRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowPhysicsRotationDuringAnimRootMotion(Z_Param_bAllowRotation);
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function SetAllowPhysicsRotationDuringAnimRootMotion

// Begin Class ACPP_TestCharacter Function SetState
struct Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics
{
	struct CPP_TestCharacter_eventSetState_Parms
	{
		ECharacterState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventSetState_Parms, State), Z_Construct_UEnum_Team4_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3923328704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::CPP_TestCharacter_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::CPP_TestCharacter_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execSetState)
{
	P_GET_ENUM(ECharacterState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(ECharacterState(Z_Param_State));
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function SetState

// Begin Class ACPP_TestCharacter Function SetWeaponCollisionEnabled
struct Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics
{
	struct CPP_TestCharacter_eventSetWeaponCollisionEnabled_Parms
	{
		TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_TestCharacter_eventSetWeaponCollisionEnabled_Parms, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(0, nullptr) }; // 2362857466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::NewProp_CollisionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "SetWeaponCollisionEnabled", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::CPP_TestCharacter_eventSetWeaponCollisionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::CPP_TestCharacter_eventSetWeaponCollisionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execSetWeaponCollisionEnabled)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_CollisionEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponCollisionEnabled(ECollisionEnabled::Type(Z_Param_CollisionEnabled));
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function SetWeaponCollisionEnabled

// Begin Class ACPP_TestCharacter Function SwitchWeaponSocket
struct Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics
{
	struct CPP_TestCharacter_eventSwitchWeaponSocket_Parms
	{
		bool bIsRight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::NewProp_bIsRight_SetBit(void* Obj)
{
	((CPP_TestCharacter_eventSwitchWeaponSocket_Parms*)Obj)->bIsRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::NewProp_bIsRight = { "bIsRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPP_TestCharacter_eventSwitchWeaponSocket_Parms), &Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::NewProp_bIsRight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::NewProp_bIsRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_TestCharacter, nullptr, "SwitchWeaponSocket", nullptr, nullptr, Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::CPP_TestCharacter_eventSwitchWeaponSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::CPP_TestCharacter_eventSwitchWeaponSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_TestCharacter::execSwitchWeaponSocket)
{
	P_GET_UBOOL(Z_Param_bIsRight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchWeaponSocket(Z_Param_bIsRight);
	P_NATIVE_END;
}
// End Class ACPP_TestCharacter Function SwitchWeaponSocket

// Begin Class ACPP_TestCharacter
void ACPP_TestCharacter::StaticRegisterNativesACPP_TestCharacter()
{
	UClass* Class = ACPP_TestCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Die", &ACPP_TestCharacter::execDie },
		{ "GetAttackComponent", &ACPP_TestCharacter::execGetAttackComponent },
		{ "GetAttribute", &ACPP_TestCharacter::execGetAttribute },
		{ "GetCurrentDodgeCooldown", &ACPP_TestCharacter::execGetCurrentDodgeCooldown },
		{ "GetState", &ACPP_TestCharacter::execGetState },
		{ "GetWeapon", &ACPP_TestCharacter::execGetWeapon },
		{ "Respawn", &ACPP_TestCharacter::execRespawn },
		{ "SetAllowPhysicsRotationDuringAnimRootMotion", &ACPP_TestCharacter::execSetAllowPhysicsRotationDuringAnimRootMotion },
		{ "SetState", &ACPP_TestCharacter::execSetState },
		{ "SetWeaponCollisionEnabled", &ACPP_TestCharacter::execSetWeaponCollisionEnabled },
		{ "SwitchWeaponSocket", &ACPP_TestCharacter::execSwitchWeaponSocket },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_TestCharacter);
UClass* Z_Construct_UClass_ACPP_TestCharacter_NoRegister()
{
	return ACPP_TestCharacter::StaticClass();
}
struct Z_Construct_UClass_ACPP_TestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_TestCharacter.h" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestoreHealthPerSecond_MetaData[] = {
		{ "Category", "CPP_TestCharacter" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDodgeMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDodgeMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDodgeMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardDodgeMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeCooldown_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeSpeed_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Attribute" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartJumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndJumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputVector_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "CPP_TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestoreHealthPerSecond;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardDodgeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDodgeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDodgeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackwardDodgeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalAttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartJumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndJumpAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInputVector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_TestCharacter_Die, "Die" }, // 2274118153
		{ &Z_Construct_UFunction_ACPP_TestCharacter_GetAttackComponent, "GetAttackComponent" }, // 858749739
		{ &Z_Construct_UFunction_ACPP_TestCharacter_GetAttribute, "GetAttribute" }, // 3958892206
		{ &Z_Construct_UFunction_ACPP_TestCharacter_GetCurrentDodgeCooldown, "GetCurrentDodgeCooldown" }, // 1483392550
		{ &Z_Construct_UFunction_ACPP_TestCharacter_GetState, "GetState" }, // 1218469712
		{ &Z_Construct_UFunction_ACPP_TestCharacter_GetWeapon, "GetWeapon" }, // 4153410302
		{ &Z_Construct_UFunction_ACPP_TestCharacter_Respawn, "Respawn" }, // 1508064966
		{ &Z_Construct_UFunction_ACPP_TestCharacter_SetAllowPhysicsRotationDuringAnimRootMotion, "SetAllowPhysicsRotationDuringAnimRootMotion" }, // 2351372345
		{ &Z_Construct_UFunction_ACPP_TestCharacter_SetState, "SetState" }, // 3457210118
		{ &Z_Construct_UFunction_ACPP_TestCharacter_SetWeaponCollisionEnabled, "SetWeaponCollisionEnabled" }, // 1601565823
		{ &Z_Construct_UFunction_ACPP_TestCharacter_SwitchWeaponSocket, "SwitchWeaponSocket" }, // 4037847691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_TestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DodgeAction = { "DodgeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, DodgeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeAction_MetaData), NewProp_DodgeAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_RestoreHealthPerSecond = { "RestoreHealthPerSecond", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, RestoreHealthPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestoreHealthPerSecond_MetaData), NewProp_RestoreHealthPerSecond_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_ForwardDodgeMontage = { "ForwardDodgeMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, ForwardDodgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardDodgeMontage_MetaData), NewProp_ForwardDodgeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_RightDodgeMontage = { "RightDodgeMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, RightDodgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDodgeMontage_MetaData), NewProp_RightDodgeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_LeftDodgeMontage = { "LeftDodgeMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, LeftDodgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDodgeMontage_MetaData), NewProp_LeftDodgeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_BackwardDodgeMontage = { "BackwardDodgeMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, BackwardDodgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardDodgeMontage_MetaData), NewProp_BackwardDodgeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DodgeCooldown = { "DodgeCooldown", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, DodgeCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeCooldown_MetaData), NewProp_DodgeCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DodgeSpeed = { "DodgeSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, DodgeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeSpeed_MetaData), NewProp_DodgeSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, Attribute), Z_Construct_UClass_UCPP_AttributeForPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_AttackComponent = { "AttackComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, AttackComponent), Z_Construct_UClass_UCPP_AttackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackComponent_MetaData), NewProp_AttackComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_MeleeWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, Weapon), Z_Construct_UClass_ACPP_MeleeWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_NormalAttackAction = { "NormalAttackAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, NormalAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAttackAction_MetaData), NewProp_NormalAttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAction_MetaData), NewProp_AimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_LockOnAction = { "LockOnAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, LockOnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnAction_MetaData), NewProp_LockOnAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_SkillAction = { "SkillAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, SkillAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillAction_MetaData), NewProp_SkillAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_StartJumpAction = { "StartJumpAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, StartJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartJumpAction_MetaData), NewProp_StartJumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_EndJumpAction = { "EndJumpAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, EndJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndJumpAction_MetaData), NewProp_EndJumpAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_MovementInputVector = { "MovementInputVector", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, MovementInputVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputVector_MetaData), NewProp_MovementInputVector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComponent_MetaData), NewProp_MotionWarpingComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_TestCharacter, CharacterState), Z_Construct_UEnum_Team4_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterState_MetaData), NewProp_CharacterState_MetaData) }; // 3923328704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_TestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DodgeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_RestoreHealthPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_ForwardDodgeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_RightDodgeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_LeftDodgeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_BackwardDodgeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DodgeCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_DodgeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_AttackComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_NormalAttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_AimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_LockOnAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_SkillAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_StartJumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_EndJumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_MovementInputVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_MotionWarpingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_CharacterState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TestCharacter_Statics::NewProp_CharacterState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TestCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_TestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_TestCharacter_Statics::ClassParams = {
	&ACPP_TestCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_TestCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TestCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_TestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_TestCharacter()
{
	if (!Z_Registration_Info_UClass_ACPP_TestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_TestCharacter.OuterSingleton, Z_Construct_UClass_ACPP_TestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_TestCharacter.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<ACPP_TestCharacter>()
{
	return ACPP_TestCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_TestCharacter);
ACPP_TestCharacter::~ACPP_TestCharacter() {}
// End Class ACPP_TestCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_TestCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_TestCharacter, ACPP_TestCharacter::StaticClass, TEXT("ACPP_TestCharacter"), &Z_Registration_Info_UClass_ACPP_TestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_TestCharacter), 326075805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_TestCharacter_h_853113358(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Team4_Source_Team4_CPP_TestCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
