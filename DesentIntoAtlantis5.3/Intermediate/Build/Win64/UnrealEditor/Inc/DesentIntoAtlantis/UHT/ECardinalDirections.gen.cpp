// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECardinalDirections() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardinalNodeDirections;
	static UEnum* ECardinalNodeDirections_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECardinalNodeDirections.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECardinalNodeDirections.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ECardinalNodeDirections"));
		}
		return Z_Registration_Info_UEnum_ECardinalNodeDirections.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECardinalNodeDirections>()
	{
		return ECardinalNodeDirections_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::Enumerators[] = {
		{ "ECardinalNodeDirections::Empty", (int64)ECardinalNodeDirections::Empty },
		{ "ECardinalNodeDirections::Up", (int64)ECardinalNodeDirections::Up },
		{ "ECardinalNodeDirections::Down", (int64)ECardinalNodeDirections::Down },
		{ "ECardinalNodeDirections::Left", (int64)ECardinalNodeDirections::Left },
		{ "ECardinalNodeDirections::Right", (int64)ECardinalNodeDirections::Right },
		{ "ECardinalNodeDirections::AllSidesOpen", (int64)ECardinalNodeDirections::AllSidesOpen },
		{ "ECardinalNodeDirections::UpDown", (int64)ECardinalNodeDirections::UpDown },
		{ "ECardinalNodeDirections::UpLeft", (int64)ECardinalNodeDirections::UpLeft },
		{ "ECardinalNodeDirections::Upright", (int64)ECardinalNodeDirections::Upright },
		{ "ECardinalNodeDirections::LeftDown", (int64)ECardinalNodeDirections::LeftDown },
		{ "ECardinalNodeDirections::RightDown", (int64)ECardinalNodeDirections::RightDown },
		{ "ECardinalNodeDirections::LeftRight", (int64)ECardinalNodeDirections::LeftRight },
		{ "ECardinalNodeDirections::UpLeftRight", (int64)ECardinalNodeDirections::UpLeftRight },
		{ "ECardinalNodeDirections::UpLeftDown", (int64)ECardinalNodeDirections::UpLeftDown },
		{ "ECardinalNodeDirections::UpRightDown", (int64)ECardinalNodeDirections::UpRightDown },
		{ "ECardinalNodeDirections::DownLeftRight", (int64)ECardinalNodeDirections::DownLeftRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::Enum_MetaDataParams[] = {
		{ "AllSidesOpen.Name", "ECardinalNodeDirections::AllSidesOpen" },
		{ "Down.Name", "ECardinalNodeDirections::Down" },
		{ "DownLeftRight.Name", "ECardinalNodeDirections::DownLeftRight" },
		{ "Empty.Name", "ECardinalNodeDirections::Empty" },
		{ "Left.Name", "ECardinalNodeDirections::Left" },
		{ "LeftDown.Name", "ECardinalNodeDirections::LeftDown" },
		{ "LeftRight.Name", "ECardinalNodeDirections::LeftRight" },
		{ "ModuleRelativePath", "ECardinalDirections.h" },
		{ "Right.Name", "ECardinalNodeDirections::Right" },
		{ "RightDown.Name", "ECardinalNodeDirections::RightDown" },
		{ "Up.Name", "ECardinalNodeDirections::Up" },
		{ "UpDown.Name", "ECardinalNodeDirections::UpDown" },
		{ "UpLeft.Name", "ECardinalNodeDirections::UpLeft" },
		{ "UpLeftDown.Name", "ECardinalNodeDirections::UpLeftDown" },
		{ "UpLeftRight.Name", "ECardinalNodeDirections::UpLeftRight" },
		{ "Upright.Name", "ECardinalNodeDirections::Upright" },
		{ "UpRightDown.Name", "ECardinalNodeDirections::UpRightDown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ECardinalNodeDirections",
		"ECardinalNodeDirections",
		Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections()
	{
		if (!Z_Registration_Info_UEnum_ECardinalNodeDirections.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardinalNodeDirections.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECardinalNodeDirections.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_ECardinalDirections_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_ECardinalDirections_h_Statics::EnumInfo[] = {
		{ ECardinalNodeDirections_StaticEnum, TEXT("ECardinalNodeDirections"), &Z_Registration_Info_UEnum_ECardinalNodeDirections, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1737660603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_ECardinalDirections_h_3049177007(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_ECardinalDirections_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_ECardinalDirections_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
