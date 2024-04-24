// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PressTurnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressTurnManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ACombatGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurnManager();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPressTurnManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UPressTurn::StaticRegisterNativesUPressTurn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPressTurn);
	UClass* Z_Construct_UClass_UPressTurn_NoRegister()
	{
		return UPressTurn::StaticClass();
	}
	struct Z_Construct_UClass_UPressTurn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPressTurn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PressTurnManager.h" },
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPressTurn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPressTurn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPressTurn_Statics::ClassParams = {
		&UPressTurn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurn_Statics::Class_MetaDataParams), Z_Construct_UClass_UPressTurn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPressTurn()
	{
		if (!Z_Registration_Info_UClass_UPressTurn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPressTurn.OuterSingleton, Z_Construct_UClass_UPressTurn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPressTurn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPressTurn>()
	{
		return UPressTurn::StaticClass();
	}
	UPressTurn::UPressTurn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPressTurn);
	UPressTurn::~UPressTurn() {}
	void UPressTurnManager::StaticRegisterNativesUPressTurnManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPressTurnManager);
	UClass* Z_Construct_UClass_UPressTurnManager_NoRegister()
	{
		return UPressTurnManager::StaticClass();
	}
	struct Z_Construct_UClass_UPressTurnManager_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turnCounter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_turnCounter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_activePressTurns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_activePressTurns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_activePressTurns;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inActivePressTurns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inActivePressTurns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inActivePressTurns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPressTurnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PressTurnManager.h" },
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::NewProp_combatManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_combatManager = { "combatManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPressTurnManager, combatManager), Z_Construct_UClass_ACombatGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::NewProp_combatManager_MetaData), Z_Construct_UClass_UPressTurnManager_Statics::NewProp_combatManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPressTurnManager, gameModeBase), Z_Construct_UClass_AAtlantisGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::NewProp_gameModeBase_MetaData), Z_Construct_UClass_UPressTurnManager_Statics::NewProp_gameModeBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::NewProp_turnCounter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_turnCounter = { "turnCounter", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPressTurnManager, turnCounter), Z_Construct_UClass_UTurnCounterView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::NewProp_turnCounter_MetaData), Z_Construct_UClass_UPressTurnManager_Statics::NewProp_turnCounter_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns_Inner = { "activePressTurns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPressTurn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns_MetaData[] = {
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns = { "activePressTurns", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPressTurnManager, activePressTurns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns_MetaData), Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns_Inner = { "inActivePressTurns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPressTurn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns_MetaData[] = {
		{ "ModuleRelativePath", "Public/PressTurnManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns = { "inActivePressTurns", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPressTurnManager, inActivePressTurns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns_MetaData), Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPressTurnManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_combatManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_gameModeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_turnCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_activePressTurns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPressTurnManager_Statics::NewProp_inActivePressTurns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPressTurnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPressTurnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPressTurnManager_Statics::ClassParams = {
		&UPressTurnManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPressTurnManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPressTurnManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPressTurnManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPressTurnManager()
	{
		if (!Z_Registration_Info_UClass_UPressTurnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPressTurnManager.OuterSingleton, Z_Construct_UClass_UPressTurnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPressTurnManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPressTurnManager>()
	{
		return UPressTurnManager::StaticClass();
	}
	UPressTurnManager::UPressTurnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPressTurnManager);
	UPressTurnManager::~UPressTurnManager() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPressTurn, UPressTurn::StaticClass, TEXT("UPressTurn"), &Z_Registration_Info_UClass_UPressTurn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPressTurn), 616848478U) },
		{ Z_Construct_UClass_UPressTurnManager, UPressTurnManager::StaticClass, TEXT("UPressTurnManager"), &Z_Registration_Info_UClass_UPressTurnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPressTurnManager), 3985857858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PressTurnManager_h_4177987364(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PressTurnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
