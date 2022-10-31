// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/TitleView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleView() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTitleView_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTitleView();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETitleStates;
	static UEnum* ETitleStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETitleStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETitleStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ETitleStates"));
		}
		return Z_Registration_Info_UEnum_ETitleStates.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETitleStates>()
	{
		return ETitleStates_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::Enumerators[] = {
		{ "ETitleStates::Start", (int64)ETitleStates::Start },
		{ "ETitleStates::Exit", (int64)ETitleStates::Exit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "Exit.Comment", "/**\n * \n */" },
		{ "Exit.Name", "ETitleStates::Exit" },
		{ "ModuleRelativePath", "Public/TitleView.h" },
		{ "Start.Comment", "/**\n * \n */" },
		{ "Start.Name", "ETitleStates::Start" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ETitleStates",
		"ETitleStates",
		Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates()
	{
		if (!Z_Registration_Info_UEnum_ETitleStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETitleStates.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETitleStates.InnerSingleton;
	}
	DEFINE_FUNCTION(UTitleView::execExitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTitleView::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	void UTitleView::StaticRegisterNativesUTitleView()
	{
		UClass* Class = UTitleView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitGame", &UTitleView::execExitGame },
			{ "StartGame", &UTitleView::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTitleView_ExitGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitleView_ExitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleView_ExitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleView, nullptr, "ExitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitleView_ExitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleView_ExitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitleView_ExitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleView_ExitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTitleView_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitleView_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleView_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleView, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitleView_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleView_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitleView_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleView_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitleView);
	UClass* Z_Construct_UClass_UTitleView_NoRegister()
	{
		return UTitleView::StaticClass();
	}
	struct Z_Construct_UClass_UTitleView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_commandboardSelections_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_commandboardSelections_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_commandboardSelections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandboardSelections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_commandboardSelections;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_titleSelections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_titleSelections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_titleSelections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_StartGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_StartGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Exit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Exit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTitleView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTitleView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleView_ExitGame, "ExitGame" }, // 3529397680
		{ &Z_Construct_UFunction_UTitleView_StartGame, "StartGame" }, // 4155036162
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TitleView.h" },
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_ValueProp = { "commandboardSelections", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ViewSelection__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 59533382
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_Key_KeyProp = { "commandboardSelections_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ETitleStates, METADATA_PARAMS(nullptr, 0) }; // 184536045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_MetaData[] = {
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections = { "commandboardSelections", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleView, commandboardSelections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_MetaData)) }; // 184536045 59533382
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections_Inner = { "titleSelections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections = { "titleSelections", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleView, titleSelections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleView_Statics::NewProp_BW_StartGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_BW_StartGame = { "BW_StartGame", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleView, BW_StartGame), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleView_Statics::NewProp_BW_StartGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleView_Statics::NewProp_BW_StartGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitleView_Statics::NewProp_BW_Exit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TitleView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleView_Statics::NewProp_BW_Exit = { "BW_Exit", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitleView, BW_Exit), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitleView_Statics::NewProp_BW_Exit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleView_Statics::NewProp_BW_Exit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_commandboardSelections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_titleSelections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_BW_StartGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleView_Statics::NewProp_BW_Exit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTitleView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleView_Statics::ClassParams = {
		&UTitleView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTitleView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTitleView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTitleView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTitleView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTitleView()
	{
		if (!Z_Registration_Info_UClass_UTitleView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleView.OuterSingleton, Z_Construct_UClass_UTitleView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTitleView.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UTitleView>()
	{
		return UTitleView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleView);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics::EnumInfo[] = {
		{ ETitleStates_StaticEnum, TEXT("ETitleStates"), &Z_Registration_Info_UEnum_ETitleStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 184536045U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTitleView, UTitleView::StaticClass, TEXT("UTitleView"), &Z_Registration_Info_UClass_UTitleView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleView), 3722439528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_2260074922(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
