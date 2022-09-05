// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/TurnCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnCounter() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounter_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTurnCounter();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UTurnCounter::StaticRegisterNativesUTurnCounter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnCounter);
	UClass* Z_Construct_UClass_UTurnCounter_NoRegister()
	{
		return UTurnCounter::StaticClass();
	}
	struct Z_Construct_UClass_UTurnCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TurnCounter.h" },
		{ "ModuleRelativePath", "Public/TurnCounter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnCounter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnCounter_Statics::ClassParams = {
		&UTurnCounter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTurnCounter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnCounter()
	{
		if (!Z_Registration_Info_UClass_UTurnCounter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnCounter.OuterSingleton, Z_Construct_UClass_UTurnCounter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnCounter.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UTurnCounter>()
	{
		return UTurnCounter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnCounter);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnCounter, UTurnCounter::StaticClass, TEXT("UTurnCounter"), &Z_Registration_Info_UClass_UTurnCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnCounter), 2790024442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_3403323238(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
