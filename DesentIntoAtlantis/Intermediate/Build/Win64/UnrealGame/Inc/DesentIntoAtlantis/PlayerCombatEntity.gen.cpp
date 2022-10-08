// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PlayerCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCombatEntity() {}
// Cross Module References
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCombatEntity();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FClassData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerCombatEntity>() == std::is_polymorphic<FCombatEntity>(), "USTRUCT FPlayerCombatEntity cannot be polymorphic unless super FCombatEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerCombatEntity;
class UScriptStruct* FPlayerCombatEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerCombatEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerCombatEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerCombatEntity, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("PlayerCombatEntity"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerCombatEntity.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FPlayerCombatEntity>()
{
	return FPlayerCombatEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classDataTablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classDataTablePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fullBodyCharacterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fullBodyCharacterPortrait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerCombatEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_classDataTablePath_MetaData[] = {
		{ "Category", "PlayerCombatEntity" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_classDataTablePath = { "classDataTablePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCombatEntity, classDataTablePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_classDataTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_classDataTablePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "PlayerCombatEntity" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCombatEntity, characterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterPortrait_MetaData[] = {
		{ "Category", "PlayerCombatEntity" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterPortrait = { "characterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCombatEntity, characterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_fullBodyCharacterPortrait_MetaData[] = {
		{ "Category", "PlayerCombatEntity" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_fullBodyCharacterPortrait = { "fullBodyCharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCombatEntity, fullBodyCharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_fullBodyCharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_fullBodyCharacterPortrait_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_classDataTablePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_characterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewProp_fullBodyCharacterPortrait,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntity,
		&NewStructOps,
		"PlayerCombatEntity",
		sizeof(FPlayerCombatEntity),
		alignof(FPlayerCombatEntity),
		Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerCombatEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerCombatEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerCombatEntity.InnerSingleton, Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerCombatEntity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClassData>() == std::is_polymorphic<FCombatEntityData>(), "USTRUCT FClassData cannot be polymorphic unless super FCombatEntityData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassData;
class UScriptStruct* FClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ClassData"));
	}
	return Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FClassData>()
{
	return FClassData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_className_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_className;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classLevelID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classLevelID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expToNextClassLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_expToNextClassLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newlyObtainedSkill_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_newlyObtainedSkill;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//A combat class is filled with the bases of all stats\n" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
		{ "ToolTip", "A combat class is filled with the bases of all stats" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className = { "className", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, className), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID = { "classLevelID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, classLevelID), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel = { "expToNextClassLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, expToNextClassLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill = { "newlyObtainedSkill", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, newlyObtainedSkill), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntityData,
		&NewStructOps,
		"ClassData",
		sizeof(FClassData),
		alignof(FClassData),
		Z_Construct_UScriptStruct_FClassData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton, Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FPlayerCombatEntity::StaticStruct, Z_Construct_UScriptStruct_FPlayerCombatEntity_Statics::NewStructOps, TEXT("PlayerCombatEntity"), &Z_Registration_Info_UScriptStruct_PlayerCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerCombatEntity), 286020102U) },
		{ FClassData::StaticStruct, Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps, TEXT("ClassData"), &Z_Registration_Info_UScriptStruct_ClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassData), 224289581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_4208290077(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
