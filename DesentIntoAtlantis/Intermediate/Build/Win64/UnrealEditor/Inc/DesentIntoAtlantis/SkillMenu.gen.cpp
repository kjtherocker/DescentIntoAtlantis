// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SkillMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillMenu() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillMenu_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillMenu();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	void USkillMenu::StaticRegisterNativesUSkillMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillMenu);
	UClass* Z_Construct_UClass_USkillMenu_NoRegister()
	{
		return USkillMenu::StaticClass();
	}
	struct Z_Construct_UClass_USkillMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_VerticalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_VerticalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkillMenu.h" },
		{ "ModuleRelativePath", "Public/SkillMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillMenu_Statics::NewProp_BW_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillMenu_Statics::NewProp_BW_VerticalBox = { "BW_VerticalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillMenu, BW_VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillMenu_Statics::NewProp_BW_VerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenu_Statics::NewProp_BW_VerticalBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillMenu_Statics::NewProp_BW_VerticalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillMenu_Statics::ClassParams = {
		&USkillMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillMenu()
	{
		if (!Z_Registration_Info_UClass_USkillMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillMenu.OuterSingleton, Z_Construct_UClass_USkillMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillMenu.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillMenu>()
	{
		return USkillMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillMenu);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillMenu, USkillMenu::StaticClass, TEXT("USkillMenu"), &Z_Registration_Info_UClass_USkillMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillMenu), 869732967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_1866086412(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
