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
		{ "EViews::EnemySelection", (int64)EViews::EnemySelection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EViews_Statics::Enum_MetaDataParams[] = {
		{ "CombatBackground.Name", "EViews::CombatBackground" },
		{ "CommandBoard.Name", "EViews::CommandBoard" },
		{ "EnemySelection.Name", "EViews::EnemySelection" },
		{ "Healthbars.Name", "EViews::Healthbars" },
		{ "ModuleRelativePath", "Public/Views.h" },
		{ "None.Name", "EViews::None" },
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
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EViewElements_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Views.h" },
		{ "None.Name", "EViewElements::None" },
		{ "PartyStatusHealthbar.Name", "EViewElements::PartyStatusHealthbar" },
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
		{ EViews_StaticEnum, TEXT("EViews"), &Z_Registration_Info_UEnum_EViews, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4178906047U) },
		{ EViewElements_StaticEnum, TEXT("EViewElements"), &Z_Registration_Info_UEnum_EViewElements, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2240120800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_1401003604(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS