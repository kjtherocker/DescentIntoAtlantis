// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/BaseUserWidgetMovingButtons.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserWidgetMovingButtons() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons_NoRegister();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UBaseUserWidgetMovingButtons::StaticRegisterNativesUBaseUserWidgetMovingButtons()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUserWidgetMovingButtons);
	UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons_NoRegister()
	{
		return UBaseUserWidgetMovingButtons::StaticClass();
	}
	struct Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MenuSelectionDelegates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuSelectionDelegates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuSelectionDelegates;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_menuSelections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_menuSelections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_menuSelections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseUserWidgetMovingButtons.h" },
		{ "ModuleRelativePath", "Public/BaseUserWidgetMovingButtons.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates_Inner = { "MenuSelectionDelegates", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2159621065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseUserWidgetMovingButtons.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates = { "MenuSelectionDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidgetMovingButtons, MenuSelectionDelegates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates_MetaData), Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates_MetaData) }; // 2159621065
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections_Inner = { "menuSelections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseUserWidgetMovingButtons.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections = { "menuSelections", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidgetMovingButtons, menuSelections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections_MetaData), Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_MenuSelectionDelegates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::NewProp_menuSelections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUserWidgetMovingButtons>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::ClassParams = {
		&UBaseUserWidgetMovingButtons::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons()
	{
		if (!Z_Registration_Info_UClass_UBaseUserWidgetMovingButtons.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUserWidgetMovingButtons.OuterSingleton, Z_Construct_UClass_UBaseUserWidgetMovingButtons_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseUserWidgetMovingButtons.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UBaseUserWidgetMovingButtons>()
	{
		return UBaseUserWidgetMovingButtons::StaticClass();
	}
	UBaseUserWidgetMovingButtons::UBaseUserWidgetMovingButtons(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUserWidgetMovingButtons);
	UBaseUserWidgetMovingButtons::~UBaseUserWidgetMovingButtons() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BaseUserWidgetMovingButtons_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BaseUserWidgetMovingButtons_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUserWidgetMovingButtons, UBaseUserWidgetMovingButtons::StaticClass, TEXT("UBaseUserWidgetMovingButtons"), &Z_Registration_Info_UClass_UBaseUserWidgetMovingButtons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUserWidgetMovingButtons), 1548455716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BaseUserWidgetMovingButtons_h_1825320542(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BaseUserWidgetMovingButtons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BaseUserWidgetMovingButtons_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
