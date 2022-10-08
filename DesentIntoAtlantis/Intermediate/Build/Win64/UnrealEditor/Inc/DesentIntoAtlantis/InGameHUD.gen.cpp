// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/InGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHUD() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViews();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViewElements();
// End Cross Module References
	void AInGameHUD::StaticRegisterNativesAInGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGameHUD);
	UClass* Z_Construct_UClass_AInGameHUD_NoRegister()
	{
		return AInGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandBoardPrefab_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_commandBoardPrefab;
		static const UECodeGen_Private::FClassPropertyParams NewProp_userWidgets_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_userWidgets_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_userWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_userWidgets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_viewElements_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_viewElements_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_viewElements_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewElements_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_viewElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InGameHUD.h" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_commandBoardPrefab_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_commandBoardPrefab = { "commandBoardPrefab", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInGameHUD, commandBoardPrefab), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::NewProp_commandBoardPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_commandBoardPrefab_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_ValueProp = { "userWidgets", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_Key_KeyProp = { "userWidgets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EViews, METADATA_PARAMS(nullptr, 0) }; // 2443252154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets = { "userWidgets", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInGameHUD, userWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_MetaData)) }; // 2443252154
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_ValueProp = { "viewElements", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_Key_KeyProp = { "viewElements_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EViewElements, METADATA_PARAMS(nullptr, 0) }; // 3583364803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements = { "viewElements", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInGameHUD, viewElements), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_MetaData)) }; // 3583364803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_commandBoardPrefab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGameHUD_Statics::ClassParams = {
		&AInGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInGameHUD()
	{
		if (!Z_Registration_Info_UClass_AInGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGameHUD.OuterSingleton, Z_Construct_UClass_AInGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInGameHUD.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AInGameHUD>()
	{
		return AInGameHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameHUD);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInGameHUD, AInGameHUD::StaticClass, TEXT("AInGameHUD"), &Z_Registration_Info_UClass_AInGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameHUD), 1432657802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_InGameHUD_h_1124477882(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
