// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PartyManagerSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "DesentIntoAtlantis/Public/PlayerCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyManagerSubsystem() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManagerSubsystem();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerIdentityData();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UPartyManagerSubsystem::StaticRegisterNativesUPartyManagerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyManagerSubsystem);
	UClass* Z_Construct_UClass_UPartyManagerSubsystem_NoRegister()
	{
		return UPartyManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPartyManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_persistentGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_persistentGameInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCombatEntityInfo_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerCombatEntityInfo_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_playerCombatEntityInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCombatEntityInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_playerCombatEntityInfo;
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
	UObject* (*const Z_Construct_UClass_UPartyManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PartyManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyManagerSubsystem, skillFactory), Z_Construct_UClass_USkillFactorySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_skillFactory_MetaData), Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_skillFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_persistentGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_persistentGameInstance = { "persistentGameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyManagerSubsystem, persistentGameInstance), Z_Construct_UClass_UPersistentGameinstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_persistentGameInstance_MetaData), Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_persistentGameInstance_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_ValueProp = { "playerCombatEntityInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_Key_KeyProp = { "playerCombatEntityInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, METADATA_PARAMS(0, nullptr) }; // 781165082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo = { "playerCombatEntityInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyManagerSubsystem, playerCombatEntityInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_MetaData), Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_MetaData) }; // 781165082
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData_Inner = { "playerEntityData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerIdentityData, METADATA_PARAMS(0, nullptr) }; // 140939070
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData = { "playerEntityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyManagerSubsystem, playerEntityData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData_MetaData), Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData_MetaData) }; // 140939070
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity_Inner = { "playerCombatEntity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity = { "playerCombatEntity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyManagerSubsystem, playerCombatEntity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity_MetaData), Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData_Inner = { "activePartyEntityData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData = { "activePartyEntityData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyManagerSubsystem, activePartyEntityData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData_MetaData), Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_persistentGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntityInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerEntityData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_playerCombatEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyManagerSubsystem_Statics::NewProp_activePartyEntityData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyManagerSubsystem_Statics::ClassParams = {
		&UPartyManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartyManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPartyManagerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyManagerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPartyManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPartyManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyManagerSubsystem.OuterSingleton, Z_Construct_UClass_UPartyManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyManagerSubsystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPartyManagerSubsystem>()
	{
		return UPartyManagerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyManagerSubsystem);
	UPartyManagerSubsystem::~UPartyManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PartyManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PartyManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyManagerSubsystem, UPartyManagerSubsystem::StaticClass, TEXT("UPartyManagerSubsystem"), &Z_Registration_Info_UClass_UPartyManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyManagerSubsystem), 591668032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PartyManagerSubsystem_h_1877339048(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PartyManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PartyManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
