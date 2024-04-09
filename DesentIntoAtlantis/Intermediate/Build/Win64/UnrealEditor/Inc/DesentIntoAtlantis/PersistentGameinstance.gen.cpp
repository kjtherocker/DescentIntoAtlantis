// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/PersistentGameinstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentGameinstance() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ESkillType();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPartyManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadPreSetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPreSetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execLoadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersistentGameinstance::execUnloadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadLevel(Z_Param_aLevelName);
		P_NATIVE_END;
	}
	void UPersistentGameinstance::StaticRegisterNativesUPersistentGameinstance()
	{
		UClass* Class = UPersistentGameinstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadLevel", &UPersistentGameinstance::execLoadLevel },
			{ "LoadPreSetLevel", &UPersistentGameinstance::execLoadPreSetLevel },
			{ "UnloadLevel", &UPersistentGameinstance::execUnloadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics
	{
		struct PersistentGameinstance_eventLoadLevel_Parms
		{
			FString aLevelName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_aLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PersistentGameinstance_eventLoadLevel_Parms, aLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PersistentGameinstance_eventLoadLevel_Parms), Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "LoadPreSetLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics
	{
		struct PersistentGameinstance_eventUnloadLevel_Parms
		{
			FString aLevelName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_aLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::NewProp_aLevelName = { "aLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PersistentGameinstance_eventUnloadLevel_Parms, aLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::NewProp_aLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersistentGameinstance, nullptr, "UnloadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PersistentGameinstance_eventUnloadLevel_Parms), Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentGameinstance);
	UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister()
	{
		return UPersistentGameinstance::StaticClass();
	}
	struct Z_Construct_UClass_UPersistentGameinstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTables_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTables_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTablesClasses_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTablesClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTablesClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTablesClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTablesClasses;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataTablesSkills_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dataTablesSkills_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataTablesSkills_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataTablesSkills_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_dataTablesSkills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_partyManagerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skillFactorySubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skillFactorySubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyFactorySubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyFactorySubSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tutorialManagerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueManagerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueManagerSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersistentGameinstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPersistentGameinstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadLevel, "LoadLevel" }, // 1981422177
		{ &Z_Construct_UFunction_UPersistentGameinstance_LoadPreSetLevel, "LoadPreSetLevel" }, // 1560762952
		{ &Z_Construct_UFunction_UPersistentGameinstance_UnloadLevel, "UnloadLevel" }, // 2066795290
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PersistentGameinstance.h" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_ValueProp = { "dataTables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp = { "dataTables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableTypes, METADATA_PARAMS(nullptr, 0) }; // 1451724120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables = { "dataTables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_MetaData)) }; // 1451724120
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_ValueProp = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp = { "dataTablesClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDataTableClasses, METADATA_PARAMS(nullptr, 0) }; // 916432985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses = { "dataTablesClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTablesClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_MetaData)) }; // 916432985
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_ValueProp = { "dataTablesSkills", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp = { "dataTablesSkills_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ESkillType, METADATA_PARAMS(nullptr, 0) }; // 2088220918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills = { "dataTablesSkills", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, dataTablesSkills), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_MetaData)) }; // 2088220918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem = { "partyManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, partyManagerSubsystem), Z_Construct_UClass_UPartyManagerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem = { "skillFactorySubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, skillFactorySubsystem), Z_Construct_UClass_USkillFactorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem = { "enemyFactorySubSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, enemyFactorySubSystem), Z_Construct_UClass_UEnemyFactorySubSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem = { "tutorialManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, tutorialManagerSubsystem), Z_Construct_UClass_UTutorialManagerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/PersistentGameinstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem = { "dialogueManagerSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPersistentGameinstance, dialogueManagerSubsystem), Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dataTablesSkills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_partyManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_skillFactorySubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_enemyFactorySubSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_tutorialManagerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistentGameinstance_Statics::NewProp_dialogueManagerSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersistentGameinstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersistentGameinstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentGameinstance_Statics::ClassParams = {
		&UPersistentGameinstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentGameinstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersistentGameinstance()
	{
		if (!Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton, Z_Construct_UClass_UPersistentGameinstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersistentGameinstance.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UPersistentGameinstance>()
	{
		return UPersistentGameinstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentGameinstance);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentGameinstance, UPersistentGameinstance::StaticClass, TEXT("UPersistentGameinstance"), &Z_Registration_Info_UClass_UPersistentGameinstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentGameinstance), 4230177748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_1562333673(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
