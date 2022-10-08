// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UCombatManager::StaticRegisterNativesUCombatManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatManager);
	UClass* Z_Construct_UClass_UCombatManager_NoRegister()
	{
		return UCombatManager::StaticClass();
	}
	struct Z_Construct_UClass_UCombatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatManager.h" },
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatManager_Statics::ClassParams = {
		&UCombatManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatManager()
	{
		if (!Z_Registration_Info_UClass_UCombatManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatManager.OuterSingleton, Z_Construct_UClass_UCombatManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatManager>()
	{
		return UCombatManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatManager, UCombatManager::StaticClass, TEXT("UCombatManager"), &Z_Registration_Info_UClass_UCombatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatManager), 3824021061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_377819259(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
