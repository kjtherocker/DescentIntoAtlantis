// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatClass() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UCombatClass::StaticRegisterNativesUCombatClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatClass);
	UClass* Z_Construct_UClass_UCombatClass_NoRegister()
	{
		return UCombatClass::StaticClass();
	}
	struct Z_Construct_UClass_UCombatClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatClass.h" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatClass_Statics::ClassParams = {
		&UCombatClass::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatClass()
	{
		if (!Z_Registration_Info_UClass_UCombatClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatClass.OuterSingleton, Z_Construct_UClass_UCombatClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatClass.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatClass>()
	{
		return UCombatClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatClass);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatClass, UCombatClass::StaticClass, TEXT("UCombatClass"), &Z_Registration_Info_UClass_UCombatClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatClass), 790360905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_2419484815(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
