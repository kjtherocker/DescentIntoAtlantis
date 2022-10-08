// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PartyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UPartyManager::StaticRegisterNativesUPartyManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyManager);
	UClass* Z_Construct_UClass_UPartyManager_NoRegister()
	{
		return UPartyManager::StaticClass();
	}
	struct Z_Construct_UClass_UPartyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PartyManager.h" },
		{ "ModuleRelativePath", "Public/PartyManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyManager_Statics::ClassParams = {
		&UPartyManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPartyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyManager()
	{
		if (!Z_Registration_Info_UClass_UPartyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyManager.OuterSingleton, Z_Construct_UClass_UPartyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPartyManager>()
	{
		return UPartyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyManager, UPartyManager::StaticClass, TEXT("UPartyManager"), &Z_Registration_Info_UClass_UPartyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyManager), 1086598743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_623042038(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
