// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PressTurnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressTurnManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurnManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurnManager();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PressTurnReactions;
	static UEnum* PressTurnReactions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PressTurnReactions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PressTurnReactions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("PressTurnReactions"));
		}
		return Z_Registration_Info_UEnum_PressTurnReactions.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<PressTurnReactions>()
	{
		return PressTurnReactions_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::Enumerators[] = {
		{ "PressTurnReactions::Normal", (int64)PressTurnReactions::Normal },
		{ "PressTurnReactions::Weak", (int64)PressTurnReactions::Weak },
		{ "PressTurnReactions::Strong", (int64)PressTurnReactions::Strong },
		{ "PressTurnReactions::Dodge", (int64)PressTurnReactions::Dodge },
		{ "PressTurnReactions::Null", (int64)PressTurnReactions::Null },
		{ "PressTurnReactions::Pass", (int64)PressTurnReactions::Pass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "Dodge.Comment", "/**\n * \n */" },
		{ "Dodge.Name", "PressTurnReactions::Dodge" },
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
		{ "Normal.Comment", "/**\n * \n */" },
		{ "Normal.Name", "PressTurnReactions::Normal" },
		{ "Null.Comment", "/**\n * \n */" },
		{ "Null.Name", "PressTurnReactions::Null" },
		{ "Pass.Comment", "/**\n * \n */" },
		{ "Pass.Name", "PressTurnReactions::Pass" },
		{ "Strong.Comment", "/**\n * \n */" },
		{ "Strong.Name", "PressTurnReactions::Strong" },
		{ "Weak.Comment", "/**\n * \n */" },
		{ "Weak.Name", "PressTurnReactions::Weak" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"PressTurnReactions",
		"PressTurnReactions",
		Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions()
	{
		if (!Z_Registration_Info_UEnum_PressTurnReactions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PressTurnReactions.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_PressTurnReactions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PressTurnReactions.InnerSingleton;
	}
	void UPressTurn::StaticRegisterNativesUPressTurn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPressTurn);
	UClass* Z_Construct_UClass_UPressTurn_NoRegister()
	{
		return UPressTurn::StaticClass();
	}
	struct Z_Construct_UClass_UPressTurn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPressTurn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PressTurnManager.h" },
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPressTurn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPressTurn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPressTurn_Statics::ClassParams = {
		&UPressTurn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPressTurn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPressTurn()
	{
		if (!Z_Registration_Info_UClass_UPressTurn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPressTurn.OuterSingleton, Z_Construct_UClass_UPressTurn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPressTurn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPressTurn>()
	{
		return UPressTurn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPressTurn);
	void UPressTurnManager::StaticRegisterNativesUPressTurnManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPressTurnManager);
	UClass* Z_Construct_UClass_UPressTurnManager_NoRegister()
	{
		return UPressTurnManager::StaticClass();
	}
	struct Z_Construct_UClass_UPressTurnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPressTurnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PressTurnManager.h" },
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPressTurnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPressTurnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPressTurnManager_Statics::ClassParams = {
		&UPressTurnManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPressTurnManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPressTurnManager()
	{
		if (!Z_Registration_Info_UClass_UPressTurnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPressTurnManager.OuterSingleton, Z_Construct_UClass_UPressTurnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPressTurnManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPressTurnManager>()
	{
		return UPressTurnManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPressTurnManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::EnumInfo[] = {
		{ PressTurnReactions_StaticEnum, TEXT("PressTurnReactions"), &Z_Registration_Info_UEnum_PressTurnReactions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4042511307U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPressTurn, UPressTurn::StaticClass, TEXT("UPressTurn"), &Z_Registration_Info_UClass_UPressTurn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPressTurn), 927666036U) },
		{ Z_Construct_UClass_UPressTurnManager, UPressTurnManager::StaticClass, TEXT("UPressTurnManager"), &Z_Registration_Info_UClass_UPressTurnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPressTurnManager), 700807194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_3413158017(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
