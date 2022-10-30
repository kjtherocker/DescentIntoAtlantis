// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_Views_generated_h
#error "Views.generated.h already included, missing '#pragma once' in Views.h"
#endif
#define DESENTINTOATLANTIS_Views_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Views_h


#define FOREACH_ENUM_EVIEWS(op) \
	op(EViews::None) \
	op(EViews::CommandBoard) \
	op(EViews::Healthbars) \
	op(EViews::CombatBackground) \
	op(EViews::CombatSelection) \
	op(EViews::Skill) \
	op(EViews::EnemyPortraits) \
	op(EViews::TurnCounter) \
	op(EViews::Dialogue) \
	op(EViews::EnemySkill) \
	op(EViews::Levelup) \
	op(EViews::Tutorial) \
	op(EViews::Title) 

enum class EViews;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EViews>();

#define FOREACH_ENUM_EUITYPE(op) \
	op(EUiType::None) \
	op(EUiType::ActiveUi) \
	op(EUiType::PersistentUi) 

enum class EUiType;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EUiType>();

#define FOREACH_ENUM_EVIEWELEMENTS(op) \
	op(EViewElements::None) \
	op(EViewElements::PartyStatusHealthbar) \
	op(EViewElements::SkillBar) \
	op(EViewElements::EnemySelectionElement) \
	op(EViewElements::TurnCounterElement) 

enum class EViewElements;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EViewElements>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
