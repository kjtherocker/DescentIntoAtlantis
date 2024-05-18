// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SkillsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillsData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillAliment();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillAliment_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillAttack();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillAttack_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBuff();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBuff_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillDebuff();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillDebuff_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillHeal();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillHeal_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USyncSkill();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USyncSkill_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAilment();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillsData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillType;
	static UEnum* ESkillType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillType"));
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
		{ "ESkillType::None", (int64)ESkillType::None },
		{ "ESkillType::Attack", (int64)ESkillType::Attack },
		{ "ESkillType::Heal", (int64)ESkillType::Heal },
		{ "ESkillType::Buff", (int64)ESkillType::Buff },
		{ "ESkillType::Debuff", (int64)ESkillType::Debuff },
		{ "ESkillType::HealBuff", (int64)ESkillType::HealBuff },
		{ "ESkillType::AttackDebuff", (int64)ESkillType::AttackDebuff },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "ESkillType::Attack" },
		{ "AttackDebuff.Comment", "/**\n * \n */" },
		{ "AttackDebuff.Name", "ESkillType::AttackDebuff" },
		{ "Buff.Comment", "/**\n * \n */" },
		{ "Buff.Name", "ESkillType::Buff" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Debuff.Comment", "/**\n * \n */" },
		{ "Debuff.Name", "ESkillType::Debuff" },
		{ "Heal.Comment", "/**\n * \n */" },
		{ "Heal.Name", "ESkillType::Heal" },
		{ "HealBuff.Comment", "/**\n * \n */" },
		{ "HealBuff.Name", "ESkillType::HealBuff" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Name", "ESkillType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillType",
		"ESkillType",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType()
	{
		if (!Z_Registration_Info_UEnum_ESkillType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillType.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatusAilments;
	static UEnum* EStatusAilments_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStatusAilments.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStatusAilments.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EStatusAilments"));
		}
		return Z_Registration_Info_UEnum_EStatusAilments.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EStatusAilments>()
	{
		return EStatusAilments_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::Enumerators[] = {
		{ "EStatusAilments::None", (int64)EStatusAilments::None },
		{ "EStatusAilments::Poison", (int64)EStatusAilments::Poison },
		{ "EStatusAilments::Blind", (int64)EStatusAilments::Blind },
		{ "EStatusAilments::Bleed", (int64)EStatusAilments::Bleed },
		{ "EStatusAilments::Freeze", (int64)EStatusAilments::Freeze },
		{ "EStatusAilments::Charm", (int64)EStatusAilments::Charm },
		{ "EStatusAilments::Doom", (int64)EStatusAilments::Doom },
		{ "EStatusAilments::Necrotic", (int64)EStatusAilments::Necrotic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::Enum_MetaDataParams[] = {
		{ "Bleed.Name", "EStatusAilments::Bleed" },
		{ "Blind.Name", "EStatusAilments::Blind" },
		{ "Charm.Name", "EStatusAilments::Charm" },
		{ "Doom.Name", "EStatusAilments::Doom" },
		{ "Freeze.Name", "EStatusAilments::Freeze" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
		{ "Necrotic.Name", "EStatusAilments::Necrotic" },
		{ "None.Name", "EStatusAilments::None" },
		{ "Poison.Name", "EStatusAilments::Poison" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EStatusAilments",
		"EStatusAilments",
		Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments()
	{
		if (!Z_Registration_Info_UEnum_EStatusAilments.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatusAilments.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStatusAilments.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillUsage;
	static UEnum* ESkillUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillUsage"));
		}
		return Z_Registration_Info_UEnum_ESkillUsage.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ESkillUsage>()
	{
		return ESkillUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::Enumerators[] = {
		{ "ESkillUsage::Comrades", (int64)ESkillUsage::Comrades },
		{ "ESkillUsage::Opponents", (int64)ESkillUsage::Opponents },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::Enum_MetaDataParams[] = {
		{ "Comrades.Name", "ESkillUsage::Comrades" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
		{ "Opponents.Name", "ESkillUsage::Opponents" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillUsage",
		"ESkillUsage",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage()
	{
		if (!Z_Registration_Info_UEnum_ESkillUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillUsage.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillUsage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillDamageType;
	static UEnum* ESkillDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillDamageType"));
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
		{ "ESkillDamageType::None", (int64)ESkillDamageType::None },
		{ "ESkillDamageType::Strength", (int64)ESkillDamageType::Strength },
		{ "ESkillDamageType::Magic", (int64)ESkillDamageType::Magic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enum_MetaDataParams[] = {
		{ "Magic.Name", "ESkillDamageType::Magic" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
		{ "None.Name", "ESkillDamageType::None" },
		{ "Strength.Name", "ESkillDamageType::Strength" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillDamageType",
		"ESkillDamageType",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType_Statics::Enum_MetaDataParams)
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
			Z_Registration_Info_UEnum_EAilment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EAilment, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EAilment"));
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
		{ "ModuleRelativePath", "Public/SkillsData.h" },
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EAilment_Statics::Enum_MetaDataParams)
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
			Z_Registration_Info_UEnum_ESkillRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillRange"));
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
		{ "ModuleRelativePath", "Public/SkillsData.h" },
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange()
	{
		if (!Z_Registration_Info_UEnum_ESkillRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillRange.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillRange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillIDS;
	static UEnum* ESkillIDS_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkillIDS.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkillIDS.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ESkillIDS"));
		}
		return Z_Registration_Info_UEnum_ESkillIDS.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ESkillIDS>()
	{
		return ESkillIDS_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::Enumerators[] = {
		{ "ESkillIDS::None", (int64)ESkillIDS::None },
		{ "ESkillIDS::DefaultAttack", (int64)ESkillIDS::DefaultAttack },
		{ "ESkillIDS::Bonk", (int64)ESkillIDS::Bonk },
		{ "ESkillIDS::Boo", (int64)ESkillIDS::Boo },
		{ "ESkillIDS::RejuvenatingLink", (int64)ESkillIDS::RejuvenatingLink },
		{ "ESkillIDS::WailingScream", (int64)ESkillIDS::WailingScream },
		{ "ESkillIDS::Lunge", (int64)ESkillIDS::Lunge },
		{ "ESkillIDS::SpreadInfection", (int64)ESkillIDS::SpreadInfection },
		{ "ESkillIDS::RustyBlade", (int64)ESkillIDS::RustyBlade },
		{ "ESkillIDS::CoupDeGrace", (int64)ESkillIDS::CoupDeGrace },
		{ "ESkillIDS::OceansBalm", (int64)ESkillIDS::OceansBalm },
		{ "ESkillIDS::BoilInsides", (int64)ESkillIDS::BoilInsides },
		{ "ESkillIDS::WavesSweetRelease", (int64)ESkillIDS::WavesSweetRelease },
		{ "ESkillIDS::EmboldingSpeech", (int64)ESkillIDS::EmboldingSpeech },
		{ "ESkillIDS::MarkForDeath", (int64)ESkillIDS::MarkForDeath },
		{ "ESkillIDS::MockingTaunt", (int64)ESkillIDS::MockingTaunt },
		{ "ESkillIDS::AbsoluteGuard", (int64)ESkillIDS::AbsoluteGuard },
		{ "ESkillIDS::SelfIndulgentRevenge", (int64)ESkillIDS::SelfIndulgentRevenge },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::Enum_MetaDataParams[] = {
		{ "AbsoluteGuard.DisplayName", "AbsoluteGuard" },
		{ "AbsoluteGuard.Name", "ESkillIDS::AbsoluteGuard" },
		{ "BlueprintType", "true" },
		{ "BoilInsides.DisplayName", "Boil Insides" },
		{ "BoilInsides.Name", "ESkillIDS::BoilInsides" },
		{ "Bonk.Comment", "//Banshee\n" },
		{ "Bonk.DisplayName", "Bonk" },
		{ "Bonk.Name", "ESkillIDS::Bonk" },
		{ "Bonk.ToolTip", "Banshee" },
		{ "Boo.DisplayName", "Boo" },
		{ "Boo.Name", "ESkillIDS::Boo" },
		{ "CoupDeGrace.DisplayName", "Coup De Grace" },
		{ "CoupDeGrace.Name", "ESkillIDS::CoupDeGrace" },
		{ "DefaultAttack.DisplayName", "Default Attack" },
		{ "DefaultAttack.Name", "ESkillIDS::DefaultAttack" },
		{ "EmboldingSpeech.DisplayName", "EmboldingSpeech" },
		{ "EmboldingSpeech.Name", "ESkillIDS::EmboldingSpeech" },
		{ "Lunge.Comment", "//Gem Thief\n" },
		{ "Lunge.DisplayName", "Lunge" },
		{ "Lunge.Name", "ESkillIDS::Lunge" },
		{ "Lunge.ToolTip", "Gem Thief" },
		{ "MarkForDeath.Comment", "//Laid Off Executioner\n" },
		{ "MarkForDeath.DisplayName", "MarkForDeath" },
		{ "MarkForDeath.Name", "ESkillIDS::MarkForDeath" },
		{ "MarkForDeath.ToolTip", "Laid Off Executioner" },
		{ "MockingTaunt.DisplayName", "MockingTaunt" },
		{ "MockingTaunt.Name", "ESkillIDS::MockingTaunt" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESkillIDS::None" },
		{ "OceansBalm.Comment", "//Atlantian Warden\n" },
		{ "OceansBalm.DisplayName", "Oceans Balm" },
		{ "OceansBalm.Name", "ESkillIDS::OceansBalm" },
		{ "OceansBalm.ToolTip", "Atlantian Warden" },
		{ "RejuvenatingLink.DisplayName", "RejuvenatingLink" },
		{ "RejuvenatingLink.Name", "ESkillIDS::RejuvenatingLink" },
		{ "RustyBlade.DisplayName", "RustyBlade" },
		{ "RustyBlade.Name", "ESkillIDS::RustyBlade" },
		{ "SelfIndulgentRevenge.DisplayName", "SelfIndulgentRevenge" },
		{ "SelfIndulgentRevenge.Name", "ESkillIDS::SelfIndulgentRevenge" },
		{ "SpreadInfection.DisplayName", "SpreadInfection" },
		{ "SpreadInfection.Name", "ESkillIDS::SpreadInfection" },
		{ "WailingScream.DisplayName", "WailingScream" },
		{ "WailingScream.Name", "ESkillIDS::WailingScream" },
		{ "WavesSweetRelease.DisplayName", "WavesSweetRelease" },
		{ "WavesSweetRelease.Name", "ESkillIDS::WavesSweetRelease" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ESkillIDS",
		"ESkillIDS",
		Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS()
	{
		if (!Z_Registration_Info_UEnum_ESkillIDS.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillIDS.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkillIDS.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSkillsData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSkillsData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkillsData;
class UScriptStruct* FSkillsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkillsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkillsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillsData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("SkillsData"));
	}
	return Z_Registration_Info_UScriptStruct_SkillsData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FSkillsData>()
{
	return FSkillsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkillsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_skillID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_elementalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_elementalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_elementalType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillDamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillDamageType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillUsage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillUsage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillUsage;
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_costToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillRange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillRange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillIcon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ablityScoreToBuffOrDebuff_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ablityScoreToBuffOrDebuff_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ablityScoreToBuffOrDebuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilityScoreChangeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_abilityScoreChangeDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillsData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID = { "skillID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillID), Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID_MetaData) }; // 1795072353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType = { "elementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, elementalType), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType_MetaData) }; // 3306458094
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType = { "skillDamageType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillDamageType), Z_Construct_UEnum_DesentIntoAtlantis_ESkillDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType_MetaData) }; // 2848366532
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType = { "skillType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillType), Z_Construct_UEnum_DesentIntoAtlantis_ESkillType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType_MetaData) }; // 1735734487
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage = { "skillUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillUsage), Z_Construct_UEnum_DesentIntoAtlantis_ESkillUsage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage_MetaData) }; // 302249528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillName_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillName = { "skillName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillName_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDescription_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDescription = { "skillDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDescription_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_costToUse_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_costToUse = { "costToUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, costToUse), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_costToUse_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_costToUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_damage_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_damage_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange = { "skillRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillRange), Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange_MetaData) }; // 346620054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillIcon_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillIcon = { "skillIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, skillIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillIcon_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillIcon_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff = { "ablityScoreToBuffOrDebuff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, ablityScoreToBuffOrDebuff), Z_Construct_UEnum_DesentIntoAtlantis_EAbilityScoreTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff_MetaData) }; // 1539010591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_abilityScoreChangeDuration_MetaData[] = {
		{ "Category", "SkillsData" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_abilityScoreChangeDuration = { "abilityScoreChangeDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillsData, abilityScoreChangeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_abilityScoreChangeDuration_MetaData), Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_abilityScoreChangeDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_elementalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_costToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_skillIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_ablityScoreToBuffOrDebuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillsData_Statics::NewProp_abilityScoreChangeDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SkillsData",
		Z_Construct_UScriptStruct_FSkillsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::PropPointers),
		sizeof(FSkillsData),
		alignof(FSkillsData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkillsData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillsData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkillsData()
	{
		if (!Z_Registration_Info_UScriptStruct_SkillsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkillsData.InnerSingleton, Z_Construct_UScriptStruct_FSkillsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkillsData.InnerSingleton;
	}
	void USkillBase::StaticRegisterNativesUSkillBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillBase);
	UClass* Z_Construct_UClass_USkillBase_NoRegister()
	{
		return USkillBase::StaticClass();
	}
	struct Z_Construct_UClass_USkillBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillBase_Statics::ClassParams = {
		&USkillBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkillBase()
	{
		if (!Z_Registration_Info_UClass_USkillBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillBase.OuterSingleton, Z_Construct_UClass_USkillBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillBase.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillBase>()
	{
		return USkillBase::StaticClass();
	}
	USkillBase::USkillBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillBase);
	USkillBase::~USkillBase() {}
	void USkillAttack::StaticRegisterNativesUSkillAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillAttack);
	UClass* Z_Construct_UClass_USkillAttack_NoRegister()
	{
		return USkillAttack::StaticClass();
	}
	struct Z_Construct_UClass_USkillAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the different variations of Skills\n" },
#endif
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the different variations of Skills" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillAttack_Statics::ClassParams = {
		&USkillAttack::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillAttack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkillAttack()
	{
		if (!Z_Registration_Info_UClass_USkillAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillAttack.OuterSingleton, Z_Construct_UClass_USkillAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillAttack.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillAttack>()
	{
		return USkillAttack::StaticClass();
	}
	USkillAttack::USkillAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillAttack);
	USkillAttack::~USkillAttack() {}
	void USyncSkill::StaticRegisterNativesUSyncSkill()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USyncSkill);
	UClass* Z_Construct_UClass_USyncSkill_NoRegister()
	{
		return USyncSkill::StaticClass();
	}
	struct Z_Construct_UClass_USyncSkill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USyncSkill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkillAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USyncSkill_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USyncSkill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USyncSkill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USyncSkill>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USyncSkill_Statics::ClassParams = {
		&USyncSkill::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USyncSkill_Statics::Class_MetaDataParams), Z_Construct_UClass_USyncSkill_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USyncSkill()
	{
		if (!Z_Registration_Info_UClass_USyncSkill.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USyncSkill.OuterSingleton, Z_Construct_UClass_USyncSkill_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USyncSkill.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USyncSkill>()
	{
		return USyncSkill::StaticClass();
	}
	USyncSkill::USyncSkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USyncSkill);
	USyncSkill::~USyncSkill() {}
	void USkillAliment::StaticRegisterNativesUSkillAliment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillAliment);
	UClass* Z_Construct_UClass_USkillAliment_NoRegister()
	{
		return USkillAliment::StaticClass();
	}
	struct Z_Construct_UClass_USkillAliment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusAilments_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statusAilments_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_statusAilments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillAliment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAliment_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillAliment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments_MetaData[] = {
		{ "Category", "SkillAliment" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments = { "statusAilments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAliment, statusAilments), Z_Construct_UEnum_DesentIntoAtlantis_EStatusAilments, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments_MetaData), Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments_MetaData) }; // 2006956200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillAliment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAliment_Statics::NewProp_statusAilments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillAliment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillAliment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillAliment_Statics::ClassParams = {
		&USkillAliment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillAliment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillAliment_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAliment_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillAliment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAliment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkillAliment()
	{
		if (!Z_Registration_Info_UClass_USkillAliment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillAliment.OuterSingleton, Z_Construct_UClass_USkillAliment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillAliment.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillAliment>()
	{
		return USkillAliment::StaticClass();
	}
	USkillAliment::USkillAliment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillAliment);
	USkillAliment::~USkillAliment() {}
	void USkillHeal::StaticRegisterNativesUSkillHeal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillHeal);
	UClass* Z_Construct_UClass_USkillHeal_NoRegister()
	{
		return USkillHeal::StaticClass();
	}
	struct Z_Construct_UClass_USkillHeal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillHeal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillHeal_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillHeal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillHeal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillHeal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillHeal_Statics::ClassParams = {
		&USkillHeal::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillHeal_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillHeal_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkillHeal()
	{
		if (!Z_Registration_Info_UClass_USkillHeal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillHeal.OuterSingleton, Z_Construct_UClass_USkillHeal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillHeal.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillHeal>()
	{
		return USkillHeal::StaticClass();
	}
	USkillHeal::USkillHeal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillHeal);
	USkillHeal::~USkillHeal() {}
	void USkillBuff::StaticRegisterNativesUSkillBuff()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillBuff);
	UClass* Z_Construct_UClass_USkillBuff_NoRegister()
	{
		return USkillBuff::StaticClass();
	}
	struct Z_Construct_UClass_USkillBuff_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillBuff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBuff_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBuff_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillBuff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillBuff>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillBuff_Statics::ClassParams = {
		&USkillBuff::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBuff_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillBuff_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkillBuff()
	{
		if (!Z_Registration_Info_UClass_USkillBuff.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillBuff.OuterSingleton, Z_Construct_UClass_USkillBuff_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillBuff.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillBuff>()
	{
		return USkillBuff::StaticClass();
	}
	USkillBuff::USkillBuff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillBuff);
	USkillBuff::~USkillBuff() {}
	void USkillDebuff::StaticRegisterNativesUSkillDebuff()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillDebuff);
	UClass* Z_Construct_UClass_USkillDebuff_NoRegister()
	{
		return USkillDebuff::StaticClass();
	}
	struct Z_Construct_UClass_USkillDebuff_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillDebuff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillDebuff_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillDebuff_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillsData.h" },
		{ "ModuleRelativePath", "Public/SkillsData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillDebuff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillDebuff>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillDebuff_Statics::ClassParams = {
		&USkillDebuff::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillDebuff_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillDebuff_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkillDebuff()
	{
		if (!Z_Registration_Info_UClass_USkillDebuff.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillDebuff.OuterSingleton, Z_Construct_UClass_USkillDebuff_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillDebuff.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillDebuff>()
	{
		return USkillDebuff::StaticClass();
	}
	USkillDebuff::USkillDebuff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillDebuff);
	USkillDebuff::~USkillDebuff() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::EnumInfo[] = {
		{ ESkillType_StaticEnum, TEXT("ESkillType"), &Z_Registration_Info_UEnum_ESkillType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1735734487U) },
		{ EStatusAilments_StaticEnum, TEXT("EStatusAilments"), &Z_Registration_Info_UEnum_EStatusAilments, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2006956200U) },
		{ ESkillUsage_StaticEnum, TEXT("ESkillUsage"), &Z_Registration_Info_UEnum_ESkillUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 302249528U) },
		{ ESkillDamageType_StaticEnum, TEXT("ESkillDamageType"), &Z_Registration_Info_UEnum_ESkillDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2848366532U) },
		{ EAilment_StaticEnum, TEXT("EAilment"), &Z_Registration_Info_UEnum_EAilment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 761153794U) },
		{ ESkillRange_StaticEnum, TEXT("ESkillRange"), &Z_Registration_Info_UEnum_ESkillRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 346620054U) },
		{ ESkillIDS_StaticEnum, TEXT("ESkillIDS"), &Z_Registration_Info_UEnum_ESkillIDS, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1795072353U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::ScriptStructInfo[] = {
		{ FSkillsData::StaticStruct, Z_Construct_UScriptStruct_FSkillsData_Statics::NewStructOps, TEXT("SkillsData"), &Z_Registration_Info_UScriptStruct_SkillsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillsData), 3406219720U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillBase, USkillBase::StaticClass, TEXT("USkillBase"), &Z_Registration_Info_UClass_USkillBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillBase), 895219196U) },
		{ Z_Construct_UClass_USkillAttack, USkillAttack::StaticClass, TEXT("USkillAttack"), &Z_Registration_Info_UClass_USkillAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillAttack), 853687424U) },
		{ Z_Construct_UClass_USyncSkill, USyncSkill::StaticClass, TEXT("USyncSkill"), &Z_Registration_Info_UClass_USyncSkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USyncSkill), 1166268751U) },
		{ Z_Construct_UClass_USkillAliment, USkillAliment::StaticClass, TEXT("USkillAliment"), &Z_Registration_Info_UClass_USkillAliment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillAliment), 1019298917U) },
		{ Z_Construct_UClass_USkillHeal, USkillHeal::StaticClass, TEXT("USkillHeal"), &Z_Registration_Info_UClass_USkillHeal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillHeal), 486689470U) },
		{ Z_Construct_UClass_USkillBuff, USkillBuff::StaticClass, TEXT("USkillBuff"), &Z_Registration_Info_UClass_USkillBuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillBuff), 391548045U) },
		{ Z_Construct_UClass_USkillDebuff, USkillDebuff::StaticClass, TEXT("USkillDebuff"), &Z_Registration_Info_UClass_USkillDebuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillDebuff), 1880562909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_272140549(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillsData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
