// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/BaseUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserWidget() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/BaseUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "ViewSelection__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FViewSelection_DelegateWrapper(const FMulticastScriptDelegate& ViewSelection)
{
	ViewSelection.ProcessMulticastDelegate<UObject>(NULL);
}
	void UBaseUserWidget::StaticRegisterNativesUBaseUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUserWidget);
	UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister()
	{
		return UBaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameHUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseUserWidget.h" },
		{ "ModuleRelativePath", "Public/BaseUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidget, gameModeBase), Z_Construct_UClass_AAtlantisGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_gameModeBase_MetaData), Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_gameModeBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InGameHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InGameHUD = { "InGameHUD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidget, InGameHUD), Z_Construct_UClass_AInGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InGameHUD_MetaData), Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InGameHUD_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_gameModeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InGameHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams = {
		&UBaseUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseUserWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton, Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UBaseUserWidget>()
	{
		return UBaseUserWidget::StaticClass();
	}
	UBaseUserWidget::UBaseUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUserWidget);
	UBaseUserWidget::~UBaseUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_BaseUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_BaseUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUserWidget, UBaseUserWidget::StaticClass, TEXT("UBaseUserWidget"), &Z_Registration_Info_UClass_UBaseUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUserWidget), 2997740340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_BaseUserWidget_h_3797964639(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_BaseUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_BaseUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS