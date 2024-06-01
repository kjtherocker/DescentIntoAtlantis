// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorPlayerPawn.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlayerPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPlayerPawn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPlayerPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorPawnPositionInfo();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventPlayerForcedMovement_Parms
		{
			ECardinalNodeDirections direction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventPlayerForcedMovement_Parms, direction), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "PlayerForcedMovement__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventPlayerForcedMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventPlayerForcedMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerForcedMovement_DelegateWrapper(const FMulticastScriptDelegate& PlayerForcedMovement, ECardinalNodeDirections direction)
{
	struct _Script_DesentIntoAtlantis_eventPlayerForcedMovement_Parms
	{
		ECardinalNodeDirections direction;
	};
	_Script_DesentIntoAtlantis_eventPlayerForcedMovement_Parms Parms;
	Parms.direction=direction;
	PlayerForcedMovement.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventPlayerHasMoved_Parms
		{
			FCompleteFloorPawnData floorData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::NewProp_floorData = { "floorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventPlayerHasMoved_Parms, floorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::NewProp_floorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "PlayerHasMoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventPlayerHasMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventPlayerHasMoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerHasMoved_DelegateWrapper(const FMulticastScriptDelegate& PlayerHasMoved, FCompleteFloorPawnData floorData)
{
	struct _Script_DesentIntoAtlantis_eventPlayerHasMoved_Parms
	{
		FCompleteFloorPawnData floorData;
	};
	_Script_DesentIntoAtlantis_eventPlayerHasMoved_Parms Parms;
	Parms.floorData=floorData;
	PlayerHasMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventPlayerDirectionHasChanged_Parms
		{
			FCompleteFloorPawnData playerFacingDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerFacingDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::NewProp_playerFacingDirection = { "playerFacingDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventPlayerDirectionHasChanged_Parms, playerFacingDirection), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::NewProp_playerFacingDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "PlayerDirectionHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventPlayerDirectionHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventPlayerDirectionHasChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerDirectionHasChanged_DelegateWrapper(const FMulticastScriptDelegate& PlayerDirectionHasChanged, FCompleteFloorPawnData playerFacingDirection)
{
	struct _Script_DesentIntoAtlantis_eventPlayerDirectionHasChanged_Parms
	{
		FCompleteFloorPawnData playerFacingDirection;
	};
	_Script_DesentIntoAtlantis_eventPlayerDirectionHasChanged_Parms Parms;
	Parms.playerFacingDirection=playerFacingDirection;
	PlayerDirectionHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AFloorPlayerPawn::execPlaceAndInitializieFloorPawn)
	{
		P_GET_OBJECT(AFloorNode,Z_Param_aFloorNode);
		P_GET_ENUM(ECardinalNodeDirections,Z_Param_aRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceAndInitializieFloorPawn(Z_Param_aFloorNode,ECardinalNodeDirections(Z_Param_aRotation));
		P_NATIVE_END;
	}
	void AFloorPlayerPawn::StaticRegisterNativesAFloorPlayerPawn()
	{
		UClass* Class = AFloorPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlaceAndInitializieFloorPawn", &AFloorPlayerPawn::execPlaceAndInitializieFloorPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics
	{
		struct FloorPlayerPawn_eventPlaceAndInitializieFloorPawn_Parms
		{
			AFloorNode* aFloorNode;
			ECardinalNodeDirections aRotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloorNode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_aRotation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::NewProp_aFloorNode = { "aFloorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorPlayerPawn_eventPlaceAndInitializieFloorPawn_Parms, aFloorNode), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::NewProp_aRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::NewProp_aRotation = { "aRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorPlayerPawn_eventPlaceAndInitializieFloorPawn_Parms, aRotation), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::NewProp_aFloorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::NewProp_aRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::NewProp_aRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorPlayerPawn, nullptr, "PlaceAndInitializieFloorPawn", nullptr, nullptr, Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::FloorPlayerPawn_eventPlaceAndInitializieFloorPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::FloorPlayerPawn_eventPlaceAndInitializieFloorPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPlayerPawn);
	UClass* Z_Construct_UClass_AFloorPlayerPawn_NoRegister()
	{
		return AFloorPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFloorPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerhasMovedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_playerhasMovedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDirectionHasChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_playerDirectionHasChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerForcedMovement_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_playerForcedMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFloorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorPlayerPawn_PlaceAndInitializieFloorPawn, "PlaceAndInitializieFloorPawn" }, // 1141595251
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FloorPlayerPawn.h" },
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerhasMovedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerhasMovedDelegate = { "playerhasMovedDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlayerPawn, playerhasMovedDelegate), Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerHasMoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerhasMovedDelegate_MetaData), Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerhasMovedDelegate_MetaData) }; // 3568876599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerDirectionHasChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerDirectionHasChanged = { "playerDirectionHasChanged", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlayerPawn, playerDirectionHasChanged), Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerDirectionHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerDirectionHasChanged_MetaData), Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerDirectionHasChanged_MetaData) }; // 1606833873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerForcedMovement_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerForcedMovement = { "playerForcedMovement", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlayerPawn, playerForcedMovement), Z_Construct_UDelegateFunction_DesentIntoAtlantis_PlayerForcedMovement__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerForcedMovement_MetaData), Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerForcedMovement_MetaData) }; // 22548682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerhasMovedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerDirectionHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlayerPawn_Statics::NewProp_playerForcedMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPlayerPawn_Statics::ClassParams = {
		&AFloorPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorPlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_AFloorPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPlayerPawn.OuterSingleton, Z_Construct_UClass_AFloorPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorPlayerPawn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorPlayerPawn>()
	{
		return AFloorPlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPlayerPawn);
	AFloorPlayerPawn::~AFloorPlayerPawn() {}
	void UFloorPawnPositionInfo::StaticRegisterNativesUFloorPawnPositionInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPawnPositionInfo);
	UClass* Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister()
	{
		return UFloorPawnPositionInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPawnPositionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPawnPositionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPawnPositionInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPawnPositionInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorPlayerPawn.h" },
		{ "ModuleRelativePath", "Public/FloorPlayerPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPawnPositionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPawnPositionInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPawnPositionInfo_Statics::ClassParams = {
		&UFloorPawnPositionInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPawnPositionInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorPawnPositionInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFloorPawnPositionInfo()
	{
		if (!Z_Registration_Info_UClass_UFloorPawnPositionInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPawnPositionInfo.OuterSingleton, Z_Construct_UClass_UFloorPawnPositionInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPawnPositionInfo.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorPawnPositionInfo>()
	{
		return UFloorPawnPositionInfo::StaticClass();
	}
	UFloorPawnPositionInfo::UFloorPawnPositionInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPawnPositionInfo);
	UFloorPawnPositionInfo::~UFloorPawnPositionInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPlayerPawn, AFloorPlayerPawn::StaticClass, TEXT("AFloorPlayerPawn"), &Z_Registration_Info_UClass_AFloorPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPlayerPawn), 391665827U) },
		{ Z_Construct_UClass_UFloorPawnPositionInfo, UFloorPawnPositionInfo::StaticClass, TEXT("UFloorPawnPositionInfo"), &Z_Registration_Info_UClass_UFloorPawnPositionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPawnPositionInfo), 414681644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPlayerPawn_h_3795667645(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
