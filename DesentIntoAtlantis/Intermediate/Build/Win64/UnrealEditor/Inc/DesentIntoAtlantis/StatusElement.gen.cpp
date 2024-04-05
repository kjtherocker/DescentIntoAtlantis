// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/StatusElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusElement() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UStatusElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UStatusElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UStatusElement::StaticRegisterNativesUStatusElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusElement);
	UClass* Z_Construct_UClass_UStatusElement_NoRegister()
	{
		return UStatusElement::StaticClass();
	}
	struct Z_Construct_UClass_UStatusElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StatusElement.h" },
		{ "ModuleRelativePath", "Public/StatusElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusElement_Statics::ClassParams = {
		&UStatusElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatusElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusElement()
	{
		if (!Z_Registration_Info_UClass_UStatusElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusElement.OuterSingleton, Z_Construct_UClass_UStatusElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatusElement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UStatusElement>()
	{
		return UStatusElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_StatusElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_StatusElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatusElement, UStatusElement::StaticClass, TEXT("UStatusElement"), &Z_Registration_Info_UClass_UStatusElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusElement), 438288702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_StatusElement_h_420186950(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_StatusElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_StatusElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
