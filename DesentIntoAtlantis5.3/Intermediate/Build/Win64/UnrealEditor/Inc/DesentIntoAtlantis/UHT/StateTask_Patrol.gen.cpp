// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/StateTask_Patrol.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTask_Patrol() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UStateTask_Patrol();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UStateTask_Patrol_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeAiData();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UStateTask_Patrol::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void UStateTask_Patrol::StaticRegisterNativesUStateTask_Patrol()
	{
		UClass* Class = UStateTask_Patrol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UStateTask_Patrol::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics
	{
		struct StateTask_Patrol_eventActivateBehavior_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTask_Patrol_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTask_Patrol, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::StateTask_Patrol_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::StateTask_Patrol_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTask_Patrol);
	UClass* Z_Construct_UClass_UStateTask_Patrol_NoRegister()
	{
		return UStateTask_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UStateTask_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UStateTask_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateTask_Patrol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTask_Patrol_ActivateBehavior, "ActivateBehavior" }, // 1658179440
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateTask_Patrol.h" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_AIPawn_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_AIPawn = { "AIPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTask_Patrol, AIPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_AIPawn_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_AIPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_enemyFloorPawn_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_enemyFloorPawn = { "enemyFloorPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTask_Patrol, enemyFloorPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_enemyFloorPawn_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_enemyFloorPawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan_Inner = { "floorPlan", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan = { "floorPlan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTask_Patrol, floorPlan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan_MetaData) }; // 738900390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute_Inner = { "patrolRoute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorNodeAiData, METADATA_PARAMS(0, nullptr) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute = { "patrolRoute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTask_Patrol, patrolRoute), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute_MetaData) }; // 738900390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTask_Patrol, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_currentPathIndex_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_currentPathIndex = { "currentPathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTask_Patrol, currentPathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_currentPathIndex_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_currentPathIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath_MetaData[] = {
		{ "Category", "StateTask_Patrol" },
		{ "ModuleRelativePath", "Public/StateTask_Patrol.h" },
	};
#endif
	void Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath_SetBit(void* Obj)
	{
		((UStateTask_Patrol*)Obj)->isAscendingPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath = { "isAscendingPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTask_Patrol), &Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath_MetaData), Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTask_Patrol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_AIPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_enemyFloorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorPlan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_patrolRoute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_currentPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTask_Patrol_Statics::NewProp_isAscendingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTask_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTask_Patrol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTask_Patrol_Statics::ClassParams = {
		&UStateTask_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateTask_Patrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTask_Patrol_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTask_Patrol_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTask_Patrol()
	{
		if (!Z_Registration_Info_UClass_UStateTask_Patrol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTask_Patrol.OuterSingleton, Z_Construct_UClass_UStateTask_Patrol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTask_Patrol.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UStateTask_Patrol>()
	{
		return UStateTask_Patrol::StaticClass();
	}
	UStateTask_Patrol::UStateTask_Patrol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTask_Patrol);
	UStateTask_Patrol::~UStateTask_Patrol() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_StateTask_Patrol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_StateTask_Patrol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTask_Patrol, UStateTask_Patrol::StaticClass, TEXT("UStateTask_Patrol"), &Z_Registration_Info_UClass_UStateTask_Patrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTask_Patrol), 2243395348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_StateTask_Patrol_h_3421949125(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_StateTask_Patrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_StateTask_Patrol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
