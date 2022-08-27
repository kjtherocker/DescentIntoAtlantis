// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesentIntoAtlantisGameModeBase() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void ADesentIntoAtlantisGameModeBase::StaticRegisterNativesADesentIntoAtlantisGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADesentIntoAtlantisGameModeBase);
	UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister()
	{
		return ADesentIntoAtlantisGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DesentIntoAtlantisGameModeBase.h" },
		{ "ModuleRelativePath", "DesentIntoAtlantisGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesentIntoAtlantisGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::ClassParams = {
		&ADesentIntoAtlantisGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase.OuterSingleton, Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ADesentIntoAtlantisGameModeBase>()
	{
		return ADesentIntoAtlantisGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesentIntoAtlantisGameModeBase);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADesentIntoAtlantisGameModeBase, ADesentIntoAtlantisGameModeBase::StaticClass, TEXT("ADesentIntoAtlantisGameModeBase"), &Z_Registration_Info_UClass_ADesentIntoAtlantisGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADesentIntoAtlantisGameModeBase), 2091857817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_1970241896(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_DesentIntoAtlantisGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
