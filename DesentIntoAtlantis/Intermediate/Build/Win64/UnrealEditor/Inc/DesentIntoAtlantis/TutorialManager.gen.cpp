// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/TutorialManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialData();
// End Cross Module References
	void UTutorialManager::StaticRegisterNativesUTutorialManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTutorialManager);
	UClass* Z_Construct_UClass_UTutorialManager_NoRegister()
	{
		return UTutorialManager::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tutorialData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tutorialData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TutorialManager.h" },
		{ "ModuleRelativePath", "Public/TutorialManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData_Inner = { "tutorialData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialData, METADATA_PARAMS(nullptr, 0) }; // 1495021731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData = { "tutorialData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialManager, tutorialData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData_MetaData)) }; // 1495021731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManager_Statics::NewProp_tutorialData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTutorialManager_Statics::ClassParams = {
		&UTutorialManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTutorialManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialManager()
	{
		if (!Z_Registration_Info_UClass_UTutorialManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTutorialManager.OuterSingleton, Z_Construct_UClass_UTutorialManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTutorialManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UTutorialManager>()
	{
		return UTutorialManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTutorialManager, UTutorialManager::StaticClass, TEXT("UTutorialManager"), &Z_Registration_Info_UClass_UTutorialManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTutorialManager), 4148074524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManager_h_3756490902(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
