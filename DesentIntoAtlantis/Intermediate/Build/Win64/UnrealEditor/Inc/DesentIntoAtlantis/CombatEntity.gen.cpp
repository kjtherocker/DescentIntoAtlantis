// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEntity() {}
// Cross Module References
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCombatEntity>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatEntity cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatEntity;
class UScriptStruct* FCombatEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatEntity, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CombatEntity"));
	}
	return Z_Registration_Info_UScriptStruct_CombatEntity.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCombatEntity>()
{
	return FCombatEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombatEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classDataTablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classDataTablePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombatEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "CombatEntity" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntity, characterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_classDataTablePath_MetaData[] = {
		{ "Category", "CombatEntity" },
		{ "ModuleRelativePath", "Public/CombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_classDataTablePath = { "classDataTablePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCombatEntity, classDataTablePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_classDataTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_classDataTablePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatEntity_Statics::NewProp_classDataTablePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombatEntity",
		sizeof(FCombatEntity),
		alignof(FCombatEntity),
		Z_Construct_UScriptStruct_FCombatEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCombatEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCombatEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_CombatEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatEntity.InnerSingleton, Z_Construct_UScriptStruct_FCombatEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombatEntity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FCombatEntity::StaticStruct, Z_Construct_UScriptStruct_FCombatEntity_Statics::NewStructOps, TEXT("CombatEntity"), &Z_Registration_Info_UScriptStruct_CombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatEntity), 2528093899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_358860671(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
