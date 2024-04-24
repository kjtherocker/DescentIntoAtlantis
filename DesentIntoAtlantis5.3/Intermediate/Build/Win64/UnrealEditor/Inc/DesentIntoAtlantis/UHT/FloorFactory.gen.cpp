// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorFactory.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorFactory_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UFloorFactory::execReOrderFloorEventRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aRemovedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReOrderFloorEventRow(Z_Param_aRemovedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloorFactory::execDeleteFloorEventRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aRowIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteFloorEventRow(Z_Param_aRowIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloorFactory::execCreateNewFloorEventRow)
	{
		P_GET_STRUCT(FFloorEventData,Z_Param_aNewEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewFloorEventRow(Z_Param_aNewEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloorFactory::execOverwriteFloorEventData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aFloorEventDataTableIndex);
		P_GET_STRUCT(FFloorEventData,Z_Param_aNewEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverwriteFloorEventData(Z_Param_aFloorEventDataTableIndex,Z_Param_aNewEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloorFactory::execOverwriteFloorMapData)
	{
		P_GET_ENUM(EFloorIdentifier,Z_Param_aOverwrittenFloor);
		P_GET_TARRAY(int32,Z_Param_aNewMapData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverwriteFloorMapData(EFloorIdentifier(Z_Param_aOverwrittenFloor),Z_Param_aNewMapData);
		P_NATIVE_END;
	}
	void UFloorFactory::StaticRegisterNativesUFloorFactory()
	{
		UClass* Class = UFloorFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewFloorEventRow", &UFloorFactory::execCreateNewFloorEventRow },
			{ "DeleteFloorEventRow", &UFloorFactory::execDeleteFloorEventRow },
			{ "OverwriteFloorEventData", &UFloorFactory::execOverwriteFloorEventData },
			{ "OverwriteFloorMapData", &UFloorFactory::execOverwriteFloorMapData },
			{ "ReOrderFloorEventRow", &UFloorFactory::execReOrderFloorEventRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics
	{
		struct FloorFactory_eventCreateNewFloorEventRow_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::NewProp_aNewEventData = { "aNewEventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventCreateNewFloorEventRow_Parms, aNewEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(0, nullptr) }; // 636752671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::NewProp_aNewEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorFactory, nullptr, "CreateNewFloorEventRow", nullptr, nullptr, Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::FloorFactory_eventCreateNewFloorEventRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::FloorFactory_eventCreateNewFloorEventRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics
	{
		struct FloorFactory_eventDeleteFloorEventRow_Parms
		{
			int32 aRowIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aRowIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::NewProp_aRowIndex = { "aRowIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventDeleteFloorEventRow_Parms, aRowIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::NewProp_aRowIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorFactory, nullptr, "DeleteFloorEventRow", nullptr, nullptr, Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::FloorFactory_eventDeleteFloorEventRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::FloorFactory_eventDeleteFloorEventRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics
	{
		struct FloorFactory_eventOverwriteFloorEventData_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::NewProp_aFloorEventDataTableIndex = { "aFloorEventDataTableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventOverwriteFloorEventData_Parms, aFloorEventDataTableIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::NewProp_aNewEventData = { "aNewEventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventOverwriteFloorEventData_Parms, aNewEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(0, nullptr) }; // 636752671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::NewProp_aFloorEventDataTableIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::NewProp_aNewEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorFactory, nullptr, "OverwriteFloorEventData", nullptr, nullptr, Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::FloorFactory_eventOverwriteFloorEventData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::FloorFactory_eventOverwriteFloorEventData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics
	{
		struct FloorFactory_eventOverwriteFloorMapData_Parms
		{
			EFloorIdentifier aOverwrittenFloor;
			TArray<int32> aNewMapData;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aOverwrittenFloor_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aOverwrittenFloor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_aNewMapData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_aNewMapData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aOverwrittenFloor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aOverwrittenFloor = { "aOverwrittenFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventOverwriteFloorMapData_Parms, aOverwrittenFloor), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 1497107215
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aNewMapData_Inner = { "aNewMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aNewMapData = { "aNewMapData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventOverwriteFloorMapData_Parms, aNewMapData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aOverwrittenFloor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aOverwrittenFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aNewMapData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::NewProp_aNewMapData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorFactory, nullptr, "OverwriteFloorMapData", nullptr, nullptr, Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::FloorFactory_eventOverwriteFloorMapData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::FloorFactory_eventOverwriteFloorMapData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics
	{
		struct FloorFactory_eventReOrderFloorEventRow_Parms
		{
			int32 aRemovedIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aRemovedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::NewProp_aRemovedIndex = { "aRemovedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorFactory_eventReOrderFloorEventRow_Parms, aRemovedIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::NewProp_aRemovedIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorFactory, nullptr, "ReOrderFloorEventRow", nullptr, nullptr, Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::FloorFactory_eventReOrderFloorEventRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::FloorFactory_eventReOrderFloorEventRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorFactory);
	UClass* Z_Construct_UClass_UFloorFactory_NoRegister()
	{
		return UFloorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFloorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorDatabase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorEventDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorEventDatabase;
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorEventData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorEventData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEventData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorEventData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorDictionary_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorDictionary_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorDictionary_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorDictionary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloorFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloorFactory_CreateNewFloorEventRow, "CreateNewFloorEventRow" }, // 998718750
		{ &Z_Construct_UFunction_UFloorFactory_DeleteFloorEventRow, "DeleteFloorEventRow" }, // 3048231278
		{ &Z_Construct_UFunction_UFloorFactory_OverwriteFloorEventData, "OverwriteFloorEventData" }, // 3750431642
		{ &Z_Construct_UFunction_UFloorFactory_OverwriteFloorMapData, "OverwriteFloorMapData" }, // 1831807979
		{ &Z_Construct_UFunction_UFloorFactory_ReOrderFloorEventRow, "ReOrderFloorEventRow" }, // 1471502035
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FloorFactory.h" },
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorDatabase_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorDatabase = { "FloorDatabase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorFactory, FloorDatabase), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorDatabase_MetaData), Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorDatabase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorEventDatabase_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorEventDatabase = { "FloorEventDatabase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorFactory, FloorEventDatabase), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorEventDatabase_MetaData), Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorEventDatabase_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_Inner = { "floorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloorData, METADATA_PARAMS(0, nullptr) }; // 1634604428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData = { "floorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorFactory, floorData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_MetaData), Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_MetaData) }; // 1634604428
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_ValueProp = { "floorEventData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(0, nullptr) }; // 636752671
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_Key_KeyProp = { "floorEventData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData = { "floorEventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorFactory, floorEventData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_MetaData), Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_MetaData) }; // 636752671
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_ValueProp = { "floorDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp = { "floorDictionary_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(0, nullptr) }; // 1497107215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorFactory.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary = { "floorDictionary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorFactory, floorDictionary), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_MetaData), Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_MetaData) }; // 1497107215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_FloorEventDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorEventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorFactory_Statics::NewProp_floorDictionary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorFactory_Statics::ClassParams = {
		&UFloorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFloorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorFactory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorFactory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloorFactory()
	{
		if (!Z_Registration_Info_UClass_UFloorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorFactory.OuterSingleton, Z_Construct_UClass_UFloorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorFactory.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorFactory>()
	{
		return UFloorFactory::StaticClass();
	}
	UFloorFactory::UFloorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorFactory);
	UFloorFactory::~UFloorFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorFactory, UFloorFactory::StaticClass, TEXT("UFloorFactory"), &Z_Registration_Info_UClass_UFloorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorFactory), 3720880708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorFactory_h_802860475(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
