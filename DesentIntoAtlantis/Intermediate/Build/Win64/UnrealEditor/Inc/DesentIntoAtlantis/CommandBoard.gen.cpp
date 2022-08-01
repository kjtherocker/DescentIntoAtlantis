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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCommandBoard_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCommandBoard();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_Skill_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B_Skill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_Domain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B_Domain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_Escape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B_Escape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_Pass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_B_Pass;
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
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CommandBoard.h" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Attack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Attack = { "B_Attack", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, B_Attack), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Skill_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Skill = { "B_Skill", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, B_Skill), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Skill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Domain_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Domain = { "B_Domain", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, B_Domain), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Domain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Domain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Item_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Item = { "B_Item", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, B_Item), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Item_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Escape_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Escape = { "B_Escape", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, B_Escape), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Escape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Escape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Pass_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Pass = { "B_Pass", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, B_Pass), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Pass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Pass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommandBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Skill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Domain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Escape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_B_Pass,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommandBoard, UCommandBoard::StaticClass, TEXT("UCommandBoard"), &Z_Registration_Info_UClass_UCommandBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommandBoard), 1546524843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_2727318745(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
