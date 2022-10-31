// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/Views.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViews() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViews();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EUiType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViewElements();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViews;
	static UEnum* EViews_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViews.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViews.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EViews, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EViews"));
		}
		return Z_Registration_Info_UEnum_EViews.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EViews>()
	{
		return EViews_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enumerators[] = {
		{ "EViews::None", (int64)EViews::None },
		{ "EViews::CommandBoard", (int64)EViews::CommandBoard },
		{ "EViews::Healthbars", (int64)EViews::Healthbars },
		{ "EViews::CombatBackground", (int64)EViews::CombatBackground },
		{ "EViews::CombatSelection", (int64)EViews::CombatSelection },
		{ "EViews::Skill", (int64)EViews::Skill },
		{ "EViews::EnemyPortraits", (int64)EViews::EnemyPortraits },
		{ "EViews::TurnCounter", (int64)EViews::TurnCounter },
		{ "EViews::Dialogue", (int64)EViews::Dialogue },
		{ "EViews::EnemySkill", (int64)EViews::EnemySkill },
		{ "EViews::Levelup", (int64)EViews::Levelup },
		{ "EViews::Tutorial", (int64)EViews::Tutorial },
		{ "EViews::Title", (int64)EViews::Title },
		{ "EViews::Death", (int64)EViews::Death },
		{ "EViews::Ending", (int64)EViews::Ending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enum_MetaDataParams[] = {
		{ "CombatBackground.Name", "EViews::CombatBackground" },
		{ "CombatSelection.Name", "EViews::CombatSelection" },
		{ "CommandBoard.Name", "EViews::CommandBoard" },
		{ "Death.Name", "EViews::Death" },
		{ "Dialogue.Name", "EViews::Dialogue" },
		{ "Ending.Name", "EViews::Ending" },
		{ "EnemyPortraits.Name", "EViews::EnemyPortraits" },
		{ "EnemySkill.Name", "EViews::EnemySkill" },
		{ "Healthbars.Name", "EViews::Healthbars" },
		{ "Levelup.Name", "EViews::Levelup" },
		{ "ModuleRelativePath", "Public/Views.h" },
		{ "None.Name", "EViews::None" },
		{ "Skill.Name", "EViews::Skill" },
		{ "Title.Name", "EViews::Title" },
		{ "TurnCounter.Name", "EViews::TurnCounter" },
		{ "Tutorial.Name", "EViews::Tutorial" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EViews",
		"EViews",
		Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViews()
	{
		if (!Z_Registration_Info_UEnum_EViews.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViews.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViews.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUiType;
	static UEnum* EUiType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUiType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUiType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EUiType, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EUiType"));
		}
		return Z_Registration_Info_UEnum_EUiType.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EUiType>()
	{
		return EUiType_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::Enumerators[] = {
		{ "EUiType::None", (int64)EUiType::None },
		{ "EUiType::ActiveUi", (int64)EUiType::ActiveUi },
		{ "EUiType::PersistentUi", (int64)EUiType::PersistentUi },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::Enum_MetaDataParams[] = {
		{ "ActiveUi.Name", "EUiType::ActiveUi" },
		{ "ModuleRelativePath", "Public/Views.h" },
		{ "None.Name", "EUiType::None" },
		{ "PersistentUi.Name", "EUiType::PersistentUi" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EUiType",
		"EUiType",
		Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EUiType()
	{
		if (!Z_Registration_Info_UEnum_EUiType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUiType.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EUiType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUiType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewElements;
	static UEnum* EViewElements_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewElements.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewElements.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EViewElements, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EViewElements"));
		}
		return Z_Registration_Info_UEnum_EViewElements.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EViewElements>()
	{
		return EViewElements_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enumerators[] = {
		{ "EViewElements::None", (int64)EViewElements::None },
		{ "EViewElements::PartyStatusHealthbar", (int64)EViewElements::PartyStatusHealthbar },
		{ "EViewElements::SkillBar", (int64)EViewElements::SkillBar },
		{ "EViewElements::EnemySelectionElement", (int64)EViewElements::EnemySelectionElement },
		{ "EViewElements::TurnCounterElement", (int64)EViewElements::TurnCounterElement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enum_MetaDataParams[] = {
		{ "EnemySelectionElement.Name", "EViewElements::EnemySelectionElement" },
		{ "ModuleRelativePath", "Public/Views.h" },
		{ "None.Name", "EViewElements::None" },
		{ "PartyStatusHealthbar.Name", "EViewElements::PartyStatusHealthbar" },
		{ "SkillBar.Name", "EViewElements::SkillBar" },
		{ "TurnCounterElement.Name", "EViewElements::TurnCounterElement" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EViewElements",
		"EViewElements",
		Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViewElements()
	{
		if (!Z_Registration_Info_UEnum_EViewElements.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewElements.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewElements.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_Statics::EnumInfo[] = {
		{ EViews_StaticEnum, TEXT("EViews"), &Z_Registration_Info_UEnum_EViews, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3315017103U) },
		{ EUiType_StaticEnum, TEXT("EUiType"), &Z_Registration_Info_UEnum_EUiType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4223346555U) },
		{ EViewElements_StaticEnum, TEXT("EViewElements"), &Z_Registration_Info_UEnum_EViewElements, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3583364803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_1929312963(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
