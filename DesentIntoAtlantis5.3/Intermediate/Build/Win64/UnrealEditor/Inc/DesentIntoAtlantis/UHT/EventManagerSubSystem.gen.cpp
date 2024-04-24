// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EventManagerSubSystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManagerSubSystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorEnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEventManagerSubSystem();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEventManagerSubSystem_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UEventManagerSubSystem::execTriggerNextFloorEventStep)
	{
		P_GET_ENUM(EFloorEventStates,Z_Param_aFloorEventStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerNextFloorEventStep(EFloorEventStates(Z_Param_aFloorEventStates));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventManagerSubSystem::execPlayerHasTriggeredFloorEvent)
	{
		P_GET_STRUCT(FVector2D,Z_Param_aEventPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerHasTriggeredFloorEvent(Z_Param_aEventPosition);
		P_NATIVE_END;
	}
	void UEventManagerSubSystem::StaticRegisterNativesUEventManagerSubSystem()
	{
		UClass* Class = UEventManagerSubSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerHasTriggeredFloorEvent", &UEventManagerSubSystem::execPlayerHasTriggeredFloorEvent },
			{ "TriggerNextFloorEventStep", &UEventManagerSubSystem::execTriggerNextFloorEventStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics
	{
		struct EventManagerSubSystem_eventPlayerHasTriggeredFloorEvent_Parms
		{
			FVector2D aEventPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aEventPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::NewProp_aEventPosition = { "aEventPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EventManagerSubSystem_eventPlayerHasTriggeredFloorEvent_Parms, aEventPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::NewProp_aEventPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventManagerSubSystem, nullptr, "PlayerHasTriggeredFloorEvent", nullptr, nullptr, Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::EventManagerSubSystem_eventPlayerHasTriggeredFloorEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::EventManagerSubSystem_eventPlayerHasTriggeredFloorEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics
	{
		struct EventManagerSubSystem_eventTriggerNextFloorEventStep_Parms
		{
			EFloorEventStates aFloorEventStates;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aFloorEventStates_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aFloorEventStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates = { "aFloorEventStates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EventManagerSubSystem_eventTriggerNextFloorEventStep_Parms, aFloorEventStates), Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates, METADATA_PARAMS(0, nullptr) }; // 1281561784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::NewProp_aFloorEventStates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventManagerSubSystem, nullptr, "TriggerNextFloorEventStep", nullptr, nullptr, Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::EventManagerSubSystem_eventTriggerNextFloorEventStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::EventManagerSubSystem_eventTriggerNextFloorEventStep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEventManagerSubSystem);
	UClass* Z_Construct_UClass_UEventManagerSubSystem_NoRegister()
	{
		return UEventManagerSubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UEventManagerSubSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isEventRunning_MetaData[];
#endif
		static void NewProp_isEventRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isEventRunning;
		static const UECodeGen_Private::FStructPropertyParams NewProp_completedFloorEventData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completedFloorEventData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_completedFloorEventData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorEnemyEvents_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorEnemyEvents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEnemyEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorEnemyEvents;
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentFloor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFloor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventManagerSubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventManagerSubSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventManagerSubSystem_PlayerHasTriggeredFloorEvent, "PlayerHasTriggeredFloorEvent" }, // 688823014
		{ &Z_Construct_UFunction_UEventManagerSubSystem_TriggerNextFloorEventStep, "TriggerNextFloorEventStep" }, // 4064225591
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManagerSubSystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n */" },
#endif
		{ "IncludePath", "EventManagerSubSystem.h" },
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	void Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning_SetBit(void* Obj)
	{
		((UEventManagerSubSystem*)Obj)->isEventRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning = { "isEventRunning", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEventManagerSubSystem), &Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning_MetaData), Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData_Inner = { "completedFloorEventData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(0, nullptr) }; // 636752671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData = { "completedFloorEventData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEventManagerSubSystem, completedFloorEventData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData_MetaData), Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData_MetaData) }; // 636752671
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_ValueProp = { "floorEnemyEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AFloorEnemyPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_Key_KeyProp = { "floorEnemyEvents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents = { "floorEnemyEvents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEventManagerSubSystem, floorEnemyEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_MetaData), Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor = { "currentFloor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEventManagerSubSystem, currentFloor), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor_MetaData), Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor_MetaData) }; // 1497107215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_gameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/EventManagerSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_gameMode = { "gameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEventManagerSubSystem, gameMode), Z_Construct_UClass_AAtlantisGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_gameMode_MetaData), Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_gameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventManagerSubSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_isEventRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_completedFloorEventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_floorEnemyEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_currentFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventManagerSubSystem_Statics::NewProp_gameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventManagerSubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventManagerSubSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEventManagerSubSystem_Statics::ClassParams = {
		&UEventManagerSubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEventManagerSubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEventManagerSubSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEventManagerSubSystem()
	{
		if (!Z_Registration_Info_UClass_UEventManagerSubSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEventManagerSubSystem.OuterSingleton, Z_Construct_UClass_UEventManagerSubSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEventManagerSubSystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEventManagerSubSystem>()
	{
		return UEventManagerSubSystem::StaticClass();
	}
	UEventManagerSubSystem::UEventManagerSubSystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventManagerSubSystem);
	UEventManagerSubSystem::~UEventManagerSubSystem() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEventManagerSubSystem, UEventManagerSubSystem::StaticClass, TEXT("UEventManagerSubSystem"), &Z_Registration_Info_UClass_UEventManagerSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEventManagerSubSystem), 4208693732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_3022645819(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
