// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorBehaviorTrees.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorBehaviorTrees() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorAiTask_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviorTree();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBehaviorTree_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
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
		{ "ChasePlayer.Comment", "/**\n * \n */" },
		{ "ChasePlayer.Name", "EBehaviorTaskTypes::ChasePlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Name", "EBehaviorTaskTypes::None" },
		{ "Patrol.Comment", "/**\n * \n */" },
		{ "Patrol.Name", "EBehaviorTaskTypes::Patrol" },
		{ "ReturnToPatrolStart.Comment", "/**\n * \n */" },
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
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventFloorTaskHasEnded_Parms
		{
			EBehaviorTaskTypes hasBehaviorEnded;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_hasBehaviorEnded_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_hasBehaviorEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::NewProp_hasBehaviorEnded_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::NewProp_hasBehaviorEnded = { "hasBehaviorEnded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventFloorTaskHasEnded_Parms, hasBehaviorEnded), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(0, nullptr) }; // 1191688581
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::NewProp_hasBehaviorEnded_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::NewProp_hasBehaviorEnded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "FloorTaskHasEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventFloorTaskHasEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventFloorTaskHasEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorTaskHasEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFloorTaskHasEnded_DelegateWrapper(const FMulticastScriptDelegate& FloorTaskHasEnded, EBehaviorTaskTypes hasBehaviorEnded)
{
	struct _Script_DesentIntoAtlantis_eventFloorTaskHasEnded_Parms
	{
		EBehaviorTaskTypes hasBehaviorEnded;
	};
	_Script_DesentIntoAtlantis_eventFloorTaskHasEnded_Parms Parms;
	Parms.hasBehaviorEnded=hasBehaviorEnded;
	FloorTaskHasEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFloorBehaviorTree::execBehaviorLogicController)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aCompleteFloorPawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BehaviorLogicController(Z_Param_aCompleteFloorPawnData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloorBehaviorTree::execOnTaskEnd)
	{
		P_GET_ENUM(EBehaviorTaskTypes,Z_Param_aTaskType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskEnd(EBehaviorTaskTypes(Z_Param_aTaskType));
		P_NATIVE_END;
	}
	void UFloorBehaviorTree::StaticRegisterNativesUFloorBehaviorTree()
	{
		UClass* Class = UFloorBehaviorTree::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BehaviorLogicController", &UFloorBehaviorTree::execBehaviorLogicController },
			{ "OnTaskEnd", &UFloorBehaviorTree::execOnTaskEnd },
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
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
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
	struct Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics
	{
		struct FloorBehaviorTree_eventOnTaskEnd_Parms
		{
			EBehaviorTaskTypes aTaskType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aTaskType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aTaskType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::NewProp_aTaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::NewProp_aTaskType = { "aTaskType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorBehaviorTree_eventOnTaskEnd_Parms, aTaskType), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(0, nullptr) }; // 1191688581
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::NewProp_aTaskType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::NewProp_aTaskType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorBehaviorTree, nullptr, "OnTaskEnd", nullptr, nullptr, Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::FloorBehaviorTree_eventOnTaskEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::FloorBehaviorTree_eventOnTaskEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UFloorBehaviorTree_BehaviorLogicController, "BehaviorLogicController" }, // 3419477339
		{ &Z_Construct_UFunction_UFloorBehaviorTree_OnTaskEnd, "OnTaskEnd" }, // 3529652494
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorBehaviorTrees.h" },
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_Inner = { "sightCone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone = { "sightCone", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, sightCone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_sightCone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn = { "controlledEnemyPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, controlledEnemyPawn), Z_Construct_UClass_AFloor_EnemyPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_controlledEnemyPawn_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask = { "currentTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, currentTask), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_currentTask_MetaData) }; // 1191688581
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask = { "previousTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, previousTask), Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_previousTask_MetaData) }; // 1191688581
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_ValueProp = { "floorBehaviors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UFloorAiTask_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_Key_KeyProp = { "floorBehaviors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EBehaviorTaskTypes, METADATA_PARAMS(0, nullptr) }; // 1191688581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors = { "floorBehaviors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, floorBehaviors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorBehaviors_MetaData) }; // 1191688581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager = { "floorManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorBehaviorTree, floorManager), Z_Construct_UClass_AFloorManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager_MetaData), Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_floorManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBehaviorTree_Statics::NewProp_isAlerted_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorBehaviorTrees.h" },
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
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics::EnumInfo[] = {
		{ EBehaviorTaskTypes_StaticEnum, TEXT("EBehaviorTaskTypes"), &Z_Registration_Info_UEnum_EBehaviorTaskTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1191688581U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorBehaviorTree, UFloorBehaviorTree::StaticClass, TEXT("UFloorBehaviorTree"), &Z_Registration_Info_UClass_UFloorBehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorBehaviorTree), 568005619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_2922384731(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
