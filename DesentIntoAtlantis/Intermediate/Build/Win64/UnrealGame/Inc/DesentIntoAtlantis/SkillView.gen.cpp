// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SkillView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBarElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	void USkillView::StaticRegisterNativesUSkillView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillView);
	UClass* Z_Construct_UClass_USkillView_NoRegister()
	{
		return USkillView::StaticClass();
	}
	struct Z_Construct_UClass_USkillView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentActivePartyMember_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentActivePartyMember;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillBarElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillBarElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_skillBarElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_CharacterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_SkillName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_SkillName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_SkillDescription_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_SkillDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_VerticalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_VerticalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkillView.h" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_currentActivePartyMember_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_currentActivePartyMember = { "currentActivePartyMember", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, currentActivePartyMember), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_currentActivePartyMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_currentActivePartyMember_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements_Inner = { "skillBarElements", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBarElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements = { "skillBarElements", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, skillBarElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_BW_CharacterName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_BW_CharacterName = { "BW_CharacterName", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, BW_CharacterName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_BW_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_BW_CharacterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_BW_ClassName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_BW_ClassName = { "BW_ClassName", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, BW_ClassName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_BW_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_BW_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillName = { "BW_SkillName", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, BW_SkillName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillDescription = { "BW_SkillDescription", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, BW_SkillDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillView_Statics::NewProp_BW_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillView_Statics::NewProp_BW_VerticalBox = { "BW_VerticalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillView, BW_VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::NewProp_BW_VerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::NewProp_BW_VerticalBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_currentActivePartyMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_skillBarElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_BW_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_BW_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_BW_SkillDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillView_Statics::NewProp_BW_VerticalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillView_Statics::ClassParams = {
		&USkillView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillView()
	{
		if (!Z_Registration_Info_UClass_USkillView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillView.OuterSingleton, Z_Construct_UClass_USkillView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillView>()
	{
		return USkillView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillView, USkillView::StaticClass, TEXT("USkillView"), &Z_Registration_Info_UClass_USkillView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillView), 3866510739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillView_h_3597768488(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
