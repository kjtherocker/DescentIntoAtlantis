// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/OptionView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidgetMovingButtons();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UOptionView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UOptionView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(UOptionView::execExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Exit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionView::execSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionView::execSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionView::execLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load();
		P_NATIVE_END;
	}
	void UOptionView::StaticRegisterNativesUOptionView()
	{
		UClass* Class = UOptionView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Exit", &UOptionView::execExit },
			{ "Load", &UOptionView::execLoad },
			{ "Save", &UOptionView::execSave },
			{ "Setting", &UOptionView::execSetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptionView_Exit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionView_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionView_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionView, nullptr, "Exit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionView_Exit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionView_Exit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOptionView_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionView_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionView_Load_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionView_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionView_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionView, nullptr, "Load", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionView_Load_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionView_Load_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOptionView_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionView_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionView_Save_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionView_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionView_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionView, nullptr, "Save", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionView_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionView_Save_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOptionView_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionView_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionView_Setting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionView_Setting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionView_Setting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionView, nullptr, "Setting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionView_Setting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionView_Setting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOptionView_Setting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionView_Setting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionView);
	UClass* Z_Construct_UClass_UOptionView_NoRegister()
	{
		return UOptionView::StaticClass();
	}
	struct Z_Construct_UClass_UOptionView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Load_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Load;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Save_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Save;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Setting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Setting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Exit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Exit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptionView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidgetMovingButtons,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptionView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionView_Exit, "Exit" }, // 272063708
		{ &Z_Construct_UFunction_UOptionView_Load, "Load" }, // 715669854
		{ &Z_Construct_UFunction_UOptionView_Save, "Save" }, // 2499815622
		{ &Z_Construct_UFunction_UOptionView_Setting, "Setting" }, // 1980624182
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionView_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OptionView.h" },
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Load_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Load = { "BW_Load", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionView, BW_Load), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Load_MetaData), Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Load_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Save_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Save = { "BW_Save", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionView, BW_Save), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Save_MetaData), Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Save_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Setting_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Setting = { "BW_Setting", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionView, BW_Setting), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Setting_MetaData), Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Setting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Exit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OptionView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Exit = { "BW_Exit", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionView, BW_Exit), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Exit_MetaData), Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Exit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Load,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Save,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Setting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionView_Statics::NewProp_BW_Exit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptionView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionView_Statics::ClassParams = {
		&UOptionView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptionView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptionView()
	{
		if (!Z_Registration_Info_UClass_UOptionView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionView.OuterSingleton, Z_Construct_UClass_UOptionView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptionView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UOptionView>()
	{
		return UOptionView::StaticClass();
	}
	UOptionView::UOptionView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionView);
	UOptionView::~UOptionView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_OptionView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_OptionView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptionView, UOptionView::StaticClass, TEXT("UOptionView"), &Z_Registration_Info_UClass_UOptionView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionView), 537546294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_OptionView_h_1120119726(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_OptionView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_OptionView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
