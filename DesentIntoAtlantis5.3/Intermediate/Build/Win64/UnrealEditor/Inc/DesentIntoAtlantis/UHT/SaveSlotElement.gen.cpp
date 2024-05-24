// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveSlotElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotPortraitElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void USaveSlotElement::StaticRegisterNativesUSaveSlotElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotElement);
	UClass* Z_Construct_UClass_USaveSlotElement_NoRegister()
	{
		return USaveSlotElement::StaticClass();
	}
	struct Z_Construct_UClass_USaveSlotElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_portraitElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_portraitElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_portraitElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_HorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_HorizontalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Time_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Location_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_SaveSlotNumber_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_SaveSlotNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSlotElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveSlotElement.h" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements_Inner = { "portraitElements", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USaveSlotPortraitElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements = { "portraitElements", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, portraitElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements_MetaData), Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SaveSlotElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_HorizontalBox = { "BW_HorizontalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, BW_HorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_HorizontalBox_MetaData), Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_HorizontalBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Time_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SaveSlotElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Time = { "BW_Time", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, BW_Time), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Time_MetaData), Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Location_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SaveSlotElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Location = { "BW_Location", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, BW_Location), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Location_MetaData), Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_SaveSlotNumber_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SaveSlotElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_SaveSlotNumber = { "BW_SaveSlotNumber", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotElement, BW_SaveSlotNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_SaveSlotNumber_MetaData), Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_SaveSlotNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_portraitElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_HorizontalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotElement_Statics::NewProp_BW_SaveSlotNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSlotElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotElement_Statics::ClassParams = {
		&USaveSlotElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSlotElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSlotElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveSlotElement()
	{
		if (!Z_Registration_Info_UClass_USaveSlotElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotElement.OuterSingleton, Z_Construct_UClass_USaveSlotElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveSlotElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USaveSlotElement>()
	{
		return USaveSlotElement::StaticClass();
	}
	USaveSlotElement::USaveSlotElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotElement);
	USaveSlotElement::~USaveSlotElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotElement, USaveSlotElement::StaticClass, TEXT("USaveSlotElement"), &Z_Registration_Info_UClass_USaveSlotElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotElement), 1011762790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotElement_h_788156953(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
