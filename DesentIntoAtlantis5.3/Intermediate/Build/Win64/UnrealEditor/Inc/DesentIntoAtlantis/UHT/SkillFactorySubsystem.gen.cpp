// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SkillFactorySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillFactorySubsystem() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void USkillFactorySubsystem::StaticRegisterNativesUSkillFactorySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillFactorySubsystem);
	UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister()
	{
		return USkillFactorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USkillFactorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_skillMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_skillMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillFactorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactorySubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactorySubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkillFactorySubsystem.h" },
		{ "ModuleRelativePath", "Public/SkillFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_ValueProp = { "skillMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_Key_KeyProp = { "skillMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap = { "skillMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillFactorySubsystem, skillMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_MetaData), Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillFactorySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillFactorySubsystem_Statics::NewProp_skillMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillFactorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillFactorySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillFactorySubsystem_Statics::ClassParams = {
		&USkillFactorySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkillFactorySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactorySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactorySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillFactorySubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillFactorySubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkillFactorySubsystem()
	{
		if (!Z_Registration_Info_UClass_USkillFactorySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillFactorySubsystem.OuterSingleton, Z_Construct_UClass_USkillFactorySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillFactorySubsystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<USkillFactorySubsystem>()
	{
		return USkillFactorySubsystem::StaticClass();
	}
	USkillFactorySubsystem::USkillFactorySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillFactorySubsystem);
	USkillFactorySubsystem::~USkillFactorySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillFactorySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillFactorySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillFactorySubsystem, USkillFactorySubsystem::StaticClass, TEXT("USkillFactorySubsystem"), &Z_Registration_Info_UClass_USkillFactorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillFactorySubsystem), 3240350819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillFactorySubsystem_h_1793514909(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillFactorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SkillFactorySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
