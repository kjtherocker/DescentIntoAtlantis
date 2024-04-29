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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AEnemyPortraitElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AEnemyPortraitElement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyPortraitElement::execTriggerDisappear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerDisappear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyPortraitElement::execTriggerHitEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerHitEffect();
		P_NATIVE_END;
	}
	void AEnemyPortraitElement::StaticRegisterNativesAEnemyPortraitElement()
	{
		UClass* Class = AEnemyPortraitElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerDisappear", &AEnemyPortraitElement::execTriggerDisappear },
			{ "TriggerHitEffect", &AEnemyPortraitElement::execTriggerHitEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyPortraitElement, nullptr, "TriggerDisappear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyPortraitElement, nullptr, "TriggerHitEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyPortraitElement);
	UClass* Z_Construct_UClass_AEnemyPortraitElement_NoRegister()
	{
		return AEnemyPortraitElement::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPortraitElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentEnemyMaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentEnemyMaterialInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Portrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Portrait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPortraitElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyPortraitElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyPortraitElement_TriggerDisappear, "TriggerDisappear" }, // 1599765012
		{ &Z_Construct_UFunction_AEnemyPortraitElement_TriggerHitEffect, "TriggerHitEffect" }, // 3463453210
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPortraitElement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemyPortraitElement.h" },
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_PlaneMeshComponent_MetaData[] = {
		{ "Category", "EnemyPortraitElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_PlaneMeshComponent = { "PlaneMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPortraitElement, PlaneMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_PlaneMeshComponent_MetaData), Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_PlaneMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_currentEnemyMaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_currentEnemyMaterialInterface = { "currentEnemyMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPortraitElement, currentEnemyMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_currentEnemyMaterialInterface_MetaData), Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_currentEnemyMaterialInterface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_BW_Portrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EnemyPortraitElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPortraitElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_BW_Portrait = { "BW_Portrait", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPortraitElement, BW_Portrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_BW_Portrait_MetaData), Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_BW_Portrait_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPortraitElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_PlaneMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_currentEnemyMaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPortraitElement_Statics::NewProp_BW_Portrait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPortraitElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPortraitElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPortraitElement_Statics::ClassParams = {
		&AEnemyPortraitElement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyPortraitElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPortraitElement_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPortraitElement_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyPortraitElement()
	{
		if (!Z_Registration_Info_UClass_AEnemyPortraitElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPortraitElement.OuterSingleton, Z_Construct_UClass_AEnemyPortraitElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyPortraitElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AEnemyPortraitElement>()
	{
		return AEnemyPortraitElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPortraitElement);
	AEnemyPortraitElement::~AEnemyPortraitElement() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPortraitElement, AEnemyPortraitElement::StaticClass, TEXT("AEnemyPortraitElement"), &Z_Registration_Info_UClass_AEnemyPortraitElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPortraitElement), 1671010136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_1446306318(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyPortraitElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
