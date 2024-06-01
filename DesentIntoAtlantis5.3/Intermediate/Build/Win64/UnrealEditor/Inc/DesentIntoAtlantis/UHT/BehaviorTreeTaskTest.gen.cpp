// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/BehaviorTreeTaskTest.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTaskTest() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UChasePlayerTask();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UChasePlayerTask_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviors();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviors_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviorTree();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviorTree_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPatrolTask();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPatrolTask_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UReturnToPatrolPoint();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UReturnToPatrolPoint_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeAiData();
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeTaskTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::ClassParams = {
		&UBehaviorTreeTaskTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviorTreeTaskTest_Statics::Class_MetaDataParams)
	};
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
	void UFloorBehaviors::StaticRegisterNativesUFloorBehaviors()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorBehaviors);
	UClass* Z_Construct_UClass_UFloorBehaviors_NoRegister()
	{
		return UFloorBehaviors::StaticClass();
	}
	struct Z_Construct_UClass_UFloorBehaviors_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorBehaviors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_enemyFloorPawn_MetaData[] = {
		{ "Category", "FloorBehaviors" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_enemyFloorPawn = { "enemyFloorPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviors, enemyFloorPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_enemyFloorPawn_MetaData), Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_enemyFloorPawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan_Inner = { "floorPlan", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan_MetaData[] = {
		{ "Category", "FloorBehaviors" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan = { "floorPlan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviors, floorPlan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan_MetaData), Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan_MetaData) }; // 738900390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute_Inner = { "patrolRoute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute_MetaData[] = {
		{ "Category", "FloorBehaviors" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute = { "patrolRoute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviors, patrolRoute), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute_MetaData), Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute_MetaData) }; // 738900390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorBehaviors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_enemyFloorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_floorPlan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviors_Statics::NewProp_patrolRoute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorBehaviors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorBehaviors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorBehaviors_Statics::ClassParams = {
		&UFloorBehaviors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloorBehaviors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorBehaviors_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloorBehaviors()
	{
		if (!Z_Registration_Info_UClass_UFloorBehaviors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorBehaviors.OuterSingleton, Z_Construct_UClass_UFloorBehaviors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorBehaviors.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorBehaviors>()
	{
		return UFloorBehaviors::StaticClass();
	}
	UFloorBehaviors::UFloorBehaviors(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorBehaviors);
	UFloorBehaviors::~UFloorBehaviors() {}
	DEFINE_FUNCTION(UPatrolTask::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void UPatrolTask::StaticRegisterNativesUPatrolTask()
	{
		UClass* Class = UPatrolTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UPatrolTask::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics
	{
		struct PatrolTask_eventActivateBehavior_Parms
		{
			FCompleteFloorPawnData aPlayerCompleteFloorData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerCompleteFloorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatrolTask_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatrolTask, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::PatrolTask_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::PatrolTask_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPatrolTask_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatrolTask_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatrolTask);
	UClass* Z_Construct_UClass_UPatrolTask_NoRegister()
	{
		return UPatrolTask::StaticClass();
	}
	struct Z_Construct_UClass_UPatrolTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UPatrolTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloorBehaviors,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPatrolTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPatrolTask_ActivateBehavior, "ActivateBehavior" }, // 1655907269
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolTask_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "PatrolTask" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolTask_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolTask, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UPatrolTask_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolTask_Statics::NewProp_currentPathIndex_MetaData[] = {
		{ "Category", "PatrolTask" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatrolTask_Statics::NewProp_currentPathIndex = { "currentPathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolTask, currentPathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::NewProp_currentPathIndex_MetaData), Z_Construct_UClass_UPatrolTask_Statics::NewProp_currentPathIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath_MetaData[] = {
		{ "Category", "PatrolTask" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	void Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath_SetBit(void* Obj)
	{
		((UPatrolTask*)Obj)->isAscendingPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath = { "isAscendingPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatrolTask), &Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath_MetaData), Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatrolTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolTask_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolTask_Statics::NewProp_currentPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolTask_Statics::NewProp_isAscendingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatrolTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatrolTask_Statics::ClassParams = {
		&UPatrolTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPatrolTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatrolTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPatrolTask()
	{
		if (!Z_Registration_Info_UClass_UPatrolTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatrolTask.OuterSingleton, Z_Construct_UClass_UPatrolTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatrolTask.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPatrolTask>()
	{
		return UPatrolTask::StaticClass();
	}
	UPatrolTask::UPatrolTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolTask);
	UPatrolTask::~UPatrolTask() {}
	DEFINE_FUNCTION(UChasePlayerTask::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void UChasePlayerTask::StaticRegisterNativesUChasePlayerTask()
	{
		UClass* Class = UChasePlayerTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UChasePlayerTask::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics
	{
		struct ChasePlayerTask_eventActivateBehavior_Parms
		{
			FCompleteFloorPawnData aPlayerCompleteFloorData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerCompleteFloorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChasePlayerTask_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChasePlayerTask, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::ChasePlayerTask_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::ChasePlayerTask_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChasePlayerTask);
	UClass* Z_Construct_UClass_UChasePlayerTask_NoRegister()
	{
		return UChasePlayerTask::StaticClass();
	}
	struct Z_Construct_UClass_UChasePlayerTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChasePlayerTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloorBehaviors,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayerTask_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UChasePlayerTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChasePlayerTask_ActivateBehavior, "ActivateBehavior" }, // 3331053292
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayerTask_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChasePlayerTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChasePlayerTask_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "ChasePlayerTask" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChasePlayerTask_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChasePlayerTask, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayerTask_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UChasePlayerTask_Statics::NewProp_floorManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChasePlayerTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChasePlayerTask_Statics::NewProp_floorManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChasePlayerTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChasePlayerTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChasePlayerTask_Statics::ClassParams = {
		&UChasePlayerTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChasePlayerTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayerTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayerTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UChasePlayerTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChasePlayerTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChasePlayerTask()
	{
		if (!Z_Registration_Info_UClass_UChasePlayerTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChasePlayerTask.OuterSingleton, Z_Construct_UClass_UChasePlayerTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChasePlayerTask.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UChasePlayerTask>()
	{
		return UChasePlayerTask::StaticClass();
	}
	UChasePlayerTask::UChasePlayerTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChasePlayerTask);
	UChasePlayerTask::~UChasePlayerTask() {}
	DEFINE_FUNCTION(UReturnToPatrolPoint::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void UReturnToPatrolPoint::StaticRegisterNativesUReturnToPatrolPoint()
	{
		UClass* Class = UReturnToPatrolPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UReturnToPatrolPoint::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics
	{
		struct ReturnToPatrolPoint_eventActivateBehavior_Parms
		{
			FCompleteFloorPawnData aPlayerCompleteFloorData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerCompleteFloorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnToPatrolPoint_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnToPatrolPoint, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::ReturnToPatrolPoint_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::ReturnToPatrolPoint_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReturnToPatrolPoint);
	UClass* Z_Construct_UClass_UReturnToPatrolPoint_NoRegister()
	{
		return UReturnToPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_UReturnToPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UReturnToPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloorBehaviors,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReturnToPatrolPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReturnToPatrolPoint_ActivateBehavior, "ActivateBehavior" }, // 2138408846
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "ReturnToPatrolPoint" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToPatrolPoint, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_currentPathIndex_MetaData[] = {
		{ "Category", "ReturnToPatrolPoint" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_currentPathIndex = { "currentPathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReturnToPatrolPoint, currentPathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_currentPathIndex_MetaData), Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_currentPathIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath_MetaData[] = {
		{ "Category", "ReturnToPatrolPoint" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	void Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath_SetBit(void* Obj)
	{
		((UReturnToPatrolPoint*)Obj)->isAscendingPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath = { "isAscendingPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReturnToPatrolPoint), &Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath_MetaData), Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReturnToPatrolPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_currentPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToPatrolPoint_Statics::NewProp_isAscendingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReturnToPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnToPatrolPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReturnToPatrolPoint_Statics::ClassParams = {
		&UReturnToPatrolPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReturnToPatrolPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UReturnToPatrolPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToPatrolPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReturnToPatrolPoint()
	{
		if (!Z_Registration_Info_UClass_UReturnToPatrolPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReturnToPatrolPoint.OuterSingleton, Z_Construct_UClass_UReturnToPatrolPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReturnToPatrolPoint.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UReturnToPatrolPoint>()
	{
		return UReturnToPatrolPoint::StaticClass();
	}
	UReturnToPatrolPoint::UReturnToPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnToPatrolPoint);
	UReturnToPatrolPoint::~UReturnToPatrolPoint() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviorTaskTypes;
	static UEnum* EBehaviorTaskTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBehaviorTaskTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBehaviorTaskTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EBehaviorTaskTypes"));
		}
		return Z_Registration_Info_UEnum_EBehaviorTaskTypes.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EBehaviorTaskTypes>()
	{
		return EBehaviorTaskTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::Enumerators[] = {
		{ "EBehaviorTaskTypes::None", (int64)EBehaviorTaskTypes::None },
		{ "EBehaviorTaskTypes::Patrol", (int64)EBehaviorTaskTypes::Patrol },
		{ "EBehaviorTaskTypes::ChasePlayer", (int64)EBehaviorTaskTypes::ChasePlayer },
		{ "EBehaviorTaskTypes::ReturnToPatrolStart", (int64)EBehaviorTaskTypes::ReturnToPatrolStart },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::Enum_MetaDataParams[] = {
		{ "ChasePlayer.Name", "EBehaviorTaskTypes::ChasePlayer" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
		{ "None.Name", "EBehaviorTaskTypes::None" },
		{ "Patrol.Name", "EBehaviorTaskTypes::Patrol" },
		{ "ReturnToPatrolStart.Name", "EBehaviorTaskTypes::ReturnToPatrolStart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EBehaviorTaskTypes",
		"EBehaviorTaskTypes",
		Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes()
	{
		if (!Z_Registration_Info_UEnum_EBehaviorTaskTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviorTaskTypes.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBehaviorTaskTypes.InnerSingleton;
	}
	DEFINE_FUNCTION(UFloorBehaviorTree::execBehaviorLogicController)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aCompleteFloorPawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BehaviorLogicController(Z_Param_aCompleteFloorPawnData);
		P_NATIVE_END;
	}
	void UFloorBehaviorTree::StaticRegisterNativesUFloorBehaviorTree()
	{
		UClass* Class = UFloorBehaviorTree::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BehaviorLogicController", &UFloorBehaviorTree::execBehaviorLogicController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics
	{
		struct FloorBehaviorTree_eventBehaviorLogicController_Parms
		{
			FCompleteFloorPawnData aCompleteFloorPawnData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCompleteFloorPawnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::NewProp_aCompleteFloorPawnData = { "aCompleteFloorPawnData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorBehaviorTree_eventBehaviorLogicController_Parms, aCompleteFloorPawnData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::NewProp_aCompleteFloorPawnData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorBehaviorTree, nullptr, "BehaviorLogicController", nullptr, nullptr, Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::FloorBehaviorTree_eventBehaviorLogicController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::FloorBehaviorTree_eventBehaviorLogicController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorBehaviorTree);
	UClass* Z_Construct_UClass_UFloorBehaviorTree_NoRegister()
	{
		return UFloorBehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UFloorBehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sightCone_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sightCone_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sightCone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_controlledEnemyPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controlledEnemyPawn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentTask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentTask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentTask;
		static const UECodeGen_Private::FIntPropertyParams NewProp_previousTask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previousTask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_previousTask;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorBehaviors_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorBehaviors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorBehaviors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorBehaviors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorBehaviors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAlerted_MetaData[];
#endif
		static void NewProp_isAlerted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAlerted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorBehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloorBehaviorTree_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController, "BehaviorLogicController" }, // 3346044481
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_Inner = { "sightCone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone = { "sightCone", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, sightCone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn = { "controlledEnemyPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, controlledEnemyPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask = { "currentTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, currentTask), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_MetaData) }; // 3170542944
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask = { "previousTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, previousTask), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_MetaData) }; // 3170542944
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_ValueProp = { "floorBehaviors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UFloorBehaviors_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_Key_KeyProp = { "floorBehaviors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(0, nullptr) }; // 3170542944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors = { "floorBehaviors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, floorBehaviors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_MetaData) }; // 3170542944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	void Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted_SetBit(void* Obj)
	{
		((UFloorBehaviorTree*)Obj)->isAlerted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted = { "isAlerted", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFloorBehaviorTree), &Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorBehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorBehaviorTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorBehaviorTree_Statics::ClassParams = {
		&UFloorBehaviorTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFloorBehaviorTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorBehaviorTree_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloorBehaviorTree()
	{
		if (!Z_Registration_Info_UClass_UFloorBehaviorTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorBehaviorTree.OuterSingleton, Z_Construct_UClass_UFloorBehaviorTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorBehaviorTree.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorBehaviorTree>()
	{
		return UFloorBehaviorTree::StaticClass();
	}
	UFloorBehaviorTree::UFloorBehaviorTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorBehaviorTree);
	UFloorBehaviorTree::~UFloorBehaviorTree() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::EnumInfo[] = {
		{ EBehaviorTaskTypes_StaticEnum, TEXT("EBehaviorTaskTypes"), &Z_Registration_Info_UEnum_EBehaviorTaskTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3170542944U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeTaskTest, UBehaviorTreeTaskTest::StaticClass, TEXT("UBehaviorTreeTaskTest"), &Z_Registration_Info_UClass_UBehaviorTreeTaskTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeTaskTest), 2500591490U) },
		{ Z_Construct_UClass_UFloorBehaviors, UFloorBehaviors::StaticClass, TEXT("UFloorBehaviors"), &Z_Registration_Info_UClass_UFloorBehaviors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorBehaviors), 4032516279U) },
		{ Z_Construct_UClass_UPatrolTask, UPatrolTask::StaticClass, TEXT("UPatrolTask"), &Z_Registration_Info_UClass_UPatrolTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatrolTask), 2908088061U) },
		{ Z_Construct_UClass_UChasePlayerTask, UChasePlayerTask::StaticClass, TEXT("UChasePlayerTask"), &Z_Registration_Info_UClass_UChasePlayerTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChasePlayerTask), 3804870779U) },
		{ Z_Construct_UClass_UReturnToPatrolPoint, UReturnToPatrolPoint::StaticClass, TEXT("UReturnToPatrolPoint"), &Z_Registration_Info_UClass_UReturnToPatrolPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReturnToPatrolPoint), 2314338330U) },
		{ Z_Construct_UClass_UFloorBehaviorTree, UFloorBehaviorTree::StaticClass, TEXT("UFloorBehaviorTree"), &Z_Registration_Info_UClass_UFloorBehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorBehaviorTree), 265424523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_991825317(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
