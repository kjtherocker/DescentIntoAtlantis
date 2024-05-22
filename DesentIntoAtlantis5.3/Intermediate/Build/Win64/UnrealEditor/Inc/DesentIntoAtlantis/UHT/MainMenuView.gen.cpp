// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MainMenuView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMainMenuView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMainMenuView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UStatusMainMenuElement_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMainMenuStates;
	static UEnum* EMainMenuStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMainMenuStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMainMenuStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EMainMenuStates"));
		}
		return Z_Registration_Info_UEnum_EMainMenuStates.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EMainMenuStates>()
	{
		return EMainMenuStates_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::Enumerators[] = {
		{ "EMainMenuStates::None", (int64)EMainMenuStates::None },
		{ "EMainMenuStates::Item", (int64)EMainMenuStates::Item },
		{ "EMainMenuStates::Skills", (int64)EMainMenuStates::Skills },
		{ "EMainMenuStates::Class", (int64)EMainMenuStates::Class },
		{ "EMainMenuStates::Status", (int64)EMainMenuStates::Status },
		{ "EMainMenuStates::Option", (int64)EMainMenuStates::Option },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::Enum_MetaDataParams[] = {
		{ "Class.Comment", "/**\n * \n */" },
		{ "Class.Name", "EMainMenuStates::Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Item.Comment", "/**\n * \n */" },
		{ "Item.Name", "EMainMenuStates::Item" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Name", "EMainMenuStates::None" },
		{ "Option.Comment", "/**\n * \n */" },
		{ "Option.Name", "EMainMenuStates::Option" },
		{ "Skills.Comment", "/**\n * \n */" },
		{ "Skills.Name", "EMainMenuStates::Skills" },
		{ "Status.Comment", "/**\n * \n */" },
		{ "Status.Name", "EMainMenuStates::Status" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EMainMenuStates",
		"EMainMenuStates",
		Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates()
	{
		if (!Z_Registration_Info_UEnum_EMainMenuStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMainMenuStates.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMainMenuStates.InnerSingleton;
	}
	DEFINE_FUNCTION(UMainMenuView::execOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Option();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuView::execStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Status();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuView::execClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Class();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuView::execSkills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuView::execItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Item();
		P_NATIVE_END;
	}
	void UMainMenuView::StaticRegisterNativesUMainMenuView()
	{
		UClass* Class = UMainMenuView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Class", &UMainMenuView::execClass },
			{ "Item", &UMainMenuView::execItem },
			{ "Option", &UMainMenuView::execOption },
			{ "Skills", &UMainMenuView::execSkills },
			{ "Status", &UMainMenuView::execStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuView_Class_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuView_Class_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuView_Class_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuView, nullptr, "Class", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuView_Class_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuView_Class_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuView_Class()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuView_Class_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuView_Item_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuView_Item_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuView_Item_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuView, nullptr, "Item", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuView_Item_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuView_Item_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuView_Item()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuView_Item_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuView_Option_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuView_Option_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuView_Option_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuView, nullptr, "Option", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuView_Option_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuView_Option_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuView_Option()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuView_Option_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuView_Skills_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuView_Skills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuView_Skills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuView, nullptr, "Skills", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuView_Skills_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuView_Skills_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuView_Skills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuView_Skills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuView_Status_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuView_Status_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuView_Status_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuView, nullptr, "Status", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuView_Status_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuView_Status_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenuView_Status()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuView_Status_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuView);
	UClass* Z_Construct_UClass_UMainMenuView_NoRegister()
	{
		return UMainMenuView::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_statusMainMenuElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statusMainMenuElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_statusMainMenuElements;
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MainMenuSelection_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MainMenuSelection_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MainMenuSelection_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuSelection_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MainMenuSelection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_menuSelections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_menuSelections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_menuSelections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Skills_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Skills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Classes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Classes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Status_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Option_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Option;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_PartyHorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_PartyHorizontalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuView_Class, "Class" }, // 4161722822
		{ &Z_Construct_UFunction_UMainMenuView_Item, "Item" }, // 2840361810
		{ &Z_Construct_UFunction_UMainMenuView_Option, "Option" }, // 3622412801
		{ &Z_Construct_UFunction_UMainMenuView_Skills, "Skills" }, // 1543421393
		{ &Z_Construct_UFunction_UMainMenuView_Status, "Status" }, // 2571356718
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainMenuView.h" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements_Inner = { "statusMainMenuElements", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStatusMainMenuElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements = { "statusMainMenuElements", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, statusMainMenuElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements_MetaData) };
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_ValueProp = { "MainMenuSelection", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2159621065
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_Key_KeyProp = { "MainMenuSelection_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EMainMenuStates, METADATA_PARAMS(0, nullptr) }; // 3716113619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection = { "MainMenuSelection", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, MainMenuSelection), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_MetaData) }; // 3716113619 2159621065
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections_Inner = { "menuSelections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections = { "menuSelections", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, menuSelections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Item_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Item = { "BW_Item", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, BW_Item), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Item_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Item_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Skills_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Skills = { "BW_Skills", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, BW_Skills), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Skills_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Skills_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Classes_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Classes = { "BW_Classes", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, BW_Classes), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Classes_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Classes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Status_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Status = { "BW_Status", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, BW_Status), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Status_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Option_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Option = { "BW_Option", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, BW_Option), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Option_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Option_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_PartyHorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_PartyHorizontalBox = { "BW_PartyHorizontalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuView, BW_PartyHorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_PartyHorizontalBox_MetaData), Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_PartyHorizontalBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_statusMainMenuElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_MainMenuSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_menuSelections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Skills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Classes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuView_Statics::NewProp_BW_PartyHorizontalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuView_Statics::ClassParams = {
		&UMainMenuView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainMenuView()
	{
		if (!Z_Registration_Info_UClass_UMainMenuView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuView.OuterSingleton, Z_Construct_UClass_UMainMenuView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainMenuView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMainMenuView>()
	{
		return UMainMenuView::StaticClass();
	}
	UMainMenuView::UMainMenuView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuView);
	UMainMenuView::~UMainMenuView() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics::EnumInfo[] = {
		{ EMainMenuStates_StaticEnum, TEXT("EMainMenuStates"), &Z_Registration_Info_UEnum_EMainMenuStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3716113619U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuView, UMainMenuView::StaticClass, TEXT("UMainMenuView"), &Z_Registration_Info_UClass_UMainMenuView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuView), 128861696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_1936634339(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
