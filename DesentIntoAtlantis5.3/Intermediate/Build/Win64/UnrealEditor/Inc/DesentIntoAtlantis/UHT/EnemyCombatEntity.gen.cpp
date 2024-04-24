// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCombatEntity() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyBestiaryData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyEntityData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyCombatPositions;
	static UEnum* EEnemyCombatPositions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyCombatPositions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyCombatPositions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EEnemyCombatPositions"));
		}
		return Z_Registration_Info_UEnum_EEnemyCombatPositions.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EEnemyCombatPositions>()
	{
		return EEnemyCombatPositions_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enumerators[] = {
		{ "EEnemyCombatPositions::Left", (int64)EEnemyCombatPositions::Left },
		{ "EEnemyCombatPositions::Middle", (int64)EEnemyCombatPositions::Middle },
		{ "EEnemyCombatPositions::Right", (int64)EEnemyCombatPositions::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enum_MetaDataParams[] = {
		{ "Left.Name", "EEnemyCombatPositions::Left" },
		{ "Middle.Name", "EEnemyCombatPositions::Middle" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
		{ "Right.Name", "EEnemyCombatPositions::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EEnemyCombatPositions",
		"EEnemyCombatPositions",
		Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions()
	{
		if (!Z_Registration_Info_UEnum_EEnemyCombatPositions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyCombatPositions.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyCombatPositions.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnemyEntityData>() == std::is_polymorphic<FCombatEntityData>(), "USTRUCT FEnemyEntityData cannot be polymorphic unless super FCombatEntityData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyEntityData;
class UScriptStruct* FEnemyEntityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyEntityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyEntityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyEntityData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EnemyEntityData"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyEntityData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FEnemyEntityData>()
{
	return FEnemyEntityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyEntityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fullBodyCharacterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fullBodyCharacterPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_experience_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_experience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behaviour_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Behaviour;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementalStrength_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalStrength_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalStrength;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementalWeakness_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalWeakness_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalWeakness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill4_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill5_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyEntityData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait = { "fullBodyCharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, fullBodyCharacterPortrait), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_experience_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_experience = { "experience", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, experience), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_experience_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_experience_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, characterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour = { "Behaviour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, Behaviour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength = { "ElementalStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, ElementalStrength), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength_MetaData) }; // 3306458094
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness = { "ElementalWeakness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, ElementalWeakness), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness_MetaData) }; // 3306458094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1 = { "Skill1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, Skill1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2 = { "Skill2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, Skill2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3 = { "Skill3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, Skill3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4 = { "Skill4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, Skill4), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5 = { "Skill5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyEntityData, Skill5), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5_MetaData), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_experience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_ElementalWeakness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntityData,
		&NewStructOps,
		"EnemyEntityData",
		Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers),
		sizeof(FEnemyEntityData),
		alignof(FEnemyEntityData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnemyEntityData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyEntityData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyEntityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyEntityData.InnerSingleton, Z_Construct_UScriptStruct_FEnemyEntityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyEntityData.InnerSingleton;
	}
	void UEnemyCombatEntity::StaticRegisterNativesUEnemyCombatEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCombatEntity);
	UClass* Z_Construct_UClass_UEnemyCombatEntity_NoRegister()
	{
		return UEnemyCombatEntity::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyCombatEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemySkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemySkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_enemySkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyBehaviour_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyBehaviour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyBestiaryData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyBestiaryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyCombatEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombatEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyCombatEntity.h" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills_Inner = { "enemySkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills = { "enemySkills", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyCombatEntity, enemySkills), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills_MetaData), Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBehaviour_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBehaviour = { "enemyBehaviour", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyCombatEntity, enemyBehaviour), Z_Construct_UClass_UEnemyBehaviour_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBehaviour_MetaData), Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBehaviour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBestiaryData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBestiaryData = { "enemyBestiaryData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyCombatEntity, enemyBestiaryData), Z_Construct_UClass_UEnemyBestiaryData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBestiaryData_MetaData), Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBestiaryData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyCombatEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemySkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyCombatEntity_Statics::NewProp_enemyBestiaryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyCombatEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCombatEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCombatEntity_Statics::ClassParams = {
		&UEnemyCombatEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyCombatEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyCombatEntity_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatEntity_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyCombatEntity()
	{
		if (!Z_Registration_Info_UClass_UEnemyCombatEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCombatEntity.OuterSingleton, Z_Construct_UClass_UEnemyCombatEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyCombatEntity.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyCombatEntity>()
	{
		return UEnemyCombatEntity::StaticClass();
	}
	UEnemyCombatEntity::UEnemyCombatEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCombatEntity);
	UEnemyCombatEntity::~UEnemyCombatEntity() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::EnumInfo[] = {
		{ EEnemyCombatPositions_StaticEnum, TEXT("EEnemyCombatPositions"), &Z_Registration_Info_UEnum_EEnemyCombatPositions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2723855206U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FEnemyEntityData::StaticStruct, Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewStructOps, TEXT("EnemyEntityData"), &Z_Registration_Info_UScriptStruct_EnemyEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyEntityData), 4276967717U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCombatEntity, UEnemyCombatEntity::StaticClass, TEXT("UEnemyCombatEntity"), &Z_Registration_Info_UClass_UEnemyCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCombatEntity), 1001533497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_928332577(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
