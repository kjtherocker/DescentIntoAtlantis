// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatClass.h"
#include "DesentIntoAtlantis/Public/SkillsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EClasses();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FClassData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteClassData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FSkillsData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References

static_assert(std::is_polymorphic<FClassData>() == std::is_polymorphic<FCombatEntityData>(), "USTRUCT FClassData cannot be polymorphic unless super FCombatEntityData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassData;
class UScriptStruct* FClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ClassData"));
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expToNextClassLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_expToNextClassLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///A combat class is filled with the bases of all stats\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//A combat class is filled with the bases of all stats" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel = { "expToNextClassLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassData, expToNextClassLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData), Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntityData,
		&NewStructOps,
		"ClassData",
		Z_Construct_UScriptStruct_FClassData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::PropPointers),
		sizeof(FClassData),
		alignof(FClassData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClassData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton, Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCompleteClassData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCompleteClassData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteClassData;
class UScriptStruct* FCompleteClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteClassData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CompleteClassData"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteClassData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCompleteClassData>()
{
	return FCompleteClassData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompleteClassData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_className_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_className;
		static const UECodeGen_Private::FIntPropertyParams NewProp_classIdentifer_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classIdentifer_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_classIdentifer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_classLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_classLevels;
		static const UECodeGen_Private::FBytePropertyParams NewProp_unlockableSkillByLevel_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_unlockableSkillByLevel_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_unlockableSkillByLevel_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unlockableSkillByLevel_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_unlockableSkillByLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_attachedEntityIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachedEntityIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_attachedEntityIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_syncSkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_syncSkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_syncSkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentLevelClassData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentLevelClassData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementalStrength_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalStrength_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalStrength;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementalWeakness_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementalWeakness_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalWeakness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteClassData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_className_MetaData[] = {
		{ "Category", "CompleteClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_className = { "className", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, className), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_className_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_className_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer_MetaData[] = {
		{ "Category", "CompleteClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer = { "classIdentifer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, classIdentifer), Z_Construct_UEnum_DesentIntoAtlantis_EClasses, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer_MetaData) }; // 2824778090
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels_Inner = { "classLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClassData, METADATA_PARAMS(0, nullptr) }; // 254550064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels_MetaData[] = {
		{ "Category", "CompleteClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels = { "classLevels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, classLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels_MetaData) }; // 254550064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_ValueProp = { "unlockableSkillByLevel", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_DesentIntoAtlantis_ESkillIDS, METADATA_PARAMS(0, nullptr) }; // 1795072353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_Key_KeyProp = { "unlockableSkillByLevel_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_MetaData[] = {
		{ "Category", "CompleteClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel = { "unlockableSkillByLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, unlockableSkillByLevel), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_MetaData) }; // 1795072353
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier = { "attachedEntityIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, attachedEntityIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier_MetaData) }; // 781165082
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills_Inner = { "syncSkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkillsData, METADATA_PARAMS(0, nullptr) }; // 3406219720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills = { "syncSkills", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, syncSkills), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills_MetaData) }; // 3406219720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevelClassData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevelClassData = { "currentLevelClassData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, currentLevelClassData), Z_Construct_UScriptStruct_FClassData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevelClassData_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevelClassData_MetaData) }; // 254550064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevel = { "currentLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, currentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevel_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevel_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength_MetaData[] = {
		{ "Category", "CompleteClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength = { "ElementalStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, ElementalStrength), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength_MetaData) }; // 3306458094
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness_MetaData[] = {
		{ "Category", "CompleteClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness = { "ElementalWeakness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteClassData, ElementalWeakness), Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness_MetaData), Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness_MetaData) }; // 3306458094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_className,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classIdentifer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_classLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_unlockableSkillByLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_attachedEntityIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_syncSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevelClassData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_currentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewProp_ElementalWeakness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CompleteClassData",
		Z_Construct_UScriptStruct_FCompleteClassData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::PropPointers),
		sizeof(FCompleteClassData),
		alignof(FCompleteClassData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteClassData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteClassData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteClassData()
	{
		if (!Z_Registration_Info_UScriptStruct_CompleteClassData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteClassData.InnerSingleton, Z_Construct_UScriptStruct_FCompleteClassData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompleteClassData.InnerSingleton;
	}
	void UCombatClass::StaticRegisterNativesUCombatClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatClass);
	UClass* Z_Construct_UClass_UCombatClass_NoRegister()
	{
		return UCombatClass::StaticClass();
	}
	struct Z_Construct_UClass_UCombatClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachedCombatEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachedCombatEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeClassData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeClassData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_classSkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classSkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_classSkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentClassIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatClass.h" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity = { "attachedCombatEntity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatClass, attachedCombatEntity), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity_MetaData), Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_completeClassData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_completeClassData = { "completeClassData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatClass, completeClassData), Z_Construct_UScriptStruct_FCompleteClassData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_completeClassData_MetaData), Z_Construct_UClass_UCombatClass_Statics::NewProp_completeClassData_MetaData) }; // 3402981448
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_Inner = { "classSkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills = { "classSkills", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatClass, classSkills), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_MetaData), Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatClass, skillFactory), Z_Construct_UClass_USkillFactorySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory_MetaData), Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex = { "currentClassIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatClass, currentClassIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex_MetaData), Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_completeClassData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatClass_Statics::ClassParams = {
		&UCombatClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatClass()
	{
		if (!Z_Registration_Info_UClass_UCombatClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatClass.OuterSingleton, Z_Construct_UClass_UCombatClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatClass.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatClass>()
	{
		return UCombatClass::StaticClass();
	}
	UCombatClass::UCombatClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatClass);
	UCombatClass::~UCombatClass() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ScriptStructInfo[] = {
		{ FClassData::StaticStruct, Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps, TEXT("ClassData"), &Z_Registration_Info_UScriptStruct_ClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassData), 254550064U) },
		{ FCompleteClassData::StaticStruct, Z_Construct_UScriptStruct_FCompleteClassData_Statics::NewStructOps, TEXT("CompleteClassData"), &Z_Registration_Info_UScriptStruct_CompleteClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteClassData), 3402981448U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatClass, UCombatClass::StaticClass, TEXT("UCombatClass"), &Z_Registration_Info_UClass_UCombatClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatClass), 1728448798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_2158822459(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
