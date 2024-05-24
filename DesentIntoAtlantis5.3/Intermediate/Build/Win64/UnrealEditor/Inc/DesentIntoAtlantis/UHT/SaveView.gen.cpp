// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(USaveView::execActivateMenuSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMenuSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveView::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void USaveView::StaticRegisterNativesUSaveView()
	{
		UClass* Class = USaveView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMenuSelection", &USaveView::execActivateMenuSelection },
			{ "SaveGame", &USaveView::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveView_ActivateMenuSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveView_ActivateMenuSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveView_ActivateMenuSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveView, nullptr, "ActivateMenuSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveView_ActivateMenuSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveView_ActivateMenuSelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USaveView_ActivateMenuSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveView_ActivateMenuSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveView_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveView_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveView_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveView, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveView_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveView_SaveGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USaveView_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveView_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveView);
	UClass* Z_Construct_UClass_USaveView_NoRegister()
	{
		return USaveView::StaticClass();
	}
	struct Z_Construct_UClass_USaveView_Statics
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
	UObject* (*const Z_Construct_UClass_USaveView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidgetMovingButtons,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveView_ActivateMenuSelection, "ActivateMenuSelection" }, // 508055155
		{ &Z_Construct_UFunction_USaveView_SaveGame, "SaveGame" }, // 3094473248
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveView.h" },
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas_Inner = { "SaveGameDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USaveGameData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas = { "SaveGameDatas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveView, SaveGameDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas_MetaData), Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveView_Statics::NewProp_SaveManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveView_Statics::NewProp_SaveManagerSubsystem = { "SaveManagerSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveView, SaveManagerSubsystem), Z_Construct_UClass_USaveManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::NewProp_SaveManagerSubsystem_MetaData), Z_Construct_UClass_USaveView_Statics::NewProp_SaveManagerSubsystem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots_Inner = { "SaveSlots", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USaveSlotElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots = { "SaveSlots", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveView, SaveSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots_MetaData), Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveView_Statics::NewProp_BW_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SaveView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveView_Statics::NewProp_BW_VerticalBox = { "BW_VerticalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveView, BW_VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::NewProp_BW_VerticalBox_MetaData), Z_Construct_UClass_USaveView_Statics::NewProp_BW_VerticalBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveView_Statics::NewProp_SaveGameDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveView_Statics::NewProp_SaveManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveView_Statics::NewProp_SaveSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveView_Statics::NewProp_BW_VerticalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveView_Statics::ClassParams = {
		&USaveView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveView()
	{
		if (!Z_Registration_Info_UClass_USaveView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveView.OuterSingleton, Z_Construct_UClass_USaveView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USaveView>()
	{
		return USaveView::StaticClass();
	}
	USaveView::USaveView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveView);
	USaveView::~USaveView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveView, USaveView::StaticClass, TEXT("USaveView"), &Z_Registration_Info_UClass_USaveView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveView), 3917849305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveView_h_55494147(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
