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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatAbilityStats();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatAbilityStats_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntityWrapper_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityScoreTypes;
	static UEnum* EAbilityScoreTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityScoreTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityScoreTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EAbilityScoreTypes"));
		}
		return Z_Registration_Info_UEnum_EAbilityScoreTypes.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAbilityScoreTypes>()
	{
		return EAbilityScoreTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enumerators[] = {
		{ "EAbilityScoreTypes::Undefined", (int64)EAbilityScoreTypes::Undefined },
		{ "EAbilityScoreTypes::Strength", (int64)EAbilityScoreTypes::Strength },
		{ "EAbilityScoreTypes::Magic", (int64)EAbilityScoreTypes::Magic },
		{ "EAbilityScoreTypes::Hit", (int64)EAbilityScoreTypes::Hit },
		{ "EAbilityScoreTypes::Evasion", (int64)EAbilityScoreTypes::Evasion },
		{ "EAbilityScoreTypes::Defence", (int64)EAbilityScoreTypes::Defence },
		{ "EAbilityScoreTypes::Resistance", (int64)EAbilityScoreTypes::Resistance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Defence.Comment", "/**\n * \n */" },
		{ "Defence.Name", "EAbilityScoreTypes::Defence" },
		{ "Evasion.Comment", "/**\n * \n */" },
		{ "Evasion.Name", "EAbilityScoreTypes::Evasion" },
		{ "Hit.Comment", "/**\n * \n */" },
		{ "Hit.Name", "EAbilityScoreTypes::Hit" },
		{ "Magic.Comment", "/**\n * \n */" },
		{ "Magic.Name", "EAbilityScoreTypes::Magic" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
		{ "Resistance.Comment", "/**\n * \n */" },
		{ "Resistance.Name", "EAbilityScoreTypes::Resistance" },
		{ "Strength.Comment", "/**\n * \n */" },
		{ "Strength.Name", "EAbilityScoreTypes::Strength" },
		{ "Undefined.Comment", "/**\n * \n */" },
		{ "Undefined.Name", "EAbilityScoreTypes::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EAbilityScoreTypes",
		"EAbilityScoreTypes",
		Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes()
	{
		if (!Z_Registration_Info_UEnum_EAbilityScoreTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityScoreTypes.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityScoreTypes.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCombatEntityData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatEntityData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatEntityData;
class UScriptStruct* FCombatEntityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatEntityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatEntityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatEntityData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CombatEntityData"));
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxMana_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMagic_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseMagic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseHit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseEvasion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseEvasion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseDefence_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseDefence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseResistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::Struct_MetaDataParams[] = {
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana = { "maxMana", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, maxMana), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength = { "baseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, baseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic = { "baseMagic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, baseMagic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit = { "baseHit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, baseHit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion = { "baseEvasion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, baseEvasion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence = { "baseDefence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, baseDefence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance = { "baseResistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatEntityData, baseResistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance_MetaData), Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombatEntityData",
		Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers),
		sizeof(FCombatEntityData),
		alignof(FCombatEntityData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatEntityData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData()
	{
		if (!Z_Registration_Info_UScriptStruct_CombatEntityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatEntityData.InnerSingleton, Z_Construct_UScriptStruct_FCombatEntityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombatEntityData.InnerSingleton;
	}
	void UCombatAbilityStats::StaticRegisterNativesUCombatAbilityStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbilityStats);
	UClass* Z_Construct_UClass_UCombatAbilityStats_NoRegister()
	{
		return UCombatAbilityStats::StaticClass();
	}
	struct Z_Construct_UClass_UCombatAbilityStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_base_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buff_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debuff_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_debuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_domain_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_domain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buffTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buffTimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debuffTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_debuffTimeRemaining;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatAbilityStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntity.h" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_base_MetaData[] = {
		{ "Category", "CombatAbilityStats" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_base = { "base", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbilityStats, base), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_base_MetaData), Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_base_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buff_MetaData[] = {
		{ "Category", "CombatAbilityStats" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buff = { "buff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbilityStats, buff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buff_MetaData), Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuff_MetaData[] = {
		{ "Category", "CombatAbilityStats" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuff = { "debuff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbilityStats, debuff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuff_MetaData), Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_domain_MetaData[] = {
		{ "Category", "CombatAbilityStats" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_domain = { "domain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbilityStats, domain), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_domain_MetaData), Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_domain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buffTimeRemaining_MetaData[] = {
		{ "Category", "CombatAbilityStats" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buffTimeRemaining = { "buffTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbilityStats, buffTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buffTimeRemaining_MetaData), Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buffTimeRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuffTimeRemaining_MetaData[] = {
		{ "Category", "CombatAbilityStats" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuffTimeRemaining = { "debuffTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbilityStats, debuffTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuffTimeRemaining_MetaData), Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuffTimeRemaining_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbilityStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_domain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_buffTimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbilityStats_Statics::NewProp_debuffTimeRemaining,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatAbilityStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbilityStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbilityStats_Statics::ClassParams = {
		&UCombatAbilityStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatAbilityStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbilityStats_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatAbilityStats()
	{
		if (!Z_Registration_Info_UClass_UCombatAbilityStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbilityStats.OuterSingleton, Z_Construct_UClass_UCombatAbilityStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatAbilityStats.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatAbilityStats>()
	{
		return UCombatAbilityStats::StaticClass();
	}
	UCombatAbilityStats::UCombatAbilityStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbilityStats);
	UCombatAbilityStats::~UCombatAbilityStats() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharactertype;
	static UEnum* ECharactertype_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharactertype.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharactertype.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ECharactertype"));
		}
		return Z_Registration_Info_UEnum_ECharactertype.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECharactertype>()
	{
		return ECharactertype_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enumerators[] = {
		{ "ECharactertype::Undefined", (int64)ECharactertype::Undefined },
		{ "ECharactertype::Ally", (int64)ECharactertype::Ally },
		{ "ECharactertype::Enemy", (int64)ECharactertype::Enemy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enum_MetaDataParams[] = {
		{ "Ally.Name", "ECharactertype::Ally" },
		{ "Enemy.Name", "ECharactertype::Enemy" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
		{ "Undefined.Name", "ECharactertype::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ECharactertype",
		"ECharactertype",
		Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype()
	{
		if (!Z_Registration_Info_UEnum_ECharactertype.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharactertype.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharactertype.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "WasDamaged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasDamaged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWasDamaged_DelegateWrapper(const FMulticastScriptDelegate& WasDamaged)
{
	WasDamaged.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "WasKilled__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_WasKilled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWasKilled_DelegateWrapper(const FMulticastScriptDelegate& WasKilled)
{
	WasKilled.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "HasHealthOrManaValuesChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHasHealthOrManaValuesChanged_DelegateWrapper(const FMulticastScriptDelegate& HasHealthOrManaValuesChanged)
{
	HasHealthOrManaValuesChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCombatEntity::execEndTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatEntity::execStartTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatEntity::execSetAWrapperToDefault)
	{
		P_GET_ENUM(ECombatEntityWrapperType,Z_Param_aShellType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAWrapperToDefault(ECombatEntityWrapperType(Z_Param_aShellType));
		P_NATIVE_END;
	}
	void UCombatEntity::StaticRegisterNativesUCombatEntity()
	{
		UClass* Class = UCombatEntity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTurn", &UCombatEntity::execEndTurn },
			{ "SetAWrapperToDefault", &UCombatEntity::execSetAWrapperToDefault },
			{ "StartTurn", &UCombatEntity::execStartTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatEntity_EndTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatEntity, nullptr, "EndTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatEntity_EndTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics
	{
		struct CombatEntity_eventSetAWrapperToDefault_Parms
		{
			ECombatEntityWrapperType aShellType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aShellType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aShellType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::NewProp_aShellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::NewProp_aShellType = { "aShellType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatEntity_eventSetAWrapperToDefault_Parms, aShellType), Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType, METADATA_PARAMS(0, nullptr) }; // 1506590368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::NewProp_aShellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::NewProp_aShellType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatEntity, nullptr, "SetAWrapperToDefault", nullptr, nullptr, Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::CombatEntity_eventSetAWrapperToDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::CombatEntity_eventSetAWrapperToDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatEntity_StartTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatEntity_StartTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatEntity_StartTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatEntity, nullptr, "StartTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntity_StartTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatEntity_StartTurn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatEntity_StartTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatEntity_StartTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEntity);
	UClass* Z_Construct_UClass_UCombatEntity_NoRegister()
	{
		return UCombatEntity::StaticClass();
	}
	struct Z_Construct_UClass_UCombatEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inUseCombatWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inUseCombatWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allDefaultCombatWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_allDefaultCombatWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxMana_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMana_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSync_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSync;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_abilityScoreMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_abilityScoreMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_abilityScoreMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilityScoreMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_abilityScoreMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatEntity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatEntity_EndTurn, "EndTurn" }, // 2800789503
		{ &Z_Construct_UFunction_UCombatEntity_SetAWrapperToDefault, "SetAWrapperToDefault" }, // 3965091741
		{ &Z_Construct_UFunction_UCombatEntity_StartTurn, "StartTurn" }, // 1314967389
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntity.h" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_inUseCombatWrapper_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_inUseCombatWrapper = { "inUseCombatWrapper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, inUseCombatWrapper), Z_Construct_UClass_UCombatEntityWrapper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_inUseCombatWrapper_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_inUseCombatWrapper_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_allDefaultCombatWrapper_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_allDefaultCombatWrapper = { "allDefaultCombatWrapper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, allDefaultCombatWrapper), Z_Construct_UClass_UCombatEntityWrapper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_allDefaultCombatWrapper_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_allDefaultCombatWrapper_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxHealth_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentHealth_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxMana_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxMana = { "maxMana", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, maxMana), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxMana_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxMana_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentMana_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentMana = { "currentMana", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, currentMana), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentMana_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentMana_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentSync = { "currentSync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, currentSync), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentSync_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentSync_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_ValueProp = { "abilityScoreMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCombatAbilityStats_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_Key_KeyProp = { "abilityScoreMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes, METADATA_PARAMS(0, nullptr) }; // 1539010591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_MetaData[] = {
		{ "Category", "CombatEntity" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap = { "abilityScoreMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntity, abilityScoreMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_MetaData), Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_MetaData) }; // 1539010591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_inUseCombatWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_allDefaultCombatWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_maxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_currentSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntity_Statics::NewProp_abilityScoreMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEntity_Statics::ClassParams = {
		&UCombatEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEntity_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatEntity()
	{
		if (!Z_Registration_Info_UClass_UCombatEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEntity.OuterSingleton, Z_Construct_UClass_UCombatEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatEntity.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatEntity>()
	{
		return UCombatEntity::StaticClass();
	}
	UCombatEntity::UCombatEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEntity);
	UCombatEntity::~UCombatEntity() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::EnumInfo[] = {
		{ EAbilityScoreTypes_StaticEnum, TEXT("EAbilityScoreTypes"), &Z_Registration_Info_UEnum_EAbilityScoreTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1539010591U) },
		{ ECharactertype_StaticEnum, TEXT("ECharactertype"), &Z_Registration_Info_UEnum_ECharactertype, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2009458319U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FCombatEntityData::StaticStruct, Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewStructOps, TEXT("CombatEntityData"), &Z_Registration_Info_UScriptStruct_CombatEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatEntityData), 2511152698U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbilityStats, UCombatAbilityStats::StaticClass, TEXT("UCombatAbilityStats"), &Z_Registration_Info_UClass_UCombatAbilityStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbilityStats), 2849591881U) },
		{ Z_Construct_UClass_UCombatEntity, UCombatEntity::StaticClass, TEXT("UCombatEntity"), &Z_Registration_Info_UClass_UCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEntity), 1450300102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_321442813(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
