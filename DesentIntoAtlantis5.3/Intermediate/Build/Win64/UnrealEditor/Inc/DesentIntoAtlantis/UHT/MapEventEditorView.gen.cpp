// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MapEventEditorView.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapEventEditorView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapEventEditorView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapEventEditorView_NoRegister();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics
	{
		struct MapEventEditorView_eventFloorEventDelegate_Parms
		{
			int32 aFloorEventDataTableIndex;
			FFloorEventData aNewEventData;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aFloorEventDataTableIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_aNewEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::NewProp_aFloorEventDataTableIndex = { "aFloorEventDataTableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEventEditorView_eventFloorEventDelegate_Parms, aFloorEventDataTableIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::NewProp_aNewEventData = { "aNewEventData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEventEditorView_eventFloorEventDelegate_Parms, aNewEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(0, nullptr) }; // 636752671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::NewProp_aFloorEventDataTableIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::NewProp_aNewEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapEventEditorView, nullptr, "FloorEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::MapEventEditorView_eventFloorEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::MapEventEditorView_eventFloorEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMapEventEditorView::FFloorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloorEventDelegate, int32 aFloorEventDataTableIndex, FFloorEventData& aNewEventData)
{
	struct MapEventEditorView_eventFloorEventDelegate_Parms
	{
		int32 aFloorEventDataTableIndex;
		FFloorEventData aNewEventData;
	};
	MapEventEditorView_eventFloorEventDelegate_Parms Parms;
	Parms.aFloorEventDataTableIndex=aFloorEventDataTableIndex;
	Parms.aNewEventData=aNewEventData;
	FloorEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
	aNewEventData=Parms.aNewEventData;
}
	struct Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics
	{
		struct MapEventEditorView_eventFloorEventDeletionDelegate_Parms
		{
			int32 aFloorEventDataTableIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aFloorEventDataTableIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::NewProp_aFloorEventDataTableIndex = { "aFloorEventDataTableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEventEditorView_eventFloorEventDeletionDelegate_Parms, aFloorEventDataTableIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::NewProp_aFloorEventDataTableIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapEventEditorView, nullptr, "FloorEventDeletionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::MapEventEditorView_eventFloorEventDeletionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::MapEventEditorView_eventFloorEventDeletionDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMapEventEditorView::FFloorEventDeletionDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloorEventDeletionDelegate, int32 aFloorEventDataTableIndex)
{
	struct MapEventEditorView_eventFloorEventDeletionDelegate_Parms
	{
		int32 aFloorEventDataTableIndex;
	};
	MapEventEditorView_eventFloorEventDeletionDelegate_Parms Parms;
	Parms.aFloorEventDataTableIndex=aFloorEventDataTableIndex;
	FloorEventDeletionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics
	{
		struct MapEventEditorView_eventFloorEventCreationDelegate_Parms
		{
			FFloorEventData aFloorEventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aFloorEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::NewProp_aFloorEventData = { "aFloorEventData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEventEditorView_eventFloorEventCreationDelegate_Parms, aFloorEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(0, nullptr) }; // 636752671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::NewProp_aFloorEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapEventEditorView, nullptr, "FloorEventCreationDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::MapEventEditorView_eventFloorEventCreationDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::MapEventEditorView_eventFloorEventCreationDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMapEventEditorView::FFloorEventCreationDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloorEventCreationDelegate, FFloorEventData& aFloorEventData)
{
	struct MapEventEditorView_eventFloorEventCreationDelegate_Parms
	{
		FFloorEventData aFloorEventData;
	};
	MapEventEditorView_eventFloorEventCreationDelegate_Parms Parms;
	Parms.aFloorEventData=aFloorEventData;
	FloorEventCreationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
	aFloorEventData=Parms.aFloorEventData;
}
	DEFINE_FUNCTION(UMapEventEditorView::execDeleteEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapEventEditorView::execSaveEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveEvent();
		P_NATIVE_END;
	}
	void UMapEventEditorView::StaticRegisterNativesUMapEventEditorView()
	{
		UClass* Class = UMapEventEditorView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteEvent", &UMapEventEditorView::execDeleteEvent },
			{ "SaveEvent", &UMapEventEditorView::execSaveEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapEventEditorView_DeleteEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapEventEditorView_DeleteEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapEventEditorView_DeleteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapEventEditorView, nullptr, "DeleteEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEventEditorView_DeleteEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapEventEditorView_DeleteEvent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMapEventEditorView_DeleteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapEventEditorView_DeleteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapEventEditorView_SaveEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapEventEditorView_SaveEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapEventEditorView_SaveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapEventEditorView, nullptr, "SaveEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEventEditorView_SaveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapEventEditorView_SaveEvent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMapEventEditorView_SaveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapEventEditorView_SaveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapEventEditorView);
	UClass* Z_Construct_UClass_UMapEventEditorView_NoRegister()
	{
		return UMapEventEditorView::StaticClass();
	}
	struct Z_Construct_UClass_UMapEventEditorView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onFloorEventSave_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFloorEventSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onFloorEventDeletion_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFloorEventDeletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onFloorEventCreation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFloorEventCreation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_DeleteEventButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_DeleteEventButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_SaveEventButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_SaveEventButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_VerifyGroupButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_VerifyGroupButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_EnemyGroupTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_EnemyGroupTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_TutorialOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_TutorialOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_TutorialOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_TutorialOnEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_AllyGained_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_AllyGained;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_DialogueOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_DialogueOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_DialogueOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_DialogueOnEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_ViewOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_ViewOnEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapEventEditorView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapEventEditorView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapEventEditorView_DeleteEvent, "DeleteEvent" }, // 369175286
		{ &Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature, "FloorEventCreationDelegate__DelegateSignature" }, // 2569668553
		{ &Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature, "FloorEventDelegate__DelegateSignature" }, // 1889977916
		{ &Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature, "FloorEventDeletionDelegate__DelegateSignature" }, // 479274772
		{ &Z_Construct_UFunction_UMapEventEditorView_SaveEvent, "SaveEvent" }, // 3828789533
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MapEventEditorView.h" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventSave = { "onFloorEventSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, onFloorEventSave), Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventSave_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventSave_MetaData) }; // 1889977916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventDeletion_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventDeletion = { "onFloorEventDeletion", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, onFloorEventDeletion), Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventDeletionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventDeletion_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventDeletion_MetaData) }; // 479274772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventCreation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventCreation = { "onFloorEventCreation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, onFloorEventCreation), Z_Construct_UDelegateFunction_UMapEventEditorView_FloorEventCreationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventCreation_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventCreation_MetaData) }; // 2569668553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DeleteEventButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DeleteEventButton = { "BW_DeleteEventButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_DeleteEventButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DeleteEventButton_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DeleteEventButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_SaveEventButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_SaveEventButton = { "BW_SaveEventButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_SaveEventButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_SaveEventButton_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_SaveEventButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_VerifyGroupButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_VerifyGroupButton = { "BW_VerifyGroupButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_VerifyGroupButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_VerifyGroupButton_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_VerifyGroupButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_EnemyGroupTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_EnemyGroupTextBox = { "BW_EnemyGroupTextBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_EnemyGroupTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_EnemyGroupTextBox_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_EnemyGroupTextBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnStart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnStart = { "BW_TutorialOnStart", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_TutorialOnStart), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnStart_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnEnd_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnEnd = { "BW_TutorialOnEnd", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_TutorialOnEnd), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnEnd_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_AllyGained_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_AllyGained = { "BW_AllyGained", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_AllyGained), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_AllyGained_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_AllyGained_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnStart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnStart = { "BW_DialogueOnStart", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_DialogueOnStart), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnStart_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnEnd_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnEnd = { "BW_DialogueOnEnd", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_DialogueOnEnd), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnEnd_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_ViewOnEnd_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapEventEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapEventEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_ViewOnEnd = { "BW_ViewOnEnd", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapEventEditorView, BW_ViewOnEnd), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_ViewOnEnd_MetaData), Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_ViewOnEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapEventEditorView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventDeletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_onFloorEventCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DeleteEventButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_SaveEventButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_VerifyGroupButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_EnemyGroupTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_TutorialOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_AllyGained,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_DialogueOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapEventEditorView_Statics::NewProp_BW_ViewOnEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapEventEditorView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapEventEditorView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapEventEditorView_Statics::ClassParams = {
		&UMapEventEditorView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapEventEditorView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapEventEditorView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEventEditorView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMapEventEditorView()
	{
		if (!Z_Registration_Info_UClass_UMapEventEditorView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapEventEditorView.OuterSingleton, Z_Construct_UClass_UMapEventEditorView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapEventEditorView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMapEventEditorView>()
	{
		return UMapEventEditorView::StaticClass();
	}
	UMapEventEditorView::UMapEventEditorView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapEventEditorView);
	UMapEventEditorView::~UMapEventEditorView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapEventEditorView, UMapEventEditorView::StaticClass, TEXT("UMapEventEditorView"), &Z_Registration_Info_UClass_UMapEventEditorView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapEventEditorView), 1193885990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_3605557825(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS