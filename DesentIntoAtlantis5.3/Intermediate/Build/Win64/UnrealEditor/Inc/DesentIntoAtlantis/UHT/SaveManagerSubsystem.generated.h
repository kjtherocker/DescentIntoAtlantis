// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveManagerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPersistentGameinstance;
enum class ECardinalNodeDirections : int32;
struct FEventManagerData;
#ifdef DESENTINTOATLANTIS_SaveManagerSubsystem_generated_h
#error "SaveManagerSubsystem.generated.h already included, missing '#pragma once' in SaveManagerSubsystem.h"
#endif
#define DESENTINTOATLANTIS_SaveManagerSubsystem_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConsumeGameSaveLoadingFlag); \
	DECLARE_FUNCTION(execSetEventManagerData); \
	DECLARE_FUNCTION(execLoadSaveDataAndTransitionToMap); \
	DECLARE_FUNCTION(execLoadPreSetLevel); \
	DECLARE_FUNCTION(execLoadFloorPawnRotation); \
	DECLARE_FUNCTION(execSaveSessionData); \
	DECLARE_FUNCTION(execReturnToPreviousLevel); \
	DECLARE_FUNCTION(execInitializeSubsystem);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManagerSubsystem(); \
	friend struct Z_Construct_UClass_USaveManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(USaveManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(USaveManagerSubsystem)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManagerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManagerSubsystem(USaveManagerSubsystem&&); \
	NO_API USaveManagerSubsystem(const USaveManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveManagerSubsystem) \
	NO_API virtual ~USaveManagerSubsystem();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_14_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class USaveManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SaveManagerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
