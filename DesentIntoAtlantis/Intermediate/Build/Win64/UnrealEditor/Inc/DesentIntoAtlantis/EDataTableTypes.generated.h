// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_EDataTableTypes_generated_h
#error "EDataTableTypes.generated.h already included, missing '#pragma once' in EDataTableTypes.h"
#endif
#define DESENTINTOATLANTIS_EDataTableTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EDataTableTypes_h


#define FOREACH_ENUM_EDATATABLETYPES(op) \
	op(EDataTableTypes::None) \
	op(EDataTableTypes::Enemys) \
	op(EDataTableTypes::EnemyGroups) \
	op(EDataTableTypes::PlayerCharacters) \
	op(EDataTableTypes::Tutorial) \
	op(EDataTableTypes::Floor) \
	op(EDataTableTypes::FloorEvent) \
	op(EDataTableTypes::Dialogue) \
	op(EDataTableTypes::Classes) 

enum class EDataTableTypes;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDataTableTypes>();

#define FOREACH_ENUM_ECLASSES(op) \
	op(EClasses::None) \
	op(EClasses::GraveKnight) \
	op(EClasses::WaterShaper) \
	op(EClasses::Thief) \
	op(EClasses::HydroArcher) 

enum class EClasses;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EClasses>();

#define FOREACH_ENUM_EPARTYMEMBERS(op) \
	op(EPartyMembers::None) \
	op(EPartyMembers::Fide) \
	op(EPartyMembers::Rain) \
	op(EPartyMembers::Fienne) \
	op(EPartyMembers::Gram) 

enum class EPartyMembers;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EPartyMembers>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
