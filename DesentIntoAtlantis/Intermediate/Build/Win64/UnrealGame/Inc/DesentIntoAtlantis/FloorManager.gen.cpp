// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/FloorManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBase_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
// End Cross Module References
	void AFloorManager::StaticRegisterNativesAFloorManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorManager);
	UClass* Z_Construct_UClass_AFloorManager_NoRegister()
	{
		return AFloorManager::StaticClass();
	}
	struct Z_Construct_UClass_AFloorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_datatable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_datatable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorNodeReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_floorNodeReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEnemyPawnReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_floorEnemyPawnReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorDictionary_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_floorDictionary_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorDictionary_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorDictionary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFloor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentFloor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorManager.h" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_Inner = { "floorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes = { "floorNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, floorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_datatable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_datatable = { "datatable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, datatable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_datatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_datatable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference = { "floorNodeReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, floorNodeReference), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference = { "floorEnemyPawnReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, floorEnemyPawnReference), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_ValueProp = { "floorDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp = { "floorDictionary_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3166737195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary = { "floorDictionary", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, floorDictionary), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_MetaData)) }; // 3166737195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor = { "currentFloor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, currentFloor), Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_datatable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorNodeReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorEnemyPawnReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_floorDictionary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_currentFloor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorManager_Statics::ClassParams = {
		&AFloorManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorManager()
	{
		if (!Z_Registration_Info_UClass_AFloorManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorManager.OuterSingleton, Z_Construct_UClass_AFloorManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorManager>()
	{
		return AFloorManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorManager, AFloorManager::StaticClass, TEXT("AFloorManager"), &Z_Registration_Info_UClass_AFloorManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorManager), 2166565533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorManager_h_3828073756(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
