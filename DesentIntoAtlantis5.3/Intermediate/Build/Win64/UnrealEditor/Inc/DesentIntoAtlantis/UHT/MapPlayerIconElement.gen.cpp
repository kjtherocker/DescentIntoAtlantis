// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MapPlayerIconElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapPlayerIconElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapPlayerIconElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapPlayerIconElement_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UMapPlayerIconElement::StaticRegisterNativesUMapPlayerIconElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapPlayerIconElement);
	UClass* Z_Construct_UClass_UMapPlayerIconElement_NoRegister()
	{
		return UMapPlayerIconElement::StaticClass();
	}
	struct Z_Construct_UClass_UMapPlayerIconElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerIcons_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerIcons_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_playerIcons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerIcons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_playerIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_PlayerIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_PlayerIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapPlayerIconElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPlayerIconElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapPlayerIconElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MapPlayerIconElement.h" },
		{ "ModuleRelativePath", "Public/MapPlayerIconElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_ValueProp = { "playerIcons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_Key_KeyProp = { "playerIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapPlayerIconElement" },
		{ "ModuleRelativePath", "Public/MapPlayerIconElement.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons = { "playerIcons", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapPlayerIconElement, playerIcons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_MetaData), Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_MetaData) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_BW_PlayerIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapPlayerIconElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapPlayerIconElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_BW_PlayerIcon = { "BW_PlayerIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapPlayerIconElement, BW_PlayerIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_BW_PlayerIcon_MetaData), Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_BW_PlayerIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapPlayerIconElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_playerIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPlayerIconElement_Statics::NewProp_BW_PlayerIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapPlayerIconElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapPlayerIconElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapPlayerIconElement_Statics::ClassParams = {
		&UMapPlayerIconElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapPlayerIconElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapPlayerIconElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPlayerIconElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapPlayerIconElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPlayerIconElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMapPlayerIconElement()
	{
		if (!Z_Registration_Info_UClass_UMapPlayerIconElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapPlayerIconElement.OuterSingleton, Z_Construct_UClass_UMapPlayerIconElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapPlayerIconElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMapPlayerIconElement>()
	{
		return UMapPlayerIconElement::StaticClass();
	}
	UMapPlayerIconElement::UMapPlayerIconElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapPlayerIconElement);
	UMapPlayerIconElement::~UMapPlayerIconElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapPlayerIconElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapPlayerIconElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapPlayerIconElement, UMapPlayerIconElement::StaticClass, TEXT("UMapPlayerIconElement"), &Z_Registration_Info_UClass_UMapPlayerIconElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapPlayerIconElement), 3768722021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapPlayerIconElement_h_3154862102(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapPlayerIconElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MapPlayerIconElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
