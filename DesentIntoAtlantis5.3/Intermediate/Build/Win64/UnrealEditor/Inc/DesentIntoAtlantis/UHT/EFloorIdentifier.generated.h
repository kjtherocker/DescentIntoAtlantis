// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFloorIdentifier.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_EFloorIdentifier_generated_h
#error "EFloorIdentifier.generated.h already included, missing '#pragma once' in EFloorIdentifier.h"
#endif
#define DESENTINTOATLANTIS_EFloorIdentifier_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_EFloorIdentifier_h


#define FOREACH_ENUM_EFLOORIDENTIFIER(op) \
	op(EFloorIdentifier::None) \
	op(EFloorIdentifier::Test) \
	op(EFloorIdentifier::Floor1) \
	op(EFloorIdentifier::Floor2) \
	op(EFloorIdentifier::Floor3) \
	op(EFloorIdentifier::PrisonCombat) 

enum class EFloorIdentifier;
template<> struct TIsUEnumClass<EFloorIdentifier> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EFloorIdentifier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
