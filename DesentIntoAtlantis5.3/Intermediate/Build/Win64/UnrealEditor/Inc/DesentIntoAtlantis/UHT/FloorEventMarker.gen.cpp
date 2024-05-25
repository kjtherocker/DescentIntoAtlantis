// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorEventMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorEventMarker() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorEventMarker();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorEventMarker_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void AFloorEventMarker::StaticRegisterNativesAFloorEventMarker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorEventMarker);
	UClass* Z_Construct_UClass_AFloorEventMarker_NoRegister()
	{
		return AFloorEventMarker::StaticClass();
	}
	struct Z_Construct_UClass_AFloorEventMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorEventMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorEventMarker_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorEventMarker_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FloorEventMarker.h" },
		{ "ModuleRelativePath", "Public/FloorEventMarker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorEventMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorEventMarker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorEventMarker_Statics::ClassParams = {
		&AFloorEventMarker::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorEventMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorEventMarker_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFloorEventMarker()
	{
		if (!Z_Registration_Info_UClass_AFloorEventMarker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorEventMarker.OuterSingleton, Z_Construct_UClass_AFloorEventMarker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorEventMarker.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorEventMarker>()
	{
		return AFloorEventMarker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorEventMarker);
	AFloorEventMarker::~AFloorEventMarker() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEventMarker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEventMarker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorEventMarker, AFloorEventMarker::StaticClass, TEXT("AFloorEventMarker"), &Z_Registration_Info_UClass_AFloorEventMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorEventMarker), 3819711433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEventMarker_h_2357690476(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEventMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEventMarker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
