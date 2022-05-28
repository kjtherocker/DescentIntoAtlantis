// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EElementalType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEElementalType() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEElementalType_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEElementalType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UEElementalType::StaticRegisterNativesUEElementalType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEElementalType);
	UClass* Z_Construct_UClass_UEElementalType_NoRegister()
	{
		return UEElementalType::StaticClass();
	}
	struct Z_Construct_UClass_UEElementalType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEElementalType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEElementalType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EElementalType.h" },
		{ "ModuleRelativePath", "Public/EElementalType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEElementalType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEElementalType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEElementalType_Statics::ClassParams = {
		&UEElementalType::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEElementalType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEElementalType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEElementalType()
	{
		if (!Z_Registration_Info_UClass_UEElementalType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEElementalType.OuterSingleton, Z_Construct_UClass_UEElementalType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEElementalType.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEElementalType>()
	{
		return UEElementalType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEElementalType);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEElementalType, UEElementalType::StaticClass, TEXT("UEElementalType"), &Z_Registration_Info_UClass_UEElementalType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEElementalType), 3418185397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_931022906(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
