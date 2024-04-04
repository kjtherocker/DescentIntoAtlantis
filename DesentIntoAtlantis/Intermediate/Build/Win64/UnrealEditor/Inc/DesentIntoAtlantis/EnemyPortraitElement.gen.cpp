// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyPortraitElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPortraitElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyPortraitElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyPortraitElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyPortraitElement::execTriggerDisappear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerDisappear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyPortraitElement::execTriggerHitEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerHitEffect();
		P_NATIVE_END;
	}
	void UEnemyPortraitElement::StaticRegisterNativesUEnemyPortraitElement()
	{
		UClass* Class = UEnemyPortraitElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerDisappear", &UEnemyPortraitElement::execTriggerDisappear },
			{ "TriggerHitEffect", &UEnemyPortraitElement::execTriggerHitEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyPortraitElement, nullptr, "TriggerDisappear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyPortraitElement, nullptr, "TriggerHitEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyPortraitElement);
	UClass* Z_Construct_UClass_UEnemyPortraitElement_NoRegister()
	{
		return UEnemyPortraitElement::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyPortraitElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Portrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Portrait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyPortraitElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyPortraitElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyPortraitElement_TriggerDisappear, "TriggerDisappear" }, // 908368172
		{ &Z_Construct_UFunction_UEnemyPortraitElement_TriggerHitEffect, "TriggerHitEffect" }, // 45656715
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyPortraitElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyPortraitElement.h" },
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyPortraitElement_Statics::NewProp_BW_Portrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyPortraitElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyPortraitElement_Statics::NewProp_BW_Portrait = { "BW_Portrait", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyPortraitElement, BW_Portrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyPortraitElement_Statics::NewProp_BW_Portrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyPortraitElement_Statics::NewProp_BW_Portrait_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyPortraitElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyPortraitElement_Statics::NewProp_BW_Portrait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyPortraitElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyPortraitElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyPortraitElement_Statics::ClassParams = {
		&UEnemyPortraitElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyPortraitElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyPortraitElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyPortraitElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyPortraitElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyPortraitElement()
	{
		if (!Z_Registration_Info_UClass_UEnemyPortraitElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyPortraitElement.OuterSingleton, Z_Construct_UClass_UEnemyPortraitElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyPortraitElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyPortraitElement>()
	{
		return UEnemyPortraitElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyPortraitElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyPortraitElement, UEnemyPortraitElement::StaticClass, TEXT("UEnemyPortraitElement"), &Z_Registration_Info_UClass_UEnemyPortraitElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyPortraitElement), 4272527873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_3291776286(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
