// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurnManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister();
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
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "RoundEndDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCombatManager::StaticRegisterNativesUCombatManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatManager);
	UClass* Z_Construct_UClass_UCombatManager_NoRegister()
	{
		return UCombatManager::StaticClass();
	}
	struct Z_Construct_UClass_UCombatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_world_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoundEndDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoundEndDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressTurnManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pressTurnManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentActivePartyMember_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentActivePartyMember;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyCombatEntities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyCombatEntities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_enemyCombatEntities;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatManager.h" },
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_GameHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_GameHUD = { "GameHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, GameHUD), Z_Construct_UClass_AInGameHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_GameHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_GameHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, skillFactory), Z_Construct_UClass_USkillFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_skillFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_skillFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_world_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_world_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_world_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_OnRoundEndDelegate_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_OnRoundEndDelegate = { "OnRoundEndDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, OnRoundEndDelegate), Z_Construct_UDelegateFunction_DesentIntoAtlantis_RoundEndDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_OnRoundEndDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_OnRoundEndDelegate_MetaData)) }; // 4208433212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_pressTurnManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_pressTurnManager = { "pressTurnManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, pressTurnManager), Z_Construct_UClass_UPressTurnManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_pressTurnManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_pressTurnManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_currentActivePartyMember_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_currentActivePartyMember = { "currentActivePartyMember", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, currentActivePartyMember), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_currentActivePartyMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_currentActivePartyMember_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities_Inner = { "enemyCombatEntities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEnemyCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities = { "enemyCombatEntities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, enemyCombatEntities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat_Inner = { "partyMembersInCombat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat = { "partyMembersInCombat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, partyMembersInCombat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead_Inner = { "partyMembersDead", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead = { "partyMembersDead", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, partyMembersDead), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, gameModeBase), Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_gameModeBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_GameHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_world,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_OnRoundEndDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_pressTurnManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_currentActivePartyMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_enemyCombatEntities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersInCombat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_partyMembersDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_gameModeBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatManager_Statics::ClassParams = {
		&UCombatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatManager()
	{
		if (!Z_Registration_Info_UClass_UCombatManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatManager.OuterSingleton, Z_Construct_UClass_UCombatManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatManager>()
	{
		return UCombatManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatManager, UCombatManager::StaticClass, TEXT("UCombatManager"), &Z_Registration_Info_UClass_UCombatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatManager), 1589579549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_927225303(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
