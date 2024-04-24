// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PersistentGameinstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentGameinstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEventManagerSubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EClasses();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadCombatLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aEnemyGroupName);
		P_GET_ENUM(ECombatArena,Z_Param_aCombatArena);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCombatLevel(Z_Param_aEnemyGroupName,ECombatArena(Z_Param_aCombatArena));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadSaveDataAndTransitionToMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSaveDataAndTransitionToMap(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadPreSetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPreSetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadFloorPawnPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->LoadFloorPawnPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execSaveSessionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSessionData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execSaveFloorPawn)
	{
		P_GET_OBJECT(AFloorPawn,Z_Param_aFloorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFloorPawn(Z_Param_aFloorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execUnloadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	void UPersistentGameinstance::StaticRegisterNativesUPersistentGameinstance()
	{
		UClass* Class = UPersistentGameinstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadCombatLevel", &UPersistentGameinstance::execLoadCombatLevel },
			{ "LoadFloorPawnPosition", &UPersistentGameinstance::execLoadFloorPawnPosition },
			{ "LoadLevel", &UPersistentGameinstance::execLoadLevel },
			{ "LoadPreSetLevel", &UPersistentGameinstance::execLoadPreSetLevel },
			{ "LoadSaveDataAndTransitionToMap", &UPersistentGameinstance::execLoadSaveDataAndTransitionToMap },
			{ "SaveFloorPawn", &UPersistentGameinstance::execSaveFloorPawn },
			{ "SaveSessionData", &UPersistentGameinstance::execSaveSessionData },
			{ "UnloadLevel", &UPersistentGameinstance::execUnloadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics
	{
		struct PersistentGameinstance_eventLoadCombatLevel_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aEnemyGroupName = { "aEnemyGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadCombatLevel_Parms, aEnemyGroupName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aCombatArena_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aCombatArena = { "aCombatArena", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadCombatLevel_Parms, aCombatArena), Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena, METADATA_PARAMS(0, nullptr) }; // 1732030331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aEnemyGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aCombatArena_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aCombatArena,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadCombatLevel", nullptr, nullptr, Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::PersistentGameinstance_eventLoadCombatLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::PersistentGameinstance_eventLoadCombatLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics
	{
		struct PersistentGameinstance_eventLoadFloorPawnPosition_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadFloorPawnPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadFloorPawnPosition", nullptr, nullptr, Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::PersistentGameinstance_eventLoadFloorPawnPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::PersistentGameinstance_eventLoadFloorPawnPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics
	{
		struct PersistentGameinstance_eventLoadLevel_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadLevel_Parms, aLevelName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadLevel", nullptr, nullptr, Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PersistentGameinstance_eventLoadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PersistentGameinstance_eventLoadLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadPreSetLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics
	{
		struct PersistentGameinstance_eventLoadSaveDataAndTransitionToMap_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadSaveDataAndTransitionToMap_Parms, aLevelName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadSaveDataAndTransitionToMap", nullptr, nullptr, Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::PersistentGameinstance_eventLoadSaveDataAndTransitionToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::PersistentGameinstance_eventLoadSaveDataAndTransitionToMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics
	{
		struct PersistentGameinstance_eventSaveFloorPawn_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::NewProp_aFloorPawn = { "aFloorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventSaveFloorPawn_Parms, aFloorPawn), Z_Construct_UClass_AFloorPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::NewProp_aFloorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "SaveFloorPawn", nullptr, nullptr, Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::PersistentGameinstance_eventSaveFloorPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::PersistentGameinstance_eventSaveFloorPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "SaveSessionData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics
	{
		struct PersistentGameinstance_eventUnloadLevel_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventUnloadLevel_Parms, aLevelName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "UnloadLevel", nullptr, nullptr, Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PersistentGameinstance_eventUnloadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PersistentGameinstance_eventUnloadLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentGameinstance);
	UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister()
	{
		return UPersistentGameinstance::StaticClass();
	}
	struct Z_Construct_UClass_UPersistentGameinstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTables_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dataTables_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTablesClasses_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dataTablesClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTablesClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTablesClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTablesClasses;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTablesSkills_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dataTablesSkills_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTablesSkills_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTablesSkills_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTablesSkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyManagerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactorySubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactorySubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyFactorySubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyFactorySubSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tutorialManagerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueManagerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventManagerSubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventManagerSubSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionSaveGameObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionSaveGameObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersistentGameinstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPersistentGameinstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel, "LoadCombatLevel" }, // 666187673
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadFloorPawnPosition, "LoadFloorPawnPosition" }, // 3405294919
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadLevel, "LoadLevel" }, // 1530815639
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel, "LoadPreSetLevel" }, // 439233011
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadSaveDataAndTransitionToMap, "LoadSaveDataAndTransitionToMap" }, // 3574173269
		{ &Z_Construct_UFunction_UPersistentGameinstance_SaveFloorPawn, "SaveFloorPawn" }, // 3807803431
		{ &Z_Construct_UFunction_UPersistentGameinstance_SaveSessionData, "SaveSessionData" }, // 550789178
		{ &Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel, "UnloadLevel" }, // 3305872743
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PersistentGameinstance.h" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_ValueProp = { "dataTables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp = { "dataTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, METADATA_PARAMS(0, nullptr) }; // 3334060239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables = { "dataTables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData) }; // 3334060239
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_ValueProp = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp = { "dataTablesClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EClasses, METADATA_PARAMS(0, nullptr) }; // 2061419180
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTablesClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData) }; // 2061419180
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_ValueProp = { "dataTablesSkills", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp = { "dataTablesSkills_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ESkillType, METADATA_PARAMS(0, nullptr) }; // 1735734487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills = { "dataTablesSkills", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTablesSkills), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_MetaData) }; // 1735734487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem = { "partyManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, partyManagerSubsystem), Z_Construct_UClass_UPartyManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem = { "skillFactorySubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, skillFactorySubsystem), Z_Construct_UClass_USkillFactorySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem = { "enemyFactorySubSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, enemyFactorySubSystem), Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem = { "tutorialManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, tutorialManagerSubsystem), Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem = { "dialogueManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, dialogueManagerSubsystem), Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_EventManagerSubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_EventManagerSubSystem = { "EventManagerSubSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, EventManagerSubSystem), Z_Construct_UClass_UEventManagerSubSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_EventManagerSubSystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_EventManagerSubSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory = { "floorFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, floorFactory), Z_Construct_UClass_UFloorFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_SessionSaveGameObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_SessionSaveGameObject = { "SessionSaveGameObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, SessionSaveGameObject), Z_Construct_UClass_USaveGameData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_SessionSaveGameObject_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_SessionSaveGameObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_EventManagerSubSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_SessionSaveGameObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersistentGameinstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersistentGameinstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentGameinstance_Statics::ClassParams = {
		&UPersistentGameinstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPersistentGameinstance()
	{
		if (!Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton, Z_Construct_UClass_UPersistentGameinstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPersistentGameinstance>()
	{
		return UPersistentGameinstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentGameinstance);
	UPersistentGameinstance::~UPersistentGameinstance() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentGameinstance, UPersistentGameinstance::StaticClass, TEXT("UPersistentGameinstance"), &Z_Registration_Info_UClass_UPersistentGameinstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentGameinstance), 2510822357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_3729791292(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
