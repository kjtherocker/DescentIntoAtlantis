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
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerEntityData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarElement_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerEntityData;
class UScriptStruct* FPlayerEntityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerEntityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerEntityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerEntityData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("PlayerEntityData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerEntityData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FPlayerEntityData>()
{
	return FPlayerEntityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerEntityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataTableClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTableClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataTableClass;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEntityData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerEntityData>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass_MetaData[] = {
		{ "Category", "PlayerEntityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass = { "DataTableClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerEntityData, DataTableClass), Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass_MetaData)) }; // 916432985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "PlayerEntityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerEntityData, characterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterPortrait_MetaData[] = {
		{ "Category", "PlayerEntityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterPortrait = { "characterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerEntityData, characterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData[] = {
		{ "Category", "PlayerEntityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_fullBodyCharacterPortrait = { "fullBodyCharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerEntityData, fullBodyCharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerEntityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_DataTableClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_characterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewProp_fullBodyCharacterPortrait,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerEntityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"PlayerEntityData",
		sizeof(FPlayerEntityData),
		alignof(FPlayerEntityData),
		Z_Construct_UScriptStruct_FPlayerEntityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEntityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerEntityData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerEntityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerEntityData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerEntityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerEntityData.InnerSingleton;
	}
	void UPlayerCombatEntity::StaticRegisterNativesUPlayerCombatEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCombatEntity);
	UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister()
	{
		return UPlayerCombatEntity::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCombatEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_baseClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerEntityData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerEntityData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyHealthbarElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyHealthbarElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCombatEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerCombatEntity.h" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_baseClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_baseClass = { "baseClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, baseClass), Z_Construct_UClass_UCombatClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_baseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_baseClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData = { "playerEntityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, playerEntityData), Z_Construct_UScriptStruct_FPlayerEntityData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData_MetaData)) }; // 337639282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement = { "partyHealthbarElement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, partyHealthbarElement), Z_Construct_UClass_UPartyHealthbarElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCombatEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_baseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCombatEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCombatEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCombatEntity_Statics::ClassParams = {
		&UPlayerCombatEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerCombatEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCombatEntity()
	{
		if (!Z_Registration_Info_UClass_UPlayerCombatEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCombatEntity.OuterSingleton, Z_Construct_UClass_UPlayerCombatEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCombatEntity.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPlayerCombatEntity>()
	{
		return UPlayerCombatEntity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCombatEntity);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo[] = {
		{ FPlayerEntityData::StaticStruct, Z_Construct_UScriptStruct_FPlayerEntityData_Statics::NewStructOps, TEXT("PlayerEntityData"), &Z_Registration_Info_UScriptStruct_PlayerEntityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerEntityData), 337639282U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCombatEntity, UPlayerCombatEntity::StaticClass, TEXT("UPlayerCombatEntity"), &Z_Registration_Info_UClass_UPlayerCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatEntity), 1029250831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_1251931180(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
