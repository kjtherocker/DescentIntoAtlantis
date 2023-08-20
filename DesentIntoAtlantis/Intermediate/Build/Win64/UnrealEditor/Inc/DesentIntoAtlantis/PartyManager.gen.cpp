// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PartyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactory_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerEntityData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
// End Cross Module References
	void UPartyManager::StaticRegisterNativesUPartyManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyManager);
	UClass* Z_Construct_UClass_UPartyManager_NoRegister()
	{
		return UPartyManager::StaticClass();
	}
	struct Z_Construct_UClass_UPartyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerEntityData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerEntityData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_playerEntityData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCombatEntity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCombatEntity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_playerCombatEntity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_activePartyEntityData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_activePartyEntityData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_activePartyEntityData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PartyManager.h" },
		{ "ModuleRelativePath", "Public/PartyManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManager_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyManager, skillFactory), Z_Construct_UClass_USkillFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyManager_Statics::NewProp_skillFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::NewProp_skillFactory_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData_Inner = { "playerEntityData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerEntityData, METADATA_PARAMS(nullptr, 0) }; // 1055612339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData = { "playerEntityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyManager, playerEntityData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData_MetaData)) }; // 1055612339
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity_Inner = { "playerCombatEntity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity = { "playerCombatEntity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyManager, playerCombatEntity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData_Inner = { "activePartyEntityData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData = { "activePartyEntityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyManager, activePartyEntityData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_playerEntityData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_playerCombatEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManager_Statics::NewProp_activePartyEntityData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyManager_Statics::ClassParams = {
		&UPartyManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPartyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyManager()
	{
		if (!Z_Registration_Info_UClass_UPartyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyManager.OuterSingleton, Z_Construct_UClass_UPartyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPartyManager>()
	{
		return UPartyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyManager, UPartyManager::StaticClass, TEXT("UPartyManager"), &Z_Registration_Info_UClass_UPartyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyManager), 1669650774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_1765538669(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
