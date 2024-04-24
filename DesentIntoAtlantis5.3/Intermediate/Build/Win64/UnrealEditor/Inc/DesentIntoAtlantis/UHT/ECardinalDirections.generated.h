// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECardinalDirections.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_ECardinalDirections_generated_h
#error "ECardinalDirections.generated.h already included, missing '#pragma once' in ECardinalDirections.h"
#endif
#define DESENTINTOATLANTIS_ECardinalDirections_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_ECardinalDirections_h


#define FOREACH_ENUM_ECARDINALNODEDIRECTIONS(op) \
	op(ECardinalNodeDirections::Empty) \
	op(ECardinalNodeDirections::Up) \
	op(ECardinalNodeDirections::Down) \
	op(ECardinalNodeDirections::Left) \
	op(ECardinalNodeDirections::Right) \
	op(ECardinalNodeDirections::AllSidesOpen) \
	op(ECardinalNodeDirections::UpDown) \
	op(ECardinalNodeDirections::UpLeft) \
	op(ECardinalNodeDirections::Upright) \
	op(ECardinalNodeDirections::LeftDown) \
	op(ECardinalNodeDirections::RightDown) \
	op(ECardinalNodeDirections::LeftRight) \
	op(ECardinalNodeDirections::UpLeftRight) \
	op(ECardinalNodeDirections::UpLeftDown) \
	op(ECardinalNodeDirections::UpRightDown) \
	op(ECardinalNodeDirections::DownLeftRight) 

enum class ECardinalNodeDirections;
template<> struct TIsUEnumClass<ECardinalNodeDirections> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECardinalNodeDirections>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
