// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatSelectionView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSelectionView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatSelectionView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatSelectionView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemySelectionElement_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions();
// End Cross Module References
	void UCombatSelectionView::StaticRegisterNativesUCombatSelectionView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatSelectionView);
	UClass* Z_Construct_UClass_UCombatSelectionView_NoRegister()
	{
		return UCombatSelectionView::StaticClass();
	}
	struct Z_Construct_UClass_UCombatSelectionView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_combatManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSkill_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentSkill;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playersInCombat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playersInCombat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_playersInCombat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemysInCombat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemysInCombat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_enemysInCombat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemySelectionElements_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_enemySelectionElements_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_enemySelectionElements_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemySelectionElements_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_enemySelectionElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_EnemySelectionBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_EnemySelectionBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_EnemySelectionBar_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_EnemySelectionBar_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_EnemySelectionBar_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_EnemySelectionBar_2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatSelectionView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatSelectionView.h" },
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_combatManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_combatManager = { "combatManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, combatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_combatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_combatManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_currentSkill_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_currentSkill = { "currentSkill", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, currentSkill), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_currentSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_currentSkill_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat_Inner = { "playersInCombat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat = { "playersInCombat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, playersInCombat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat_Inner = { "enemysInCombat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEnemyCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat = { "enemysInCombat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, enemysInCombat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_ValueProp = { "enemySelectionElements", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEnemySelectionElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_Key_KeyProp = { "enemySelectionElements_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EEnemyCombatPositions, METADATA_PARAMS(nullptr, 0) }; // 3890971794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements = { "enemySelectionElements", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, enemySelectionElements), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_MetaData)) }; // 3890971794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CombatSelectionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar = { "BW_EnemySelectionBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, BW_EnemySelectionBar), Z_Construct_UClass_UEnemySelectionElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CombatSelectionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_1 = { "BW_EnemySelectionBar_1", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, BW_EnemySelectionBar_1), Z_Construct_UClass_UEnemySelectionElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CombatSelectionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombatSelectionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_2 = { "BW_EnemySelectionBar_2", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSelectionView, BW_EnemySelectionBar_2), Z_Construct_UClass_UEnemySelectionElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatSelectionView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_combatManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_currentSkill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_playersInCombat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemysInCombat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_enemySelectionElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSelectionView_Statics::NewProp_BW_EnemySelectionBar_2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatSelectionView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatSelectionView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatSelectionView_Statics::ClassParams = {
		&UCombatSelectionView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatSelectionView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatSelectionView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSelectionView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatSelectionView()
	{
		if (!Z_Registration_Info_UClass_UCombatSelectionView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatSelectionView.OuterSingleton, Z_Construct_UClass_UCombatSelectionView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatSelectionView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatSelectionView>()
	{
		return UCombatSelectionView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatSelectionView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatSelectionView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatSelectionView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatSelectionView, UCombatSelectionView::StaticClass, TEXT("UCombatSelectionView"), &Z_Registration_Info_UClass_UCombatSelectionView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatSelectionView), 1396745831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatSelectionView_h_2086982484(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatSelectionView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatSelectionView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
