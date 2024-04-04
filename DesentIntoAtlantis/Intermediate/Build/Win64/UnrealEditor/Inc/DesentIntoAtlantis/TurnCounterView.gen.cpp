// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/TurnCounterView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnCounterView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	void UTurnCounterView::StaticRegisterNativesUTurnCounterView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnCounterView);
	UClass* Z_Construct_UClass_UTurnCounterView_NoRegister()
	{
		return UTurnCounterView::StaticClass();
	}
	struct Z_Construct_UClass_UTurnCounterView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_HorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_HorizontalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnCounterView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TurnCounterView.h" },
		{ "ModuleRelativePath", "Public/TurnCounterView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterView_Statics::NewProp_BW_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurnCounterView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnCounterView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnCounterView_Statics::NewProp_BW_HorizontalBox = { "BW_HorizontalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurnCounterView, BW_HorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurnCounterView_Statics::NewProp_BW_HorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterView_Statics::NewProp_BW_HorizontalBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnCounterView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterView_Statics::NewProp_BW_HorizontalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnCounterView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnCounterView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnCounterView_Statics::ClassParams = {
		&UTurnCounterView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTurnCounterView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTurnCounterView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnCounterView()
	{
		if (!Z_Registration_Info_UClass_UTurnCounterView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnCounterView.OuterSingleton, Z_Construct_UClass_UTurnCounterView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnCounterView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UTurnCounterView>()
	{
		return UTurnCounterView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnCounterView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnCounterView, UTurnCounterView::StaticClass, TEXT("UTurnCounterView"), &Z_Registration_Info_UClass_UTurnCounterView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnCounterView), 577329464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterView_h_1449744212(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
