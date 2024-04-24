// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/GameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGameManager();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UGameManager::execResetPlayerToPreviousPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPlayerToPreviousPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameManager::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameManager::execSetUpTitleMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpTitleMenu();
		P_NATIVE_END;
	}
	void UGameManager::StaticRegisterNativesUGameManager()
	{
		UClass* Class = UGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetPlayerToPreviousPosition", &UGameManager::execResetPlayerToPreviousPosition },
			{ "SetUpTitleMenu", &UGameManager::execSetUpTitleMenu },
			{ "StartGame", &UGameManager::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "ResetPlayerToPreviousPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManager_SetUpTitleMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_SetUpTitleMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_SetUpTitleMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "SetUpTitleMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_SetUpTitleMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManager_SetUpTitleMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameManager_SetUpTitleMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManager_SetUpTitleMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManager_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManager_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameManager_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameManager_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameManager_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameManager);
	UClass* Z_Construct_UClass_UGameManager_NoRegister()
	{
		return UGameManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameManager_ResetPlayerToPreviousPosition, "ResetPlayerToPreviousPosition" }, // 3879396693
		{ &Z_Construct_UFunction_UGameManager_SetUpTitleMenu, "SetUpTitleMenu" }, // 2376473170
		{ &Z_Construct_UFunction_UGameManager_StartGame, "StartGame" }, // 169058647
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameManager, gameModeBase), Z_Construct_UClass_AAtlantisGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::NewProp_gameModeBase_MetaData), Z_Construct_UClass_UGameManager_Statics::NewProp_gameModeBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_gameModeBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameManager_Statics::ClassParams = {
		&UGameManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameManager()
	{
		if (!Z_Registration_Info_UClass_UGameManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameManager.OuterSingleton, Z_Construct_UClass_UGameManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGameManager>()
	{
		return UGameManager::StaticClass();
	}
	UGameManager::UGameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManager);
	UGameManager::~UGameManager() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_GameManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_GameManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameManager, UGameManager::StaticClass, TEXT("UGameManager"), &Z_Registration_Info_UClass_UGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameManager), 2437219572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_GameManager_h_2005958065(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_GameManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
