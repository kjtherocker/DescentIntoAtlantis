// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersistentGameinstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorPawn;
enum class ECombatArena : int32;
#ifdef DESENTINTOATLANTIS_PersistentGameinstance_generated_h
#error "PersistentGameinstance.generated.h already included, missing '#pragma once' in PersistentGameinstance.h"
#endif
#define DESENTINTOATLANTIS_PersistentGameinstance_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadCombatLevel); \
	DECLARE_FUNCTION(execLoadSaveDataAndTransitionToMap); \
	DECLARE_FUNCTION(execLoadPreSetLevel); \
	DECLARE_FUNCTION(execLoadFloorPawnPosition); \
	DECLARE_FUNCTION(execSaveFloorPawn); \
	DECLARE_FUNCTION(execReturnToPreviousLevel); \
	DECLARE_FUNCTION(execLoadPreviousLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execUnloadLevel);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersistentGameinstance(); \
	friend struct Z_Construct_UClass_UPersistentGameinstance_Statics; \
public: \
	DECLARE_CLASS(UPersistentGameinstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UPersistentGameinstance)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersistentGameinstance(UPersistentGameinstance&&); \
	NO_API UPersistentGameinstance(const UPersistentGameinstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersistentGameinstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersistentGameinstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPersistentGameinstance) \
	NO_API virtual ~UPersistentGameinstance();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_26_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UPersistentGameinstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
