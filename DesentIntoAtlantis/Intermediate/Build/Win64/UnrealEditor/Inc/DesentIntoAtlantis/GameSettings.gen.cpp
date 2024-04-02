// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/GameSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettings() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGameSettings_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGameSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UGameSettings::StaticRegisterNativesUGameSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSettings);
	UClass* Z_Construct_UClass_UGameSettings_NoRegister()
	{
		return UGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameSettings.h" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettings_Statics::ClassParams = {
		&UGameSettings::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettings()
	{
		if (!Z_Registration_Info_UClass_UGameSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettings.OuterSingleton, Z_Construct_UClass_UGameSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSettings.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGameSettings>()
	{
		return UGameSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettings);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettings, UGameSettings::StaticClass, TEXT("UGameSettings"), &Z_Registration_Info_UClass_UGameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettings), 3876843919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameSettings_h_1056033232(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
