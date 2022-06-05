// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EElementalType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEElementalType() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EElementalType;
	static UEnum* EElementalType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EElementalType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EElementalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EElementalType"));
		}
		return Z_Registration_Info_UEnum_EElementalType.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EElementalType>()
	{
		return EElementalType_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::Enumerators[] = {
		{ "EElementalType::Null", (int64)EElementalType::Null },
		{ "EElementalType::Fire", (int64)EElementalType::Fire },
		{ "EElementalType::Water", (int64)EElementalType::Water },
		{ "EElementalType::Wind", (int64)EElementalType::Wind },
		{ "EElementalType::Lighting", (int64)EElementalType::Lighting },
		{ "EElementalType::Shadow", (int64)EElementalType::Shadow },
		{ "EElementalType::Light", (int64)EElementalType::Light },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::Enum_MetaDataParams[] = {
		{ "Fire.Name", "EElementalType::Fire" },
		{ "Light.Name", "EElementalType::Light" },
		{ "Lighting.Name", "EElementalType::Lighting" },
		{ "ModuleRelativePath", "Public/EElementalType.h" },
		{ "Null.Name", "EElementalType::Null" },
		{ "Shadow.Name", "EElementalType::Shadow" },
		{ "Water.Name", "EElementalType::Water" },
		{ "Wind.Name", "EElementalType::Wind" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EElementalType",
		"EElementalType",
		Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType()
	{
		if (!Z_Registration_Info_UEnum_EElementalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EElementalType.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EElementalType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EElementalType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics::EnumInfo[] = {
		{ EElementalType_StaticEnum, TEXT("EElementalType"), &Z_Registration_Info_UEnum_EElementalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3346300291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_1899640679(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
