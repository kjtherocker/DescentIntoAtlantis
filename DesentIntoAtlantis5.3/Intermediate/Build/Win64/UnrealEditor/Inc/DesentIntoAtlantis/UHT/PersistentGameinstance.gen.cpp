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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEventManagerSubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelProgressionSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EClasses();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventLevelHasChanged_Parms
		{
			EFloorIdentifier currentFloor;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentFloor_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentFloor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::NewProp_currentFloor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::NewProp_currentFloor = { "currentFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventLevelHasChanged_Parms, currentFloor), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 4214754488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::NewProp_currentFloor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::NewProp_currentFloor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "LevelHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventLevelHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventLevelHasChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLevelHasChanged_DelegateWrapper(const FMulticastScriptDelegate& LevelHasChanged, EFloorIdentifier currentFloor)
{
	struct _Script_DesentIntoAtlantis_eventLevelHasChanged_Parms
	{
		EFloorIdentifier currentFloor;
	};
	_Script_DesentIntoAtlantis_eventLevelHasChanged_Parms Parms;
	Parms.currentFloor=currentFloor;
	LevelHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadCombatLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aEnemyGroupName);
		P_GET_ENUM(ECombatArena,Z_Param_aCombatArena);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCombatLevel(Z_Param_aEnemyGroupName,ECombatArena(Z_Param_aCombatArena));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadPreSetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPreSetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execReturnToPreviousLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToPreviousLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadPreviousLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPreviousLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadLevel)
	{
		P_GET_ENUM(EFloorIdentifier,Z_Param_aFloorIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevel(EFloorIdentifier(Z_Param_aFloorIdentifier));
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
			{ "LoadLevel", &UPersistentGameinstance::execLoadLevel },
			{ "LoadPreSetLevel", &UPersistentGameinstance::execLoadPreSetLevel },
			{ "LoadPreviousLevel", &UPersistentGameinstance::execLoadPreviousLevel },
			{ "ReturnToPreviousLevel", &UPersistentGameinstance::execReturnToPreviousLevel },
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel_Statics::NewProp_aCombatArena = { "aCombatArena", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadCombatLevel_Parms, aCombatArena), Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena, METADATA_PARAMS(0, nullptr) }; // 3825271882
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
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics
	{
		struct PersistentGameinstance_eventLoadLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aFloorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aFloorIdentifier = { "aFloorIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadLevel_Parms, aFloorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 4214754488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aFloorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aFloorIdentifier,
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
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadPreviousLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "ReturnToPreviousLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelHasChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_levelHasChanged;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_saveManagerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelProgressionSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_levelProgressionSubsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_elementalIcons_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_elementalIcons_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_elementalIcons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_elementalIcons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_elementalIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorFactory;
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
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadCombatLevel, "LoadCombatLevel" }, // 924912187
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadLevel, "LoadLevel" }, // 391337518
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel, "LoadPreSetLevel" }, // 439233011
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadPreviousLevel, "LoadPreviousLevel" }, // 1564438389
		{ &Z_Construct_UFunction_UPersistentGameinstance_ReturnToPreviousLevel, "ReturnToPreviousLevel" }, // 1621186413
		{ &Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel, "UnloadLevel" }, // 3305872743
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PersistentGameinstance.h" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelHasChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelHasChanged = { "levelHasChanged", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, levelHasChanged), Z_Construct_UDelegateFunction_DesentIntoAtlantis_LevelHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelHasChanged_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelHasChanged_MetaData) }; // 495388279
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_ValueProp = { "dataTables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp = { "dataTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, METADATA_PARAMS(0, nullptr) }; // 849449257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables = { "dataTables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData) }; // 849449257
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_ValueProp = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp = { "dataTablesClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EClasses, METADATA_PARAMS(0, nullptr) }; // 2824778090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTablesClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData) }; // 2824778090
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_saveManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_saveManagerSubsystem = { "saveManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, saveManagerSubsystem), Z_Construct_UClass_USaveManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_saveManagerSubsystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_saveManagerSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelProgressionSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelProgressionSubsystem = { "levelProgressionSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, levelProgressionSubsystem), Z_Construct_UClass_ULevelProgressionSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelProgressionSubsystem_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelProgressionSubsystem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_ValueProp = { "elementalIcons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_Key_KeyProp = { "elementalIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(0, nullptr) }; // 3743192891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_MetaData[] = {
		{ "Category", "PersistentGameinstance" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons = { "elementalIcons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, elementalIcons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_MetaData) }; // 3743192891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory = { "floorFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistentGameinstance, floorFactory), Z_Construct_UClass_UFloorFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory_MetaData), Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelHasChanged,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_saveManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_levelProgressionSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_elementalIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_floorFactory,
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
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentGameinstance, UPersistentGameinstance::StaticClass, TEXT("UPersistentGameinstance"), &Z_Registration_Info_UClass_UPersistentGameinstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentGameinstance), 3755987672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_2682131413(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
