// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PartyStatusHealthbar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyStatusHealthbar() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyStatusHealthbar_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyStatusHealthbar();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UPartyStatusHealthbar::StaticRegisterNativesUPartyStatusHealthbar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyStatusHealthbar);
	UClass* Z_Construct_UClass_UPartyStatusHealthbar_NoRegister()
	{
		return UPartyStatusHealthbar::StaticClass();
	}
	struct Z_Construct_UClass_UPartyStatusHealthbar_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyStatusHealthbar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyStatusHealthbar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PartyStatusHealthbar.h" },
		{ "ModuleRelativePath", "Public/PartyStatusHealthbar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Mana_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyStatusHealthbar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyStatusHealthbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Mana = { "BW_Mana", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyStatusHealthbar, BW_Mana), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Mana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyStatusHealthbar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyStatusHealthbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Health = { "BW_Health", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyStatusHealthbar, BW_Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_ManaText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyStatusHealthbar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyStatusHealthbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_ManaText = { "BW_ManaText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyStatusHealthbar, BW_ManaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_ManaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_ManaText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyStatusHealthbar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyStatusHealthbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_HealthText = { "BW_HealthText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyStatusHealthbar, BW_HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_HealthText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyStatusHealthbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_ManaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyStatusHealthbar_Statics::NewProp_BW_HealthText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyStatusHealthbar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyStatusHealthbar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyStatusHealthbar_Statics::ClassParams = {
		&UPartyStatusHealthbar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartyStatusHealthbar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyStatusHealthbar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPartyStatusHealthbar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyStatusHealthbar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyStatusHealthbar()
	{
		if (!Z_Registration_Info_UClass_UPartyStatusHealthbar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyStatusHealthbar.OuterSingleton, Z_Construct_UClass_UPartyStatusHealthbar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyStatusHealthbar.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPartyStatusHealthbar>()
	{
		return UPartyStatusHealthbar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyStatusHealthbar);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyStatusHealthbar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyStatusHealthbar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyStatusHealthbar, UPartyStatusHealthbar::StaticClass, TEXT("UPartyStatusHealthbar"), &Z_Registration_Info_UClass_UPartyStatusHealthbar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyStatusHealthbar), 911416872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyStatusHealthbar_h_2222860930(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyStatusHealthbar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyStatusHealthbar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
