// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/DialogueView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UDialogueView::StaticRegisterNativesUDialogueView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueView);
	UClass* Z_Construct_UClass_UDialogueView_NoRegister()
	{
		return UDialogueView::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueView.h" },
		{ "ModuleRelativePath", "Public/DialogueView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueView_Statics::ClassParams = {
		&UDialogueView::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueView()
	{
		if (!Z_Registration_Info_UClass_UDialogueView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueView.OuterSingleton, Z_Construct_UClass_UDialogueView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UDialogueView>()
	{
		return UDialogueView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueView, UDialogueView::StaticClass, TEXT("UDialogueView"), &Z_Registration_Info_UClass_UDialogueView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueView), 157065226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueView_h_701326351(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
