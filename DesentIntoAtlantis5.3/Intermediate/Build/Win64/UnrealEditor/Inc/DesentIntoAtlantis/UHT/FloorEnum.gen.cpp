// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorEnum() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EViews();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCombatArenaData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloorEventStates;
	static UEnum* EFloorEventStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFloorEventStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFloorEventStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EFloorEventStates"));
		}
		return Z_Registration_Info_UEnum_EFloorEventStates.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorEventStates>()
	{
		return EFloorEventStates_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enumerators[] = {
		{ "EFloorEventStates::None", (int64)EFloorEventStates::None },
		{ "EFloorEventStates::DialogueOnStart", (int64)EFloorEventStates::DialogueOnStart },
		{ "EFloorEventStates::TutorialOnStart", (int64)EFloorEventStates::TutorialOnStart },
		{ "EFloorEventStates::Combat", (int64)EFloorEventStates::Combat },
		{ "EFloorEventStates::PostCombatLevelSwap", (int64)EFloorEventStates::PostCombatLevelSwap },
		{ "EFloorEventStates::DialogueOnEnd", (int64)EFloorEventStates::DialogueOnEnd },
		{ "EFloorEventStates::TutorialOnEnd", (int64)EFloorEventStates::TutorialOnEnd },
		{ "EFloorEventStates::Completed", (int64)EFloorEventStates::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enum_MetaDataParams[] = {
		{ "Combat.Name", "EFloorEventStates::Combat" },
		{ "Completed.Name", "EFloorEventStates::Completed" },
		{ "DialogueOnEnd.Name", "EFloorEventStates::DialogueOnEnd" },
		{ "DialogueOnStart.Name", "EFloorEventStates::DialogueOnStart" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "EFloorEventStates::None" },
		{ "PostCombatLevelSwap.Name", "EFloorEventStates::PostCombatLevelSwap" },
		{ "TutorialOnEnd.Name", "EFloorEventStates::TutorialOnEnd" },
		{ "TutorialOnStart.Name", "EFloorEventStates::TutorialOnStart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EFloorEventStates",
		"EFloorEventStates",
		Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates()
	{
		if (!Z_Registration_Info_UEnum_EFloorEventStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloorEventStates.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFloorEventStates.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloorGimmicks;
	static UEnum* EFloorGimmicks_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFloorGimmicks.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFloorGimmicks.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EFloorGimmicks"));
		}
		return Z_Registration_Info_UEnum_EFloorGimmicks.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorGimmicks>()
	{
		return EFloorGimmicks_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::Enumerators[] = {
		{ "EFloorGimmicks::None", (int64)EFloorGimmicks::None },
		{ "EFloorGimmicks::Door", (int64)EFloorGimmicks::Door },
		{ "EFloorGimmicks::Movement", (int64)EFloorGimmicks::Movement },
		{ "EFloorGimmicks::Lever", (int64)EFloorGimmicks::Lever },
		{ "EFloorGimmicks::Lava", (int64)EFloorGimmicks::Lava },
		{ "EFloorGimmicks::Teleporter", (int64)EFloorGimmicks::Teleporter },
		{ "EFloorGimmicks::Stairs", (int64)EFloorGimmicks::Stairs },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::Enum_MetaDataParams[] = {
		{ "Door.Name", "EFloorGimmicks::Door" },
		{ "Lava.Name", "EFloorGimmicks::Lava" },
		{ "Lever.Name", "EFloorGimmicks::Lever" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "Movement.Name", "EFloorGimmicks::Movement" },
		{ "None.Name", "EFloorGimmicks::None" },
		{ "Stairs.Name", "EFloorGimmicks::Stairs" },
		{ "Teleporter.Name", "EFloorGimmicks::Teleporter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EFloorGimmicks",
		"EFloorGimmicks",
		Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks()
	{
		if (!Z_Registration_Info_UEnum_EFloorGimmicks.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloorGimmicks.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFloorGimmicks.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatArena;
	static UEnum* ECombatArena_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatArena.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatArena.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ECombatArena"));
		}
		return Z_Registration_Info_UEnum_ECombatArena.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECombatArena>()
	{
		return ECombatArena_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::Enumerators[] = {
		{ "ECombatArena::None", (int64)ECombatArena::None },
		{ "ECombatArena::Water", (int64)ECombatArena::Water },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "ECombatArena::None" },
		{ "Water.Name", "ECombatArena::Water" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ECombatArena",
		"ECombatArena",
		Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena()
	{
		if (!Z_Registration_Info_UEnum_ECombatArena.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatArena.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ECombatArena_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatArena.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms
		{
			FVector2D aPositionInGrid;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPositionInGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::NewProp_aPositionInGrid = { "aPositionInGrid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms, aPositionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::NewProp_aPositionInGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "FloorEventHasBeenTriggered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_FloorEventHasBeenTriggered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFloorEventHasBeenTriggered_DelegateWrapper(const FMulticastScriptDelegate& FloorEventHasBeenTriggered, FVector2D aPositionInGrid)
{
	struct _Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms
	{
		FVector2D aPositionInGrid;
	};
	_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms Parms;
	Parms.aPositionInGrid=aPositionInGrid;
	FloorEventHasBeenTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms
		{
			EFloorEventStates aFloorEventStates;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aFloorEventStates_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aFloorEventStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates = { "aFloorEventStates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms, aFloorEventStates), Z_Construct_UEnum_DesentIntoAtlantis_EFloorEventStates, METADATA_PARAMS(0, nullptr) }; // 1281561784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::NewProp_aFloorEventStates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "TriggerNextEventStage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_TriggerNextEventStage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTriggerNextEventStage_DelegateWrapper(const FMulticastScriptDelegate& TriggerNextEventStage, EFloorEventStates aFloorEventStates)
{
	struct _Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms
	{
		EFloorEventStates aFloorEventStates;
	};
	_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms Parms;
	Parms.aFloorEventStates=aFloorEventStates;
	TriggerNextEventStage.ProcessMulticastDelegate<UObject>(&Parms);
}

static_assert(std::is_polymorphic<FFloorData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFloorData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloorData;
class UScriptStruct* FFloorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("FloorData"));
	}
	return Z_Registration_Info_UScriptStruct_FloorData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FFloorData>()
{
	return FFloorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorBlueprint_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floorBlueprint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startPosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorGimmicks_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorGimmicks_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorGimmicks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorGimmicks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorGimmicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_Inner = { "floorBlueprint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint = { "floorBlueprint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorData, floorBlueprint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_MetaData), Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier = { "floorIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorData, floorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_MetaData), Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_MetaData) }; // 1497107215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorData, startPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition_MetaData), Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_ValueProp = { "floorGimmicks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_DesentIntoAtlantis_EFloorGimmicks, METADATA_PARAMS(0, nullptr) }; // 3664590536
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_Key_KeyProp = { "floorGimmicks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_MetaData[] = {
		{ "Category", "FloorData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks = { "floorGimmicks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorData, floorGimmicks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_MetaData), Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_MetaData) }; // 3664590536
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_startPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorData_Statics::NewProp_floorGimmicks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FloorData",
		Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers),
		sizeof(FFloorData),
		alignof(FFloorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloorData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloorData()
	{
		if (!Z_Registration_Info_UScriptStruct_FloorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloorData.InnerSingleton, Z_Construct_UScriptStruct_FFloorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloorData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueTriggers;
	static UEnum* EDialogueTriggers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogueTriggers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogueTriggers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EDialogueTriggers"));
		}
		return Z_Registration_Info_UEnum_EDialogueTriggers.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDialogueTriggers>()
	{
		return EDialogueTriggers_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enumerators[] = {
		{ "EDialogueTriggers::None", (int64)EDialogueTriggers::None },
		{ "EDialogueTriggers::StartGame", (int64)EDialogueTriggers::StartGame },
		{ "EDialogueTriggers::Combat1Start", (int64)EDialogueTriggers::Combat1Start },
		{ "EDialogueTriggers::Combat1End", (int64)EDialogueTriggers::Combat1End },
		{ "EDialogueTriggers::ArdusJoin", (int64)EDialogueTriggers::ArdusJoin },
		{ "EDialogueTriggers::SeresFightStart", (int64)EDialogueTriggers::SeresFightStart },
		{ "EDialogueTriggers::SeresFightEnd", (int64)EDialogueTriggers::SeresFightEnd },
		{ "EDialogueTriggers::FinalBossStart", (int64)EDialogueTriggers::FinalBossStart },
		{ "EDialogueTriggers::FinalBossEnd", (int64)EDialogueTriggers::FinalBossEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enum_MetaDataParams[] = {
		{ "ArdusJoin.Name", "EDialogueTriggers::ArdusJoin" },
		{ "Combat1End.Name", "EDialogueTriggers::Combat1End" },
		{ "Combat1Start.Name", "EDialogueTriggers::Combat1Start" },
		{ "FinalBossEnd.Name", "EDialogueTriggers::FinalBossEnd" },
		{ "FinalBossStart.Name", "EDialogueTriggers::FinalBossStart" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "EDialogueTriggers::None" },
		{ "SeresFightEnd.Name", "EDialogueTriggers::SeresFightEnd" },
		{ "SeresFightStart.Name", "EDialogueTriggers::SeresFightStart" },
		{ "StartGame.Name", "EDialogueTriggers::StartGame" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EDialogueTriggers",
		"EDialogueTriggers",
		Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers()
	{
		if (!Z_Registration_Info_UEnum_EDialogueTriggers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueTriggers.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogueTriggers.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETutorialTriggers;
	static UEnum* ETutorialTriggers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETutorialTriggers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETutorialTriggers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ETutorialTriggers"));
		}
		return Z_Registration_Info_UEnum_ETutorialTriggers.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETutorialTriggers>()
	{
		return ETutorialTriggers_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enumerators[] = {
		{ "ETutorialTriggers::None", (int64)ETutorialTriggers::None },
		{ "ETutorialTriggers::Combat1Start", (int64)ETutorialTriggers::Combat1Start },
		{ "ETutorialTriggers::Combat1End", (int64)ETutorialTriggers::Combat1End },
		{ "ETutorialTriggers::ArdusJoin", (int64)ETutorialTriggers::ArdusJoin },
		{ "ETutorialTriggers::Combat3End", (int64)ETutorialTriggers::Combat3End },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enum_MetaDataParams[] = {
		{ "ArdusJoin.Name", "ETutorialTriggers::ArdusJoin" },
		{ "Combat1End.Name", "ETutorialTriggers::Combat1End" },
		{ "Combat1Start.Name", "ETutorialTriggers::Combat1Start" },
		{ "Combat3End.Name", "ETutorialTriggers::Combat3End" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
		{ "None.Name", "ETutorialTriggers::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ETutorialTriggers",
		"ETutorialTriggers",
		Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers()
	{
		if (!Z_Registration_Info_UEnum_ETutorialTriggers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETutorialTriggers.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETutorialTriggers.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloorEventData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFloorEventData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloorEventData;
class UScriptStruct* FFloorEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloorEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloorEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorEventData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("FloorEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FloorEventData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FFloorEventData>()
{
	return FFloorEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloorEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorIdentifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionInGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_positionInGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_enemyGroupName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tutorialTriggerOnStart_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialTriggerOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialTriggerOnStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tutorialTriggerOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialTriggerOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialTriggerOnEnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dialogueTriggerOnStart_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueTriggerOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dialogueTriggerOnStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_dialogueTriggerOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueTriggerOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dialogueTriggerOnEnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_partyMemberGainedOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyMemberGainedOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_partyMemberGainedOnEnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_viewPushedOnEnd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_viewPushedOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_viewPushedOnEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloorEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorEventData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier = { "floorIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, floorIdentifier), Z_Construct_UEnum_DesentIntoAtlantis_EFloorIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_MetaData) }; // 1497107215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid = { "positionInGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, positionInGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName = { "enemyGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, enemyGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart = { "tutorialTriggerOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, tutorialTriggerOnStart), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_MetaData) }; // 2742774201
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd = { "tutorialTriggerOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, tutorialTriggerOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_MetaData) }; // 2742774201
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart = { "dialogueTriggerOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, dialogueTriggerOnStart), Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_MetaData) }; // 587835333
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd = { "dialogueTriggerOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, dialogueTriggerOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_EDialogueTriggers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_MetaData) }; // 587835333
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd = { "partyMemberGainedOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, partyMemberGainedOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_EPartyMembers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_MetaData) }; // 781165082
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_MetaData[] = {
		{ "Category", "FloorEventData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd = { "viewPushedOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorEventData, viewPushedOnEnd), Z_Construct_UEnum_DesentIntoAtlantis_EViews, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_MetaData), Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_MetaData) }; // 3905146525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_floorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_positionInGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_enemyGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_tutorialTriggerOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_dialogueTriggerOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_partyMemberGainedOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorEventData_Statics::NewProp_viewPushedOnEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FloorEventData",
		Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers),
		sizeof(FFloorEventData),
		alignof(FFloorEventData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloorEventData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorEventData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloorEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_FloorEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloorEventData.InnerSingleton, Z_Construct_UScriptStruct_FFloorEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloorEventData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCombatArenaData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatArenaData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatArenaData;
class UScriptStruct* FCombatArenaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatArenaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatArenaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatArenaData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CombatArenaData"));
	}
	return Z_Registration_Info_UScriptStruct_CombatArenaData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCombatArenaData>()
{
	return FCombatArenaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCombatArenaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_levelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_enemyGroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatArenaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatArenaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_levelName_MetaData[] = {
		{ "Category", "CombatArenaData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatArenaData, levelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_levelName_MetaData), Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_levelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_enemyGroupName_MetaData[] = {
		{ "Category", "CombatArenaData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_enemyGroupName = { "enemyGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatArenaData, enemyGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_enemyGroupName_MetaData), Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_enemyGroupName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatArenaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_levelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewProp_enemyGroupName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatArenaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CombatArenaData",
		Z_Construct_UScriptStruct_FCombatArenaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatArenaData_Statics::PropPointers),
		sizeof(FCombatArenaData),
		alignof(FCombatArenaData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatArenaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatArenaData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatArenaData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCombatArenaData()
	{
		if (!Z_Registration_Info_UScriptStruct_CombatArenaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatArenaData.InnerSingleton, Z_Construct_UScriptStruct_FCombatArenaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CombatArenaData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTutorialData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTutorialData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialData;
class UScriptStruct* FTutorialData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialData, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("TutorialData"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialData.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FTutorialData>()
{
	return FTutorialData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_tutorialTrigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tutorialTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tutorialTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_characterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_classDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletPoint1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bulletPoint1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletPoint2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bulletPoint2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletPoint3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bulletPoint3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterPortrait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterPortrait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger = { "tutorialTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, tutorialTrigger), Z_Construct_UEnum_DesentIntoAtlantis_ETutorialTriggers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_MetaData) }; // 2742774201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle = { "classTitle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, classTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, characterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription = { "classDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, classDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1 = { "bulletPoint1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, bulletPoint1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2 = { "bulletPoint2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, bulletPoint2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3 = { "bulletPoint3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, bulletPoint3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait_MetaData[] = {
		{ "Category", "TutorialData" },
		{ "ModuleRelativePath", "Public/FloorEnum.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait = { "characterPortrait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTutorialData, characterPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait_MetaData), Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_tutorialTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_classDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_bulletPoint3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_characterPortrait,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TutorialData",
		Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers),
		sizeof(FTutorialData),
		alignof(FTutorialData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialData()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialData.InnerSingleton, Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::EnumInfo[] = {
		{ EFloorEventStates_StaticEnum, TEXT("EFloorEventStates"), &Z_Registration_Info_UEnum_EFloorEventStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1281561784U) },
		{ EFloorGimmicks_StaticEnum, TEXT("EFloorGimmicks"), &Z_Registration_Info_UEnum_EFloorGimmicks, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3664590536U) },
		{ ECombatArena_StaticEnum, TEXT("ECombatArena"), &Z_Registration_Info_UEnum_ECombatArena, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1732030331U) },
		{ EDialogueTriggers_StaticEnum, TEXT("EDialogueTriggers"), &Z_Registration_Info_UEnum_EDialogueTriggers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 587835333U) },
		{ ETutorialTriggers_StaticEnum, TEXT("ETutorialTriggers"), &Z_Registration_Info_UEnum_ETutorialTriggers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2742774201U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::ScriptStructInfo[] = {
		{ FFloorData::StaticStruct, Z_Construct_UScriptStruct_FFloorData_Statics::NewStructOps, TEXT("FloorData"), &Z_Registration_Info_UScriptStruct_FloorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorData), 1634604428U) },
		{ FFloorEventData::StaticStruct, Z_Construct_UScriptStruct_FFloorEventData_Statics::NewStructOps, TEXT("FloorEventData"), &Z_Registration_Info_UScriptStruct_FloorEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorEventData), 636752671U) },
		{ FCombatArenaData::StaticStruct, Z_Construct_UScriptStruct_FCombatArenaData_Statics::NewStructOps, TEXT("CombatArenaData"), &Z_Registration_Info_UScriptStruct_CombatArenaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatArenaData), 3277251417U) },
		{ FTutorialData::StaticStruct, Z_Construct_UScriptStruct_FTutorialData_Statics::NewStructOps, TEXT("TutorialData"), &Z_Registration_Info_UScriptStruct_TutorialData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialData), 1079114697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_998384675(TEXT("/Script/DesentIntoAtlantis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
