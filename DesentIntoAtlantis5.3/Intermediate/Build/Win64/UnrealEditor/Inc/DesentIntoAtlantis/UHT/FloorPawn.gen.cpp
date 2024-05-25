// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorGameMode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References

static_assert(std::is_polymorphic<FCompleteFloorPawnData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCompleteFloorPawnData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteFloorPawnData;
class UScriptStruct* FCompleteFloorPawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteFloorPawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteFloorPawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteFloorPawnData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CompleteFloorPawnData"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteFloorPawnData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCompleteFloorPawnData>()
{
	return FCompleteFloorPawnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentFacingDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFacingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentFacingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentNodePositionInGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentNodePositionInGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteFloorPawnData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection = { "currentFacingDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteFloorPawnData, currentFacingDirection), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection_MetaData), Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection_MetaData) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentNodePositionInGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentNodePositionInGrid = { "currentNodePositionInGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteFloorPawnData, currentNodePositionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentNodePositionInGrid_MetaData), Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentNodePositionInGrid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentFacingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewProp_currentNodePositionInGrid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CompleteFloorPawnData",
		Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::PropPointers),
		sizeof(FCompleteFloorPawnData),
		alignof(FCompleteFloorPawnData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData()
	{
		if (!Z_Registration_Info_UScriptStruct_CompleteFloorPawnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteFloorPawnData.InnerSingleton, Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompleteFloorPawnData.InnerSingleton;
	}
	DEFINE_FUNCTION(AFloorPawn::execForcedMovement)
	{
		P_GET_ENUM(ECardinalNodeDirections,Z_Param_directiontoHead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForcedMovement(ECardinalNodeDirections(Z_Param_directiontoHead));
		P_NATIVE_END;
	}
	void AFloorPawn::StaticRegisterNativesAFloorPawn()
	{
		UClass* Class = AFloorPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForcedMovement", &AFloorPawn::execForcedMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics
	{
		struct FloorPawn_eventForcedMovement_Parms
		{
			ECardinalNodeDirections directiontoHead;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_directiontoHead_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directiontoHead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::NewProp_directiontoHead_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::NewProp_directiontoHead = { "directiontoHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorPawn_eventForcedMovement_Parms, directiontoHead), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::NewProp_directiontoHead_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::NewProp_directiontoHead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorPawn, nullptr, "ForcedMovement", nullptr, nullptr, Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::FloorPawn_eventForcedMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::FloorPawn_eventForcedMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFloorPawn_ForcedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorPawn_ForcedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPawn);
	UClass* Z_Construct_UClass_AFloorPawn_NoRegister()
	{
		return AFloorPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFloorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previousNodePlayerWasOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_previousNodePlayerWasOn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_directionPositionInfo_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionPositionInfo_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directionPositionInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_directionPositionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_directionPositionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeToMoveTowards_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_nodeToMoveTowards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentNodePawnIsOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentNodePawnIsOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMatrixIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentMatrixIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerDirectionMatrix_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_playerDirectionMatrix_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerDirectionMatrix_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDirectionMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_playerDirectionMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeFloorPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeFloorPawnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorPawn_ForcedMovement, "ForcedMovement" }, // 3584236240
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FloorPawn.h" },
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn = { "previousNodePlayerWasOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, previousNodePlayerWasOn), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_ValueProp = { "directionPositionInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_Key_KeyProp = { "directionPositionInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo = { "directionPositionInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, directionPositionInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_MetaData) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards = { "nodeToMoveTowards", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, nodeToMoveTowards), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, gameModeBase), Z_Construct_UClass_AFloorGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePawnIsOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePawnIsOn = { "currentNodePawnIsOn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, currentNodePawnIsOn), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePawnIsOn_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePawnIsOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentMatrixIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentMatrixIndex = { "currentMatrixIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, currentMatrixIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentMatrixIndex_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentMatrixIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_ValueProp = { "playerDirectionMatrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_Key_KeyProp = { "playerDirectionMatrix_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix = { "playerDirectionMatrix", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, playerDirectionMatrix), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_MetaData) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_completeFloorPawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_completeFloorPawnData = { "completeFloorPawnData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPawn, completeFloorPawnData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_completeFloorPawnData_MetaData), Z_Construct_UClass_AFloorPawn_Statics::NewProp_completeFloorPawnData_MetaData) }; // 1570468568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionPositionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePawnIsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentMatrixIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_playerDirectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_completeFloorPawnData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPawn_Statics::ClassParams = {
		&AFloorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorPawn()
	{
		if (!Z_Registration_Info_UClass_AFloorPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPawn.OuterSingleton, Z_Construct_UClass_AFloorPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorPawn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorPawn>()
	{
		return AFloorPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPawn);
	AFloorPawn::~AFloorPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ScriptStructInfo[] = {
		{ FCompleteFloorPawnData::StaticStruct, Z_Construct_UScriptStruct_FCompleteFloorPawnData_Statics::NewStructOps, TEXT("CompleteFloorPawnData"), &Z_Registration_Info_UScriptStruct_CompleteFloorPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteFloorPawnData), 1570468568U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPawn, AFloorPawn::StaticClass, TEXT("AFloorPawn"), &Z_Registration_Info_UClass_AFloorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPawn), 218132893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_869874350(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
