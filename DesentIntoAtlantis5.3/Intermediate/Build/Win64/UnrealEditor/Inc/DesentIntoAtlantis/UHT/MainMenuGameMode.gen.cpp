// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MainMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AMainMenuGameMode();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "StartGameDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_StartGameDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStartGameDelegate_DelegateWrapper(const FMulticastScriptDelegate& StartGameDelegate)
{
	StartGameDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMainMenuGameMode::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
	{
		UClass* Class = AMainMenuGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartGame", &AMainMenuGameMode::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainMenuGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainMenuGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuGameMode_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainMenuGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuGameMode);
	UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
	{
		return AMainMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAtlantisGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainMenuGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainMenuGameMode_StartGame, "StartGame" }, // 4247288867
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainMenuGameMode.h" },
		{ "ModuleRelativePath", "Public/MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
		&AMainMenuGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMainMenuGameMode()
	{
		if (!Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuGameMode.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AMainMenuGameMode>()
	{
		return AMainMenuGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
	AMainMenuGameMode::~AMainMenuGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuGameMode, AMainMenuGameMode::StaticClass, TEXT("AMainMenuGameMode"), &Z_Registration_Info_UClass_AMainMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuGameMode), 2299531330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuGameMode_h_3992197722(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
