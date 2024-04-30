// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Views.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_Views_generated_h
#error "Views.generated.h already included, missing '#pragma once' in Views.h"
#endif
#define DESENTINTOATLANTIS_Views_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Views_h


#define FOREACH_ENUM_EVIEWS(op) \
	op(EViews::None) \
	op(EViews::CommandBoard) \
	op(EViews::Healthbars) \
	op(EViews::CombatBackground) \
	op(EViews::CombatSelection) \
	op(EViews::Skill) \
	op(EViews::TurnCounter) \
	op(EViews::Dialogue) \
	op(EViews::EnemySkill) \
	op(EViews::Levelup) \
	op(EViews::Tutorial) \
	op(EViews::Title) \
	op(EViews::Death) \
	op(EViews::Ending) \
	op(EViews::CameraFilter) \
	op(EViews::MapView) 

enum class EViews;
template<> struct TIsUEnumClass<EViews> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EViews>();

#define FOREACH_ENUM_EUITYPE(op) \
	op(EUiType::None) \
	op(EUiType::ActiveUi) \
	op(EUiType::PersistentUi) 

enum class EUiType;
template<> struct TIsUEnumClass<EUiType> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EUiType>();

#define FOREACH_ENUM_EVIEWELEMENTS(op) \
	op(EViewElements::None) \
	op(EViewElements::PartyStatusHealthbar) \
	op(EViewElements::SkillBar) \
	op(EViewElements::EnemySelectionElement) \
	op(EViewElements::TurnCounterElement) 

enum class EViewElements;
template<> struct TIsUEnumClass<EViewElements> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EViewElements>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
