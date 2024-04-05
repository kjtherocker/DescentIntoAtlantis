// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EDataTableTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDataTableTypes() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataTableTypes;
	static UEnum* EDataTableTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataTableTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataTableTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EDataTableTypes"));
		}
		return Z_Registration_Info_UEnum_EDataTableTypes.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDataTableTypes>()
	{
		return EDataTableTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enumerators[] = {
		{ "EDataTableTypes::None", (int64)EDataTableTypes::None },
		{ "EDataTableTypes::Enemys", (int64)EDataTableTypes::Enemys },
		{ "EDataTableTypes::EnemyGroups", (int64)EDataTableTypes::EnemyGroups },
		{ "EDataTableTypes::PlayerCharacters", (int64)EDataTableTypes::PlayerCharacters },
		{ "EDataTableTypes::Tutorial", (int64)EDataTableTypes::Tutorial },
		{ "EDataTableTypes::Floor", (int64)EDataTableTypes::Floor },
		{ "EDataTableTypes::FloorEvent", (int64)EDataTableTypes::FloorEvent },
		{ "EDataTableTypes::Dialogue", (int64)EDataTableTypes::Dialogue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enum_MetaDataParams[] = {
		{ "Dialogue.Name", "EDataTableTypes::Dialogue" },
		{ "EnemyGroups.Name", "EDataTableTypes::EnemyGroups" },
		{ "Enemys.Name", "EDataTableTypes::Enemys" },
		{ "Floor.Name", "EDataTableTypes::Floor" },
		{ "FloorEvent.Name", "EDataTableTypes::FloorEvent" },
		{ "ModuleRelativePath", "Public/EDataTableTypes.h" },
		{ "None.Name", "EDataTableTypes::None" },
		{ "PlayerCharacters.Name", "EDataTableTypes::PlayerCharacters" },
		{ "Tutorial.Name", "EDataTableTypes::Tutorial" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EDataTableTypes",
		"EDataTableTypes",
		Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes()
	{
		if (!Z_Registration_Info_UEnum_EDataTableTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataTableTypes.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataTableTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataTableClasses;
	static UEnum* EDataTableClasses_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataTableClasses.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataTableClasses.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EDataTableClasses"));
		}
		return Z_Registration_Info_UEnum_EDataTableClasses.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDataTableClasses>()
	{
		return EDataTableClasses_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::Enumerators[] = {
		{ "EDataTableClasses::None", (int64)EDataTableClasses::None },
		{ "EDataTableClasses::Paladin", (int64)EDataTableClasses::Paladin },
		{ "EDataTableClasses::DarkKnight", (int64)EDataTableClasses::DarkKnight },
		{ "EDataTableClasses::Dancer", (int64)EDataTableClasses::Dancer },
		{ "EDataTableClasses::SoulEater", (int64)EDataTableClasses::SoulEater },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::Enum_MetaDataParams[] = {
		{ "Dancer.Name", "EDataTableClasses::Dancer" },
		{ "DarkKnight.Name", "EDataTableClasses::DarkKnight" },
		{ "ModuleRelativePath", "Public/EDataTableTypes.h" },
		{ "None.Name", "EDataTableClasses::None" },
		{ "Paladin.Name", "EDataTableClasses::Paladin" },
		{ "SoulEater.Name", "EDataTableClasses::SoulEater" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EDataTableClasses",
		"EDataTableClasses",
		Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses()
	{
		if (!Z_Registration_Info_UEnum_EDataTableClasses.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataTableClasses.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataTableClasses.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics::EnumInfo[] = {
		{ EDataTableTypes_StaticEnum, TEXT("EDataTableTypes"), &Z_Registration_Info_UEnum_EDataTableTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1451724120U) },
		{ EDataTableClasses_StaticEnum, TEXT("EDataTableClasses"), &Z_Registration_Info_UEnum_EDataTableClasses, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 916432985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_939355717(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
