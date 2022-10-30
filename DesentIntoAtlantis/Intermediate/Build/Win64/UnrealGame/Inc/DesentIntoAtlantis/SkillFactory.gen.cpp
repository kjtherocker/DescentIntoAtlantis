// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SkillFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillFactory() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillsData();
// End Cross Module References
	void USkillFactory::StaticRegisterNativesUSkillFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillFactory);
	UClass* Z_Construct_UClass_USkillFactory_NoRegister()
	{
		return USkillFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkillFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_allSkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allSkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_allSkills;
		static const UECodeGen_Private::FStructPropertyParams NewProp_attackSkillsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackSkillsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_attackSkillsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_healSkillsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_healSkillsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_healSkillsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_buffSkillsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buffSkillsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buffSkillsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debuffData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debuffData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_debuffData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_skillMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_skillMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkillFactory.h" },
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills_Inner = { "allSkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills = { "allSkills", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillFactory, allSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData_Inner = { "attackSkillsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData = { "attackSkillsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillFactory, attackSkillsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData_Inner = { "healSkillsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData = { "healSkillsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillFactory, healSkillsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData_Inner = { "buffSkillsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData = { "buffSkillsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillFactory, buffSkillsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData_Inner = { "debuffData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData = { "debuffData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillFactory, debuffData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_ValueProp = { "skillMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_Key_KeyProp = { "skillMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactory.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap = { "skillMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillFactory, skillMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_allSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_attackSkillsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_healSkillsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_buffSkillsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_debuffData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactory_Statics::NewProp_skillMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillFactory_Statics::ClassParams = {
		&USkillFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillFactory()
	{
		if (!Z_Registration_Info_UClass_USkillFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillFactory.OuterSingleton, Z_Construct_UClass_USkillFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillFactory.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillFactory>()
	{
		return USkillFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillFactory);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillFactory, USkillFactory::StaticClass, TEXT("USkillFactory"), &Z_Registration_Info_UClass_USkillFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillFactory), 3864330538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillFactory_h_797879565(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SkillFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
