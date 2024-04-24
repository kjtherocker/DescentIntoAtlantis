// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/EnemyBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBehaviour() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyBehaviour();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyCombatEntity_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UEnemyBehaviour::StaticRegisterNativesUEnemyBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyBehaviour);
	UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister()
	{
		return UEnemyBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyCombatEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyCombatEntity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemyBehaviour.h" },
		{ "ModuleRelativePath", "Public/EnemyBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_enemyCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_enemyCombatEntity = { "enemyCombatEntity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyBehaviour, enemyCombatEntity), Z_Construct_UClass_UEnemyCombatEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_enemyCombatEntity_MetaData), Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_enemyCombatEntity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_enemyCombatEntity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBehaviour_Statics::ClassParams = {
		&UEnemyBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyBehaviour()
	{
		if (!Z_Registration_Info_UClass_UEnemyBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyBehaviour.OuterSingleton, Z_Construct_UClass_UEnemyBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyBehaviour.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UEnemyBehaviour>()
	{
		return UEnemyBehaviour::StaticClass();
	}
	UEnemyBehaviour::UEnemyBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBehaviour);
	UEnemyBehaviour::~UEnemyBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_EnemyBehaviour_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_EnemyBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyBehaviour, UEnemyBehaviour::StaticClass, TEXT("UEnemyBehaviour"), &Z_Registration_Info_UClass_UEnemyBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyBehaviour), 3518596262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_EnemyBehaviour_h_346883114(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_EnemyBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_EnemyBehaviour_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
