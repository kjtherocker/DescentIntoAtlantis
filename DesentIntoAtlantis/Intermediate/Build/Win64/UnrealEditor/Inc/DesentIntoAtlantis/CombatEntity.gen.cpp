// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEntity() {}
// Cross Module References
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatAbilityStats();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity();
// End Cross Module References

static_assert(std::is_polymorphic<FCombatEntityData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatEntityData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatEntityData;
class UScriptStruct* FCombatEntityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatEntityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatEntityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatEntityData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CombatEntityData"));
	}
	return Z_Registration_Info_UScriptStruct_CombatEntityData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCombatEntityData>()
{
	return FCombatEntityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombatEntityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxMana_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMagic_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseMagic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseHit_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseEvasion_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseEvasion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseDefence_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseDefence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseResistance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalStrength_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementalStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalWeakness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementalWeakness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatEntityData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, maxHealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana = { "maxMana", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, maxMana), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength = { "baseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, baseStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic = { "baseMagic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, baseMagic), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit = { "baseHit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, baseHit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion = { "baseEvasion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, baseEvasion), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence = { "baseDefence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, baseDefence), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance = { "baseResistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, baseResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength = { "ElementalStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, ElementalStrength), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_MetaData)) }; // 1311641526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness = { "ElementalWeakness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, ElementalWeakness), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_MetaData)) }; // 1311641526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombatEntityData",
		sizeof(FCombatEntityData),
		alignof(FCombatEntityData),
		Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData()
	{
		if (!Z_Registration_Info_UScriptStruct_CombatEntityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatEntityData.InnerSingleton, Z_Construct_UScriptStruct_FCombatEntityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombatEntityData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCombatAbilityStats>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatAbilityStats cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatAbilityStats;
class UScriptStruct* FCombatAbilityStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatAbilityStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatAbilityStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatAbilityStats, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CombatAbilityStats"));
	}
	return Z_Registration_Info_UScriptStruct_CombatAbilityStats.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCombatAbilityStats>()
{
	return FCombatAbilityStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombatAbilityStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatAbilityStats>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombatAbilityStats",
		sizeof(FCombatAbilityStats),
		alignof(FCombatAbilityStats),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCombatAbilityStats()
	{
		if (!Z_Registration_Info_UScriptStruct_CombatAbilityStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatAbilityStats.InnerSingleton, Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombatAbilityStats.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCombatEntity>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatEntity cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatEntity;
class UScriptStruct* FCombatEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatEntity, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CombatEntity"));
	}
	return Z_Registration_Info_UScriptStruct_CombatEntity.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCombatEntity>()
{
	return FCombatEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombatEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntity_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombatEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatEntity>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombatEntity",
		sizeof(FCombatEntity),
		alignof(FCombatEntity),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_CombatEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatEntity.InnerSingleton, Z_Construct_UScriptStruct_FCombatEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombatEntity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FCombatEntityData::StaticStruct, Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewStructOps, TEXT("CombatEntityData"), &Z_Registration_Info_UScriptStruct_CombatEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatEntityData), 2439573012U) },
		{ FCombatAbilityStats::StaticStruct, Z_Construct_UScriptStruct_FCombatAbilityStats_Statics::NewStructOps, TEXT("CombatAbilityStats"), &Z_Registration_Info_UScriptStruct_CombatAbilityStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatAbilityStats), 3676810248U) },
		{ FCombatEntity::StaticStruct, Z_Construct_UScriptStruct_FCombatEntity_Statics::NewStructOps, TEXT("CombatEntity"), &Z_Registration_Info_UScriptStruct_CombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatEntity), 1688199274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_4134954434(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
