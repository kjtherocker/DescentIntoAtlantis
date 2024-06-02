// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/AiPatrolTask.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiPatrolTask() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UAiPatrolTask();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UAiPatrolTask_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorAiTask();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UAiPatrolTask::execActivateBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void UAiPatrolTask::StaticRegisterNativesUAiPatrolTask()
	{
		UClass* Class = UAiPatrolTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBehavior", &UAiPatrolTask::execActivateBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics
	{
		struct AiPatrolTask_eventActivateBehavior_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AiPatrolTask_eventActivateBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AiPatrolTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAiPatrolTask, nullptr, "ActivateBehavior", nullptr, nullptr, Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::AiPatrolTask_eventActivateBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::AiPatrolTask_eventActivateBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAiPatrolTask);
	UClass* Z_Construct_UClass_UAiPatrolTask_NoRegister()
	{
		return UAiPatrolTask::StaticClass();
	}
	struct Z_Construct_UClass_UAiPatrolTask_Statics
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
	UObject* (*const Z_Construct_UClass_UAiPatrolTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloorAiTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAiPatrolTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAiPatrolTask_ActivateBehavior, "ActivateBehavior" }, // 17877089
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAiPatrolTask_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiPatrolTask.h" },
		{ "ModuleRelativePath", "Public/AiPatrolTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_floorManager_MetaData[] = {
		{ "Category", "AiPatrolTask" },
		{ "ModuleRelativePath", "Public/AiPatrolTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiPatrolTask, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_currentPathIndex_MetaData[] = {
		{ "Category", "AiPatrolTask" },
		{ "ModuleRelativePath", "Public/AiPatrolTask.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_currentPathIndex = { "currentPathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiPatrolTask, currentPathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_currentPathIndex_MetaData), Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_currentPathIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath_MetaData[] = {
		{ "Category", "AiPatrolTask" },
		{ "ModuleRelativePath", "Public/AiPatrolTask.h" },
	};
#endif
	void Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath_SetBit(void* Obj)
	{
		((UAiPatrolTask*)Obj)->isAscendingPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath = { "isAscendingPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAiPatrolTask), &Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath_MetaData), Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAiPatrolTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_floorManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_currentPathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiPatrolTask_Statics::NewProp_isAscendingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAiPatrolTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAiPatrolTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAiPatrolTask_Statics::ClassParams = {
		&UAiPatrolTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAiPatrolTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UAiPatrolTask_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiPatrolTask_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAiPatrolTask()
	{
		if (!Z_Registration_Info_UClass_UAiPatrolTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAiPatrolTask.OuterSingleton, Z_Construct_UClass_UAiPatrolTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAiPatrolTask.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UAiPatrolTask>()
	{
		return UAiPatrolTask::StaticClass();
	}
	UAiPatrolTask::UAiPatrolTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAiPatrolTask);
	UAiPatrolTask::~UAiPatrolTask() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_AiPatrolTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_AiPatrolTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAiPatrolTask, UAiPatrolTask::StaticClass, TEXT("UAiPatrolTask"), &Z_Registration_Info_UClass_UAiPatrolTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAiPatrolTask), 3409539041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_AiPatrolTask_h_1322531702(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_AiPatrolTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_AiPatrolTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
