// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/TutorialManagerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialManagerSubsystem() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManagerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialData();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers();
// End Cross Module References
	void UTutorialManagerSubsystem::StaticRegisterNativesUTutorialManagerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTutorialManagerSubsystem);
	UClass* Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister()
	{
		return UTutorialManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialManagerSubsystem_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_tutorialMap_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tutorialMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_tutorialMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialManagerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TutorialManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/TutorialManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData_Inner = { "tutorialData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialData, METADATA_PARAMS(nullptr, 0) }; // 2681244502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData = { "tutorialData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialManagerSubsystem, tutorialData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData_MetaData)) }; // 2681244502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_ValueProp = { "tutorialMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTutorialData, METADATA_PARAMS(nullptr, 0) }; // 2681244502
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_Key_KeyProp = { "tutorialMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(nullptr, 0) }; // 4028792989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap = { "tutorialMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialManagerSubsystem, tutorialMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_MetaData)) }; // 4028792989 2681244502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialManagerSubsystem_Statics::NewProp_tutorialMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTutorialManagerSubsystem_Statics::ClassParams = {
		&UTutorialManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTutorialManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialManagerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTutorialManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTutorialManagerSubsystem.OuterSingleton, Z_Construct_UClass_UTutorialManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTutorialManagerSubsystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UTutorialManagerSubsystem>()
	{
		return UTutorialManagerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialManagerSubsystem);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTutorialManagerSubsystem, UTutorialManagerSubsystem::StaticClass, TEXT("UTutorialManagerSubsystem"), &Z_Registration_Info_UClass_UTutorialManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTutorialManagerSubsystem), 3290210054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManagerSubsystem_h_2224118430(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TutorialManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
