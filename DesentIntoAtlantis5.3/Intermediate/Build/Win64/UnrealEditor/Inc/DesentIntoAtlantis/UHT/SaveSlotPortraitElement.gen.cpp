// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SaveSlotPortraitElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotPortraitElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotPortraitElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USaveSlotPortraitElement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void USaveSlotPortraitElement::StaticRegisterNativesUSaveSlotPortraitElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotPortraitElement);
	UClass* Z_Construct_UClass_USaveSlotPortraitElement_NoRegister()
	{
		return USaveSlotPortraitElement::StaticClass();
	}
	struct Z_Construct_UClass_USaveSlotPortraitElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_CharacterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_CharacterPortrait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSlotPortraitElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotPortraitElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotPortraitElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveSlotPortraitElement.h" },
		{ "ModuleRelativePath", "Public/SaveSlotPortraitElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotPortraitElement_Statics::NewProp_BW_CharacterPortrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SaveSlotPortraitElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotPortraitElement_Statics::NewProp_BW_CharacterPortrait = { "BW_CharacterPortrait", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotPortraitElement, BW_CharacterPortrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotPortraitElement_Statics::NewProp_BW_CharacterPortrait_MetaData), Z_Construct_UClass_USaveSlotPortraitElement_Statics::NewProp_BW_CharacterPortrait_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotPortraitElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotPortraitElement_Statics::NewProp_BW_CharacterPortrait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSlotPortraitElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotPortraitElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotPortraitElement_Statics::ClassParams = {
		&USaveSlotPortraitElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSlotPortraitElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotPortraitElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotPortraitElement_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSlotPortraitElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotPortraitElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveSlotPortraitElement()
	{
		if (!Z_Registration_Info_UClass_USaveSlotPortraitElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotPortraitElement.OuterSingleton, Z_Construct_UClass_USaveSlotPortraitElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveSlotPortraitElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USaveSlotPortraitElement>()
	{
		return USaveSlotPortraitElement::StaticClass();
	}
	USaveSlotPortraitElement::USaveSlotPortraitElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotPortraitElement);
	USaveSlotPortraitElement::~USaveSlotPortraitElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotPortraitElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotPortraitElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotPortraitElement, USaveSlotPortraitElement::StaticClass, TEXT("USaveSlotPortraitElement"), &Z_Registration_Info_UClass_USaveSlotPortraitElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotPortraitElement), 47129418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotPortraitElement_h_1069547770(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotPortraitElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveSlotPortraitElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
