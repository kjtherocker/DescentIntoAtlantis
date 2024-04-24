// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/LevelupPanelElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelupPanelElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelupPanelElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelupPanelElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void ULevelupPanelElement::StaticRegisterNativesULevelupPanelElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelupPanelElement);
	UClass* Z_Construct_UClass_ULevelupPanelElement_NoRegister()
	{
		return ULevelupPanelElement::StaticClass();
	}
	struct Z_Construct_UClass_ULevelupPanelElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_PreviousClassText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_PreviousClassText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_NextClassText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_NextClassText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_AbilityModifierName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_AbilityModifierName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelupPanelElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelupPanelElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LevelupPanelElement.h" },
		{ "ModuleRelativePath", "Public/LevelupPanelElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_PreviousClassText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelupPanelElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelupPanelElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_PreviousClassText = { "BW_PreviousClassText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelupPanelElement, BW_PreviousClassText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_PreviousClassText_MetaData), Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_PreviousClassText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_NextClassText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelupPanelElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelupPanelElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_NextClassText = { "BW_NextClassText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelupPanelElement, BW_NextClassText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_NextClassText_MetaData), Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_NextClassText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_AbilityModifierName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelupPanelElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelupPanelElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_AbilityModifierName = { "BW_AbilityModifierName", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelupPanelElement, BW_AbilityModifierName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_AbilityModifierName_MetaData), Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_AbilityModifierName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelupPanelElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_PreviousClassText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_NextClassText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelupPanelElement_Statics::NewProp_BW_AbilityModifierName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelupPanelElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelupPanelElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelupPanelElement_Statics::ClassParams = {
		&ULevelupPanelElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelupPanelElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelupPanelElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelupPanelElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelupPanelElement()
	{
		if (!Z_Registration_Info_UClass_ULevelupPanelElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelupPanelElement.OuterSingleton, Z_Construct_UClass_ULevelupPanelElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelupPanelElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ULevelupPanelElement>()
	{
		return ULevelupPanelElement::StaticClass();
	}
	ULevelupPanelElement::ULevelupPanelElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelupPanelElement);
	ULevelupPanelElement::~ULevelupPanelElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_LevelupPanelElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_LevelupPanelElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelupPanelElement, ULevelupPanelElement::StaticClass, TEXT("ULevelupPanelElement"), &Z_Registration_Info_UClass_ULevelupPanelElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelupPanelElement), 705372862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_LevelupPanelElement_h_2373704088(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_LevelupPanelElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_LevelupPanelElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
