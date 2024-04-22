// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECombatArena : int32;
class AFloorPawn;
#ifdef DESENTINTOATLANTIS_PersistentGameinstance_generated_h
#error "PersistentGameinstance.generated.h already included, missing '#pragma once' in PersistentGameinstance.h"
#endif
#define DESENTINTOATLANTIS_PersistentGameinstance_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadCombatLevel); \
	DECLARE_FUNCTION(execLoadSaveDataAndTransitionToMap); \
	DECLARE_FUNCTION(execLoadPreSetLevel); \
	DECLARE_FUNCTION(execLoadFloorPawnPosition); \
	DECLARE_FUNCTION(execSaveSessionData); \
	DECLARE_FUNCTION(execSaveFloorPawn); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execUnloadLevel);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadCombatLevel); \
	DECLARE_FUNCTION(execLoadSaveDataAndTransitionToMap); \
	DECLARE_FUNCTION(execLoadPreSetLevel); \
	DECLARE_FUNCTION(execLoadFloorPawnPosition); \
	DECLARE_FUNCTION(execSaveSessionData); \
	DECLARE_FUNCTION(execSaveFloorPawn); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execUnloadLevel);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersistentGameinstance(); \
	friend struct Z_Construct_UClass_UPersistentGameinstance_Statics; \
public: \
	DECLARE_CLASS(UPersistentGameinstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UPersistentGameinstance)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPersistentGameinstance(); \
	friend struct Z_Construct_UClass_UPersistentGameinstance_Statics; \
public: \
	DECLARE_CLASS(UPersistentGameinstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UPersistentGameinstance)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersistentGameinstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersistentGameinstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersistentGameinstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersistentGameinstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersistentGameinstance(UPersistentGameinstance&&); \
	NO_API UPersistentGameinstance(const UPersistentGameinstance&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersistentGameinstance(UPersistentGameinstance&&); \
	NO_API UPersistentGameinstance(const UPersistentGameinstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersistentGameinstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersistentGameinstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPersistentGameinstance)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_25_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UPersistentGameinstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_PersistentGameinstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
