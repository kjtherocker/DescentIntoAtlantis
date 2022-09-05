// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_Skills_Base_generated_h
#error "Skills_Base.generated.h already included, missing '#pragma once' in Skills_Base.h"
#endif
#define DESENTINTOATLANTIS_Skills_Base_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkills_Base_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FSkills_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h


#define FOREACH_ENUM_ESKILLTYPE(op) \
	op(Attack) \
	op(Heal) \
	op(Defence) \
	op(Domain) 
#define FOREACH_ENUM_EAILMENT(op) \
	op(None) \
	op(Poison) \
	op(Daze) \
	op(Sleep) \
	op(Rage) 
#define FOREACH_ENUM_ESKILLRANGE(op) \
	op(Single) \
	op(Multi) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
