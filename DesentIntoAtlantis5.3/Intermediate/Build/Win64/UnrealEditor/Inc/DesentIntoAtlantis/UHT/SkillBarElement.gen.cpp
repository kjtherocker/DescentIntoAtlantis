// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SkillBarElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBarElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBarElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBarElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void USkillBarElement::StaticRegisterNativesUSkillBarElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillBarElement);
	UClass* Z_Construct_UClass_USkillBarElement_NoRegister()
	{
		return USkillBarElement::StaticClass();
	}
	struct Z_Construct_UClass_USkillBarElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillCost_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_BackgroundHighlight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_BackgroundHighlight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillBarElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBarElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkillBarElement.h" },
		{ "ModuleRelativePath", "Public/SkillBarElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillBarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillIcon = { "SkillIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillBarElement, SkillIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillIcon_MetaData), Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillIcon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillBarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillBarElement, SkillName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillName_MetaData), Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillCost_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillBarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillCost = { "SkillCost", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillBarElement, SkillCost), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillCost_MetaData), Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillBarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillBarElement_Statics::NewProp_BW_BackgroundHighlight = { "BW_BackgroundHighlight", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillBarElement, BW_BackgroundHighlight), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData), Z_Construct_UClass_USkillBarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillBarElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBarElement_Statics::NewProp_SkillCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBarElement_Statics::NewProp_BW_BackgroundHighlight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillBarElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillBarElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillBarElement_Statics::ClassParams = {
		&USkillBarElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillBarElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillBarElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBarElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkillBarElement()
	{
		if (!Z_Registration_Info_UClass_USkillBarElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillBarElement.OuterSingleton, Z_Construct_UClass_USkillBarElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillBarElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillBarElement>()
	{
		return USkillBarElement::StaticClass();
	}
	USkillBarElement::USkillBarElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillBarElement);
	USkillBarElement::~USkillBarElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_SkillBarElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_SkillBarElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillBarElement, USkillBarElement::StaticClass, TEXT("USkillBarElement"), &Z_Registration_Info_UClass_USkillBarElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillBarElement), 2968431824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_SkillBarElement_h_2396320924(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_SkillBarElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_SkillBarElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
