// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveGameData.h"
#include "DesentIntoAtlantis/Public/EnemyFactorySubSystem.h"
#include "DesentIntoAtlantis/Public/EventManagerSubSystem.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
#include "DesentIntoAtlantis/Public/LevelProgressionSubsystem.h"
#include "DesentIntoAtlantis/Public/PlayerCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameData() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteBestiaryData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteProgressionData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEventManagerData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCompleteDataSet();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(USaveGameData::execUpdateEnemyBestiaryData)
	{
		P_GET_STRUCT(FCompleteBestiaryData,Z_Param_aCompleteBestiaryData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnemyBestiaryData(Z_Param_aCompleteBestiaryData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameData::execUpdateFloorPawnData)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aCompleteFloorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFloorPawnData(Z_Param_aCompleteFloorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameData::execUpdateCurrentLevelIdentifier)
	{
		P_GET_ENUM(EFloorIdentifier,Z_Param_aFloorIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentLevelIdentifier(EFloorIdentifier(Z_Param_aFloorIdentifier));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameData::execUpdateCompleteProgressionData)
	{
		P_GET_STRUCT(FCompleteProgressionData,Z_Param_aCompleteProgressionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCompleteProgressionData(Z_Param_aCompleteProgressionData);
		P_NATIVE_END;
	}
	void USaveGameData::StaticRegisterNativesUSaveGameData()
	{
		UClass* Class = USaveGameData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCompleteProgressionData", &USaveGameData::execUpdateCompleteProgressionData },
			{ "UpdateCurrentLevelIdentifier", &USaveGameData::execUpdateCurrentLevelIdentifier },
			{ "UpdateEnemyBestiaryData", &USaveGameData::execUpdateEnemyBestiaryData },
			{ "UpdateFloorPawnData", &USaveGameData::execUpdateFloorPawnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics
	{
		struct SaveGameData_eventUpdateCompleteProgressionData_Parms
		{
			FCompleteProgressionData aCompleteProgressionData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteProgressionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::NewProp_aCompleteProgressionData = { "aCompleteProgressionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameData_eventUpdateCompleteProgressionData_Parms, aCompleteProgressionData), Z_Construct_UScriptStruct_FCompleteProgressionData, METADATA_PARAMS(0, nullptr) }; // 3145609198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::NewProp_aCompleteProgressionData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameData, nullptr, "UpdateCompleteProgressionData", nullptr, nullptr, Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::SaveGameData_eventUpdateCompleteProgressionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::SaveGameData_eventUpdateCompleteProgressionData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics
	{
		struct SaveGameData_eventUpdateCurrentLevelIdentifier_Parms
		{
			EFloorIdentifier aFloorIdentifier;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aFloorIdentifier_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aFloorIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::NewProp_aFloorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::NewProp_aFloorIdentifier = { "aFloorIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameData_eventUpdateCurrentLevelIdentifier_Parms, aFloorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 4214754488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::NewProp_aFloorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::NewProp_aFloorIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameData, nullptr, "UpdateCurrentLevelIdentifier", nullptr, nullptr, Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::SaveGameData_eventUpdateCurrentLevelIdentifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::SaveGameData_eventUpdateCurrentLevelIdentifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics
	{
		struct SaveGameData_eventUpdateEnemyBestiaryData_Parms
		{
			FCompleteBestiaryData aCompleteBestiaryData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteBestiaryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::NewProp_aCompleteBestiaryData = { "aCompleteBestiaryData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameData_eventUpdateEnemyBestiaryData_Parms, aCompleteBestiaryData), Z_Construct_UScriptStruct_FCompleteBestiaryData, METADATA_PARAMS(0, nullptr) }; // 1701308054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::NewProp_aCompleteBestiaryData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameData, nullptr, "UpdateEnemyBestiaryData", nullptr, nullptr, Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::SaveGameData_eventUpdateEnemyBestiaryData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::SaveGameData_eventUpdateEnemyBestiaryData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics
	{
		struct SaveGameData_eventUpdateFloorPawnData_Parms
		{
			FCompleteFloorPawnData aCompleteFloorPawn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteFloorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::NewProp_aCompleteFloorPawn = { "aCompleteFloorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameData_eventUpdateFloorPawnData_Parms, aCompleteFloorPawn), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 1570468568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::NewProp_aCompleteFloorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameData, nullptr, "UpdateFloorPawnData", nullptr, nullptr, Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::SaveGameData_eventUpdateFloorPawnData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::SaveGameData_eventUpdateFloorPawnData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameData);
	UClass* Z_Construct_UClass_USaveGameData_NoRegister()
	{
		return USaveGameData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyBestiaryData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_enemyBestiaryData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeProgressionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeProgressionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeFloorPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeFloorPawnData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerFloorRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerFloorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_playerFloorRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerCompleteDataSet_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerCompleteDataSet_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_playerCompleteDataSet_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCompleteDataSet_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_playerCompleteDataSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventManagerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_eventManagerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameData_UpdateCompleteProgressionData, "UpdateCompleteProgressionData" }, // 689303047
		{ &Z_Construct_UFunction_USaveGameData_UpdateCurrentLevelIdentifier, "UpdateCurrentLevelIdentifier" }, // 1375988695
		{ &Z_Construct_UFunction_USaveGameData_UpdateEnemyBestiaryData, "UpdateEnemyBestiaryData" }, // 1640926442
		{ &Z_Construct_UFunction_USaveGameData_UpdateFloorPawnData, "UpdateFloorPawnData" }, // 2213154841
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveGameData.h" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_enemyBestiaryData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_enemyBestiaryData = { "enemyBestiaryData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, enemyBestiaryData), Z_Construct_UScriptStruct_FCompleteBestiaryData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_enemyBestiaryData_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_enemyBestiaryData_MetaData) }; // 1701308054
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel = { "currentLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, currentLevel), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel_MetaData) }; // 4214754488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_completeProgressionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_completeProgressionData = { "completeProgressionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, completeProgressionData), Z_Construct_UScriptStruct_FCompleteProgressionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_completeProgressionData_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_completeProgressionData_MetaData) }; // 3145609198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_completeFloorPawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_completeFloorPawnData = { "completeFloorPawnData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, completeFloorPawnData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_completeFloorPawnData_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_completeFloorPawnData_MetaData) }; // 1570468568
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation = { "playerFloorRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, playerFloorRotation), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation_MetaData) }; // 1177015594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_ValueProp = { "playerCompleteDataSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerCompleteDataSet, METADATA_PARAMS(0, nullptr) }; // 3005372662
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp = { "playerCompleteDataSet_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, METADATA_PARAMS(0, nullptr) }; // 781165082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet = { "playerCompleteDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, playerCompleteDataSet), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_MetaData) }; // 781165082 3005372662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_eventManagerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_eventManagerData = { "eventManagerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, eventManagerData), Z_Construct_UScriptStruct_FEventManagerData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_eventManagerData_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_eventManagerData_MetaData) }; // 2232449286
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_enemyBestiaryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_currentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_completeProgressionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_completeFloorPawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerFloorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_eventManagerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameData_Statics::ClassParams = {
		&USaveGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveGameData()
	{
		if (!Z_Registration_Info_UClass_USaveGameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameData.OuterSingleton, Z_Construct_UClass_USaveGameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGameData.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USaveGameData>()
	{
		return USaveGameData::StaticClass();
	}
	USaveGameData::USaveGameData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameData);
	USaveGameData::~USaveGameData() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameData, USaveGameData::StaticClass, TEXT("USaveGameData"), &Z_Registration_Info_UClass_USaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameData), 4121274905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_1433959009(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
