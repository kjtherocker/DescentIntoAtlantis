// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatClass() {}
// Cross Module References
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FClassData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatEntityData();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClassData>() == std::is_polymorphic<FCombatEntityData>(), "USTRUCT FClassData cannot be polymorphic unless super FCombatEntityData is polymorphic");

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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_className_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_className;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classLevelID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classLevelID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expToNextClassLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_expToNextClassLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newlyObtainedSkill_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_newlyObtainedSkill;
		static const UECodeGen_Private::FStrPropertyParams NewProp_classSkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classSkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_classSkills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///A combat class is filled with the bases of all stats\n" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
		{ "ToolTip", "//A combat class is filled with the bases of all stats" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className = { "className", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, className), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID = { "classLevelID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, classLevelID), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel = { "expToNextClassLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, expToNextClassLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill = { "newlyObtainedSkill", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, newlyObtainedSkill), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills_Inner = { "classSkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills_MetaData[] = {
		{ "Category", "ClassData" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills = { "classSkills", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassData, classSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_className,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classLevelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_expToNextClassLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_newlyObtainedSkill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassData_Statics::NewProp_classSkills,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FCombatEntityData,
		&NewStructOps,
		"ClassData",
		sizeof(FClassData),
		alignof(FClassData),
		Z_Construct_UScriptStruct_FClassData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
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
	void UCombatClass::StaticRegisterNativesUCombatClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatClass);
	UClass* Z_Construct_UClass_UCombatClass_NoRegister()
	{
		return UCombatClass::StaticClass();
	}
	struct Z_Construct_UClass_UCombatClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachedCombatEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachedCombatEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentClassLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentClassLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_classLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_classLevels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_classSkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classSkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_classSkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentClassIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatClass.h" },
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity = { "attachedCombatEntity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatClass, attachedCombatEntity), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassLevel = { "currentClassLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatClass, currentClassLevel), Z_Construct_UScriptStruct_FClassData, METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassLevel_MetaData)) }; // 155088484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels_Inner = { "classLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClassData, METADATA_PARAMS(nullptr, 0) }; // 155088484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels = { "classLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatClass, classLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels_MetaData)) }; // 155088484
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_Inner = { "classSkills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills = { "classSkills", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatClass, classSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory = { "skillFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatClass, skillFactory), Z_Construct_UClass_USkillFactorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex = { "currentClassIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatClass, currentClassIndex), METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_attachedCombatEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_classLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_classSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_skillFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatClass_Statics::NewProp_currentClassIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatClass_Statics::ClassParams = {
		&UCombatClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatClass()
	{
		if (!Z_Registration_Info_UClass_UCombatClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatClass.OuterSingleton, Z_Construct_UClass_UCombatClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatClass.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatClass>()
	{
		return UCombatClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatClass);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ScriptStructInfo[] = {
		{ FClassData::StaticStruct, Z_Construct_UScriptStruct_FClassData_Statics::NewStructOps, TEXT("ClassData"), &Z_Registration_Info_UScriptStruct_ClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassData), 155088484U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatClass, UCombatClass::StaticClass, TEXT("UCombatClass"), &Z_Registration_Info_UClass_UCombatClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatClass), 1342807467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_2531572837(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
