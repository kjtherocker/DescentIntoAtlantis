// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/Floor_EnemyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloor_EnemyPawn() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void AFloor_EnemyPawn::StaticRegisterNativesAFloor_EnemyPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloor_EnemyPawn);
	UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister()
	{
		return AFloor_EnemyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFloor_EnemyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Testooo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Testooo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloor_EnemyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFloorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Floor_EnemyPawn.h" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo_MetaData[] = {
		{ "Category", "Floor_EnemyPawn" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo = { "Testooo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloor_EnemyPawn, Testooo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo_MetaData), Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloor_EnemyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloor_EnemyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::ClassParams = {
		&AFloor_EnemyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloor_EnemyPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloor_EnemyPawn()
	{
		if (!Z_Registration_Info_UClass_AFloor_EnemyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloor_EnemyPawn.OuterSingleton, Z_Construct_UClass_AFloor_EnemyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloor_EnemyPawn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloor_EnemyPawn>()
	{
		return AFloor_EnemyPawn::StaticClass();
	}
	AFloor_EnemyPawn::AFloor_EnemyPawn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloor_EnemyPawn);
	AFloor_EnemyPawn::~AFloor_EnemyPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloor_EnemyPawn, AFloor_EnemyPawn::StaticClass, TEXT("AFloor_EnemyPawn"), &Z_Registration_Info_UClass_AFloor_EnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloor_EnemyPawn), 734018392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_3655967722(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
