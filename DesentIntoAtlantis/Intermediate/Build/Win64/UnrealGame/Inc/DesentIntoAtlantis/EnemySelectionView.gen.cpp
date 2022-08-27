// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemySelectionView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySelectionView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemySelectionView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemySelectionView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UEnemySelectionView::StaticRegisterNativesUEnemySelectionView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemySelectionView);
	UClass* Z_Construct_UClass_UEnemySelectionView_NoRegister()
	{
		return UEnemySelectionView::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySelectionView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySelectionView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySelectionView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemySelectionView.h" },
		{ "ModuleRelativePath", "Public/EnemySelectionView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySelectionView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySelectionView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemySelectionView_Statics::ClassParams = {
		&UEnemySelectionView::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnemySelectionView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySelectionView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemySelectionView()
	{
		if (!Z_Registration_Info_UClass_UEnemySelectionView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemySelectionView.OuterSingleton, Z_Construct_UClass_UEnemySelectionView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemySelectionView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemySelectionView>()
	{
		return UEnemySelectionView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySelectionView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemySelectionView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemySelectionView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemySelectionView, UEnemySelectionView::StaticClass, TEXT("UEnemySelectionView"), &Z_Registration_Info_UClass_UEnemySelectionView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemySelectionView), 3155674093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemySelectionView_h_1378812078(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemySelectionView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemySelectionView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
