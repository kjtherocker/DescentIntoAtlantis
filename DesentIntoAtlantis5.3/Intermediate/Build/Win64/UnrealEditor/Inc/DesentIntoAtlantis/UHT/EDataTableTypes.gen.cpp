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
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EClasses();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataTableTypes;
	static UEnum* EDataTableTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataTableTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataTableTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EDataTableTypes"));
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
		{ "EDataTableTypes::Classes", (int64)EDataTableTypes::Classes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enum_MetaDataParams[] = {
		{ "Classes.Name", "EDataTableTypes::Classes" },
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes()
	{
		if (!Z_Registration_Info_UEnum_EDataTableTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataTableTypes.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataTableTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClasses;
	static UEnum* EClasses_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClasses.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClasses.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EClasses, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EClasses"));
		}
		return Z_Registration_Info_UEnum_EClasses.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EClasses>()
	{
		return EClasses_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::Enumerators[] = {
		{ "EClasses::None", (int64)EClasses::None },
		{ "EClasses::GraveKnight", (int64)EClasses::GraveKnight },
		{ "EClasses::WaterShaper", (int64)EClasses::WaterShaper },
		{ "EClasses::Thief", (int64)EClasses::Thief },
		{ "EClasses::HydroArcher", (int64)EClasses::HydroArcher },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::Enum_MetaDataParams[] = {
		{ "GraveKnight.Name", "EClasses::GraveKnight" },
		{ "HydroArcher.Name", "EClasses::HydroArcher" },
		{ "ModuleRelativePath", "Public/EDataTableTypes.h" },
		{ "None.Name", "EClasses::None" },
		{ "Thief.Name", "EClasses::Thief" },
		{ "WaterShaper.Name", "EClasses::WaterShaper" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EClasses",
		"EClasses",
		Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EClasses()
	{
		if (!Z_Registration_Info_UEnum_EClasses.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClasses.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EClasses_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClasses.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyMembers;
	static UEnum* EPartyMembers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyMembers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyMembers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EPartyMembers"));
		}
		return Z_Registration_Info_UEnum_EPartyMembers.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EPartyMembers>()
	{
		return EPartyMembers_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::Enumerators[] = {
		{ "EPartyMembers::None", (int64)EPartyMembers::None },
		{ "EPartyMembers::Fide", (int64)EPartyMembers::Fide },
		{ "EPartyMembers::Rain", (int64)EPartyMembers::Rain },
		{ "EPartyMembers::Fienne", (int64)EPartyMembers::Fienne },
		{ "EPartyMembers::Gram", (int64)EPartyMembers::Gram },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::Enum_MetaDataParams[] = {
		{ "Fide.Name", "EPartyMembers::Fide" },
		{ "Fienne.Name", "EPartyMembers::Fienne" },
		{ "Gram.Name", "EPartyMembers::Gram" },
		{ "ModuleRelativePath", "Public/EDataTableTypes.h" },
		{ "None.Name", "EPartyMembers::None" },
		{ "Rain.Name", "EPartyMembers::Rain" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EPartyMembers",
		"EPartyMembers",
		Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers()
	{
		if (!Z_Registration_Info_UEnum_EPartyMembers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyMembers.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyMembers.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics::EnumInfo[] = {
		{ EDataTableTypes_StaticEnum, TEXT("EDataTableTypes"), &Z_Registration_Info_UEnum_EDataTableTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3334060239U) },
		{ EClasses_StaticEnum, TEXT("EClasses"), &Z_Registration_Info_UEnum_EClasses, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2061419180U) },
		{ EPartyMembers_StaticEnum, TEXT("EPartyMembers"), &Z_Registration_Info_UEnum_EPartyMembers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 781165082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_1041781989(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EDataTableTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
