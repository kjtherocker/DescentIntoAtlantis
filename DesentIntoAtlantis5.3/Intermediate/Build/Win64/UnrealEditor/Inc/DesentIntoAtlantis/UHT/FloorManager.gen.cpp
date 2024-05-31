// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/FloorManager.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
#include "DesentIntoAtlantis/Public/Gimmick_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEventManagerSubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelProgressionSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEnemyPawnCompleteData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeAiData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FUGimmickArrayWrapper();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(AFloorManager::execPlacePlayerAtFloorStartingNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlacePlayerAtFloorStartingNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorManager::execLoadNextLevel)
	{
		P_GET_STRUCT(FVector2D,Z_Param_aPositionInGrid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNextLevel(Z_Param_aPositionInGrid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorManager::execSpawnEnemyPawn)
	{
		P_GET_STRUCT(FFloorEnemyPawnCompleteData,Z_Param_aCompleteFloorPawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemyPawn(Z_Param_aCompleteFloorPawnData);
		P_NATIVE_END;
	}
	void AFloorManager::StaticRegisterNativesAFloorManager()
	{
		UClass* Class = AFloorManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadNextLevel", &AFloorManager::execLoadNextLevel },
			{ "PlacePlayerAtFloorStartingNode", &AFloorManager::execPlacePlayerAtFloorStartingNode },
			{ "SpawnEnemyPawn", &AFloorManager::execSpawnEnemyPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics
	{
		struct FloorManager_eventLoadNextLevel_Parms
		{
			FVector2D aPositionInGrid;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPositionInGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::NewProp_aPositionInGrid = { "aPositionInGrid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorManager_eventLoadNextLevel_Parms, aPositionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::NewProp_aPositionInGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorManager, nullptr, "LoadNextLevel", nullptr, nullptr, Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::FloorManager_eventLoadNextLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::FloorManager_eventLoadNextLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFloorManager_LoadNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorManager_LoadNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorManager, nullptr, "PlacePlayerAtFloorStartingNode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics
	{
		struct FloorManager_eventSpawnEnemyPawn_Parms
		{
			FFloorEnemyPawnCompleteData aCompleteFloorPawnData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteFloorPawnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::NewProp_aCompleteFloorPawnData = { "aCompleteFloorPawnData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorManager_eventSpawnEnemyPawn_Parms, aCompleteFloorPawnData), Z_Construct_UScriptStruct_FFloorEnemyPawnCompleteData, METADATA_PARAMS(0, nullptr) }; // 4015773625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::NewProp_aCompleteFloorPawnData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorManager, nullptr, "SpawnEnemyPawn", nullptr, nullptr, Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::FloorManager_eventSpawnEnemyPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::FloorManager_eventSpawnEnemyPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorManager);
	UClass* Z_Construct_UClass_AFloorManager_NoRegister()
	{
		return AFloorManager::StaticClass();
	}
	struct Z_Construct_UClass_AFloorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_entireFloorNodeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entireFloorNodeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_entireFloorNodeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorNodeReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_floorNodeReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEnemyPawnReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_floorEnemyPawnReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spawnedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stairsReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_stairsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DoorReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventManagerSubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_eventManagerSubSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelProgressionSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_levelProgressionSubsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorDictionary_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorDictionary_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorDictionary_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorDictionary;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentFloorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFloorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentFloorIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFloor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentFloor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_gimmickMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_gimmickMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_gimmickMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gimmickMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_gimmickMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEventManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorEventManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorManager_LoadNextLevel, "LoadNextLevel" }, // 2078699829
		{ &Z_Construct_UFunction_AFloorManager_PlacePlayerAtFloorStartingNode, "PlacePlayerAtFloorStartingNode" }, // 861417612
		{ &Z_Construct_UFunction_AFloorManager_SpawnEnemyPawn, "SpawnEnemyPawn" }, // 2874719127
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorManager.h" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_Inner = { "floorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes = { "floorNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, floorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData_Inner = { "entireFloorNodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData = { "entireFloorNodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, entireFloorNodeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData_MetaData) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference = { "floorNodeReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, floorNodeReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference = { "floorEnemyPawnReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, floorEnemyPawnReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors_Inner = { "spawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors = { "spawnedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, spawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_stairsReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_stairsReference = { "stairsReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, stairsReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_stairsReference_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_stairsReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_DoorReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_DoorReference = { "DoorReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, DoorReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_DoorReference_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_DoorReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_eventManagerSubSystem_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_eventManagerSubSystem = { "eventManagerSubSystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, eventManagerSubSystem), Z_Construct_UClass_UEventManagerSubSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_eventManagerSubSystem_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_eventManagerSubSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_levelProgressionSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_levelProgressionSubsystem = { "levelProgressionSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, levelProgressionSubsystem), Z_Construct_UClass_ULevelProgressionSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_levelProgressionSubsystem_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_levelProgressionSubsystem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_ValueProp = { "floorDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp = { "floorDictionary_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 4214754488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary = { "floorDictionary", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, floorDictionary), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_MetaData) }; // 4214754488
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier = { "currentFloorIdentifier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, currentFloorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier_MetaData) }; // 4214754488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor = { "currentFloor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, currentFloor), Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_ValueProp = { "gimmickMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUGimmickArrayWrapper, METADATA_PARAMS(0, nullptr) }; // 3718211037
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_Key_KeyProp = { "gimmickMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks, METADATA_PARAMS(0, nullptr) }; // 1665822029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap = { "gimmickMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, gimmickMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_MetaData) }; // 1665822029 3718211037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEventManager_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEventManager = { "floorEventManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorManager, floorEventManager), Z_Construct_UClass_UEventManagerSubSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEventManager_MetaData), Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEventManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_entireFloorNodeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_spawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_stairsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_DoorReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_eventManagerSubSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_levelProgressionSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_gimmickMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEventManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorManager_Statics::ClassParams = {
		&AFloorManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorManager()
	{
		if (!Z_Registration_Info_UClass_AFloorManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorManager.OuterSingleton, Z_Construct_UClass_AFloorManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorManager>()
	{
		return AFloorManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorManager);
	AFloorManager::~AFloorManager() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorManager, AFloorManager::StaticClass, TEXT("AFloorManager"), &Z_Registration_Info_UClass_AFloorManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorManager), 1049797538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorManager_h_52937782(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
