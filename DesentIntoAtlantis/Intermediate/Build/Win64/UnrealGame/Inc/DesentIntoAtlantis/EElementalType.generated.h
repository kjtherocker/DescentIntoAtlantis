// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_EElementalType_generated_h
#error "EElementalType.generated.h already included, missing '#pragma once' in EElementalType.h"
#endif
#define DESENTINTOATLANTIS_EElementalType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EElementalType_h


#define FOREACH_ENUM_EELEMENTALTYPE(op) \
	op(EElementalType::Null) \
	op(EElementalType::Fire) \
	op(EElementalType::Ice) \
	op(EElementalType::Wind) \
	op(EElementalType::Lighting) \
	op(EElementalType::Shadow) \
	op(EElementalType::Light) \
	op(EElementalType::Earth) 

enum class EElementalType;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EElementalType>();

#define FOREACH_ENUM_PRESSTURNREACTIONS(op) \
	op(PressTurnReactions::Normal) \
	op(PressTurnReactions::Weak) \
	op(PressTurnReactions::Strong) \
	op(PressTurnReactions::Dodge) \
	op(PressTurnReactions::Null) \
	op(PressTurnReactions::Pass) 

enum class PressTurnReactions;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<PressTurnReactions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
