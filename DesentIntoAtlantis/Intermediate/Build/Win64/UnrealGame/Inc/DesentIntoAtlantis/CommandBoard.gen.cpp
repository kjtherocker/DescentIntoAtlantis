// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CommandBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandBoard() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCommandBoard_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCommandBoard();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_USkillAttack_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPlayerCombatEntity_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommandBoardStates;
	static UEnum* ECommandBoardStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommandBoardStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommandBoardStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ECommandBoardStates"));
		}
		return Z_Registration_Info_UEnum_ECommandBoardStates.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECommandBoardStates>()
	{
		return ECommandBoardStates_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::Enumerators[] = {
		{ "ECommandBoardStates::Attack", (int64)ECommandBoardStates::Attack },
		{ "ECommandBoardStates::Skill", (int64)ECommandBoardStates::Skill },
		{ "ECommandBoardStates::Escape", (int64)ECommandBoardStates::Escape },
		{ "ECommandBoardStates::Pass", (int64)ECommandBoardStates::Pass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "ECommandBoardStates::Attack" },
		{ "Comment", "/**\n * \n */" },
		{ "Escape.Comment", "/**\n * \n */" },
		{ "Escape.Name", "ECommandBoardStates::Escape" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
		{ "Pass.Comment", "/**\n * \n */" },
		{ "Pass.Name", "ECommandBoardStates::Pass" },
		{ "Skill.Comment", "/**\n * \n */" },
		{ "Skill.Name", "ECommandBoardStates::Skill" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ECommandBoardStates",
		"ECommandBoardStates",
		Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates()
	{
		if (!Z_Registration_Info_UEnum_ECommandBoardStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommandBoardStates.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ECommandBoardStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommandBoardStates.InnerSingleton;
	}
	DEFINE_FUNCTION(UCommandBoard::execPass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommandBoard::execEscape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Escape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommandBoard::execSkill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommandBoard::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	void UCommandBoard::StaticRegisterNativesUCommandBoard()
	{
		UClass* Class = UCommandBoard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &UCommandBoard::execAttack },
			{ "Escape", &UCommandBoard::execEscape },
			{ "Pass", &UCommandBoard::execPass },
			{ "Skill", &UCommandBoard::execSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommandBoard_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommandBoard_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommandBoard_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommandBoard, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommandBoard_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommandBoard_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommandBoard_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommandBoard_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommandBoard_Escape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommandBoard_Escape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommandBoard_Escape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommandBoard, nullptr, "Escape", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommandBoard_Escape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommandBoard_Escape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommandBoard_Escape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommandBoard_Escape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommandBoard_Pass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommandBoard_Pass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommandBoard_Pass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommandBoard, nullptr, "Pass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommandBoard_Pass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommandBoard_Pass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommandBoard_Pass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommandBoard_Pass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommandBoard_Skill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommandBoard_Skill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommandBoard_Skill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommandBoard, nullptr, "Skill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommandBoard_Skill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommandBoard_Skill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommandBoard_Skill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommandBoard_Skill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommandBoard);
	UClass* Z_Construct_UClass_UCommandBoard_NoRegister()
	{
		return UCommandBoard::StaticClass();
	}
	struct Z_Construct_UClass_UCommandBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_combatManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultAttack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Skill_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Skill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Escape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Escape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_Pass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_Pass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BW_FullBodyPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BW_FullBodyPortrait;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_commandBoards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandBoards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_commandBoards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentActivePartyMember_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentActivePartyMember;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommandBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommandBoard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommandBoard_Attack, "Attack" }, // 412362483
		{ &Z_Construct_UFunction_UCommandBoard_Escape, "Escape" }, // 3814197910
		{ &Z_Construct_UFunction_UCommandBoard_Pass, "Pass" }, // 92772310
		{ &Z_Construct_UFunction_UCommandBoard_Skill, "Skill" }, // 2205501628
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommandBoard.h" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_combatManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_combatManager = { "combatManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, combatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_combatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_combatManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_defaultAttack_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_defaultAttack = { "defaultAttack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, defaultAttack), Z_Construct_UClass_USkillAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_defaultAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_defaultAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Attack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Attack = { "BW_Attack", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, BW_Attack), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Skill_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Skill = { "BW_Skill", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, BW_Skill), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Skill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Escape_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Escape = { "BW_Escape", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, BW_Escape), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Escape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Escape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Pass_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Pass = { "BW_Pass", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, BW_Pass), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Pass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Pass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_FullBodyPortrait_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_FullBodyPortrait = { "BW_FullBodyPortrait", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, BW_FullBodyPortrait), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_FullBodyPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_FullBodyPortrait_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards_Inner = { "commandBoards", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards = { "commandBoards", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, commandBoards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_currentActivePartyMember_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_currentActivePartyMember = { "currentActivePartyMember", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, currentActivePartyMember), Z_Construct_UClass_UPlayerCombatEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_currentActivePartyMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_currentActivePartyMember_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommandBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_combatManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_defaultAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Skill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Escape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_Pass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_BW_FullBodyPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_commandBoards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_currentActivePartyMember,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommandBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommandBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommandBoard_Statics::ClassParams = {
		&UCommandBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommandBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommandBoard()
	{
		if (!Z_Registration_Info_UClass_UCommandBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommandBoard.OuterSingleton, Z_Construct_UClass_UCommandBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommandBoard.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCommandBoard>()
	{
		return UCommandBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommandBoard);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::EnumInfo[] = {
		{ ECommandBoardStates_StaticEnum, TEXT("ECommandBoardStates"), &Z_Registration_Info_UEnum_ECommandBoardStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3998345339U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommandBoard, UCommandBoard::StaticClass, TEXT("UCommandBoard"), &Z_Registration_Info_UClass_UCommandBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommandBoard), 344206143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_3723984401(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
