// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFloorEventStates : int32;
#ifdef DESENTINTOATLANTIS_FloorEventManager_generated_h
#error "FloorEventManager.generated.h already included, missing '#pragma once' in FloorEventManager.h"
#endif
#define DESENTINTOATLANTIS_FloorEventManager_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerNextFloorEventStep); \
	DECLARE_FUNCTION(execPlayerHasTriggeredFloorEvent);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerNextFloorEventStep); \
	DECLARE_FUNCTION(execPlayerHasTriggeredFloorEvent);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloorEventManager(); \
	friend struct Z_Construct_UClass_UFloorEventManager_Statics; \
public: \
	DECLARE_CLASS(UFloorEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UFloorEventManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFloorEventManager(); \
	friend struct Z_Construct_UClass_UFloorEventManager_Statics; \
public: \
	DECLARE_CLASS(UFloorEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UFloorEventManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorEventManager(UFloorEventManager&&); \
	NO_API UFloorEventManager(const UFloorEventManager&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorEventManager(UFloorEventManager&&); \
	NO_API UFloorEventManager(const UFloorEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorEventManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_19_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UFloorEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorEventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
