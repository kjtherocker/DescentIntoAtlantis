// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/BehaviorTreeTaskTest.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTaskTest() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UBehaviorTreeTaskTest::StaticRegisterNativesUBehaviorTreeTaskTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeTaskTest);
	UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister()
	{
		return UBehaviorTreeTaskTest::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeTaskTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyFloorPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyFloorPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_AIPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_AIPawn = { "AIPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeTaskTest, AIPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_AIPawn_MetaData), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_AIPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_enemyFloorPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_enemyFloorPawn = { "enemyFloorPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeTaskTest, enemyFloorPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_enemyFloorPawn_MetaData), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_enemyFloorPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeTaskTest, TargetLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_AIPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_enemyFloorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeTaskTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::ClassParams = {
		&UBehaviorTreeTaskTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBehaviorTreeTaskTest()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeTaskTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeTaskTest.OuterSingleton, Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeTaskTest.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UBehaviorTreeTaskTest>()
	{
		return UBehaviorTreeTaskTest::StaticClass();
	}
	UBehaviorTreeTaskTest::UBehaviorTreeTaskTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeTaskTest);
	UBehaviorTreeTaskTest::~UBehaviorTreeTaskTest() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeTaskTest, UBehaviorTreeTaskTest::StaticClass, TEXT("UBehaviorTreeTaskTest"), &Z_Registration_Info_UClass_UBehaviorTreeTaskTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeTaskTest), 3837123334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_1535058144(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
