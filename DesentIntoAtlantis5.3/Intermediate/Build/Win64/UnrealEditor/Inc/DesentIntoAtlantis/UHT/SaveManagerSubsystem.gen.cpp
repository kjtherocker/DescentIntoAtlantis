// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveManagerSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "DesentIntoAtlantis/Public/EventManagerSubSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveManagerSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveManagerSubsystem();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FEventManagerData();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(USaveManagerSubsystem::execConsumeGameSaveLoadingFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConsumeGameSaveLoadingFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execSetEventManagerData)
	{
		P_GET_STRUCT(FEventManagerData,Z_Param_aEventManagerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventManagerData(Z_Param_aEventManagerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execLoadCombatLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aEnemyGroupName);
		P_GET_ENUM(ECombatArena,Z_Param_aCombatArena);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCombatLevel(Z_Param_aEnemyGroupName,ECombatArena(Z_Param_aCombatArena));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execLoadSaveDataAndTransitionToMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSaveDataAndTransitionToMap(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execLoadPreSetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPreSetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execLoadFloorPawnPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->LoadFloorPawnPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execSaveSessionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSessionData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execSaveFloorPawn)
	{
		P_GET_OBJECT(AFloorPawn,Z_Param_aFloorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFloorPawn(Z_Param_aFloorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execReturnToPreviousLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToPreviousLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManagerSubsystem::execInitializeSubsystem)
	{
		P_GET_OBJECT(UPersistentGameinstance,Z_Param_aPersistentGameInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSubsystem(Z_Param_aPersistentGameInstance);
		P_NATIVE_END;
	}
	void USaveManagerSubsystem::StaticRegisterNativesUSaveManagerSubsystem()
	{
		UClass* Class = USaveManagerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumeGameSaveLoadingFlag", &USaveManagerSubsystem::execConsumeGameSaveLoadingFlag },
			{ "InitializeSubsystem", &USaveManagerSubsystem::execInitializeSubsystem },
			{ "LoadCombatLevel", &USaveManagerSubsystem::execLoadCombatLevel },
			{ "LoadFloorPawnPosition", &USaveManagerSubsystem::execLoadFloorPawnPosition },
			{ "LoadPreSetLevel", &USaveManagerSubsystem::execLoadPreSetLevel },
			{ "LoadSaveDataAndTransitionToMap", &USaveManagerSubsystem::execLoadSaveDataAndTransitionToMap },
			{ "ReturnToPreviousLevel", &USaveManagerSubsystem::execReturnToPreviousLevel },
			{ "SaveFloorPawn", &USaveManagerSubsystem::execSaveFloorPawn },
			{ "SaveSessionData", &USaveManagerSubsystem::execSaveSessionData },
			{ "SetEventManagerData", &USaveManagerSubsystem::execSetEventManagerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics
	{
		struct SaveManagerSubsystem_eventConsumeGameSaveLoadingFlag_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManagerSubsystem_eventConsumeGameSaveLoadingFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManagerSubsystem_eventConsumeGameSaveLoadingFlag_Parms), &Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "ConsumeGameSaveLoadingFlag", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::SaveManagerSubsystem_eventConsumeGameSaveLoadingFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::SaveManagerSubsystem_eventConsumeGameSaveLoadingFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics
	{
		struct SaveManagerSubsystem_eventInitializeSubsystem_Parms
		{
			UPersistentGameinstance* aPersistentGameInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aPersistentGameInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::NewProp_aPersistentGameInstance = { "aPersistentGameInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventInitializeSubsystem_Parms, aPersistentGameInstance), Z_Construct_UClass_UPersistentGameinstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::NewProp_aPersistentGameInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "InitializeSubsystem", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::SaveManagerSubsystem_eventInitializeSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::SaveManagerSubsystem_eventInitializeSubsystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics
	{
		struct SaveManagerSubsystem_eventLoadCombatLevel_Parms
		{
			FString aEnemyGroupName;
			ECombatArena aCombatArena;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_aEnemyGroupName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_aCombatArena_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aCombatArena;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::NewProp_aEnemyGroupName = { "aEnemyGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventLoadCombatLevel_Parms, aEnemyGroupName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::NewProp_aCombatArena_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::NewProp_aCombatArena = { "aCombatArena", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventLoadCombatLevel_Parms, aCombatArena), Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena, METADATA_PARAMS(0, nullptr) }; // 3825271882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::NewProp_aEnemyGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::NewProp_aCombatArena_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::NewProp_aCombatArena,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "LoadCombatLevel", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::SaveManagerSubsystem_eventLoadCombatLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::SaveManagerSubsystem_eventLoadCombatLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics
	{
		struct SaveManagerSubsystem_eventLoadFloorPawnPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventLoadFloorPawnPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "LoadFloorPawnPosition", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::SaveManagerSubsystem_eventLoadFloorPawnPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::SaveManagerSubsystem_eventLoadFloorPawnPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "LoadPreSetLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics
	{
		struct SaveManagerSubsystem_eventLoadSaveDataAndTransitionToMap_Parms
		{
			FString aLevelName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_aLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventLoadSaveDataAndTransitionToMap_Parms, aLevelName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "LoadSaveDataAndTransitionToMap", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::SaveManagerSubsystem_eventLoadSaveDataAndTransitionToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::SaveManagerSubsystem_eventLoadSaveDataAndTransitionToMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "ReturnToPreviousLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics
	{
		struct SaveManagerSubsystem_eventSaveFloorPawn_Parms
		{
			AFloorPawn* aFloorPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::NewProp_aFloorPawn = { "aFloorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventSaveFloorPawn_Parms, aFloorPawn), Z_Construct_UClass_AFloorPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::NewProp_aFloorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "SaveFloorPawn", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::SaveManagerSubsystem_eventSaveFloorPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::SaveManagerSubsystem_eventSaveFloorPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "SaveSessionData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics
	{
		struct SaveManagerSubsystem_eventSetEventManagerData_Parms
		{
			FEventManagerData aEventManagerData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aEventManagerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::NewProp_aEventManagerData = { "aEventManagerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManagerSubsystem_eventSetEventManagerData_Parms, aEventManagerData), Z_Construct_UScriptStruct_FEventManagerData, METADATA_PARAMS(0, nullptr) }; // 2264998657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::NewProp_aEventManagerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManagerSubsystem, nullptr, "SetEventManagerData", nullptr, nullptr, Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::SaveManagerSubsystem_eventSetEventManagerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::SaveManagerSubsystem_eventSetEventManagerData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveManagerSubsystem);
	UClass* Z_Construct_UClass_USaveManagerSubsystem_NoRegister()
	{
		return USaveManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USaveManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionSaveGameObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionSaveGameObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_persistentGameinstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_persistentGameinstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveManagerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveManagerSubsystem_ConsumeGameSaveLoadingFlag, "ConsumeGameSaveLoadingFlag" }, // 694278786
		{ &Z_Construct_UFunction_USaveManagerSubsystem_InitializeSubsystem, "InitializeSubsystem" }, // 2530387896
		{ &Z_Construct_UFunction_USaveManagerSubsystem_LoadCombatLevel, "LoadCombatLevel" }, // 2775205627
		{ &Z_Construct_UFunction_USaveManagerSubsystem_LoadFloorPawnPosition, "LoadFloorPawnPosition" }, // 1421281692
		{ &Z_Construct_UFunction_USaveManagerSubsystem_LoadPreSetLevel, "LoadPreSetLevel" }, // 2106330069
		{ &Z_Construct_UFunction_USaveManagerSubsystem_LoadSaveDataAndTransitionToMap, "LoadSaveDataAndTransitionToMap" }, // 894547644
		{ &Z_Construct_UFunction_USaveManagerSubsystem_ReturnToPreviousLevel, "ReturnToPreviousLevel" }, // 923142100
		{ &Z_Construct_UFunction_USaveManagerSubsystem_SaveFloorPawn, "SaveFloorPawn" }, // 4031341612
		{ &Z_Construct_UFunction_USaveManagerSubsystem_SaveSessionData, "SaveSessionData" }, // 1802938065
		{ &Z_Construct_UFunction_USaveManagerSubsystem_SetEventManagerData, "SetEventManagerData" }, // 1519888507
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManagerSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_SessionSaveGameObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_SessionSaveGameObject = { "SessionSaveGameObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManagerSubsystem, SessionSaveGameObject), Z_Construct_UClass_USaveGameData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_SessionSaveGameObject_MetaData), Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_SessionSaveGameObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_persistentGameinstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_persistentGameinstance = { "persistentGameinstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManagerSubsystem, persistentGameinstance), Z_Construct_UClass_UPersistentGameinstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_persistentGameinstance_MetaData), Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_persistentGameinstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_SessionSaveGameObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManagerSubsystem_Statics::NewProp_persistentGameinstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveManagerSubsystem_Statics::ClassParams = {
		&USaveManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveManagerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManagerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_USaveManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveManagerSubsystem.OuterSingleton, Z_Construct_UClass_USaveManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveManagerSubsystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USaveManagerSubsystem>()
	{
		return USaveManagerSubsystem::StaticClass();
	}
	USaveManagerSubsystem::USaveManagerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveManagerSubsystem);
	USaveManagerSubsystem::~USaveManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveManagerSubsystem, USaveManagerSubsystem::StaticClass, TEXT("USaveManagerSubsystem"), &Z_Registration_Info_UClass_USaveManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveManagerSubsystem), 1100805827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_1375787385(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
