// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/FloorNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorNodeWallInfo();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorNodeWallInfo_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeAiData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloorNodeData;
class UScriptStruct* FFloorNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloorNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloorNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorNodeData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("FloorNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_FloorNodeData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FFloorNodeData>()
{
	return FFloorNodeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloorNodeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_nodeNeighbors_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_nodeNeighbors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_nodeNeighbors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_nodeNeighbors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_additionalLockedDirections_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_additionalLockedDirections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalLockedDirections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_additionalLockedDirections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_cardinalNodeDirections_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cardinalNodeDirections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cardinalNodeDirections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cardinalNodeDirections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorNodeData>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_ValueProp = { "nodeNeighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_Key_KeyProp = { "nodeNeighbors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors = { "nodeNeighbors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorNodeData, nodeNeighbors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_MetaData), Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_MetaData) }; // 1177015594
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_Inner = { "additionalLockedDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections = { "additionalLockedDirections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorNodeData, additionalLockedDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_MetaData), Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_MetaData) }; // 1177015594
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_Inner = { "cardinalNodeDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections = { "cardinalNodeDirections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorNodeData, cardinalNodeDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_MetaData), Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_MetaData) }; // 1177015594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorNodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_nodeNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_additionalLockedDirections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewProp_cardinalNodeDirections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorNodeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"FloorNodeData",
		Z_Construct_UScriptStruct_FFloorNodeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeData_Statics::PropPointers),
		sizeof(FFloorNodeData),
		alignof(FFloorNodeData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloorNodeData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeData()
	{
		if (!Z_Registration_Info_UScriptStruct_FloorNodeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloorNodeData.InnerSingleton, Z_Construct_UScriptStruct_FFloorNodeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloorNodeData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloorNodeAiData>() == std::is_polymorphic<FFloorNodeData>(), "USTRUCT FFloorNodeAiData cannot be polymorphic unless super FFloorNodeData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloorNodeAiData;
class UScriptStruct* FFloorNodeAiData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloorNodeAiData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloorNodeAiData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorNodeAiData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("FloorNodeAiData"));
	}
	return Z_Registration_Info_UScriptStruct_FloorNodeAiData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FFloorNodeAiData>()
{
	return FFloorNodeAiData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloorNodeAiData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_neightborsFloorData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_neightborsFloorData_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_neightborsFloorData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_neightborsFloorData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_neightborsFloorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasBeenCalculated_MetaData[];
#endif
		static void NewProp_hasBeenCalculated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasBeenCalculated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heuristic_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_heuristic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorNodeAiData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_ValueProp = { "neightborsFloorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFloorNodeData, METADATA_PARAMS(0, nullptr) }; // 2196507028
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_Key_KeyProp = { "neightborsFloorData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData = { "neightborsFloorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorNodeAiData, neightborsFloorData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_MetaData), Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_MetaData) }; // 1177015594 2196507028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated_SetBit(void* Obj)
	{
		((FFloorNodeAiData*)Obj)->hasBeenCalculated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated = { "hasBeenCalculated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFloorNodeAiData), &Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated_MetaData), Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_heuristic_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_heuristic = { "heuristic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorNodeAiData, heuristic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_heuristic_MetaData), Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_heuristic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_neightborsFloorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_hasBeenCalculated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewProp_heuristic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FFloorNodeData,
		&NewStructOps,
		"FloorNodeAiData",
		Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::PropPointers),
		sizeof(FFloorNodeAiData),
		alignof(FFloorNodeAiData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloorNodeAiData()
	{
		if (!Z_Registration_Info_UScriptStruct_FloorNodeAiData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloorNodeAiData.InnerSingleton, Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloorNodeAiData.InnerSingleton;
	}
	void AFloorNode::StaticRegisterNativesAFloorNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorNode);
	UClass* Z_Construct_UClass_AFloorNode_NoRegister()
	{
		return AFloorNode::StaticClass();
	}
	struct Z_Construct_UClass_AFloorNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasFloorEvent_MetaData[];
#endif
		static void NewProp_hasFloorEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasFloorEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_wallReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorNodeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorNodeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorNode.h" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_MetaData[] = {
		{ "Category", "FloorNode" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	void Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_SetBit(void* Obj)
	{
		((AFloorNode*)Obj)->hasFloorEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent = { "hasFloorEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFloorNode), &Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_MetaData), Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference_MetaData[] = {
		{ "Category", "FloorNode" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference = { "wallReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorNode, wallReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference_MetaData), Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_floorNodeData_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_floorNodeData = { "floorNodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorNode, floorNodeData), Z_Construct_UScriptStruct_FFloorNodeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_floorNodeData_MetaData), Z_Construct_UClass_AFloorNode_Statics::NewProp_floorNodeData_MetaData) }; // 2196507028
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_floorNodeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorNode_Statics::ClassParams = {
		&AFloorNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorNode()
	{
		if (!Z_Registration_Info_UClass_AFloorNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorNode.OuterSingleton, Z_Construct_UClass_AFloorNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorNode.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorNode>()
	{
		return AFloorNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorNode);
	void UFloorNodeWallInfo::StaticRegisterNativesUFloorNodeWallInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorNodeWallInfo);
	UClass* Z_Construct_UClass_UFloorNodeWallInfo_NoRegister()
	{
		return UFloorNodeWallInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFloorNodeWallInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_wallActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorNodeWallInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorNodeWallInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorNode.h" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor = { "wallActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorNodeWallInfo, wallActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor_MetaData), Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorNodeWallInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorNodeWallInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorNodeWallInfo_Statics::ClassParams = {
		&UFloorNodeWallInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorNodeWallInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloorNodeWallInfo()
	{
		if (!Z_Registration_Info_UClass_UFloorNodeWallInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorNodeWallInfo.OuterSingleton, Z_Construct_UClass_UFloorNodeWallInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorNodeWallInfo.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorNodeWallInfo>()
	{
		return UFloorNodeWallInfo::StaticClass();
	}
	UFloorNodeWallInfo::UFloorNodeWallInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorNodeWallInfo);
	UFloorNodeWallInfo::~UFloorNodeWallInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ScriptStructInfo[] = {
		{ FFloorNodeData::StaticStruct, Z_Construct_UScriptStruct_FFloorNodeData_Statics::NewStructOps, TEXT("FloorNodeData"), &Z_Registration_Info_UScriptStruct_FloorNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorNodeData), 2196507028U) },
		{ FFloorNodeAiData::StaticStruct, Z_Construct_UScriptStruct_FFloorNodeAiData_Statics::NewStructOps, TEXT("FloorNodeAiData"), &Z_Registration_Info_UScriptStruct_FloorNodeAiData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorNodeAiData), 738900390U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorNode, AFloorNode::StaticClass, TEXT("AFloorNode"), &Z_Registration_Info_UClass_AFloorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorNode), 3827136964U) },
		{ Z_Construct_UClass_UFloorNodeWallInfo, UFloorNodeWallInfo::StaticClass, TEXT("UFloorNodeWallInfo"), &Z_Registration_Info_UClass_UFloorNodeWallInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorNodeWallInfo), 524741027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_1170996857(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
