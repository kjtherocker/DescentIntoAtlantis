// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_EnemyCombatEntity_generated_h
#error "EnemyCombatEntity.generated.h already included, missing '#pragma once' in EnemyCombatEntity.h"
#endif
#define DESENTINTOATLANTIS_EnemyCombatEntity_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyEntityData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCombatEntityData Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FEnemyEntityData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyCombatEntity_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCombatEntity Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FEnemyCombatEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h


#define FOREACH_ENUM_EENEMYCOMBATPOSITIONS(op) \
	op(EEnemyCombatPositions::Left) \
	op(EEnemyCombatPositions::Middle) \
	op(EEnemyCombatPositions::Right) 

enum class EEnemyCombatPositions;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EEnemyCombatPositions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
