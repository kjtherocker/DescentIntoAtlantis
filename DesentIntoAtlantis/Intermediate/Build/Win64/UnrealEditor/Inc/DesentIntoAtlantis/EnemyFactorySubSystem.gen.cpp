// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyFactorySubSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFactorySubSystem() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillsData();
// End Cross Module References
	void UEnemyFactorySubSystem::StaticRegisterNativesUEnemyFactorySubSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyFactorySubSystem);
	UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister()
	{
		return UEnemyFactorySubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFactorySubSystem_Statics
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
	UObject* (*const Z_Construct_UClass_UEnemyFactorySubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyFactorySubSystem.h" },
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills_Inner = { "allSkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills = { "allSkills", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, allSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData_Inner = { "attackSkillsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData = { "attackSkillsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, attackSkillsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData_Inner = { "healSkillsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData = { "healSkillsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, healSkillsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData_Inner = { "buffSkillsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData = { "buffSkillsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, buffSkillsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData_Inner = { "debuffData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(nullptr, 0) }; // 4122081891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData = { "debuffData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, debuffData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData_MetaData)) }; // 4122081891
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_ValueProp = { "skillMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_Key_KeyProp = { "skillMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap = { "skillMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, skillMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_attackSkillsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_healSkillsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_buffSkillsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_debuffData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_skillMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFactorySubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFactorySubSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::ClassParams = {
		&UEnemyFactorySubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyFactorySubSystem()
	{
		if (!Z_Registration_Info_UClass_UEnemyFactorySubSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyFactorySubSystem.OuterSingleton, Z_Construct_UClass_UEnemyFactorySubSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyFactorySubSystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyFactorySubSystem>()
	{
		return UEnemyFactorySubSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFactorySubSystem);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyFactorySubSystem, UEnemyFactorySubSystem::StaticClass, TEXT("UEnemyFactorySubSystem"), &Z_Registration_Info_UClass_UEnemyFactorySubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyFactorySubSystem), 4269842127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_3378701950(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
