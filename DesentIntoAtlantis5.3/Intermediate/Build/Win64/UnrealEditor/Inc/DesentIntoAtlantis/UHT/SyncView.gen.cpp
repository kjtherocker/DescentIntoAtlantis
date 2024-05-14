// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SyncView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USyncView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USyncView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void USyncView::StaticRegisterNativesUSyncView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USyncView);
	UClass* Z_Construct_UClass_USyncView_NoRegister()
	{
		return USyncView::StaticClass();
	}
	struct Z_Construct_UClass_USyncView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USyncView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USyncView_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USyncView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SyncView.h" },
		{ "ModuleRelativePath", "Public/SyncView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USyncView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USyncView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USyncView_Statics::ClassParams = {
		&USyncView::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USyncView_Statics::Class_MetaDataParams), Z_Construct_UClass_USyncView_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USyncView()
	{
		if (!Z_Registration_Info_UClass_USyncView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USyncView.OuterSingleton, Z_Construct_UClass_USyncView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USyncView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USyncView>()
	{
		return USyncView::StaticClass();
	}
	USyncView::USyncView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USyncView);
	USyncView::~USyncView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SyncView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SyncView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USyncView, USyncView::StaticClass, TEXT("USyncView"), &Z_Registration_Info_UClass_USyncView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USyncView), 861822550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SyncView_h_2322316742(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SyncView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SyncView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
