// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameData() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_test;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testo2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_testo2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameData.h" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_test_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_test = { "test", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, test), METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_test_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_test_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_testo2_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_testo2 = { "testo2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, testo2), Z_Construct_UClass_AFloorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_testo2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_testo2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_testo2,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams))
	};
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameData);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameData, USaveGameData::StaticClass, TEXT("USaveGameData"), &Z_Registration_Info_UClass_USaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameData), 2129250910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SaveGameData_h_3132442531(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SaveGameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
