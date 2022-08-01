// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatBackground.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatBackground() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatBackground_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatBackground();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UCombatBackground::StaticRegisterNativesUCombatBackground()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatBackground);
	UClass* Z_Construct_UClass_UCombatBackground_NoRegister()
	{
		return UCombatBackground::StaticClass();
	}
	struct Z_Construct_UClass_UCombatBackground_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatBackground_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatBackground_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatBackground.h" },
		{ "ModuleRelativePath", "Public/CombatBackground.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatBackground_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatBackground>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatBackground_Statics::ClassParams = {
		&UCombatBackground::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatBackground_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatBackground_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatBackground()
	{
		if (!Z_Registration_Info_UClass_UCombatBackground.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatBackground.OuterSingleton, Z_Construct_UClass_UCombatBackground_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatBackground.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatBackground>()
	{
		return UCombatBackground::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatBackground);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatBackground, UCombatBackground::StaticClass, TEXT("UCombatBackground"), &Z_Registration_Info_UClass_UCombatBackground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatBackground), 2211816204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatBackground_h_2168877555(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
