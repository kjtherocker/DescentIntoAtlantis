// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/MapButtonElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapButtonElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UMapButtonElement();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
// End Cross Module References
	void UMapButtonElement::StaticRegisterNativesUMapButtonElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapButtonElement);
	UClass* Z_Construct_UClass_UMapButtonElement_NoRegister()
	{
		return UMapButtonElement::StaticClass();
	}
	struct Z_Construct_UClass_UMapButtonElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_GenerateButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_GenerateButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_MapIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_MapIcon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcons_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MapIcons_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MapIcons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapIcons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapIcons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapButtonElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MapButtonElement.h" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton = { "BW_GenerateButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, BW_GenerateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon = { "BW_MapIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, BW_MapIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_ValueProp = { "MapIcons", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp = { "MapIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(nullptr, 0) }; // 3248041013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapButtonElement" },
		{ "ModuleRelativePath", "Public/MapButtonElement.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons = { "MapIcons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapButtonElement, MapIcons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_MetaData)) }; // 3248041013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapButtonElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_GenerateButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_BW_MapIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapButtonElement_Statics::NewProp_MapIcons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapButtonElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapButtonElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapButtonElement_Statics::ClassParams = {
		&UMapButtonElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapButtonElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapButtonElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapButtonElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapButtonElement()
	{
		if (!Z_Registration_Info_UClass_UMapButtonElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapButtonElement.OuterSingleton, Z_Construct_UClass_UMapButtonElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapButtonElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UMapButtonElement>()
	{
		return UMapButtonElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapButtonElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapButtonElement, UMapButtonElement::StaticClass, TEXT("UMapButtonElement"), &Z_Registration_Info_UClass_UMapButtonElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapButtonElement), 527824782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_2113521869(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapButtonElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
