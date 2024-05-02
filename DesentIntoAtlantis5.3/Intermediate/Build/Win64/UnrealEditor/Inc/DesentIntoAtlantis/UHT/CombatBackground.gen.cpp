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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatBackground();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatBackground_NoRegister();
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatBackground_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatBackground_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatBackground_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatBackground_Statics::Class_MetaDataParams)
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
	UCombatBackground::UCombatBackground(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatBackground);
	UCombatBackground::~UCombatBackground() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatBackground, UCombatBackground::StaticClass, TEXT("UCombatBackground"), &Z_Registration_Info_UClass_UCombatBackground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatBackground), 180824667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatBackground_h_627518538(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatBackground_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
