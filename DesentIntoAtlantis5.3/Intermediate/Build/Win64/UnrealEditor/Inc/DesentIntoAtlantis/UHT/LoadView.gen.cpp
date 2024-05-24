// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/LoadView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULoadView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULoadView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(ULoadView::execActivateMenuSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMenuSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadView::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	void ULoadView::StaticRegisterNativesULoadView()
	{
		UClass* Class = ULoadView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMenuSelection", &ULoadView::execActivateMenuSelection },
			{ "LoadGame", &ULoadView::execLoadGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadView_ActivateMenuSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadView_ActivateMenuSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadView_ActivateMenuSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadView, nullptr, "ActivateMenuSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadView_ActivateMenuSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadView_ActivateMenuSelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULoadView_ActivateMenuSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadView_ActivateMenuSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadView_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadView_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadView_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadView, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadView_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadView_LoadGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULoadView_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadView_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadView);
	UClass* Z_Construct_UClass_ULoadView_NoRegister()
	{
		return ULoadView::StaticClass();
	}
	struct Z_Construct_UClass_ULoadView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveGameDatas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveManagerSubsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_VerticalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_VerticalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidgetMovingButtons,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadView_ActivateMenuSelection, "ActivateMenuSelection" }, // 2404841357
		{ &Z_Construct_UFunction_ULoadView_LoadGame, "LoadGame" }, // 1619580462
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LoadView.h" },
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas_Inner = { "SaveGameDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USaveGameData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas = { "SaveGameDatas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadView, SaveGameDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas_MetaData), Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadView_Statics::NewProp_SaveManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadView_Statics::NewProp_SaveManagerSubsystem = { "SaveManagerSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadView, SaveManagerSubsystem), Z_Construct_UClass_USaveManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::NewProp_SaveManagerSubsystem_MetaData), Z_Construct_UClass_ULoadView_Statics::NewProp_SaveManagerSubsystem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots_Inner = { "SaveSlots", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USaveSlotElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots = { "SaveSlots", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadView, SaveSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots_MetaData), Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadView_Statics::NewProp_BW_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoadView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadView_Statics::NewProp_BW_VerticalBox = { "BW_VerticalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadView, BW_VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::NewProp_BW_VerticalBox_MetaData), Z_Construct_UClass_ULoadView_Statics::NewProp_BW_VerticalBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadView_Statics::NewProp_SaveGameDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadView_Statics::NewProp_SaveManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadView_Statics::NewProp_SaveSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadView_Statics::NewProp_BW_VerticalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadView_Statics::ClassParams = {
		&ULoadView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULoadView()
	{
		if (!Z_Registration_Info_UClass_ULoadView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadView.OuterSingleton, Z_Construct_UClass_ULoadView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ULoadView>()
	{
		return ULoadView::StaticClass();
	}
	ULoadView::ULoadView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadView);
	ULoadView::~ULoadView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LoadView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LoadView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadView, ULoadView::StaticClass, TEXT("ULoadView"), &Z_Registration_Info_UClass_ULoadView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadView), 3407737382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LoadView_h_810827312(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LoadView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_LoadView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
