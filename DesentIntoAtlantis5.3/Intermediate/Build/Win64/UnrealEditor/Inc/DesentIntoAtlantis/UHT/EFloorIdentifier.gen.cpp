// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/EFloorIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFloorIdentifier() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloorIdentifier;
	static UEnum* EFloorIdentifier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFloorIdentifier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFloorIdentifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EFloorIdentifier"));
		}
		return Z_Registration_Info_UEnum_EFloorIdentifier.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorIdentifier>()
	{
		return EFloorIdentifier_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::Enumerators[] = {
		{ "EFloorIdentifier::None", (int64)EFloorIdentifier::None },
		{ "EFloorIdentifier::Test", (int64)EFloorIdentifier::Test },
		{ "EFloorIdentifier::Floor1", (int64)EFloorIdentifier::Floor1 },
		{ "EFloorIdentifier::Floor2", (int64)EFloorIdentifier::Floor2 },
		{ "EFloorIdentifier::Floor3", (int64)EFloorIdentifier::Floor3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::Enum_MetaDataParams[] = {
		{ "Floor1.Name", "EFloorIdentifier::Floor1" },
		{ "Floor2.Name", "EFloorIdentifier::Floor2" },
		{ "Floor3.Name", "EFloorIdentifier::Floor3" },
		{ "ModuleRelativePath", "EFloorIdentifier.h" },
		{ "None.Name", "EFloorIdentifier::None" },
		{ "Test.Name", "EFloorIdentifier::Test" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EFloorIdentifier",
		"EFloorIdentifier",
		Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier()
	{
		if (!Z_Registration_Info_UEnum_EFloorIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloorIdentifier.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFloorIdentifier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_EFloorIdentifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_EFloorIdentifier_h_Statics::EnumInfo[] = {
		{ EFloorIdentifier_StaticEnum, TEXT("EFloorIdentifier"), &Z_Registration_Info_UEnum_EFloorIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1497107215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_EFloorIdentifier_h_3650871462(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_EFloorIdentifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_EFloorIdentifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
