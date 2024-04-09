// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/DialogueFactorySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueFactorySubsystem() {}
// Cross Module References
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueData();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAudio();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UDialogueFactorySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References

static_assert(std::is_polymorphic<FDialogueData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueData;
class UScriptStruct* FDialogueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueData, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("DialogueData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FDialogueData>()
{
	return FDialogueData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DialogueTriggers_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundCG;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_musicToPlay_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_musicToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_musicToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueData>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers = { "DialogueTriggers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, DialogueTriggers), Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers_MetaData)) }; // 3835709850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, Dialogue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerName_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, SpeakerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_CenterPortrait_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_CenterPortrait = { "CenterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, CenterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_CenterPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_CenterPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LeftPortrait_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LeftPortrait = { "LeftPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, LeftPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LeftPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LeftPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_RightPortrait_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_RightPortrait = { "RightPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, RightPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_RightPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_RightPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_BackgroundCG_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_BackgroundCG = { "BackgroundCG", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, BackgroundCG), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_BackgroundCG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_BackgroundCG_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay = { "musicToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueData, musicToPlay), Z_Construct_UEnum_DesentIntoAtlantis_EAudio, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay_MetaData)) }; // 767484525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_SpeakerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_CenterPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_LeftPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_RightPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_BackgroundCG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_musicToPlay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogueData",
		sizeof(FDialogueData),
		alignof(FDialogueData),
		Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueData()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton;
	}
	void UDialogueFactorySubsystem::StaticRegisterNativesUDialogueFactorySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueFactorySubsystem);
	UClass* Z_Construct_UClass_UDialogueFactorySubsystem_NoRegister()
	{
		return UDialogueFactorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueFactorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dialogueData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_dialogueData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueFactorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueFactorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueFactorySubsystem.h" },
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData_Inner = { "dialogueData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueData, METADATA_PARAMS(nullptr, 0) }; // 4045703036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueFactorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData = { "dialogueData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueFactorySubsystem, dialogueData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData_MetaData)) }; // 4045703036
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueFactorySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueFactorySubsystem_Statics::NewProp_dialogueData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueFactorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueFactorySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueFactorySubsystem_Statics::ClassParams = {
		&UDialogueFactorySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueFactorySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFactorySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueFactorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFactorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueFactorySubsystem()
	{
		if (!Z_Registration_Info_UClass_UDialogueFactorySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueFactorySubsystem.OuterSingleton, Z_Construct_UClass_UDialogueFactorySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueFactorySubsystem.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UDialogueFactorySubsystem>()
	{
		return UDialogueFactorySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueFactorySubsystem);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics::ScriptStructInfo[] = {
		{ FDialogueData::StaticStruct, Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps, TEXT("DialogueData"), &Z_Registration_Info_UScriptStruct_DialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueData), 4045703036U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueFactorySubsystem, UDialogueFactorySubsystem::StaticClass, TEXT("UDialogueFactorySubsystem"), &Z_Registration_Info_UClass_UDialogueFactorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueFactorySubsystem), 2837775758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_3929819599(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_DialogueFactorySubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
