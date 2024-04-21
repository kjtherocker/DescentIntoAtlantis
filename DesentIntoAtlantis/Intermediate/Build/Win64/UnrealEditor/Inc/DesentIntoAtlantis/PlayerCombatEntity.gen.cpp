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
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerIdentityData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EClasses();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCompleteDataSet();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteClassData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FClassData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarElement_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerIdentityData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerIdentityData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerIdentityData;
class UScriptStruct* FPlayerIdentityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerIdentityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerIdentityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerIdentityData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("PlayerIdentityData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerIdentityData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FPlayerIdentityData>()
{
	return FPlayerIdentityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerIdentityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_characterIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_characterIdentifier;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_initalClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initalClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_initalClass;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_initialLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerIdentityData>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier_MetaData[] = {
		{ "Category", "PlayerIdentityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier = { "characterIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerIdentityData, characterIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier_MetaData)) }; // 2655185645
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass_MetaData[] = {
		{ "Category", "PlayerIdentityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass = { "initalClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerIdentityData, initalClass), Z_Construct_UEnum_DesentIntoAtlantis_EClasses, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass_MetaData)) }; // 1578382135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "PlayerIdentityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerIdentityData, characterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterPortrait_MetaData[] = {
		{ "Category", "PlayerIdentityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterPortrait = { "characterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerIdentityData, characterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData[] = {
		{ "Category", "PlayerIdentityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_fullBodyCharacterPortrait = { "fullBodyCharacterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerIdentityData, fullBodyCharacterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_fullBodyCharacterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initialLevel_MetaData[] = {
		{ "Category", "PlayerIdentityData" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initialLevel = { "initialLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerIdentityData, initialLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initialLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initialLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_characterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_fullBodyCharacterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewProp_initialLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerIdentityData",
		sizeof(FPlayerIdentityData),
		alignof(FPlayerIdentityData),
		Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerIdentityData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerIdentityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerIdentityData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerIdentityData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet;
class UScriptStruct* FPlayerCompleteDataSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerCompleteDataSet, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("PlayerCompleteDataSet"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FPlayerCompleteDataSet>()
{
	return FPlayerCompleteDataSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerIdentityData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerIdentityData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mainClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMainClassLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentMainClassLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_unlockedPlayerClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unlockedPlayerClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_unlockedPlayerClasses;
		static const UECodeGen_Private::FStrPropertyParams NewProp_skillSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_skillSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentMP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerCompleteDataSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_playerIdentityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_playerIdentityData = { "playerIdentityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, playerIdentityData), Z_Construct_UScriptStruct_FPlayerIdentityData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_playerIdentityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_playerIdentityData_MetaData)) }; // 3872126719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_mainClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_mainClass = { "mainClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, mainClass), Z_Construct_UScriptStruct_FCompleteClassData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_mainClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_mainClass_MetaData)) }; // 1458813227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMainClassLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMainClassLevel = { "currentMainClassLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, currentMainClassLevel), Z_Construct_UScriptStruct_FClassData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMainClassLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMainClassLevel_MetaData)) }; // 1140000353
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses_Inner = { "unlockedPlayerClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCompleteClassData, METADATA_PARAMS(nullptr, 0) }; // 1458813227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses = { "unlockedPlayerClasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, unlockedPlayerClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses_MetaData)) }; // 1458813227
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots_Inner = { "skillSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots = { "skillSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, skillSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentHP_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentHP = { "currentHP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, currentHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMP_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMP = { "currentMP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerCompleteDataSet, currentMP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_playerIdentityData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_mainClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMainClassLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_unlockedPlayerClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_skillSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewProp_currentMP,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"PlayerCompleteDataSet",
		sizeof(FPlayerCompleteDataSet),
		alignof(FPlayerCompleteDataSet),
		Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerCompleteDataSet()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet.InnerSingleton, Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet.InnerSingleton;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_unlockedClasses_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_unlockedClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_unlockedClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unlockedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_unlockedClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCompleteDataSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerCompleteDataSet;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, skillFactory), Z_Construct_UClass_USkillFactorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_skillFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_skillFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_mainClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_mainClass = { "mainClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, mainClass), Z_Construct_UClass_UCombatClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_mainClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_mainClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_ValueProp = { "unlockedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCombatClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_Key_KeyProp = { "unlockedClasses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EClasses, METADATA_PARAMS(nullptr, 0) }; // 1578382135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses = { "unlockedClasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, unlockedClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_MetaData)) }; // 1578382135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerCompleteDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerCompleteDataSet = { "playerCompleteDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, playerCompleteDataSet), Z_Construct_UScriptStruct_FPlayerCompleteDataSet, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerCompleteDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerCompleteDataSet_MetaData)) }; // 1389956930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData = { "playerEntityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, playerEntityData), Z_Construct_UScriptStruct_FPlayerIdentityData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerEntityData_MetaData)) }; // 3872126719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCombatEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement = { "partyHealthbarElement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCombatEntity, partyHealthbarElement), Z_Construct_UClass_UPartyHealthbarElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_partyHealthbarElement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCombatEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_mainClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_unlockedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatEntity_Statics::NewProp_playerCompleteDataSet,
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
		{ FPlayerIdentityData::StaticStruct, Z_Construct_UScriptStruct_FPlayerIdentityData_Statics::NewStructOps, TEXT("PlayerIdentityData"), &Z_Registration_Info_UScriptStruct_PlayerIdentityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerIdentityData), 3872126719U) },
		{ FPlayerCompleteDataSet::StaticStruct, Z_Construct_UScriptStruct_FPlayerCompleteDataSet_Statics::NewStructOps, TEXT("PlayerCompleteDataSet"), &Z_Registration_Info_UScriptStruct_PlayerCompleteDataSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerCompleteDataSet), 1389956930U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCombatEntity, UPlayerCombatEntity::StaticClass, TEXT("UPlayerCombatEntity"), &Z_Registration_Info_UClass_UPlayerCombatEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatEntity), 4121227761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_2576265773(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PlayerCombatEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
