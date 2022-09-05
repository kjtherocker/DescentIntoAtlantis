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
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyEntityData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyCombatEntity();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity();
// End Cross Module References

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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_fullBodyCharacterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewProp_Behaviour,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FEnemyEntityData::StaticStruct, Z_Construct_UScriptStruct_FEnemyEntityData_Statics::NewStructOps, TEXT("EnemyEntityData"), &Z_Registration_Info_UScriptStruct_EnemyEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyEntityData), 2597442566U) },
		{ FEnemyCombatEntity::StaticStruct, Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics::NewStructOps, TEXT("EnemyCombatEntity"), &Z_Registration_Info_UScriptStruct_EnemyCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyCombatEntity), 650468375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_4125223313(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
