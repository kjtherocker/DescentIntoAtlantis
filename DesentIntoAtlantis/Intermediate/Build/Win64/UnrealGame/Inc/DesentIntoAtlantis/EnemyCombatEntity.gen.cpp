// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCombatEntity() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyEntityData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyCombatEntity();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyCombatPositions;
	static UEnum* EEnemyCombatPositions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyCombatPositions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyCombatPositions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EEnemyCombatPositions"));
		}
		return Z_Registration_Info_UEnum_EEnemyCombatPositions.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EEnemyCombatPositions>()
	{
		return EEnemyCombatPositions_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enumerators[] = {
		{ "EEnemyCombatPositions::Left", (int64)EEnemyCombatPositions::Left },
		{ "EEnemyCombatPositions::Middle", (int64)EEnemyCombatPositions::Middle },
		{ "EEnemyCombatPositions::Right", (int64)EEnemyCombatPositions::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enum_MetaDataParams[] = {
		{ "Left.Name", "EEnemyCombatPositions::Left" },
		{ "Middle.Name", "EEnemyCombatPositions::Middle" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
		{ "Right.Name", "EEnemyCombatPositions::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EEnemyCombatPositions",
		"EEnemyCombatPositions",
		Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions()
	{
		if (!Z_Registration_Info_UEnum_EEnemyCombatPositions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyCombatPositions.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyCombatPositions.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnemyEntityData>() == std::is_polymorphic<FCombatEntityData>(), "USTRUCT FEnemyEntityData cannot be polymorphic unless super FCombatEntityData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyEntityData;
class UScriptStruct* FEnemyEntityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyEntityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyEntityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyEntityData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EnemyEntityData"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyEntityData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FEnemyEntityData>()
{
	return FEnemyEntityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyEntityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fullBodyCharacterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fullBodyCharacterPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behaviour_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Behaviour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill4_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill5_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skill5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyEntityData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait = { "fullBodyCharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, fullBodyCharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, characterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour = { "Behaviour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, Behaviour), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1 = { "Skill1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, Skill1), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2 = { "Skill2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, Skill2), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3 = { "Skill3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, Skill3), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4 = { "Skill4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, Skill4), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5_MetaData[] = {
		{ "Category", "EnemyEntityData" },
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5 = { "Skill5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyEntityData, Skill5), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Skill5,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntityData,
		&NewStructOps,
		"EnemyEntityData",
		sizeof(FEnemyEntityData),
		alignof(FEnemyEntityData),
		Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyEntityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyEntityData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyEntityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyEntityData.InnerSingleton, Z_Construct_UScriptStruct_FEnemyEntityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyEntityData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnemyCombatEntity>() == std::is_polymorphic<FCombatEntity>(), "USTRUCT FEnemyCombatEntity cannot be polymorphic unless super FCombatEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyCombatEntity;
class UScriptStruct* FEnemyCombatEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyCombatEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyCombatEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyCombatEntity, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EnemyCombatEntity"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyCombatEntity.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FEnemyCombatEntity>()
{
	return FEnemyCombatEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyCombatEntity>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntity,
		&NewStructOps,
		"EnemyCombatEntity",
		sizeof(FEnemyCombatEntity),
		alignof(FEnemyCombatEntity),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyCombatEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyCombatEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyCombatEntity.InnerSingleton, Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyCombatEntity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::EnumInfo[] = {
		{ EEnemyCombatPositions_StaticEnum, TEXT("EEnemyCombatPositions"), &Z_Registration_Info_UEnum_EEnemyCombatPositions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3890971794U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FEnemyEntityData::StaticStruct, Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewStructOps, TEXT("EnemyEntityData"), &Z_Registration_Info_UScriptStruct_EnemyEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyEntityData), 3493340959U) },
		{ FEnemyCombatEntity::StaticStruct, Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::NewStructOps, TEXT("EnemyCombatEntity"), &Z_Registration_Info_UScriptStruct_EnemyCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyCombatEntity), 650468375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_4216663034(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
