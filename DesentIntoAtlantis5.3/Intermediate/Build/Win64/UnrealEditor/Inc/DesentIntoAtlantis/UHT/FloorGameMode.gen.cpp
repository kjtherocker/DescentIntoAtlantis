// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorGameMode() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorGameMode();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(AFloorGameMode::execInitializeLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeLevel();
		P_NATIVE_END;
	}
	void AFloorGameMode::StaticRegisterNativesAFloorGameMode()
	{
		UClass* Class = AFloorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeLevel", &AFloorGameMode::execInitializeLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorGameMode_InitializeLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorGameMode_InitializeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorGameMode_InitializeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorGameMode, nullptr, "InitializeLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorGameMode_InitializeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorGameMode_InitializeLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFloorGameMode_InitializeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorGameMode_InitializeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorGameMode);
	UClass* Z_Construct_UClass_AFloorGameMode_NoRegister()
	{
		return AFloorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFloorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAtlantisGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorGameMode_InitializeLevel, "InitializeLevel" }, // 2556100572
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FloorGameMode.h" },
		{ "ModuleRelativePath", "FloorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorGameMode_Statics::ClassParams = {
		&AFloorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFloorGameMode()
	{
		if (!Z_Registration_Info_UClass_AFloorGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorGameMode.OuterSingleton, Z_Construct_UClass_AFloorGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorGameMode.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorGameMode>()
	{
		return AFloorGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorGameMode);
	AFloorGameMode::~AFloorGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorGameMode, AFloorGameMode::StaticClass, TEXT("AFloorGameMode"), &Z_Registration_Info_UClass_AFloorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorGameMode), 315901910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorGameMode_h_3925884150(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
