// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFloorEventStates : int32;
#ifdef DESENTINTOATLANTIS_FloorEnum_generated_h
#error "FloorEnum.generated.h already included, missing '#pragma once' in FloorEnum.h"
#endif
#define DESENTINTOATLANTIS_FloorEnum_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_38_DELEGATE \
struct _Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms \
{ \
	FVector2D aPositionInGrid; \
}; \
static inline void FFloorEventHasBeenTriggered_DelegateWrapper(const FMulticastScriptDelegate& FloorEventHasBeenTriggered, FVector2D aPositionInGrid) \
{ \
	_Script_DesentIntoAtlantis_eventFloorEventHasBeenTriggered_Parms Parms; \
	Parms.aPositionInGrid=aPositionInGrid; \
	FloorEventHasBeenTriggered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_39_DELEGATE \
struct _Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms \
{ \
	EFloorEventStates aFloorEventStates; \
}; \
static inline void FTriggerNextEventStage_DelegateWrapper(const FMulticastScriptDelegate& TriggerNextEventStage, EFloorEventStates aFloorEventStates) \
{ \
	_Script_DesentIntoAtlantis_eventTriggerNextEventStage_Parms Parms; \
	Parms.aFloorEventStates=aFloorEventStates; \
	TriggerNextEventStage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FFloorData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorEventData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FFloorEventData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FTutorialData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h


#define FOREACH_ENUM_EFLOOREVENTSTATES(op) \
	op(EFloorEventStates::None) \
	op(EFloorEventStates::DialogueOnStart) \
	op(EFloorEventStates::TutorialOnStart) \
	op(EFloorEventStates::Combat) \
	op(EFloorEventStates::Levelup) \
	op(EFloorEventStates::DialogueOnEnd) \
	op(EFloorEventStates::TutorialOnEnd) \
	op(EFloorEventStates::Completed) 

enum class EFloorEventStates;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorEventStates>();

#define FOREACH_ENUM_EFLOORGIMMICKS(op) \
	op(EFloorGimmicks::None) \
	op(EFloorGimmicks::Door) \
	op(EFloorGimmicks::Movement) \
	op(EFloorGimmicks::Lever) \
	op(EFloorGimmicks::Lava) \
	op(EFloorGimmicks::Teleporter) \
	op(EFloorGimmicks::Stairs) 

enum class EFloorGimmicks;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorGimmicks>();

#define FOREACH_ENUM_EDIALOGUETRIGGERS(op) \
	op(EDialogueTriggers::None) \
	op(EDialogueTriggers::StartGame) \
	op(EDialogueTriggers::Combat1Start) \
	op(EDialogueTriggers::Combat1End) \
	op(EDialogueTriggers::ArdusJoin) \
	op(EDialogueTriggers::SeresFightStart) \
	op(EDialogueTriggers::SeresFightEnd) \
	op(EDialogueTriggers::FinalBossStart) \
	op(EDialogueTriggers::FinalBossEnd) 

enum class EDialogueTriggers;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDialogueTriggers>();

#define FOREACH_ENUM_ETUTORIALTRIGGERS(op) \
	op(ETutorialTriggers::None) \
	op(ETutorialTriggers::Combat1Start) \
	op(ETutorialTriggers::Combat1End) \
	op(ETutorialTriggers::ArdusJoin) \
	op(ETutorialTriggers::Combat3End) 

enum class ETutorialTriggers;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETutorialTriggers>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
