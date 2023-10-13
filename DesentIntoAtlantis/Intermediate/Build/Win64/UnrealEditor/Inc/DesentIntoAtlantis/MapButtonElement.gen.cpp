// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MapButtonElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapButtonElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics
	{
		struct MapButtonElement_eventOnMapButtonClicked_Parms
		{
			UMapButtonElement* mapButtonElement;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mapButtonElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mapButtonElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::NewProp_mapButtonElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::NewProp_mapButtonElement = { "mapButtonElement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapButtonElement_eventOnMapButtonClicked_Parms, mapButtonElement), Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::NewProp_mapButtonElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::NewProp_mapButtonElement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::NewProp_mapButtonElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapButtonElement, nullptr, "OnMapButtonClicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::MapButtonElement_eventOnMapButtonClicked_Parms), Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMapButtonElement::execActivateMapNodeEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMapNodeEditor();
		P_NATIVE_END;
	}
	void UMapButtonElement::StaticRegisterNativesUMapButtonElement()
	{
		UClass* Class = UMapButtonElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMapNodeEditor", &UMapButtonElement::execActivateMapNodeEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapButtonElement, nullptr, "ActivateMapNodeEditor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapButtonElement);
	UClass* Z_Construct_UClass_UMapButtonElement_NoRegister()
	{
		return UMapButtonElement::StaticClass();
	}
	struct Z_Construct_UClass_UMapButtonElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEventDataTableindex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_floorEventDataTableindex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentFloorEventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentFloorEventData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionInGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_positionInGrid;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentNodeDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNodeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentNodeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapButtonClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapButtonClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_GenerateButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_GenerateButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_MapIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_EventIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_EventIcon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcons_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MapIcons_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MapIcons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapIcons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapButtonElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapButtonElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapButtonElement_ActivateMapNodeEditor, "ActivateMapNodeEditor" }, // 1336806676
		{ &Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature, "OnMapButtonClicked__DelegateSignature" }, // 2226370011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MapButtonElement.h" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_floorEventDataTableindex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_floorEventDataTableindex = { "floorEventDataTableindex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, floorEventDataTableindex), METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_floorEventDataTableindex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_floorEventDataTableindex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_currentFloorEventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_currentFloorEventData = { "currentFloorEventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, currentFloorEventData), Z_Construct_UScriptStruct_FFloorEventData, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_currentFloorEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_currentFloorEventData_MetaData)) }; // 2380252017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_positionInGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_positionInGrid = { "positionInGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, positionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_positionInGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_positionInGrid_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection = { "CurrentNodeDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, CurrentNodeDirection), Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection_MetaData)) }; // 3248041013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_OnMapButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_OnMapButtonClicked = { "OnMapButtonClicked", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, OnMapButtonClicked), Z_Construct_UDelegateFunction_UMapButtonElement_OnMapButtonClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_OnMapButtonClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_OnMapButtonClicked_MetaData)) }; // 2226370011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton = { "BW_GenerateButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, BW_GenerateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon = { "BW_MapIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, BW_MapIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_EventIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_EventIcon = { "BW_EventIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, BW_EventIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_EventIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_EventIcon_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_ValueProp = { "MapIcons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp = { "MapIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(nullptr, 0) }; // 3248041013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons = { "MapIcons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, MapIcons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_MetaData)) }; // 3248041013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapButtonElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_floorEventDataTableindex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_currentFloorEventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_positionInGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_CurrentNodeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_OnMapButtonClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_EventIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapButtonElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapButtonElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapButtonElement_Statics::ClassParams = {
		&UMapButtonElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapButtonElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapButtonElement()
	{
		if (!Z_Registration_Info_UClass_UMapButtonElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapButtonElement.OuterSingleton, Z_Construct_UClass_UMapButtonElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapButtonElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMapButtonElement>()
	{
		return UMapButtonElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapButtonElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapButtonElement, UMapButtonElement::StaticClass, TEXT("UMapButtonElement"), &Z_Registration_Info_UClass_UMapButtonElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapButtonElement), 4050278375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_490790519(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
