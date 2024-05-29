// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/LevelProgressionSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelProgressionSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Interactable_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UInteractableView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelProgressionSubsystem();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelProgressionSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteEnemyInteractionData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteProgressionData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FInteractedEnemy();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FMapData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FNodeMapData();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeMapData;
class UScriptStruct* FNodeMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeMapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeMapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeMapData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("NodeMapData"));
	}
	return Z_Registration_Info_UScriptStruct_NodeMapData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FNodeMapData>()
{
	return FNodeMapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeMapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionInGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_positionInGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasBeenRevealed_MetaData[];
#endif
		static void NewProp_hasBeenRevealed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasBeenRevealed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeMapData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeMapData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_positionInGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_positionInGrid = { "positionInGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeMapData, positionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_positionInGrid_MetaData), Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_positionInGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed_SetBit(void* Obj)
	{
		((FNodeMapData*)Obj)->hasBeenRevealed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed = { "hasBeenRevealed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNodeMapData), &Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed_MetaData), Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_positionInGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeMapData_Statics::NewProp_hasBeenRevealed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"NodeMapData",
		Z_Construct_UScriptStruct_FNodeMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMapData_Statics::PropPointers),
		sizeof(FNodeMapData),
		alignof(FNodeMapData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeMapData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMapData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNodeMapData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeMapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeMapData.InnerSingleton, Z_Construct_UScriptStruct_FNodeMapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeMapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractedEnemy;
class UScriptStruct* FInteractedEnemy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractedEnemy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractedEnemy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractedEnemy, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("InteractedEnemy"));
	}
	return Z_Registration_Info_UScriptStruct_InteractedEnemy.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FInteractedEnemy>()
{
	return FInteractedEnemy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractedEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionInGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_positionInGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasBeenInteracted_MetaData[];
#endif
		static void NewProp_hasBeenInteracted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasBeenInteracted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractedEnemy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractedEnemy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_positionInGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_positionInGrid = { "positionInGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractedEnemy, positionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_positionInGrid_MetaData), Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_positionInGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted_SetBit(void* Obj)
	{
		((FInteractedEnemy*)Obj)->hasBeenInteracted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted = { "hasBeenInteracted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInteractedEnemy), &Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted_MetaData), Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractedEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_positionInGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewProp_hasBeenInteracted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractedEnemy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"InteractedEnemy",
		Z_Construct_UScriptStruct_FInteractedEnemy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractedEnemy_Statics::PropPointers),
		sizeof(FInteractedEnemy),
		alignof(FInteractedEnemy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractedEnemy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractedEnemy_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractedEnemy_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInteractedEnemy()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractedEnemy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractedEnemy.InnerSingleton, Z_Construct_UScriptStruct_FInteractedEnemy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractedEnemy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapData;
class UScriptStruct* FMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("MapData"));
	}
	return Z_Registration_Info_UScriptStruct_MapData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FMapData>()
{
	return FMapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_revealedNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_revealedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_revealedNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes_Inner = { "revealedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNodeMapData, METADATA_PARAMS(0, nullptr) }; // 4102738158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes = { "revealedNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, revealedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes_MetaData), Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes_MetaData) }; // 4102738158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_revealedNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"MapData",
		Z_Construct_UScriptStruct_FMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::PropPointers),
		sizeof(FMapData),
		alignof(FMapData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMapData()
	{
		if (!Z_Registration_Info_UScriptStruct_MapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapData.InnerSingleton, Z_Construct_UScriptStruct_FMapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData;
class UScriptStruct* FCompleteEnemyInteractionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteEnemyInteractionData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CompleteEnemyInteractionData"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCompleteEnemyInteractionData>()
{
	return FCompleteEnemyInteractionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_interactedEnemy_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_interactedEnemy_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactedEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_interactedEnemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteEnemyInteractionData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier = { "floorIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteEnemyInteractionData, floorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier_MetaData), Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier_MetaData) }; // 4214754488
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_ValueProp = { "interactedEnemy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInteractedEnemy, METADATA_PARAMS(0, nullptr) }; // 3238472671
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_Key_KeyProp = { "interactedEnemy_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy = { "interactedEnemy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteEnemyInteractionData, interactedEnemy), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_MetaData), Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_MetaData) }; // 3238472671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_floorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewProp_interactedEnemy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"CompleteEnemyInteractionData",
		Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::PropPointers),
		sizeof(FCompleteEnemyInteractionData),
		alignof(FCompleteEnemyInteractionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteEnemyInteractionData()
	{
		if (!Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData.InnerSingleton, Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteProgressionData;
class UScriptStruct* FCompleteProgressionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteProgressionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteProgressionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteProgressionData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CompleteProgressionData"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteProgressionData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCompleteProgressionData>()
{
	return FCompleteProgressionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompleteProgressionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_mapProgression_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_mapProgression_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mapProgression_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mapProgression_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_mapProgression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeEnemyInteractionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeEnemyInteractionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteProgressionData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_ValueProp = { "mapProgression", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMapData, METADATA_PARAMS(0, nullptr) }; // 2916813291
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_Key_KeyProp = { "mapProgression_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 4214754488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression = { "mapProgression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteProgressionData, mapProgression), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_MetaData), Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_MetaData) }; // 4214754488 2916813291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_completeEnemyInteractionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_completeEnemyInteractionData = { "completeEnemyInteractionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteProgressionData, completeEnemyInteractionData), Z_Construct_UScriptStruct_FCompleteEnemyInteractionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_completeEnemyInteractionData_MetaData), Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_completeEnemyInteractionData_MetaData) }; // 2801192091
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_mapProgression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewProp_completeEnemyInteractionData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"CompleteProgressionData",
		Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::PropPointers),
		sizeof(FCompleteProgressionData),
		alignof(FCompleteProgressionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteProgressionData()
	{
		if (!Z_Registration_Info_UScriptStruct_CompleteProgressionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteProgressionData.InnerSingleton, Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompleteProgressionData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventMapHasChanged_Parms
		{
			FCompleteProgressionData playerFacingDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerFacingDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::NewProp_playerFacingDirection = { "playerFacingDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventMapHasChanged_Parms, playerFacingDirection), Z_Construct_UScriptStruct_FCompleteProgressionData, METADATA_PARAMS(0, nullptr) }; // 3299057101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::NewProp_playerFacingDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "MapHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventMapHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventMapHasChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_MapHasChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMapHasChanged_DelegateWrapper(const FMulticastScriptDelegate& MapHasChanged, FCompleteProgressionData playerFacingDirection)
{
	struct _Script_DesentIntoAtlantis_eventMapHasChanged_Parms
	{
		FCompleteProgressionData playerFacingDirection;
	};
	_Script_DesentIntoAtlantis_eventMapHasChanged_Parms Parms;
	Parms.playerFacingDirection=playerFacingDirection;
	MapHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULevelProgressionSubsystem::execSetCompleteFloorPawnData)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aCompleteFloorPawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompleteFloorPawnData(Z_Param_aCompleteFloorPawnData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelProgressionSubsystem::execActivateCurrentNodesInteractableGimmick)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aCompleteFloorPawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCurrentNodesInteractableGimmick(Z_Param_aCompleteFloorPawnData);
		P_NATIVE_END;
	}
	void ULevelProgressionSubsystem::StaticRegisterNativesULevelProgressionSubsystem()
	{
		UClass* Class = ULevelProgressionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCurrentNodesInteractableGimmick", &ULevelProgressionSubsystem::execActivateCurrentNodesInteractableGimmick },
			{ "SetCompleteFloorPawnData", &ULevelProgressionSubsystem::execSetCompleteFloorPawnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics
	{
		struct LevelProgressionSubsystem_eventActivateCurrentNodesInteractableGimmick_Parms
		{
			FCompleteFloorPawnData aCompleteFloorPawnData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteFloorPawnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::NewProp_aCompleteFloorPawnData = { "aCompleteFloorPawnData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelProgressionSubsystem_eventActivateCurrentNodesInteractableGimmick_Parms, aCompleteFloorPawnData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::NewProp_aCompleteFloorPawnData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelProgressionSubsystem, nullptr, "ActivateCurrentNodesInteractableGimmick", nullptr, nullptr, Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::LevelProgressionSubsystem_eventActivateCurrentNodesInteractableGimmick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::LevelProgressionSubsystem_eventActivateCurrentNodesInteractableGimmick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics
	{
		struct LevelProgressionSubsystem_eventSetCompleteFloorPawnData_Parms
		{
			FCompleteFloorPawnData aCompleteFloorPawnData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteFloorPawnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::NewProp_aCompleteFloorPawnData = { "aCompleteFloorPawnData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelProgressionSubsystem_eventSetCompleteFloorPawnData_Parms, aCompleteFloorPawnData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::NewProp_aCompleteFloorPawnData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelProgressionSubsystem, nullptr, "SetCompleteFloorPawnData", nullptr, nullptr, Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::LevelProgressionSubsystem_eventSetCompleteFloorPawnData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::LevelProgressionSubsystem_eventSetCompleteFloorPawnData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelProgressionSubsystem);
	UClass* Z_Construct_UClass_ULevelProgressionSubsystem_NoRegister()
	{
		return ULevelProgressionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelProgressionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_persistentGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_persistentGameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeProgressionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeProgressionData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gimmickLocation_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_gimmickLocation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gimmickLocation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_gimmickLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentInteractableGimmick_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentInteractableGimmick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactableView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interactableView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelProgressionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelProgressionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelProgressionSubsystem_ActivateCurrentNodesInteractableGimmick, "ActivateCurrentNodesInteractableGimmick" }, // 3936117774
		{ &Z_Construct_UFunction_ULevelProgressionSubsystem_SetCompleteFloorPawnData, "SetCompleteFloorPawnData" }, // 133539219
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelProgressionSubsystem.h" },
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_persistentGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_persistentGameInstance = { "persistentGameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelProgressionSubsystem, persistentGameInstance), Z_Construct_UClass_UPersistentGameinstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_persistentGameInstance_MetaData), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_persistentGameInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_completeProgressionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_completeProgressionData = { "completeProgressionData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelProgressionSubsystem, completeProgressionData), Z_Construct_UScriptStruct_FCompleteProgressionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_completeProgressionData_MetaData), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_completeProgressionData_MetaData) }; // 3299057101
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_ValueProp = { "gimmickLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGimmick_Interactable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_Key_KeyProp = { "gimmickLocation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation = { "gimmickLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelProgressionSubsystem, gimmickLocation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_MetaData), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_currentInteractableGimmick_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_currentInteractableGimmick = { "currentInteractableGimmick", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelProgressionSubsystem, currentInteractableGimmick), Z_Construct_UClass_UGimmick_Interactable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_currentInteractableGimmick_MetaData), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_currentInteractableGimmick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_interactableView_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_interactableView = { "interactableView", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelProgressionSubsystem, interactableView), Z_Construct_UClass_UInteractableView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_interactableView_MetaData), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_interactableView_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelProgressionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gameMode = { "gameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelProgressionSubsystem, gameMode), Z_Construct_UClass_AAtlantisGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gameMode_MetaData), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelProgressionSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_persistentGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_completeProgressionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gimmickLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_currentInteractableGimmick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_interactableView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelProgressionSubsystem_Statics::NewProp_gameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelProgressionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelProgressionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelProgressionSubsystem_Statics::ClassParams = {
		&ULevelProgressionSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelProgressionSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelProgressionSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelProgressionSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelProgressionSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULevelProgressionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelProgressionSubsystem.OuterSingleton, Z_Construct_UClass_ULevelProgressionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelProgressionSubsystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ULevelProgressionSubsystem>()
	{
		return ULevelProgressionSubsystem::StaticClass();
	}
	ULevelProgressionSubsystem::ULevelProgressionSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelProgressionSubsystem);
	ULevelProgressionSubsystem::~ULevelProgressionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FNodeMapData::StaticStruct, Z_Construct_UScriptStruct_FNodeMapData_Statics::NewStructOps, TEXT("NodeMapData"), &Z_Registration_Info_UScriptStruct_NodeMapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeMapData), 4102738158U) },
		{ FInteractedEnemy::StaticStruct, Z_Construct_UScriptStruct_FInteractedEnemy_Statics::NewStructOps, TEXT("InteractedEnemy"), &Z_Registration_Info_UScriptStruct_InteractedEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractedEnemy), 3238472671U) },
		{ FMapData::StaticStruct, Z_Construct_UScriptStruct_FMapData_Statics::NewStructOps, TEXT("MapData"), &Z_Registration_Info_UScriptStruct_MapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapData), 2916813291U) },
		{ FCompleteEnemyInteractionData::StaticStruct, Z_Construct_UScriptStruct_FCompleteEnemyInteractionData_Statics::NewStructOps, TEXT("CompleteEnemyInteractionData"), &Z_Registration_Info_UScriptStruct_CompleteEnemyInteractionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteEnemyInteractionData), 2801192091U) },
		{ FCompleteProgressionData::StaticStruct, Z_Construct_UScriptStruct_FCompleteProgressionData_Statics::NewStructOps, TEXT("CompleteProgressionData"), &Z_Registration_Info_UScriptStruct_CompleteProgressionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteProgressionData), 3299057101U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelProgressionSubsystem, ULevelProgressionSubsystem::StaticClass, TEXT("ULevelProgressionSubsystem"), &Z_Registration_Info_UClass_ULevelProgressionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelProgressionSubsystem), 2388801583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_595495912(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LevelProgressionSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
