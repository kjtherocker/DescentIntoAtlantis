// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ACombatGameModeBase();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ACombatGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AEnemyPortraitElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarsView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurnManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterView_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "RoundEndDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRoundEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& RoundEndDelegate)
{
	RoundEndDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ACombatGameModeBase::execInitializeLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeLevel();
		P_NATIVE_END;
	}
	void ACombatGameModeBase::StaticRegisterNativesACombatGameModeBase()
	{
		UClass* Class = ACombatGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeLevel", &ACombatGameModeBase::execInitializeLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "InitializeLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatGameModeBase);
	UClass* Z_Construct_UClass_ACombatGameModeBase_NoRegister()
	{
		return ACombatGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACombatGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turnCounter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_turnCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyHealthbars_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyHealthbars;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentTurnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentTurnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentTurnType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CAMERA_POSITION_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CAMERA_POSITION;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CAMERA_ROTATION_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CAMERA_ROTATION;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyMembersInCombat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyMembersInCombat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_partyMembersInCombat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyMembersDead_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyMembersDead_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_partyMembersDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentActivePartyMember_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentActivePartyMember;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemysInCombat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemysInCombat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_enemysInCombat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Portraits_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Portraits_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Portraits_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Portraits_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Portraits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_portraitsLocations_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_portraitsLocations_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_portraitsLocations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_portraitsLocations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_portraitsLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoundEndDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoundEndDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyPortraitElementReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemyPortraitElementReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressTurnManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pressTurnManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAtlantisGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACombatGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatGameModeBase_InitializeLevel, "InitializeLevel" }, // 3344640098
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CombatGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_turnCounter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_turnCounter = { "turnCounter", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, turnCounter), Z_Construct_UClass_UTurnCounterView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_turnCounter_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_turnCounter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyHealthbars_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyHealthbars = { "partyHealthbars", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, partyHealthbars), Z_Construct_UClass_UPartyHealthbarsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyHealthbars_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyHealthbars_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType = { "currentTurnType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, currentTurnType), Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType_MetaData) }; // 2009458319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_POSITION_MetaData[] = {
		{ "Category", "CombatGameModeBase" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_POSITION = { "CAMERA_POSITION", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, CAMERA_POSITION), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_POSITION_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_POSITION_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_ROTATION_MetaData[] = {
		{ "Category", "CombatGameModeBase" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_ROTATION = { "CAMERA_ROTATION", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, CAMERA_ROTATION), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_ROTATION_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_ROTATION_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat_Inner = { "partyMembersInCombat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat = { "partyMembersInCombat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, partyMembersInCombat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead_Inner = { "partyMembersDead", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead = { "partyMembersDead", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, partyMembersDead), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentActivePartyMember_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentActivePartyMember = { "currentActivePartyMember", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, currentActivePartyMember), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentActivePartyMember_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentActivePartyMember_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat_Inner = { "enemysInCombat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnemyCombatEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat = { "enemysInCombat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, enemysInCombat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_cameraReference_MetaData[] = {
		{ "Category", "CombatGameModeBase" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_cameraReference = { "cameraReference", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, cameraReference), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_cameraReference_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_cameraReference_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_ValueProp = { "Portraits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AEnemyPortraitElement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_Key_KeyProp = { "Portraits_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions, METADATA_PARAMS(0, nullptr) }; // 2723855206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits = { "Portraits", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, Portraits), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_MetaData) }; // 2723855206
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_ValueProp = { "portraitsLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_Key_KeyProp = { "portraitsLocations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions, METADATA_PARAMS(0, nullptr) }; // 2723855206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations = { "portraitsLocations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, portraitsLocations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_MetaData) }; // 2723855206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_OnRoundEndDelegate_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_OnRoundEndDelegate = { "OnRoundEndDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, OnRoundEndDelegate), Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_OnRoundEndDelegate_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_OnRoundEndDelegate_MetaData) }; // 782886950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemyPortraitElementReference_MetaData[] = {
		{ "Category", "CombatGameModeBase" },
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemyPortraitElementReference = { "enemyPortraitElementReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, enemyPortraitElementReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemyPortraitElementReference_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemyPortraitElementReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_pressTurnManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_pressTurnManager = { "pressTurnManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, pressTurnManager), Z_Construct_UClass_UPressTurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_pressTurnManager_MetaData), Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_pressTurnManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_turnCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyHealthbars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentTurnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_POSITION,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_CAMERA_ROTATION,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersInCombat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_partyMembersDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_currentActivePartyMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemysInCombat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_cameraReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_Portraits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_portraitsLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_OnRoundEndDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_enemyPortraitElementReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp_pressTurnManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatGameModeBase_Statics::ClassParams = {
		&ACombatGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACombatGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACombatGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatGameModeBase.OuterSingleton, Z_Construct_UClass_ACombatGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatGameModeBase.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ACombatGameModeBase>()
	{
		return ACombatGameModeBase::StaticClass();
	}
	ACombatGameModeBase::ACombatGameModeBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatGameModeBase);
	ACombatGameModeBase::~ACombatGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatGameModeBase, ACombatGameModeBase::StaticClass, TEXT("ACombatGameModeBase"), &Z_Registration_Info_UClass_ACombatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatGameModeBase), 3653147543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_2840713416(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
