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
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatAbilityStats_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatAbilityStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityScoreTypes;
	static UEnum* EAbilityScoreTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityScoreTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityScoreTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EAbilityScoreTypes"));
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
		{ "Comment", "/**\n * \n */" },
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
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes_Statics::Enum_MetaDataParams))
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementalStrength_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalStrength_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalStrength;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementalWeakness_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalWeakness_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalWeakness;
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength = { "ElementalStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, ElementalStrength), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_MetaData)) }; // 928806472
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_MetaData[] = {
		{ "Category", "CombatEntityData" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness = { "ElementalWeakness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntityData, ElementalWeakness), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_MetaData)) }; // 928806472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_maxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseMagic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseEvasion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseDefence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_baseResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewProp_ElementalWeakness_Underlying,
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatAbilityStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatAbilityStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntity.h" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatAbilityStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbilityStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbilityStats_Statics::ClassParams = {
		&UCombatAbilityStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatAbilityStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbilityStats_Statics::Class_MetaDataParams))
	};
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbilityStats);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharactertype;
	static UEnum* ECharactertype_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharactertype.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharactertype.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ECharactertype"));
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
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype()
	{
		if (!Z_Registration_Info_UEnum_ECharactertype.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharactertype.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharactertype.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UENUM()\n//class enum ECreaturesAilment\n//{\n//\x09None,\n//\x09Poison,\n//\x09""Daze,\n//\x09Sleep,\n//\x09Rage,\n//};\n" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
		{ "ToolTip", "UENUM()\nclass enum ECreaturesAilment\n{\n       None,\n       Poison,\n       Daze,\n       Sleep,\n       Rage,\n};" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "HasDamaged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasDamaged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "HasHealthOrManaValuesChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_HasHealthOrManaValuesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCombatEntity::execEndTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTurn();
		P_NATIVE_END;
	}
	void UCombatEntity::StaticRegisterNativesUCombatEntity()
	{
		UClass* Class = UCombatEntity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTurn", &UCombatEntity::execEndTurn },
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatEntity, nullptr, "EndTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatEntity_EndTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatEntity_EndTurn_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatEntity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatEntity_EndTurn, "EndTurn" }, // 1192934819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntity.h" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEntity_Statics::ClassParams = {
		&UCombatEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntity_Statics::Class_MetaDataParams))
	};
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEntity);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::EnumInfo[] = {
		{ EAbilityScoreTypes_StaticEnum, TEXT("EAbilityScoreTypes"), &Z_Registration_Info_UEnum_EAbilityScoreTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2976405321U) },
		{ ECharactertype_StaticEnum, TEXT("ECharactertype"), &Z_Registration_Info_UEnum_ECharactertype, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4018082004U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FCombatEntityData::StaticStruct, Z_Construct_UScriptStruct_FCombatEntityData_Statics::NewStructOps, TEXT("CombatEntityData"), &Z_Registration_Info_UScriptStruct_CombatEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatEntityData), 2337549904U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbilityStats, UCombatAbilityStats::StaticClass, TEXT("UCombatAbilityStats"), &Z_Registration_Info_UClass_UCombatAbilityStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbilityStats), 3393592517U) },
		{ Z_Construct_UClass_UCombatEntity, UCombatEntity::StaticClass, TEXT("UCombatEntity"), &Z_Registration_Info_UClass_UCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEntity), 3717844487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_577056606(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
