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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviors();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviors_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPatrolBehavior();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPatrolBehavior_NoRegister();
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorBehaviors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorBehaviors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorBehaviors_Statics::ClassParams = {
		&UFloorBehaviors::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviors_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorBehaviors_Statics::Class_MetaDataParams)
	};
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
	DEFINE_FUNCTION(UPatrolBehavior::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void UPatrolBehavior::StaticRegisterNativesUPatrolBehavior()
	{
		UClass* Class = UPatrolBehavior::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UPatrolBehavior::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics
	{
		struct PatrolBehavior_eventActivateBehavior_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatrolBehavior_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatrolBehavior, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::PatrolBehavior_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::PatrolBehavior_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatrolBehavior);
	UClass* Z_Construct_UClass_UPatrolBehavior_NoRegister()
	{
		return UPatrolBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UPatrolBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UPatrolBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloorBehaviors,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPatrolBehavior_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPatrolBehavior_ActivateBehavior, "ActivateBehavior" }, // 4028921975
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeTaskTest.h" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_enemyFloorPawn_MetaData[] = {
		{ "Category", "PatrolBehavior" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_enemyFloorPawn = { "enemyFloorPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolBehavior, enemyFloorPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_enemyFloorPawn_MetaData), Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_enemyFloorPawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan_Inner = { "floorPlan", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan_MetaData[] = {
		{ "Category", "PatrolBehavior" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan = { "floorPlan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolBehavior, floorPlan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan_MetaData), Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan_MetaData) }; // 738900390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute_Inner = { "patrolRoute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute_MetaData[] = {
		{ "Category", "PatrolBehavior" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute = { "patrolRoute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolBehavior, patrolRoute), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute_MetaData), Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute_MetaData) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "PatrolBehavior" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolBehavior, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_currentPathIndex_MetaData[] = {
		{ "Category", "PatrolBehavior" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_currentPathIndex = { "currentPathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatrolBehavior, currentPathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_currentPathIndex_MetaData), Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_currentPathIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath_MetaData[] = {
		{ "Category", "PatrolBehavior" },
		{ "ModuleRelativePath", "Public/BehaviorTreeTaskTest.h" },
	};
#endif
	void Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath_SetBit(void* Obj)
	{
		((UPatrolBehavior*)Obj)->isAscendingPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath = { "isAscendingPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatrolBehavior), &Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath_MetaData), Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatrolBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_enemyFloorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorPlan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_patrolRoute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_currentPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolBehavior_Statics::NewProp_isAscendingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatrolBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatrolBehavior_Statics::ClassParams = {
		&UPatrolBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPatrolBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatrolBehavior_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolBehavior_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPatrolBehavior()
	{
		if (!Z_Registration_Info_UClass_UPatrolBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatrolBehavior.OuterSingleton, Z_Construct_UClass_UPatrolBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatrolBehavior.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPatrolBehavior>()
	{
		return UPatrolBehavior::StaticClass();
	}
	UPatrolBehavior::UPatrolBehavior(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolBehavior);
	UPatrolBehavior::~UPatrolBehavior() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeTaskTest, UBehaviorTreeTaskTest::StaticClass, TEXT("UBehaviorTreeTaskTest"), &Z_Registration_Info_UClass_UBehaviorTreeTaskTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeTaskTest), 2500591490U) },
		{ Z_Construct_UClass_UFloorBehaviors, UFloorBehaviors::StaticClass, TEXT("UFloorBehaviors"), &Z_Registration_Info_UClass_UFloorBehaviors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorBehaviors), 3541547531U) },
		{ Z_Construct_UClass_UPatrolBehavior, UPatrolBehavior::StaticClass, TEXT("UPatrolBehavior"), &Z_Registration_Info_UClass_UPatrolBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatrolBehavior), 3011830803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_247790499(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_BehaviorTreeTaskTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
