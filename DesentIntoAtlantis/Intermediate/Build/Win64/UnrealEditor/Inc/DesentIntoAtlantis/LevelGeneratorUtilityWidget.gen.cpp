// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/LevelGeneratorUtilityWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelGeneratorUtilityWidget() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement_NoRegister();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBase_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapNodeEditorView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
// End Cross Module References
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execSpawnMapButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_aColumn);
		P_GET_PROPERTY(FIntProperty,Z_Param_aIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMapButton(Z_Param_aRow,Z_Param_aColumn,Z_Param_aIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execCreateGrid)
	{
		P_GET_OBJECT(UFloorBase,Z_Param_aFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGrid(Z_Param_aFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execGenerateLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execDeleteEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aFloorEventDataTableIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteEvent(Z_Param_aFloorEventDataTableIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execCreateEvent)
	{
		P_GET_STRUCT_REF(FFloorEventData,Z_Param_Out_aNewEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateEvent(Z_Param_Out_aNewEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execSaveCurrentEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aFloorEventDataTableIndex);
		P_GET_STRUCT_REF(FFloorEventData,Z_Param_Out_aNewEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCurrentEvent(Z_Param_aFloorEventDataTableIndex,Z_Param_Out_aNewEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execSaveCurrentMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCurrentMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execActivateMapNodeEditor)
	{
		P_GET_OBJECT(UMapButtonElement,Z_Param_aMapButtonElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMapNodeEditor(Z_Param_aMapButtonElement);
		P_NATIVE_END;
	}
	void ULevelGeneratorUtilityWidget::StaticRegisterNativesULevelGeneratorUtilityWidget()
	{
		UClass* Class = ULevelGeneratorUtilityWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMapNodeEditor", &ULevelGeneratorUtilityWidget::execActivateMapNodeEditor },
			{ "CreateEvent", &ULevelGeneratorUtilityWidget::execCreateEvent },
			{ "CreateGrid", &ULevelGeneratorUtilityWidget::execCreateGrid },
			{ "DeleteEvent", &ULevelGeneratorUtilityWidget::execDeleteEvent },
			{ "GenerateLevel", &ULevelGeneratorUtilityWidget::execGenerateLevel },
			{ "SaveCurrentEvent", &ULevelGeneratorUtilityWidget::execSaveCurrentEvent },
			{ "SaveCurrentMap", &ULevelGeneratorUtilityWidget::execSaveCurrentMap },
			{ "SpawnMapButton", &ULevelGeneratorUtilityWidget::execSpawnMapButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics
	{
		struct LevelGeneratorUtilityWidget_eventActivateMapNodeEditor_Parms
		{
			UMapButtonElement* aMapButtonElement;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aMapButtonElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aMapButtonElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::NewProp_aMapButtonElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::NewProp_aMapButtonElement = { "aMapButtonElement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventActivateMapNodeEditor_Parms, aMapButtonElement), Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::NewProp_aMapButtonElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::NewProp_aMapButtonElement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::NewProp_aMapButtonElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "ActivateMapNodeEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::LevelGeneratorUtilityWidget_eventActivateMapNodeEditor_Parms), Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics
	{
		struct LevelGeneratorUtilityWidget_eventCreateEvent_Parms
		{
			FFloorEventData aNewEventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aNewEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::NewProp_aNewEventData = { "aNewEventData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventCreateEvent_Parms, aNewEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(nullptr, 0) }; // 3635940602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::NewProp_aNewEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "CreateEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::LevelGeneratorUtilityWidget_eventCreateEvent_Parms), Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics
	{
		struct LevelGeneratorUtilityWidget_eventCreateGrid_Parms
		{
			UFloorBase* aFloor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::NewProp_aFloor = { "aFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventCreateGrid_Parms, aFloor), Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::NewProp_aFloor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "CreateGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::LevelGeneratorUtilityWidget_eventCreateGrid_Parms), Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics
	{
		struct LevelGeneratorUtilityWidget_eventDeleteEvent_Parms
		{
			int32 aFloorEventDataTableIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aFloorEventDataTableIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::NewProp_aFloorEventDataTableIndex = { "aFloorEventDataTableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventDeleteEvent_Parms, aFloorEventDataTableIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::NewProp_aFloorEventDataTableIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "DeleteEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::LevelGeneratorUtilityWidget_eventDeleteEvent_Parms), Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "GenerateLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics
	{
		struct LevelGeneratorUtilityWidget_eventSaveCurrentEvent_Parms
		{
			int32 aFloorEventDataTableIndex;
			FFloorEventData aNewEventData;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aFloorEventDataTableIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_aNewEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::NewProp_aFloorEventDataTableIndex = { "aFloorEventDataTableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventSaveCurrentEvent_Parms, aFloorEventDataTableIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::NewProp_aNewEventData = { "aNewEventData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventSaveCurrentEvent_Parms, aNewEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(nullptr, 0) }; // 3635940602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::NewProp_aFloorEventDataTableIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::NewProp_aNewEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "SaveCurrentEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::LevelGeneratorUtilityWidget_eventSaveCurrentEvent_Parms), Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "SaveCurrentMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics
	{
		struct LevelGeneratorUtilityWidget_eventSpawnMapButton_Parms
		{
			int32 aRow;
			int32 aColumn;
			int32 aIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aRow;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aColumn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_aIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::NewProp_aRow = { "aRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventSpawnMapButton_Parms, aRow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::NewProp_aColumn = { "aColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventSpawnMapButton_Parms, aColumn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::NewProp_aIndex = { "aIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelGeneratorUtilityWidget_eventSpawnMapButton_Parms, aIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::NewProp_aRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::NewProp_aColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::NewProp_aIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "SpawnMapButton", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::LevelGeneratorUtilityWidget_eventSpawnMapButton_Parms), Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelGeneratorUtilityWidget);
	UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget_NoRegister()
	{
		return ULevelGeneratorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFloor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentFloor;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FloorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FloorIdentifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapButtons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapButtons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_MapNodeEditor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_MapNodeEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_GenerateButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_GenerateButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_SaveButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_SaveButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_HorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_HorizontalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapButtonElement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MapButtonElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_TitleText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_TitleText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_LevelSelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_LevelSelector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTables_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTables_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_ActivateMapNodeEditor, "ActivateMapNodeEditor" }, // 3599312812
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateEvent, "CreateEvent" }, // 2162458279
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_CreateGrid, "CreateGrid" }, // 2051181982
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_DeleteEvent, "DeleteEvent" }, // 3383572612
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel, "GenerateLevel" }, // 4039593843
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentEvent, "SaveCurrentEvent" }, // 177434674
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SaveCurrentMap, "SaveCurrentMap" }, // 2668113037
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_SpawnMapButton, "SpawnMapButton" }, // 470812995
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LevelGeneratorUtilityWidget.h" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_CurrentFloor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_CurrentFloor = { "CurrentFloor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, CurrentFloor), Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_CurrentFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_CurrentFloor_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier = { "FloorIdentifier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, FloorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier_MetaData)) }; // 3166737195
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons_Inner = { "MapButtons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons = { "MapButtons", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, MapButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapNodeEditor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapNodeEditor = { "BW_MapNodeEditor", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_MapNodeEditor), Z_Construct_UClass_UMapNodeEditorView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapNodeEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapNodeEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton = { "BW_GenerateButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_GenerateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_SaveButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_SaveButton = { "BW_SaveButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_SaveButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_SaveButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_SaveButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_HorizontalBox = { "BW_HorizontalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_HorizontalBox), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_HorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_HorizontalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtonElement_MetaData[] = {
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtonElement = { "MapButtonElement", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, MapButtonElement), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtonElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtonElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText = { "BW_TitleText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_LevelSelector_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_LevelSelector = { "BW_LevelSelector", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_LevelSelector), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_LevelSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_LevelSelector_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_ValueProp = { "dataTables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp = { "dataTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, METADATA_PARAMS(nullptr, 0) }; // 1504217215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables = { "dataTables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, dataTables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_MetaData)) }; // 1504217215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_CurrentFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_FloorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapNodeEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_SaveButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_HorizontalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_MapButtonElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_LevelSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelGeneratorUtilityWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::ClassParams = {
		&ULevelGeneratorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget()
	{
		if (!Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget.OuterSingleton, Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ULevelGeneratorUtilityWidget>()
	{
		return ULevelGeneratorUtilityWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelGeneratorUtilityWidget);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelGeneratorUtilityWidget, ULevelGeneratorUtilityWidget::StaticClass, TEXT("ULevelGeneratorUtilityWidget"), &Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelGeneratorUtilityWidget), 2401964074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_4152046838(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
