// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyFactorySubSystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "DesentIntoAtlantis/Public/EnemyBeastiaryData.h"
#include "DesentIntoAtlantis/Public/EnemyCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFactorySubSystem() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteBestiaryData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyBestiary();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyEntityData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyGroupData();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References

static_assert(std::is_polymorphic<FEnemyGroupData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEnemyGroupData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnemyGroupData;
class UScriptStruct* FEnemyGroupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnemyGroupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnemyGroupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyGroupData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EnemyGroupData"));
	}
	return Z_Registration_Info_UScriptStruct_EnemyGroupData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FEnemyGroupData>()
{
	return FEnemyGroupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnemyGroupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnemyName3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyGroupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyGroupData, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName_MetaData), Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1 = { "EnemyName1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyGroupData, EnemyName1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1_MetaData), Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2 = { "EnemyName2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyGroupData, EnemyName2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2_MetaData), Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3_MetaData[] = {
		{ "Category", "EnemyGroupData" },
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3 = { "EnemyName3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyGroupData, EnemyName3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3_MetaData), Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewProp_EnemyName3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EnemyGroupData",
		Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers),
		sizeof(FEnemyGroupData),
		alignof(FEnemyGroupData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnemyGroupData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyGroupData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyGroupData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnemyGroupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnemyGroupData.InnerSingleton, Z_Construct_UScriptStruct_FEnemyGroupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnemyGroupData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteBestiaryData;
class UScriptStruct* FCompleteBestiaryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteBestiaryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteBestiaryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteBestiaryData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CompleteBestiaryData"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteBestiaryData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCompleteBestiaryData>()
{
	return FCompleteBestiaryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_enemyBestiaryData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_enemyBestiaryData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyBestiaryData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_enemyBestiaryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteBestiaryData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_ValueProp = { "enemyBestiaryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEnemyBestiary, METADATA_PARAMS(0, nullptr) }; // 4052317639
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_Key_KeyProp = { "enemyBestiaryData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData = { "enemyBestiaryData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteBestiaryData, enemyBestiaryData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_MetaData), Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_MetaData) }; // 4052317639
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewProp_enemyBestiaryData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"CompleteBestiaryData",
		Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::PropPointers),
		sizeof(FCompleteBestiaryData),
		alignof(FCompleteBestiaryData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteBestiaryData()
	{
		if (!Z_Registration_Info_UScriptStruct_CompleteBestiaryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteBestiaryData.InnerSingleton, Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompleteBestiaryData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventBestiaryDataHasChanged_Parms
		{
			FCompleteBestiaryData bestiaryData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_bestiaryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::NewProp_bestiaryData = { "bestiaryData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventBestiaryDataHasChanged_Parms, bestiaryData), Z_Construct_UScriptStruct_FCompleteBestiaryData, METADATA_PARAMS(0, nullptr) }; // 1701308054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::NewProp_bestiaryData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "BestiaryDataHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventBestiaryDataHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventBestiaryDataHasChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_BestiaryDataHasChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBestiaryDataHasChanged_DelegateWrapper(const FMulticastScriptDelegate& BestiaryDataHasChanged, FCompleteBestiaryData bestiaryData)
{
	struct _Script_DesentIntoAtlantis_eventBestiaryDataHasChanged_Parms
	{
		FCompleteBestiaryData bestiaryData;
	};
	_Script_DesentIntoAtlantis_eventBestiaryDataHasChanged_Parms Parms;
	Parms.bestiaryData=bestiaryData;
	BestiaryDataHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UEnemyFactorySubSystem::StaticRegisterNativesUEnemyFactorySubSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyFactorySubSystem);
	UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister()
	{
		return UEnemyFactorySubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFactorySubSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_allEnemys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allEnemys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_allEnemys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_allEnemysGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allEnemysGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_allEnemysGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_enemyMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_enemyMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_enemyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFactorySubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyFactorySubSystem.h" },
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys_Inner = { "allEnemys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnemyEntityData, METADATA_PARAMS(0, nullptr) }; // 118119496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys = { "allEnemys", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, allEnemys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys_MetaData), Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys_MetaData) }; // 118119496
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups_Inner = { "allEnemysGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnemyGroupData, METADATA_PARAMS(0, nullptr) }; // 967205099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups = { "allEnemysGroups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, allEnemysGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups_MetaData), Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups_MetaData) }; // 967205099
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_ValueProp = { "enemyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEnemyEntityData, METADATA_PARAMS(0, nullptr) }; // 118119496
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_Key_KeyProp = { "enemyMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyFactorySubSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap = { "enemyMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFactorySubSystem, enemyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_MetaData), Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_MetaData) }; // 118119496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_allEnemysGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFactorySubSystem_Statics::NewProp_enemyMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFactorySubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFactorySubSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFactorySubSystem_Statics::ClassParams = {
		&UEnemyFactorySubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyFactorySubSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactorySubSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyFactorySubSystem()
	{
		if (!Z_Registration_Info_UClass_UEnemyFactorySubSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyFactorySubSystem.OuterSingleton, Z_Construct_UClass_UEnemyFactorySubSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyFactorySubSystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyFactorySubSystem>()
	{
		return UEnemyFactorySubSystem::StaticClass();
	}
	UEnemyFactorySubSystem::UEnemyFactorySubSystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFactorySubSystem);
	UEnemyFactorySubSystem::~UEnemyFactorySubSystem() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ScriptStructInfo[] = {
		{ FEnemyGroupData::StaticStruct, Z_Construct_UScriptStruct_FEnemyGroupData_Statics::NewStructOps, TEXT("EnemyGroupData"), &Z_Registration_Info_UScriptStruct_EnemyGroupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyGroupData), 967205099U) },
		{ FCompleteBestiaryData::StaticStruct, Z_Construct_UScriptStruct_FCompleteBestiaryData_Statics::NewStructOps, TEXT("CompleteBestiaryData"), &Z_Registration_Info_UScriptStruct_CompleteBestiaryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteBestiaryData), 1701308054U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyFactorySubSystem, UEnemyFactorySubSystem::StaticClass, TEXT("UEnemyFactorySubSystem"), &Z_Registration_Info_UClass_UEnemyFactorySubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyFactorySubSystem), 443696171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_2090886095(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyFactorySubSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
