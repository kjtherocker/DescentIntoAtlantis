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
		{ "Single", (int64)Single },
		{ "Multi", (int64)Multi },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
		{ "Multi.Name", "Multi" },
		{ "Single.Name", "Single" },
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
		(uint8)UEnum::ECppForm::Regular,
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkillName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkillDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostToUse_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CostToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SkillRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillIcon;
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType = { "ElementalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, ElementalType), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType_MetaData)) }; // 928806472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillName_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, SkillName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillDescription_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillDescription = { "SkillDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, SkillDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_CostToUse_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_CostToUse = { "CostToUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, CostToUse), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_CostToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_CostToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillRange_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillRange = { "SkillRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, SkillRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillIcon_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillIcon = { "SkillIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkills_Base, SkillIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkills_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_ElementalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_CostToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkills_Base_Statics::NewProp_SkillIcon,
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
		{ EAilment_StaticEnum, TEXT("EAilment"), &Z_Registration_Info_UEnum_EAilment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3317222983U) },
		{ ESkillRange_StaticEnum, TEXT("ESkillRange"), &Z_Registration_Info_UEnum_ESkillRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2381454770U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ScriptStructInfo[] = {
		{ FSkills_Base::StaticStruct, Z_Construct_UScriptStruct_FSkills_Base_Statics::NewStructOps, TEXT("Skills_Base"), &Z_Registration_Info_UScriptStruct_Skills_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkills_Base), 2740167367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_2364431159(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
