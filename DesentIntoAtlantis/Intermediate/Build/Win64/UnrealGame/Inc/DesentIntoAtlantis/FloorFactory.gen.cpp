// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorFactory() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBase_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
// End Cross Module References
	void UFloorFactory::StaticRegisterNativesUFloorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorFactory);
	UClass* Z_Construct_UClass_UFloorFactory_NoRegister()
	{
		return UFloorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFloorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorEnemyData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEnemyData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorEnemyData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorDictionary_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_floorDictionary_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorDictionary_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorDictionary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FloorFactory.h" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_Inner = { "floorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloorData, METADATA_PARAMS(nullptr, 0) }; // 1519163134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData = { "floorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorFactory, floorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_MetaData)) }; // 1519163134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData_Inner = { "floorEnemyData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(nullptr, 0) }; // 2125691558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData = { "floorEnemyData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorFactory, floorEnemyData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData_MetaData)) }; // 2125691558
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_ValueProp = { "floorDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp = { "floorDictionary_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3166737195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary = { "floorDictionary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorFactory, floorDictionary), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_MetaData)) }; // 3166737195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEnemyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorFactory_Statics::ClassParams = {
		&UFloorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorFactory()
	{
		if (!Z_Registration_Info_UClass_UFloorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorFactory.OuterSingleton, Z_Construct_UClass_UFloorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorFactory.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorFactory>()
	{
		return UFloorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorFactory);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorFactory, UFloorFactory::StaticClass, TEXT("UFloorFactory"), &Z_Registration_Info_UClass_UFloorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorFactory), 2111984686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_3638931497(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
