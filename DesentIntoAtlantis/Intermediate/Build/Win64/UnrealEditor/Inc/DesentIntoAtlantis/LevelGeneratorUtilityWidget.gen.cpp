// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/LevelGeneratorUtilityWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelGeneratorUtilityWidget() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxKey_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
// End Cross Module References
	DEFINE_FUNCTION(ULevelGeneratorUtilityWidget::execGenerateLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateLevel();
		P_NATIVE_END;
	}
	void ULevelGeneratorUtilityWidget::StaticRegisterNativesULevelGeneratorUtilityWidget()
	{
		UClass* Class = ULevelGeneratorUtilityWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateLevel", &ULevelGeneratorUtilityWidget::execGenerateLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyEditorUtility" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelGeneratorUtilityWidget, nullptr, "GenerateLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelGeneratorUtilityWidget);
	UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget_NoRegister()
	{
		return ULevelGeneratorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_GenerateButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_GenerateButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_MapButtonElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_MapButtonElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_TitleText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_TitleText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_ComboBoxKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_ComboBoxKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTables_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTables_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelGeneratorUtilityWidget_GenerateLevel, "GenerateLevel" }, // 4039593843
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LevelGeneratorUtilityWidget.h" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton = { "BW_GenerateButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_GenerateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapButtonElement_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapButtonElement = { "BW_MapButtonElement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_MapButtonElement), Z_Construct_UClass_UMapButtonElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapButtonElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapButtonElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText = { "BW_TitleText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_ComboBoxKey_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LevelGeneratorUtilityWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_ComboBoxKey = { "BW_ComboBoxKey", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, BW_ComboBoxKey), Z_Construct_UClass_UComboBoxKey_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_ComboBoxKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_ComboBoxKey_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_ValueProp = { "dataTables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp = { "dataTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, METADATA_PARAMS(nullptr, 0) }; // 3523004561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/LevelGeneratorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables = { "dataTables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelGeneratorUtilityWidget, dataTables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_MetaData)) }; // 3523004561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_GenerateButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_MapButtonElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_TitleText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_BW_ComboBoxKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::NewProp_dataTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelGeneratorUtilityWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::ClassParams = {
		&ULevelGeneratorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelGeneratorUtilityWidget()
	{
		if (!Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget.OuterSingleton, Z_Construct_UClass_ULevelGeneratorUtilityWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ULevelGeneratorUtilityWidget>()
	{
		return ULevelGeneratorUtilityWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelGeneratorUtilityWidget);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelGeneratorUtilityWidget, ULevelGeneratorUtilityWidget::StaticClass, TEXT("ULevelGeneratorUtilityWidget"), &Z_Registration_Info_UClass_ULevelGeneratorUtilityWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelGeneratorUtilityWidget), 2198139825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_1206317502(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_LevelGeneratorUtilityWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
