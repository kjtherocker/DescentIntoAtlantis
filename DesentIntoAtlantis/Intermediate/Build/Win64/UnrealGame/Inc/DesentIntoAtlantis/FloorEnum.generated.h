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

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_21_DELEGATE \
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


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_22_DELEGATE \
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


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FFloorData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorEventData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FFloorEventData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FTutorialData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEnum_h


#define FOREACH_ENUM_EFLOOREVENTSTATES(op) \
	op(EFloorEventStates::DialogueOnStart) \
	op(EFloorEventStates::TutorialOnStart) \
	op(EFloorEventStates::Combat) \
	op(EFloorEventStates::DialogueOnEnd) \
	op(EFloorEventStates::TutorialOnEnd) \
	op(EFloorEventStates::Completed) 

enum class EFloorEventStates;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorEventStates>();

#define FOREACH_ENUM_EDIALOGUETRIGGERS(op) \
	op(EDialogueTriggers::None) \
	op(EDialogueTriggers::StartGame) \
	op(EDialogueTriggers::Combat1Start) \
	op(EDialogueTriggers::Combat1End) 

enum class EDialogueTriggers;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDialogueTriggers>();

#define FOREACH_ENUM_TUTORIALTRIGGERS(op) \
	op(TutorialTriggers::None) \
	op(TutorialTriggers::Combat1) \
	op(TutorialTriggers::Combat2) \
	op(TutorialTriggers::Combat3) \
	op(TutorialTriggers::Combat4) 

enum class TutorialTriggers;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<TutorialTriggers>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
