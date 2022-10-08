// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_CombatEntity_generated_h
#error "CombatEntity.generated.h already included, missing '#pragma once' in CombatEntity.h"
#endif
#define DESENTINTOATLANTIS_CombatEntity_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatEntityData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FCombatEntityData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatAbilityStats_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FCombatAbilityStats>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatEntity_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FCombatEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h


#define FOREACH_ENUM_ECHARACTERTYPE(op) \
	op(ECharactertype::Undefined) \
	op(ECharactertype::Ally) \
	op(ECharactertype::Enemy) 

enum class ECharactertype;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECharactertype>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
