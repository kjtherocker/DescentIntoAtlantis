// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/DeathView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDeathView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDeathView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UDeathView::StaticRegisterNativesUDeathView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeathView);
	UClass* Z_Construct_UClass_UDeathView_NoRegister()
	{
		return UDeathView::StaticClass();
	}
	struct Z_Construct_UClass_UDeathView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathView_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DeathView.h" },
		{ "ModuleRelativePath", "Public/DeathView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeathView_Statics::ClassParams = {
		&UDeathView::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeathView_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeathView_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDeathView()
	{
		if (!Z_Registration_Info_UClass_UDeathView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeathView.OuterSingleton, Z_Construct_UClass_UDeathView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeathView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UDeathView>()
	{
		return UDeathView::StaticClass();
	}
	UDeathView::UDeathView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathView);
	UDeathView::~UDeathView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_DeathView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_DeathView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeathView, UDeathView::StaticClass, TEXT("UDeathView"), &Z_Registration_Info_UClass_UDeathView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeathView), 481539937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_DeathView_h_754188830(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_DeathView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_DeathView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
