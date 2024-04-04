// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PersistentGameinstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentGameinstance() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadPreSetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPreSetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execUnloadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	void UPersistentGameinstance::StaticRegisterNativesUPersistentGameinstance()
	{
		UClass* Class = UPersistentGameinstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadLevel", &UPersistentGameinstance::execLoadLevel },
			{ "LoadPreSetLevel", &UPersistentGameinstance::execLoadPreSetLevel },
			{ "UnloadLevel", &UPersistentGameinstance::execUnloadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics
	{
		struct PersistentGameinstance_eventLoadLevel_Parms
		{
			FString aLevelName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_aLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadLevel_Parms, aLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PersistentGameinstance_eventLoadLevel_Parms), Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadPreSetLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics
	{
		struct PersistentGameinstance_eventUnloadLevel_Parms
		{
			FString aLevelName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_aLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PersistentGameinstance_eventUnloadLevel_Parms, aLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "UnloadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PersistentGameinstance_eventUnloadLevel_Parms), Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentGameinstance);
	UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister()
	{
		return UPersistentGameinstance::StaticClass();
	}
	struct Z_Construct_UClass_UPersistentGameinstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersistentGameinstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPersistentGameinstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadLevel, "LoadLevel" }, // 1981422177
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel, "LoadPreSetLevel" }, // 1560762952
		{ &Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel, "UnloadLevel" }, // 2066795290
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PersistentGameinstance.h" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersistentGameinstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersistentGameinstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentGameinstance_Statics::ClassParams = {
		&UPersistentGameinstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersistentGameinstance()
	{
		if (!Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton, Z_Construct_UClass_UPersistentGameinstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPersistentGameinstance>()
	{
		return UPersistentGameinstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentGameinstance);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentGameinstance, UPersistentGameinstance::StaticClass, TEXT("UPersistentGameinstance"), &Z_Registration_Info_UClass_UPersistentGameinstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentGameinstance), 160284810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_1690106080(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
