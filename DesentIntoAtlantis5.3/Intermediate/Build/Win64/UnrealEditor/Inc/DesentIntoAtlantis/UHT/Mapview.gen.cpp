// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MapView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapPlayerIconElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapView_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UMapView::execSetPlayerRotation)
	{
		P_GET_ENUM(ECardinalNodeDirections,Z_Param_aPlayerFacingDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerRotation(ECardinalNodeDirections(Z_Param_aPlayerFacingDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapView::execSetPlayerPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_aColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerPosition(Z_Param_aRow,Z_Param_aColumn);
		P_NATIVE_END;
	}
	void UMapView::StaticRegisterNativesUMapView()
	{
		UClass* Class = UMapView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerPosition", &UMapView::execSetPlayerPosition },
			{ "SetPlayerRotation", &UMapView::execSetPlayerRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics
	{
		struct MapView_eventSetPlayerPosition_Parms
		{
			int32 aRow;
			int32 aColumn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aRow;
		static const UECodeGen_Private::FIntPropertyParams NewProp_aColumn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::NewProp_aRow = { "aRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapView_eventSetPlayerPosition_Parms, aRow), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::NewProp_aColumn = { "aColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapView_eventSetPlayerPosition_Parms, aColumn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::NewProp_aRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::NewProp_aColumn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapView, nullptr, "SetPlayerPosition", nullptr, nullptr, Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::MapView_eventSetPlayerPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::MapView_eventSetPlayerPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMapView_SetPlayerPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapView_SetPlayerPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics
	{
		struct MapView_eventSetPlayerRotation_Parms
		{
			ECardinalNodeDirections aPlayerFacingDirection;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aPlayerFacingDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aPlayerFacingDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::NewProp_aPlayerFacingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::NewProp_aPlayerFacingDirection = { "aPlayerFacingDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapView_eventSetPlayerRotation_Parms, aPlayerFacingDirection), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::NewProp_aPlayerFacingDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::NewProp_aPlayerFacingDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapView, nullptr, "SetPlayerRotation", nullptr, nullptr, Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::MapView_eventSetPlayerRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::MapView_eventSetPlayerRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMapView_SetPlayerRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapView_SetPlayerRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapView);
	UClass* Z_Construct_UClass_UMapView_NoRegister()
	{
		return UMapView::StaticClass();
	}
	struct Z_Construct_UClass_UMapView_Statics
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_FloorIdentifier_Underlying;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_UniformGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_UniformGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_UniformGrid2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_UniformGrid2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mapPlayerIconElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mapPlayerIconElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapButtonElement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MapButtonElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_MapPlayerIconElement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_MapPlayerIconElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapView_SetPlayerPosition, "SetPlayerPosition" }, // 3732736541
		{ &Z_Construct_UFunction_UMapView_SetPlayerRotation, "SetPlayerRotation" }, // 2252854236
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MapView.h" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_CurrentFloor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_CurrentFloor = { "CurrentFloor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, CurrentFloor), Z_Construct_UClass_UFloorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_CurrentFloor_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_CurrentFloor_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier = { "FloorIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, FloorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier_MetaData) }; // 1497107215
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons_Inner = { "MapButtons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons = { "MapButtons", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, MapButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid = { "BW_UniformGrid", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, BW_UniformGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid2 = { "BW_UniformGrid2", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, BW_UniformGrid2), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid2_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_mapPlayerIconElement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_mapPlayerIconElement = { "mapPlayerIconElement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, mapPlayerIconElement), Z_Construct_UClass_UMapPlayerIconElement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_mapPlayerIconElement_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_mapPlayerIconElement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_MapButtonElement_MetaData[] = {
		{ "Category", "MapView" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_MapButtonElement = { "MapButtonElement", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, MapButtonElement), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_MapButtonElement_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_MapButtonElement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapView_Statics::NewProp_BP_MapPlayerIconElement_MetaData[] = {
		{ "Category", "MapView" },
		{ "ModuleRelativePath", "Public/MapView.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMapView_Statics::NewProp_BP_MapPlayerIconElement = { "BP_MapPlayerIconElement", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapView, BP_MapPlayerIconElement), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::NewProp_BP_MapPlayerIconElement_MetaData), Z_Construct_UClass_UMapView_Statics::NewProp_BP_MapPlayerIconElement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_CurrentFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_FloorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_MapButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_BW_UniformGrid2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_mapPlayerIconElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_MapButtonElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapView_Statics::NewProp_BP_MapPlayerIconElement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapView_Statics::ClassParams = {
		&UMapView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMapView()
	{
		if (!Z_Registration_Info_UClass_UMapView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapView.OuterSingleton, Z_Construct_UClass_UMapView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMapView>()
	{
		return UMapView::StaticClass();
	}
	UMapView::UMapView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapView);
	UMapView::~UMapView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapView, UMapView::StaticClass, TEXT("UMapView"), &Z_Registration_Info_UClass_UMapView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapView), 2914571270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapView_h_3869646920(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
