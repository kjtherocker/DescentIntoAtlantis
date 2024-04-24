// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveGameData.h"
#include "DesentIntoAtlantis/Public/CombatClass.h"
#include "DesentIntoAtlantis/Public/PlayerCombatEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FClassData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerCompleteDataSet();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void USaveGameData::StaticRegisterNativesUSaveGameData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameData);
	UClass* Z_Construct_UClass_USaveGameData_NoRegister()
	{
		return USaveGameData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_test_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_test;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatEntityDataTest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_combatEntityDataTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerEntityDataTest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerEntityDataTest;
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerCompleteDataSet_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerCompleteDataSet_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_playerCompleteDataSet_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCompleteDataSet_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_playerCompleteDataSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveGameData.h" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_test_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_test = { "test", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, test), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_test_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_test_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_playerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerPosition = { "playerPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, playerPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_playerPosition_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_playerPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_combatEntityDataTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_combatEntityDataTest = { "combatEntityDataTest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, combatEntityDataTest), Z_Construct_UScriptStruct_FClassData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_combatEntityDataTest_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_combatEntityDataTest_MetaData) }; // 254550064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_playerEntityDataTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerEntityDataTest = { "playerEntityDataTest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, playerEntityDataTest), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_playerEntityDataTest_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_playerEntityDataTest_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_ValueProp = { "playerCompleteDataSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerCompleteDataSet, METADATA_PARAMS(0, nullptr) }; // 2951686691
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp = { "playerCompleteDataSet_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, METADATA_PARAMS(0, nullptr) }; // 781165082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet = { "playerCompleteDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameData, playerCompleteDataSet), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_MetaData), Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_MetaData) }; // 781165082 2951686691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_combatEntityDataTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerEntityDataTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_playerCompleteDataSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameData_Statics::ClassParams = {
		&USaveGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveGameData()
	{
		if (!Z_Registration_Info_UClass_USaveGameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameData.OuterSingleton, Z_Construct_UClass_USaveGameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGameData.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USaveGameData>()
	{
		return USaveGameData::StaticClass();
	}
	USaveGameData::USaveGameData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameData);
	USaveGameData::~USaveGameData() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameData, USaveGameData::StaticClass, TEXT("USaveGameData"), &Z_Registration_Info_UClass_USaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameData), 3815253354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_2988125538(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
