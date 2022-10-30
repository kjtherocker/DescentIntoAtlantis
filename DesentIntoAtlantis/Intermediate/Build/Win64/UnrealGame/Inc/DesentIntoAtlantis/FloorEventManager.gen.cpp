// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorEventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorEventManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorEventManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFloorEventManager::execTriggerNextFloorEventStep)
	{
		P_GET_ENUM(EFloorEventStates,Z_Param_aFloorEventStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerNextFloorEventStep(EFloorEventStates(Z_Param_aFloorEventStates));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloorEventManager::execPlayerHasTriggeredFloorEvent)
	{
		P_GET_STRUCT(FVector2D,Z_Param_aPositionInGrid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerHasTriggeredFloorEvent(Z_Param_aPositionInGrid);
		P_NATIVE_END;
	}
	void UFloorEventManager::StaticRegisterNativesUFloorEventManager()
	{
		UClass* Class = UFloorEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerHasTriggeredFloorEvent", &UFloorEventManager::execPlayerHasTriggeredFloorEvent },
			{ "TriggerNextFloorEventStep", &UFloorEventManager::execTriggerNextFloorEventStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics
	{
		struct FloorEventManager_eventPlayerHasTriggeredFloorEvent_Parms
		{
			FVector2D aPositionInGrid;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPositionInGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::NewProp_aPositionInGrid = { "aPositionInGrid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorEventManager_eventPlayerHasTriggeredFloorEvent_Parms, aPositionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::NewProp_aPositionInGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorEventManager, nullptr, "PlayerHasTriggeredFloorEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::FloorEventManager_eventPlayerHasTriggeredFloorEvent_Parms), Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics
	{
		struct FloorEventManager_eventTriggerNextFloorEventStep_Parms
		{
			EFloorEventStates aFloorEventStates;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aFloorEventStates_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aFloorEventStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates = { "aFloorEventStates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorEventManager_eventTriggerNextFloorEventStep_Parms, aFloorEventStates), Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates, METADATA_PARAMS(nullptr, 0) }; // 2146798618
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorEventManager, nullptr, "TriggerNextFloorEventStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::FloorEventManager_eventTriggerNextFloorEventStep_Parms), Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorEventManager);
	UClass* Z_Construct_UClass_UFloorEventManager_NoRegister()
	{
		return UFloorEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UFloorEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_combatManager;
		static const UECodeGen_Private::FStructPropertyParams NewProp_completedFloorEventData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completedFloorEventData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_completedFloorEventData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloorEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloorEventManager_PlayerHasTriggeredFloorEvent, "PlayerHasTriggeredFloorEvent" }, // 813366257
		{ &Z_Construct_UFunction_UFloorEventManager_TriggerNextFloorEventStep, "TriggerNextFloorEventStep" }, // 3956433062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorEventManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "IncludePath", "FloorEventManager.h" },
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorEventManager_Statics::NewProp_floorFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorEventManager_Statics::NewProp_floorFactory = { "floorFactory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorEventManager, floorFactory), Z_Construct_UClass_UFloorFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_floorFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_floorFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorEventManager_Statics::NewProp_combatManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorEventManager_Statics::NewProp_combatManager = { "combatManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorEventManager, combatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_combatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_combatManager_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData_Inner = { "completedFloorEventData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(nullptr, 0) }; // 2125691558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData = { "completedFloorEventData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorEventManager, completedFloorEventData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData_MetaData)) }; // 2125691558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorEventManager_Statics::NewProp_gameBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorEventManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorEventManager_Statics::NewProp_gameBase = { "gameBase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorEventManager, gameBase), Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_gameBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorEventManager_Statics::NewProp_gameBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorEventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorEventManager_Statics::NewProp_floorFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorEventManager_Statics::NewProp_combatManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorEventManager_Statics::NewProp_completedFloorEventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorEventManager_Statics::NewProp_gameBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorEventManager_Statics::ClassParams = {
		&UFloorEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFloorEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorEventManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloorEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorEventManager()
	{
		if (!Z_Registration_Info_UClass_UFloorEventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorEventManager.OuterSingleton, Z_Construct_UClass_UFloorEventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorEventManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorEventManager>()
	{
		return UFloorEventManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorEventManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorEventManager, UFloorEventManager::StaticClass, TEXT("UFloorEventManager"), &Z_Registration_Info_UClass_UFloorEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorEventManager), 1940547690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_2037899231(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
