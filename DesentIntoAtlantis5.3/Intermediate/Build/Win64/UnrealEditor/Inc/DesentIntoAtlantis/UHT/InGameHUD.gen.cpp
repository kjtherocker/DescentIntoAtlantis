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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViewElements();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViews();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_persistentViewStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_persistentViewStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_persistentViewStack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_activeViewStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_activeViewStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_activeViewStack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inactiveViewStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inactiveViewStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inactiveViewStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
		static const UECodeGen_Private::FClassPropertyParams NewProp_userWidgets_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_userWidgets_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_userWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_userWidgets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_viewElements_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_viewElements_Key_KeyProp_Underlying;
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InGameHUD.h" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack_Inner = { "persistentViewStack", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack = { "persistentViewStack", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameHUD, persistentViewStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack_MetaData), Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack_Inner = { "activeViewStack", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack = { "activeViewStack", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameHUD, activeViewStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack_MetaData), Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack_Inner = { "inactiveViewStack", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack = { "inactiveViewStack", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameHUD, inactiveViewStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack_MetaData), Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameHUD, gameModeBase), Z_Construct_UClass_AAtlantisGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_gameModeBase_MetaData), Z_Construct_UClass_AInGameHUD_Statics::NewProp_gameModeBase_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_ValueProp = { "userWidgets", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_Key_KeyProp = { "userWidgets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EViews, METADATA_PARAMS(0, nullptr) }; // 142043138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets = { "userWidgets", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameHUD, userWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_MetaData), Z_Construct_UClass_AInGameHUD_Statics::NewProp_userWidgets_MetaData) }; // 142043138
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_ValueProp = { "viewElements", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_Key_KeyProp = { "viewElements_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EViewElements, METADATA_PARAMS(0, nullptr) }; // 2950317272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements = { "viewElements", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameHUD, viewElements), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_MetaData), Z_Construct_UClass_AInGameHUD_Statics::NewProp_viewElements_MetaData) }; // 2950317272
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_persistentViewStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_activeViewStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_inactiveViewStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_gameModeBase,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::PropPointers) < 2048);
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
	AInGameHUD::AInGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameHUD);
	AInGameHUD::~AInGameHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInGameHUD, AInGameHUD::StaticClass, TEXT("AInGameHUD"), &Z_Registration_Info_UClass_AInGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameHUD), 1212215269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InGameHUD_h_3181058491(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_InGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
