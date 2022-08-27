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
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillMenu_Statics::ClassParams = {
		&USkillMenu::StaticClass,
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
		{ Z_Construct_UClass_USkillMenu, USkillMenu::StaticClass, TEXT("USkillMenu"), &Z_Registration_Info_UClass_USkillMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillMenu), 2520897331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_2950694275(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
