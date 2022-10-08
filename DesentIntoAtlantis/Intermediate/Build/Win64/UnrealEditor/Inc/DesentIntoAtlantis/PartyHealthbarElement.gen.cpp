// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PartyHealthbarElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyHealthbarElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UPartyHealthbarElement::StaticRegisterNativesUPartyHealthbarElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyHealthbarElement);
	UClass* Z_Construct_UClass_UPartyHealthbarElement_NoRegister()
	{
		return UPartyHealthbarElement::StaticClass();
	}
	struct Z_Construct_UClass_UPartyHealthbarElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Health_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_ManaText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_ManaText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_CharacterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_CharacterPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_BackgroundHighlight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_BackgroundHighlight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyHealthbarElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PartyHealthbarElement.h" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana = { "BW_Mana", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_Mana), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health = { "BW_Health", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText = { "BW_ManaText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_ManaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText = { "BW_HealthText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait = { "BW_CharacterPortrait", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_CharacterPortrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight = { "BW_BackgroundHighlight", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_BackgroundHighlight), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyHealthbarElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyHealthbarElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyHealthbarElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyHealthbarElement_Statics::ClassParams = {
		&UPartyHealthbarElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartyHealthbarElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyHealthbarElement()
	{
		if (!Z_Registration_Info_UClass_UPartyHealthbarElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyHealthbarElement.OuterSingleton, Z_Construct_UClass_UPartyHealthbarElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyHealthbarElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPartyHealthbarElement>()
	{
		return UPartyHealthbarElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyHealthbarElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyHealthbarElement, UPartyHealthbarElement::StaticClass, TEXT("UPartyHealthbarElement"), &Z_Registration_Info_UClass_UPartyHealthbarElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyHealthbarElement), 1663979180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_262207367(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
