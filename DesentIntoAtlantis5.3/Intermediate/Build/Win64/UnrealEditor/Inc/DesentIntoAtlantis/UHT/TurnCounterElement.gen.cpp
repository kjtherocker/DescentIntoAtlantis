// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/TurnCounterElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnCounterElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterElement_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UTurnCounterElement::StaticRegisterNativesUTurnCounterElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnCounterElement);
	UClass* Z_Construct_UClass_UTurnCounterElement_NoRegister()
	{
		return UTurnCounterElement::StaticClass();
	}
	struct Z_Construct_UClass_UTurnCounterElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_turnIcons_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_turnIcons_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_turnIcons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turnIcons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_turnIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_TurnIconAlly_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_TurnIconAlly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_TurnIconEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_TurnIconEnemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_EmpoweredIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_EmpoweredIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnCounterElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TurnCounterElement.h" },
		{ "ModuleRelativePath", "Public/TurnCounterElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_ValueProp = { "turnIcons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_Key_KeyProp = { "turnIcons_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECharactertype, METADATA_PARAMS(0, nullptr) }; // 2009458319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnCounterElement.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons = { "turnIcons", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnCounterElement, turnIcons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_MetaData), Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_MetaData) }; // 2009458319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconAlly_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurnCounterElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnCounterElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconAlly = { "BW_TurnIconAlly", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnCounterElement, BW_TurnIconAlly), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconAlly_MetaData), Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconAlly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconEnemy_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurnCounterElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnCounterElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconEnemy = { "BW_TurnIconEnemy", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnCounterElement, BW_TurnIconEnemy), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconEnemy_MetaData), Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconEnemy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_EmpoweredIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurnCounterElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnCounterElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_EmpoweredIcon = { "BW_EmpoweredIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnCounterElement, BW_EmpoweredIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_EmpoweredIcon_MetaData), Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_EmpoweredIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnCounterElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_turnIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconAlly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_TurnIconEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounterElement_Statics::NewProp_BW_EmpoweredIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnCounterElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnCounterElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnCounterElement_Statics::ClassParams = {
		&UTurnCounterElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTurnCounterElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnCounterElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTurnCounterElement()
	{
		if (!Z_Registration_Info_UClass_UTurnCounterElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnCounterElement.OuterSingleton, Z_Construct_UClass_UTurnCounterElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnCounterElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UTurnCounterElement>()
	{
		return UTurnCounterElement::StaticClass();
	}
	UTurnCounterElement::UTurnCounterElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnCounterElement);
	UTurnCounterElement::~UTurnCounterElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnCounterElement, UTurnCounterElement::StaticClass, TEXT("UTurnCounterElement"), &Z_Registration_Info_UClass_UTurnCounterElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnCounterElement), 2711067535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_333962182(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
