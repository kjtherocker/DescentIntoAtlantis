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
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAilment();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillRange();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkills_Base_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkills_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
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
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EElementalTypes;
	static UEnum* EElementalTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EElementalTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EElementalTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EElementalTypes"));
		}
		return Z_Registration_Info_UEnum_EElementalTypes.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EElementalTypes>()
	{
		return EElementalTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::Enumerators[] = {
		{ "Null", (int64)Null },
		{ "Fire", (int64)Fire },
		{ "Ice", (int64)Ice },
		{ "Wind", (int64)Wind },
		{ "Lighting", (int64)Lighting },
		{ "Shadow", (int64)Shadow },
		{ "Light", (int64)Light },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fire.Name", "Fire" },
		{ "Ice.Name", "Ice" },
		{ "Light.Name", "Light" },
		{ "Lighting.Name", "Lighting" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
		{ "Null.Name", "Null" },
		{ "Shadow.Name", "Shadow" },
		{ "Wind.Name", "Wind" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EElementalTypes",
		"EElementalTypes",
		Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes()
	{
		if (!Z_Registration_Info_UEnum_EElementalTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EElementalTypes.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EElementalTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EElementalTypes.InnerSingleton;
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
	void USkills_Base::StaticRegisterNativesUSkills_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkills_Base);
	UClass* Z_Construct_UClass_USkills_Base_NoRegister()
	{
		return USkills_Base::StaticClass();
	}
	struct Z_Construct_UClass_USkills_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkillName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkillDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CostToUse_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_CostToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SkillRange_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_SkillRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkills_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkills_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Skills_Base.h" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillName_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkills_Base, SkillName), METADATA_PARAMS(Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillDescription_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillDescription = { "SkillDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkills_Base, SkillDescription), METADATA_PARAMS(Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkills_Base_Statics::NewProp_m_CostToUse_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkills_Base_Statics::NewProp_m_CostToUse = { "m_CostToUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkills_Base, m_CostToUse), METADATA_PARAMS(Z_Construct_UClass_USkills_Base_Statics::NewProp_m_CostToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::NewProp_m_CostToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkills_Base_Statics::NewProp_m_Damage_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkills_Base_Statics::NewProp_m_Damage = { "m_Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkills_Base, m_Damage), METADATA_PARAMS(Z_Construct_UClass_USkills_Base_Statics::NewProp_m_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::NewProp_m_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkills_Base_Statics::NewProp_m_SkillRange_MetaData[] = {
		{ "Category", "Skills_Base" },
		{ "ModuleRelativePath", "Public/Skills_Base.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkills_Base_Statics::NewProp_m_SkillRange = { "m_SkillRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkills_Base, m_SkillRange), METADATA_PARAMS(Z_Construct_UClass_USkills_Base_Statics::NewProp_m_SkillRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::NewProp_m_SkillRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkills_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkills_Base_Statics::NewProp_SkillDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkills_Base_Statics::NewProp_m_CostToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkills_Base_Statics::NewProp_m_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkills_Base_Statics::NewProp_m_SkillRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkills_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkills_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkills_Base_Statics::ClassParams = {
		&USkills_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkills_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkills_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkills_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkills_Base()
	{
		if (!Z_Registration_Info_UClass_USkills_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkills_Base.OuterSingleton, Z_Construct_UClass_USkills_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkills_Base.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkills_Base>()
	{
		return USkills_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkills_Base);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo[] = {
		{ ESkillType_StaticEnum, TEXT("ESkillType"), &Z_Registration_Info_UEnum_ESkillType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 95639070U) },
		{ EElementalTypes_StaticEnum, TEXT("EElementalTypes"), &Z_Registration_Info_UEnum_EElementalTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4008016569U) },
		{ EAilment_StaticEnum, TEXT("EAilment"), &Z_Registration_Info_UEnum_EAilment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3317222983U) },
		{ ESkillRange_StaticEnum, TEXT("ESkillRange"), &Z_Registration_Info_UEnum_ESkillRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2381454770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkills_Base, USkills_Base::StaticClass, TEXT("USkills_Base"), &Z_Registration_Info_UClass_USkills_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkills_Base), 2545424353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_3757691455(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
