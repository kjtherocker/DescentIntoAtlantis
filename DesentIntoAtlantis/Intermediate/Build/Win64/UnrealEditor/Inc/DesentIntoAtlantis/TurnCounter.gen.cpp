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
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_HorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_HorizontalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnCounter_Statics::NewProp_BW_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TurnCounter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnCounter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnCounter_Statics::NewProp_BW_HorizontalBox = { "BW_HorizontalBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTurnCounter, BW_HorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurnCounter_Statics::NewProp_BW_HorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounter_Statics::NewProp_BW_HorizontalBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnCounter_Statics::NewProp_BW_HorizontalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnCounter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnCounter_Statics::ClassParams = {
		&UTurnCounter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTurnCounter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurnCounter_Statics::PropPointers),
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
		{ Z_Construct_UClass_UTurnCounter, UTurnCounter::StaticClass, TEXT("UTurnCounter"), &Z_Registration_Info_UClass_UTurnCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnCounter), 3243461629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_2409660533(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TurnCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
