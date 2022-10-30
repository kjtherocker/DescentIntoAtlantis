// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyBeastiaryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBeastiaryData() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyBestiaryData_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyBestiaryData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EElementalType();
// End Cross Module References
	void UEnemyBestiaryData::StaticRegisterNativesUEnemyBestiaryData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyBestiaryData);
	UClass* Z_Construct_UClass_UEnemyBestiaryData_NoRegister()
	{
		return UEnemyBestiaryData::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBestiaryData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enemyElementalInfo_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_enemyElementalInfo_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_enemyElementalInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyElementalInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_enemyElementalInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBestiaryData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBestiaryData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyBeastiaryData.h" },
		{ "ModuleRelativePath", "Public/EnemyBeastiaryData.h" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_ValueProp = { "enemyElementalInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_Key_KeyProp = { "enemyElementalInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EElementalType, METADATA_PARAMS(nullptr, 0) }; // 928806472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyBeastiaryData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo = { "enemyElementalInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBestiaryData, enemyElementalInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_MetaData)) }; // 928806472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyBestiaryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBestiaryData_Statics::NewProp_enemyElementalInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBestiaryData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBestiaryData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBestiaryData_Statics::ClassParams = {
		&UEnemyBestiaryData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyBestiaryData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBestiaryData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyBestiaryData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBestiaryData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyBestiaryData()
	{
		if (!Z_Registration_Info_UClass_UEnemyBestiaryData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyBestiaryData.OuterSingleton, Z_Construct_UClass_UEnemyBestiaryData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyBestiaryData.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyBestiaryData>()
	{
		return UEnemyBestiaryData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBestiaryData);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyBeastiaryData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyBeastiaryData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyBestiaryData, UEnemyBestiaryData::StaticClass, TEXT("UEnemyBestiaryData"), &Z_Registration_Info_UClass_UEnemyBestiaryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyBestiaryData), 1574696354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyBeastiaryData_h_161942173(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyBeastiaryData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyBeastiaryData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
