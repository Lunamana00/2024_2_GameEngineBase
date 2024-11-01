// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4/UDraggableCanvasWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDraggableCanvasWidget() {}

// Begin Cross Module References
TEAM4_API UClass* Z_Construct_UClass_UDraggableCanvasWidget();
TEAM4_API UClass* Z_Construct_UClass_UDraggableCanvasWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Team4();
// End Cross Module References

// Begin Class UDraggableCanvasWidget
void UDraggableCanvasWidget::StaticRegisterNativesUDraggableCanvasWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDraggableCanvasWidget);
UClass* Z_Construct_UClass_UDraggableCanvasWidget_NoRegister()
{
	return UDraggableCanvasWidget::StaticClass();
}
struct Z_Construct_UClass_UDraggableCanvasWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UDraggableCanvasWidget.h" },
		{ "ModuleRelativePath", "UDraggableCanvasWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDraggableCanvasWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDraggableCanvasWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Team4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableCanvasWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDraggableCanvasWidget_Statics::ClassParams = {
	&UDraggableCanvasWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableCanvasWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDraggableCanvasWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDraggableCanvasWidget()
{
	if (!Z_Registration_Info_UClass_UDraggableCanvasWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDraggableCanvasWidget.OuterSingleton, Z_Construct_UClass_UDraggableCanvasWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDraggableCanvasWidget.OuterSingleton;
}
template<> TEAM4_API UClass* StaticClass<UDraggableCanvasWidget>()
{
	return UDraggableCanvasWidget::StaticClass();
}
UDraggableCanvasWidget::UDraggableCanvasWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDraggableCanvasWidget);
UDraggableCanvasWidget::~UDraggableCanvasWidget() {}
// End Class UDraggableCanvasWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_UDraggableCanvasWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDraggableCanvasWidget, UDraggableCanvasWidget::StaticClass, TEXT("UDraggableCanvasWidget"), &Z_Registration_Info_UClass_UDraggableCanvasWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDraggableCanvasWidget), 2863686352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_UDraggableCanvasWidget_h_1535005431(TEXT("/Script/Team4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_UDraggableCanvasWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_2024_2_GameEngineBase_Team4_Source_Team4_UDraggableCanvasWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
