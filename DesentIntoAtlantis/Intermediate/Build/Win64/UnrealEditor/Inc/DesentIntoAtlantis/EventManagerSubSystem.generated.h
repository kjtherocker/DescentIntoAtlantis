// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFloorEventStates : int32;
#ifdef DESENTINTOATLANTIS_EventManagerSubSystem_generated_h
#error "EventManagerSubSystem.generated.h already included, missing '#pragma once' in EventManagerSubSystem.h"
#endif
#define DESENTINTOATLANTIS_EventManagerSubSystem_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerNextFloorEventStep); \
	DECLARE_FUNCTION(execPlayerHasTriggeredFloorEvent);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerNextFloorEventStep); \
	DECLARE_FUNCTION(execPlayerHasTriggeredFloorEvent);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventManagerSubSystem(); \
	friend struct Z_Construct_UClass_UEventManagerSubSystem_Statics; \
public: \
	DECLARE_CLASS(UEventManagerSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UEventManagerSubSystem)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEventManagerSubSystem(); \
	friend struct Z_Construct_UClass_UEventManagerSubSystem_Statics; \
public: \
	DECLARE_CLASS(UEventManagerSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UEventManagerSubSystem)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventManagerSubSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventManagerSubSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventManagerSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventManagerSubSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventManagerSubSystem(UEventManagerSubSystem&&); \
	NO_API UEventManagerSubSystem(const UEventManagerSubSystem&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventManagerSubSystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventManagerSubSystem(UEventManagerSubSystem&&); \
	NO_API UEventManagerSubSystem(const UEventManagerSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventManagerSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventManagerSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventManagerSubSystem)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_21_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UEventManagerSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_EventManagerSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
