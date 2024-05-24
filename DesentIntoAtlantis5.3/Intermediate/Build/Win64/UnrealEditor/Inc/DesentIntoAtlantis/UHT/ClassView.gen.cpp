// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/ClassView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UClassView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UClassView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UClassView::StaticRegisterNativesUClassView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassView);
	UClass* Z_Construct_UClass_UClassView_NoRegister()
	{
		return UClassView::StaticClass();
	}
	struct Z_Construct_UClass_UClassView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassView_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ClassView.h" },
		{ "ModuleRelativePath", "Public/ClassView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassView_Statics::ClassParams = {
		&UClassView::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassView_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassView_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClassView()
	{
		if (!Z_Registration_Info_UClass_UClassView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassView.OuterSingleton, Z_Construct_UClass_UClassView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UClassView>()
	{
		return UClassView::StaticClass();
	}
	UClassView::UClassView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassView);
	UClassView::~UClassView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_ClassView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_ClassView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassView, UClassView::StaticClass, TEXT("UClassView"), &Z_Registration_Info_UClass_UClassView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassView), 3293766652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_ClassView_h_3496165650(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_ClassView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_ClassView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
