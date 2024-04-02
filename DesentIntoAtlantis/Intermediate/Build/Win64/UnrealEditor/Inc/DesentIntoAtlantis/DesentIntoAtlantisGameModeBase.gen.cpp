// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesentIntoAtlantisGameModeBase() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ASoundManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGameSettings_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorEventManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueFactory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADesentIntoAtlantisGameModeBase::execInitializeLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADesentIntoAtlantisGameModeBase::execLoadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADesentIntoAtlantisGameModeBase::execUnloadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	void ADesentIntoAtlantisGameModeBase::StaticRegisterNativesADesentIntoAtlantisGameModeBase()
	{
		UClass* Class = ADesentIntoAtlantisGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeLevel", &ADesentIntoAtlantisGameModeBase::execInitializeLevel },
			{ "LoadLevel", &ADesentIntoAtlantisGameModeBase::execLoadLevel },
			{ "UnloadLevel", &ADesentIntoAtlantisGameModeBase::execUnloadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADesentIntoAtlantisGameModeBase, nullptr, "InitializeLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics
	{
		struct DesentIntoAtlantisGameModeBase_eventLoadLevel_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DesentIntoAtlantisGameModeBase_eventLoadLevel_Parms, aLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADesentIntoAtlantisGameModeBase, nullptr, "LoadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::DesentIntoAtlantisGameModeBase_eventLoadLevel_Parms), Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics
	{
		struct DesentIntoAtlantisGameModeBase_eventUnloadLevel_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DesentIntoAtlantisGameModeBase_eventUnloadLevel_Parms, aLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADesentIntoAtlantisGameModeBase, nullptr, "UnloadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::DesentIntoAtlantisGameModeBase_eventUnloadLevel_Parms), Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADesentIntoAtlantisGameModeBase);
	UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister()
	{
		return ADesentIntoAtlantisGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTables_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTables_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTablesClasses_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTablesClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTablesClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTablesClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTablesClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundManagerReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_soundManagerReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorManagerReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_floorManagerReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorPawnReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_floorPawnReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTablesSkills_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTablesSkills_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTablesSkills_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTablesSkills_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTablesSkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_world_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_combatManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tutorialManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEventManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorEventManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_InitializeLevel, "InitializeLevel" }, // 1754819564
		{ &Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_LoadLevel, "LoadLevel" }, // 3511590137
		{ &Z_Construct_UFunction_ADesentIntoAtlantisGameModeBase_UnloadLevel, "UnloadLevel" }, // 1862562317
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DesentIntoAtlantisGameModeBase.h" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_ValueProp = { "dataTables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_Key_KeyProp = { "dataTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, METADATA_PARAMS(nullptr, 0) }; // 3523004561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables = { "dataTables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, dataTables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_MetaData)) }; // 3523004561
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_ValueProp = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_Key_KeyProp = { "dataTablesClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses, METADATA_PARAMS(nullptr, 0) }; // 916432985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, dataTablesClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_MetaData)) }; // 916432985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManagerReference_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "Comment", "//All actors created at tge start of the game\n" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
		{ "ToolTip", "All actors created at tge start of the game" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManagerReference = { "soundManagerReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, soundManagerReference), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManagerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManagerReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManagerReference_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManagerReference = { "floorManagerReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, floorManagerReference), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManagerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManagerReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawnReference_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawnReference = { "floorPawnReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, floorPawnReference), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawnReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawnReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManager_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManager = { "soundManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, soundManager), Z_Construct_UClass_ASoundManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawn_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawn = { "floorPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, floorPawn), Z_Construct_UClass_AFloorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameManager_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameManager = { "gameManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, gameManager), Z_Construct_UClass_UGameManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameSettings_MetaData[] = {
		{ "Category", "DesentIntoAtlantisGameModeBase" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameSettings = { "gameSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, gameSettings), Z_Construct_UClass_UGameSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameSettings_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_ValueProp = { "dataTablesSkills", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_Key_KeyProp = { "dataTablesSkills_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ESkillType, METADATA_PARAMS(nullptr, 0) }; // 2088220918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills = { "dataTablesSkills", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, dataTablesSkills), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_MetaData)) }; // 2088220918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_world_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_world_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_world_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, skillFactory), Z_Construct_UClass_USkillFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_skillFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_skillFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_enemyFactory_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_enemyFactory = { "enemyFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, enemyFactory), Z_Construct_UClass_UEnemyFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_enemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_enemyFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_partyManager_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_partyManager = { "partyManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, partyManager), Z_Construct_UClass_UPartyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_partyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_partyManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_combatManager_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_combatManager = { "combatManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, combatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_combatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_combatManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_InGameHUD_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_InGameHUD = { "InGameHUD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, InGameHUD), Z_Construct_UClass_AInGameHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_InGameHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_InGameHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_tutorialManager_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_tutorialManager = { "tutorialManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, tutorialManager), Z_Construct_UClass_UTutorialManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_tutorialManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_tutorialManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorFactory_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorFactory = { "floorFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, floorFactory), Z_Construct_UClass_UFloorFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorEventManager_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorEventManager = { "floorEventManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, floorEventManager), Z_Construct_UClass_UFloorEventManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorEventManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorEventManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dialogueFactory_MetaData[] = {
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dialogueFactory = { "dialogueFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADesentIntoAtlantisGameModeBase, dialogueFactory), Z_Construct_UClass_UDialogueFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dialogueFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dialogueFactory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManagerReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManagerReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawnReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_soundManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_gameSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dataTablesSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_world,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_enemyFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_partyManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_combatManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_InGameHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_tutorialManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_floorEventManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::NewProp_dialogueFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesentIntoAtlantisGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::ClassParams = {
		&ADesentIntoAtlantisGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase.OuterSingleton, Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ADesentIntoAtlantisGameModeBase>()
	{
		return ADesentIntoAtlantisGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesentIntoAtlantisGameModeBase);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADesentIntoAtlantisGameModeBase, ADesentIntoAtlantisGameModeBase::StaticClass, TEXT("ADesentIntoAtlantisGameModeBase"), &Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADesentIntoAtlantisGameModeBase), 3255010612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_2113250443(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
