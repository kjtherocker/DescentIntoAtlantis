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
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UCommandBoard::StaticRegisterNativesUCommandBoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommandBoard);
	UClass* Z_Construct_UClass_UCommandBoard_NoRegister()
	{
		return UCommandBoard::StaticClass();
	}
	struct Z_Construct_UClass_UCommandBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTitle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTitle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommandBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CommandBoard.h" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandBoard_Statics::NewProp_ItemTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CommandBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommandBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommandBoard_Statics::NewProp_ItemTitle = { "ItemTitle", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandBoard, ItemTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommandBoard_Statics::NewProp_ItemTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommandBoard_Statics::NewProp_ItemTitle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommandBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandBoard_Statics::NewProp_ItemTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommandBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommandBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommandBoard_Statics::ClassParams = {
		&UCommandBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommandBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UCommandBoard, UCommandBoard::StaticClass, TEXT("UCommandBoard"), &Z_Registration_Info_UClass_UCommandBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommandBoard), 2477443291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_577258901(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
