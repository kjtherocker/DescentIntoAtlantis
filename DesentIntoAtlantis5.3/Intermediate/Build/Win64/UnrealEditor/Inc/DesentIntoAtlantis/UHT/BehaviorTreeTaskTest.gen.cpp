// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/BehaviorTreeTaskTest.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTaskTest() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPatrolData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPatrolData_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeAiData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorTreeTaskTest::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_GET_OBJECT(AFloor_EnemyPawn,Z_Param_aEnemyPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData,Z_Param_aEnemyPawn);
		P_NATIVE_END;
	}
	void UBehaviorTreeTaskTest::StaticRegisterNativesUBehaviorTreeTaskTest()
	{
		UClass* Class = UBehaviorTreeTaskTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UBehaviorTreeTaskTest::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics
	{
		struct BehaviorTreeTaskTest_eventActivateBehavior_Parms
		{
			FCompleteFloorPawnData aPlayerCompleteFloorData;
			AFloor_EnemyPawn* aEnemyPawn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerCompleteFloorData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aEnemyPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeTaskTest_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::NewProp_aEnemyPawn = { "aEnemyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeTaskTest_eventActivateBehavior_Parms, aEnemyPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::NewProp_aEnemyPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeTaskTest, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::BehaviorTreeTaskTest_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::BehaviorTreeTaskTest_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeTaskTest);
	UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister()
	{
		return UBehaviorTreeTaskTest::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeTaskTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorTreeTaskTest_ActivateBehavior, "ActivateBehavior" }, // 1094975482
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::FuncInfo) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeTaskTest, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeTaskTest, TargetLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetLocation_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::NewProp_TargetActorKey,
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
		FuncInfo,
		Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	void UPatrolData::StaticRegisterNativesUPatrolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatrolData);
	UClass* Z_Construct_UClass_UPatrolData_NoRegister()
	{
		return UPatrolData::StaticClass();
	}
	struct Z_Construct_UClass_UPatrolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyFloorPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyFloorPawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorPlan_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorPlan_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorPlan;
		static const UECodeGen_Private::FStructPropertyParams NewProp_patrolRoute_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolRoute_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_patrolRoute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentPathIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentPathIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAscendingPath_MetaData[];
#endif
		static void NewProp_isAscendingPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAscendingPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatrolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::NewProp_enemyFloorPawn_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_enemyFloorPawn = { "enemyFloorPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolData, enemyFloorPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::NewProp_enemyFloorPawn_MetaData), Z_Construct_UClass_UPatrolData_Statics::NewProp_enemyFloorPawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan_Inner = { "floorPlan", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan = { "floorPlan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolData, floorPlan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan_MetaData), Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan_MetaData) }; // 738900390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute_Inner = { "patrolRoute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute = { "patrolRoute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolData, patrolRoute), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute_MetaData), Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute_MetaData) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolData, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UPatrolData_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::NewProp_currentPathIndex_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_currentPathIndex = { "currentPathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolData, currentPathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::NewProp_currentPathIndex_MetaData), Z_Construct_UClass_UPatrolData_Statics::NewProp_currentPathIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	void Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath_SetBit(void* Obj)
	{
		((UPatrolData*)Obj)->isAscendingPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath = { "isAscendingPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatrolData), &Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath_MetaData), Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatrolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_enemyFloorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_floorPlan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_patrolRoute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_currentPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolData_Statics::NewProp_isAscendingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatrolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatrolData_Statics::ClassParams = {
		&UPatrolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatrolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatrolData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPatrolData()
	{
		if (!Z_Registration_Info_UClass_UPatrolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatrolData.OuterSingleton, Z_Construct_UClass_UPatrolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatrolData.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPatrolData>()
	{
		return UPatrolData::StaticClass();
	}
	UPatrolData::UPatrolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolData);
	UPatrolData::~UPatrolData() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeTaskTest, UBehaviorTreeTaskTest::StaticClass, TEXT("UBehaviorTreeTaskTest"), &Z_Registration_Info_UClass_UBehaviorTreeTaskTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeTaskTest), 1308023711U) },
		{ Z_Construct_UClass_UPatrolData, UPatrolData::StaticClass, TEXT("UPatrolData"), &Z_Registration_Info_UClass_UPatrolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatrolData), 2540216565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_1879490735(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
