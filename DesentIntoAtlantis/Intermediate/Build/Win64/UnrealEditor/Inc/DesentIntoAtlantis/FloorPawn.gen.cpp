// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPawn() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void AFloorPawn::StaticRegisterNativesAFloorPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPawn);
	UClass* Z_Construct_UClass_AFloorPawn_NoRegister()
	{
		return AFloorPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFloorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FloorPawn.h" },
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPawn_Statics::ClassParams = {
		&AFloorPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorPawn()
	{
		if (!Z_Registration_Info_UClass_AFloorPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPawn.OuterSingleton, Z_Construct_UClass_AFloorPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorPawn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorPawn>()
	{
		return AFloorPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPawn);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPawn, AFloorPawn::StaticClass, TEXT("AFloorPawn"), &Z_Registration_Info_UClass_AFloorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPawn), 575934127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_3994416184(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS