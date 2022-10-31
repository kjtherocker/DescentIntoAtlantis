// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PartyHealthbarElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyHealthbarElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyHealthbarElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPartyHealthbarElement::execTriggerGreyScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerGreyScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPartyHealthbarElement::execTriggerHitEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerHitEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPartyHealthbarElement::execUpdateHealthbarElements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthbarElements();
		P_NATIVE_END;
	}
	void UPartyHealthbarElement::StaticRegisterNativesUPartyHealthbarElement()
	{
		UClass* Class = UPartyHealthbarElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerGreyScale", &UPartyHealthbarElement::execTriggerGreyScale },
			{ "TriggerHitEffect", &UPartyHealthbarElement::execTriggerHitEffect },
			{ "UpdateHealthbarElements", &UPartyHealthbarElement::execUpdateHealthbarElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPartyHealthbarElement, nullptr, "TriggerGreyScale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPartyHealthbarElement, nullptr, "TriggerHitEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPartyHealthbarElement, nullptr, "UpdateHealthbarElements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyHealthbarElement);
	UClass* Z_Construct_UClass_UPartyHealthbarElement_NoRegister()
	{
		return UPartyHealthbarElement::StaticClass();
	}
	struct Z_Construct_UClass_UPartyHealthbarElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCombatEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCombatEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Health_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_ManaText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_ManaText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_CharacterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_CharacterPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_BackgroundHighlight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_BackgroundHighlight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyHealthbarElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPartyHealthbarElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPartyHealthbarElement_TriggerGreyScale, "TriggerGreyScale" }, // 2993512338
		{ &Z_Construct_UFunction_UPartyHealthbarElement_TriggerHitEffect, "TriggerHitEffect" }, // 97320902
		{ &Z_Construct_UFunction_UPartyHealthbarElement_UpdateHealthbarElements, "UpdateHealthbarElements" }, // 663163442
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PartyHealthbarElement.h" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_playerCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_playerCombatEntity = { "playerCombatEntity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, playerCombatEntity), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_playerCombatEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_playerCombatEntity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana = { "BW_Mana", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_Mana), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health = { "BW_Health", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText = { "BW_ManaText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_ManaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText = { "BW_HealthText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait = { "BW_CharacterPortrait", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_CharacterPortrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PartyHealthbarElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartyHealthbarElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight = { "BW_BackgroundHighlight", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyHealthbarElement, BW_BackgroundHighlight), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyHealthbarElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_playerCombatEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_ManaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_CharacterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyHealthbarElement_Statics::NewProp_BW_BackgroundHighlight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyHealthbarElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyHealthbarElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyHealthbarElement_Statics::ClassParams = {
		&UPartyHealthbarElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPartyHealthbarElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPartyHealthbarElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyHealthbarElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyHealthbarElement()
	{
		if (!Z_Registration_Info_UClass_UPartyHealthbarElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyHealthbarElement.OuterSingleton, Z_Construct_UClass_UPartyHealthbarElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyHealthbarElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPartyHealthbarElement>()
	{
		return UPartyHealthbarElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyHealthbarElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyHealthbarElement, UPartyHealthbarElement::StaticClass, TEXT("UPartyHealthbarElement"), &Z_Registration_Info_UClass_UPartyHealthbarElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyHealthbarElement), 3271105238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_3597624339(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PartyHealthbarElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
