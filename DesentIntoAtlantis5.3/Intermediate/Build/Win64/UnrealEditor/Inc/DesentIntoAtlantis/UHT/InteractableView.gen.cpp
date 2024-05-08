// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/InteractableView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UInteractableView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UInteractableView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UInteractableView::StaticRegisterNativesUInteractableView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableView);
	UClass* Z_Construct_UClass_UInteractableView_NoRegister()
	{
		return UInteractableView::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInteractiveViewActive_MetaData[];
#endif
		static void NewProp_isInteractiveViewActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInteractiveViewActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_InteractPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_InteractPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableView_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractableView.h" },
		{ "ModuleRelativePath", "Public/InteractableView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractableView.h" },
	};
#endif
	void Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive_SetBit(void* Obj)
	{
		((UInteractableView*)Obj)->isInteractiveViewActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive = { "isInteractiveViewActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractableView), &Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive_MetaData), Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableView_Statics::NewProp_BW_InteractPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InteractableView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractableView_Statics::NewProp_BW_InteractPanel = { "BW_InteractPanel", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableView, BW_InteractPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableView_Statics::NewProp_BW_InteractPanel_MetaData), Z_Construct_UClass_UInteractableView_Statics::NewProp_BW_InteractPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableView_Statics::NewProp_isInteractiveViewActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableView_Statics::NewProp_BW_InteractPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableView_Statics::ClassParams = {
		&UInteractableView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractableView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableView_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractableView()
	{
		if (!Z_Registration_Info_UClass_UInteractableView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableView.OuterSingleton, Z_Construct_UClass_UInteractableView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UInteractableView>()
	{
		return UInteractableView::StaticClass();
	}
	UInteractableView::UInteractableView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableView);
	UInteractableView::~UInteractableView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InteractableView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InteractableView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableView, UInteractableView::StaticClass, TEXT("UInteractableView"), &Z_Registration_Info_UClass_UInteractableView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableView), 2355317323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InteractableView_h_2747805655(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InteractableView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InteractableView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
