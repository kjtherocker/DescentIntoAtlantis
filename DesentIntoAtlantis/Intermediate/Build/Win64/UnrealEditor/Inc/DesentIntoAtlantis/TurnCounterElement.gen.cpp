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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterElement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounterElement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnCounterElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounterElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TurnCounterElement.h" },
		{ "ModuleRelativePath", "Public/TurnCounterElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnCounterElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnCounterElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnCounterElement_Statics::ClassParams = {
		&UTurnCounterElement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTurnCounterElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounterElement_Statics::Class_MetaDataParams))
	};
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnCounterElement);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnCounterElement, UTurnCounterElement::StaticClass, TEXT("UTurnCounterElement"), &Z_Registration_Info_UClass_UTurnCounterElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnCounterElement), 3201809558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_3530648137(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounterElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
