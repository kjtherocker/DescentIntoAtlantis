// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatEntityClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEntityClass() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntityClass_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntityClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FClassData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
	void UCombatEntityClass::StaticRegisterNativesUCombatEntityClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEntityClass);
	UClass* Z_Construct_UClass_UCombatEntityClass_NoRegister()
	{
		return UCombatEntityClass::StaticClass();
	}
	struct Z_Construct_UClass_UCombatEntityClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatEntityClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntityClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatEntityClass.h" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatEntityClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEntityClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEntityClass_Statics::ClassParams = {
		&UCombatEntityClass::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatEntityClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatEntityClass()
	{
		if (!Z_Registration_Info_UClass_UCombatEntityClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEntityClass.OuterSingleton, Z_Construct_UClass_UCombatEntityClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatEntityClass.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatEntityClass>()
	{
		return UCombatEntityClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEntityClass);

static_assert(std::is_polymorphic<FClassData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClassData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassData;
class UScriptStruct* FClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ClassData"));
	}
	return Z_Registration_Info_UScriptStruct_ClassData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FClassData>()
{
	return FClassData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_className_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_className;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMagic_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseMagic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseHit_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseEvasion_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseEvasion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseDefence_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_baseDefence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseResistance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expToNextClassLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_expToNextClassLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newlyObtainedSkill_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_newlyObtainedSkill;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//A combat class is filled with the bases of all stats\n" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
		{ "ToolTip", "A combat class is filled with the bases of all stats" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, maxHealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className = { "className", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, className), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseStrength_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseStrength = { "baseStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, baseStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseMagic_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseMagic = { "baseMagic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, baseMagic), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseMagic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseMagic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseHit_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseHit = { "baseHit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, baseHit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseEvasion_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseEvasion = { "baseEvasion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, baseEvasion), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseEvasion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseEvasion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseDefence_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseDefence = { "baseDefence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, baseDefence), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseDefence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseDefence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_BaseResistance_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_BaseResistance = { "BaseResistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, BaseResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_BaseResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_BaseResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel = { "expToNextClassLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, expToNextClassLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatEntityClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill = { "newlyObtainedSkill", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, newlyObtainedSkill), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseMagic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseEvasion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_baseDefence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_BaseResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ClassData",
		sizeof(FClassData),
		alignof(FClassData),
		Z_Construct_UScriptStruct_FClassData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton, Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics::ScriptStructInfo[] = {
		{ FClassData::StaticStruct, Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps, TEXT("ClassData"), &Z_Registration_Info_UScriptStruct_ClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassData), 1605133218U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEntityClass, UCombatEntityClass::StaticClass, TEXT("UCombatEntityClass"), &Z_Registration_Info_UClass_UCombatEntityClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEntityClass), 2151812087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_1956110320(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntityClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
