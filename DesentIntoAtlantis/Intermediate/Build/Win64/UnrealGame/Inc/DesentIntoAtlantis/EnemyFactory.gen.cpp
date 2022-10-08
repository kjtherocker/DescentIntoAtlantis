// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFactory() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyGroupData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyBestiaryData();
// End Cross Module References
	void UEnemyFactory::StaticRegisterNativesUEnemyFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyFactory);
	UClass* Z_Construct_UClass_UEnemyFactory_NoRegister()
	{
		return UEnemyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyFactory.h" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFactory_Statics::ClassParams = {
		&UEnemyFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnemyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyFactory()
	{
		if (!Z_Registration_Info_UClass_UEnemyFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyFactory.OuterSingleton, Z_Construct_UClass_UEnemyFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyFactory.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyFactory>()
	{
		return UEnemyFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFactory);

static_assert(std::is_polymorphic<FEnemyGroupData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEnemyGroupData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyGroupData;
class UScriptStruct* FEnemyGroupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyGroupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyGroupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyGroupData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EnemyGroupData"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyGroupData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FEnemyGroupData>()
{
	return FEnemyGroupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyGroupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyGroupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyGroupData, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1 = { "EnemyName1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyGroupData, EnemyName1), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2 = { "EnemyName2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyGroupData, EnemyName2), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3 = { "EnemyName3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyGroupData, EnemyName3), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EnemyGroupData",
		sizeof(FEnemyGroupData),
		alignof(FEnemyGroupData),
		Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyGroupData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyGroupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyGroupData.InnerSingleton, Z_Construct_UScriptStruct_FEnemyGroupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyGroupData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnemyBestiaryData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEnemyBestiaryData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyBestiaryData;
class UScriptStruct* FEnemyBestiaryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyBestiaryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyBestiaryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyBestiaryData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EnemyBestiaryData"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyBestiaryData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FEnemyBestiaryData>()
{
	return FEnemyBestiaryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyBestiaryData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EnemyBestiaryData",
		sizeof(FEnemyBestiaryData),
		alignof(FEnemyBestiaryData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyBestiaryData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyBestiaryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyBestiaryData.InnerSingleton, Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyBestiaryData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics::ScriptStructInfo[] = {
		{ FEnemyGroupData::StaticStruct, Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewStructOps, TEXT("EnemyGroupData"), &Z_Registration_Info_UScriptStruct_EnemyGroupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyGroupData), 2227243721U) },
		{ FEnemyBestiaryData::StaticStruct, Z_Construct_UScriptStruct_FEnemyBestiaryData_Statics::NewStructOps, TEXT("EnemyBestiaryData"), &Z_Registration_Info_UScriptStruct_EnemyBestiaryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyBestiaryData), 2930306837U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyFactory, UEnemyFactory::StaticClass, TEXT("UEnemyFactory"), &Z_Registration_Info_UClass_UEnemyFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyFactory), 2860614721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_2976092999(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
