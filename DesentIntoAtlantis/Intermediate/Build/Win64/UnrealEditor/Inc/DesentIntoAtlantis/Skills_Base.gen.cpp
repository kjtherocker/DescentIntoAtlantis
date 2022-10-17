// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/Skills_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkills_Base() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAilment();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FSkills_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillType;
	static UEnum* ESkillType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillType"));
		}
		return Z_Registration_Info_UEnum_ESkillType.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ESkillType>()
	{
		return ESkillType_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enumerators[] = {
		{ "Attack", (int64)Attack },
		{ "Heal", (int64)Heal },
		{ "Defence", (int64)Defence },
		{ "Domain", (int64)Domain },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "Attack" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "Defence.Comment", "/**\n * \n */" },
		{ "Defence.Name", "Defence" },
		{ "Domain.Comment", "/**\n * \n */" },
		{ "Domain.Name", "Domain" },
		{ "Heal.Comment", "/**\n * \n */" },
		{ "Heal.Name", "Heal" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillType",
		"ESkillType",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType()
	{
		if (!Z_Registration_Info_UEnum_ESkillType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillType.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillDamageType;
	static UEnum* ESkillDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillDamageType"));
		}
		return Z_Registration_Info_UEnum_ESkillDamageType.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ESkillDamageType>()
	{
		return ESkillDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enumerators[] = {
		{ "ESkillDamageType::none", (int64)ESkillDamageType::none },
		{ "ESkillDamageType::Strength", (int64)ESkillDamageType::Strength },
		{ "ESkillDamageType::Magic", (int64)ESkillDamageType::Magic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enum_MetaDataParams[] = {
		{ "Magic.Name", "ESkillDamageType::Magic" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
		{ "none.Name", "ESkillDamageType::none" },
		{ "Strength.Name", "ESkillDamageType::Strength" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillDamageType",
		"ESkillDamageType",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType()
	{
		if (!Z_Registration_Info_UEnum_ESkillDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillDamageType.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillDamageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAilment;
	static UEnum* EAilment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAilment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAilment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EAilment, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EAilment"));
		}
		return Z_Registration_Info_UEnum_EAilment.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAilment>()
	{
		return EAilment_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enumerators[] = {
		{ "None", (int64)None },
		{ "Poison", (int64)Poison },
		{ "Daze", (int64)Daze },
		{ "Sleep", (int64)Sleep },
		{ "Rage", (int64)Rage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Daze.Name", "Daze" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
		{ "None.Name", "None" },
		{ "Poison.Name", "Poison" },
		{ "Rage.Name", "Rage" },
		{ "Sleep.Name", "Sleep" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EAilment",
		"EAilment",
		Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAilment()
	{
		if (!Z_Registration_Info_UEnum_EAilment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAilment.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAilment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillRange;
	static UEnum* ESkillRange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillRange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillRange"));
		}
		return Z_Registration_Info_UEnum_ESkillRange.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ESkillRange>()
	{
		return ESkillRange_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enumerators[] = {
		{ "ESkillRange::Single", (int64)ESkillRange::Single },
		{ "ESkillRange::Multi", (int64)ESkillRange::Multi },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
		{ "Multi.Name", "ESkillRange::Multi" },
		{ "Single.Name", "ESkillRange::Single" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillRange",
		"ESkillRange",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange()
	{
		if (!Z_Registration_Info_UEnum_ESkillRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillRange.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillRange.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSkills_Base>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSkills_Base cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Skills_Base;
class UScriptStruct* FSkills_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Skills_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Skills_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkills_Base, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("Skills_Base"));
	}
	return Z_Registration_Info_UScriptStruct_Skills_Base.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FSkills_Base>()
{
	return FSkills_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkills_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_elementalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_elementalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_elementalType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_skillDamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillDamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_skillName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_skillDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_costToUse_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_costToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_skillRange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillRange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkills_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkills_Base>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType = { "elementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, elementalType), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType_MetaData)) }; // 928806472
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType = { "skillDamageType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, skillDamageType), Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType_MetaData)) }; // 3866094677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillName_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillName = { "skillName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, skillName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDescription_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDescription = { "skillDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, skillDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_costToUse_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_costToUse = { "costToUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, costToUse), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_costToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_costToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_damage_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange = { "skillRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, skillRange), Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange_MetaData)) }; // 2805821888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillIcon_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillIcon = { "skillIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, skillIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkills_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_elementalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_costToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_skillIcon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkills_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Skills_Base",
		sizeof(FSkills_Base),
		alignof(FSkills_Base),
		Z_Construct_UScriptStruct_FSkills_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkills_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_Skills_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Skills_Base.InnerSingleton, Z_Construct_UScriptStruct_FSkills_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Skills_Base.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo[] = {
		{ ESkillType_StaticEnum, TEXT("ESkillType"), &Z_Registration_Info_UEnum_ESkillType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 95639070U) },
		{ ESkillDamageType_StaticEnum, TEXT("ESkillDamageType"), &Z_Registration_Info_UEnum_ESkillDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3866094677U) },
		{ EAilment_StaticEnum, TEXT("EAilment"), &Z_Registration_Info_UEnum_EAilment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3317222983U) },
		{ ESkillRange_StaticEnum, TEXT("ESkillRange"), &Z_Registration_Info_UEnum_ESkillRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2805821888U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ScriptStructInfo[] = {
		{ FSkills_Base::StaticStruct, Z_Construct_UScriptStruct_FSkills_Base_Statics::NewStructOps, TEXT("Skills_Base"), &Z_Registration_Info_UScriptStruct_Skills_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkills_Base), 102523599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_3626373159(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
