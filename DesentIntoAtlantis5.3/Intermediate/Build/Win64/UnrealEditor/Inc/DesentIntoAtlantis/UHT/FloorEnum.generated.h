// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloorEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFloorEventStates : int32;
#ifdef DESENTINTOATLANTIS_FloorEnum_generated_h
#error "FloorEnum.generated.h already included, missing '#pragma once' in FloorEnum.h"
#endif
#define DESENTINTOATLANTIS_FloorEnum_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_46_DELEGATE \
DESENTINTOATLANTIS_API void FNodeHasBeenWalkedOn_DelegateWrapper(const FMulticastScriptDelegate& NodeHasBeenWalkedOn, FVector2D aPositionInGrid);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_47_DELEGATE \
DESENTINTOATLANTIS_API void FTriggerNextEventStage_DelegateWrapper(const FMulticastScriptDelegate& TriggerNextEventStage, EFloorEventStates aFloorEventStates);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGimmickData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FGimmickData>();

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTeleporterGimmick_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGimmickData Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FTeleporterGimmick>();

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FFloorData>();

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorEventData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FFloorEventData>();

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatArenaData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FCombatArenaData>();

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FTutorialData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorEnum_h


#define FOREACH_ENUM_EFLOOREVENTSTATES(op) \
	op(EFloorEventStates::None) \
	op(EFloorEventStates::DialogueOnStart) \
	op(EFloorEventStates::TutorialOnStart) \
	op(EFloorEventStates::Combat) \
	op(EFloorEventStates::PostCombatLevelSwap) \
	op(EFloorEventStates::DialogueOnEnd) \
	op(EFloorEventStates::TutorialOnEnd) \
	op(EFloorEventStates::Completed) 

enum class EFloorEventStates;
template<> struct TIsUEnumClass<EFloorEventStates> { enum { Value = true }; };
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
template<> struct TIsUEnumClass<EFloorGimmicks> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorGimmicks>();

#define FOREACH_ENUM_ECOMBATARENA(op) \
	op(ECombatArena::None) \
	op(ECombatArena::Water) \
	op(ECombatArena::Prison) 

enum class ECombatArena;
template<> struct TIsUEnumClass<ECombatArena> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECombatArena>();

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
template<> struct TIsUEnumClass<EDialogueTriggers> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDialogueTriggers>();

#define FOREACH_ENUM_ETUTORIALTRIGGERS(op) \
	op(ETutorialTriggers::None) \
	op(ETutorialTriggers::Combat1Start) \
	op(ETutorialTriggers::Combat1End) \
	op(ETutorialTriggers::ArdusJoin) \
	op(ETutorialTriggers::Combat3End) 

enum class ETutorialTriggers;
template<> struct TIsUEnumClass<ETutorialTriggers> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETutorialTriggers>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
