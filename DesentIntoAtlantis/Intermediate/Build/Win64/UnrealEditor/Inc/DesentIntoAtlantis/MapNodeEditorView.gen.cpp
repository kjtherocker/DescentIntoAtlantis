// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MapNodeEditorView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapNodeEditorView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapNodeEditorView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapNodeEditorView();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapEventEditorView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapNodeEditorView::execChangeNodeDirection)
	{
		P_GET_OBJECT(UMapButtonElement,Z_Param_aMapNodeElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeNodeDirection(Z_Param_aMapNodeElement);
		P_NATIVE_END;
	}
	void UMapNodeEditorView::StaticRegisterNativesUMapNodeEditorView()
	{
		UClass* Class = UMapNodeEditorView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeNodeDirection", &UMapNodeEditorView::execChangeNodeDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics
	{
		struct MapNodeEditorView_eventChangeNodeDirection_Parms
		{
			UMapButtonElement* aMapNodeElement;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aMapNodeElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aMapNodeElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::NewProp_aMapNodeElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::NewProp_aMapNodeElement = { "aMapNodeElement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapNodeEditorView_eventChangeNodeDirection_Parms, aMapNodeElement), Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::NewProp_aMapNodeElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::NewProp_aMapNodeElement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::NewProp_aMapNodeElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/MapNodeEditorView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapNodeEditorView, nullptr, "ChangeNodeDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::MapNodeEditorView_eventChangeNodeDirection_Parms), Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapNodeEditorView);
	UClass* Z_Construct_UClass_UMapNodeEditorView_NoRegister()
	{
		return UMapNodeEditorView::StaticClass();
	}
	struct Z_Construct_UClass_UMapNodeEditorView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMapButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMapButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_MapNodePanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_MapNodePanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapButtonElement_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MapButtonElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_MapEventEditorView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_MapEventEditorView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapNodeEditorView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapNodeEditorView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapNodeEditorView_ChangeNodeDirection, "ChangeNodeDirection" }, // 2600342403
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapNodeEditorView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n/**\n * \n */" },
		{ "IncludePath", "MapNodeEditorView.h" },
		{ "ModuleRelativePath", "Public/MapNodeEditorView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_SelectedMapButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapNodeEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_SelectedMapButton = { "SelectedMapButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapNodeEditorView, SelectedMapButton), Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_SelectedMapButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_SelectedMapButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapNodePanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapNodeEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapNodeEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapNodePanel = { "BW_MapNodePanel", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapNodeEditorView, BW_MapNodePanel), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapNodePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapNodePanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_MapButtonElement_MetaData[] = {
		{ "Category", "MapNodeEditorView" },
		{ "ModuleRelativePath", "Public/MapNodeEditorView.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_MapButtonElement = { "MapButtonElement", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapNodeEditorView, MapButtonElement), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_MapButtonElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_MapButtonElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapEventEditorView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapNodeEditorView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapNodeEditorView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapEventEditorView = { "BW_MapEventEditorView", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapNodeEditorView, BW_MapEventEditorView), Z_Construct_UClass_UMapEventEditorView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapEventEditorView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapEventEditorView_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapNodeEditorView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_SelectedMapButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapNodePanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_MapButtonElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapNodeEditorView_Statics::NewProp_BW_MapEventEditorView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapNodeEditorView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapNodeEditorView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapNodeEditorView_Statics::ClassParams = {
		&UMapNodeEditorView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapNodeEditorView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapNodeEditorView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapNodeEditorView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapNodeEditorView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapNodeEditorView()
	{
		if (!Z_Registration_Info_UClass_UMapNodeEditorView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapNodeEditorView.OuterSingleton, Z_Construct_UClass_UMapNodeEditorView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapNodeEditorView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMapNodeEditorView>()
	{
		return UMapNodeEditorView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapNodeEditorView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapNodeEditorView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapNodeEditorView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapNodeEditorView, UMapNodeEditorView::StaticClass, TEXT("UMapNodeEditorView"), &Z_Registration_Info_UClass_UMapNodeEditorView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapNodeEditorView), 3918930741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapNodeEditorView_h_4015117957(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapNodeEditorView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapNodeEditorView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
