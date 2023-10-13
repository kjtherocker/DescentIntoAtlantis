// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloorEventData;
enum class EFloorIdentifier : int32;
#ifdef DESENTINTOATLANTIS_FloorFactory_generated_h
#error "FloorFactory.generated.h already included, missing '#pragma once' in FloorFactory.h"
#endif
#define DESENTINTOATLANTIS_FloorFactory_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReOrderFloorEventRow); \
	DECLARE_FUNCTION(execDeleteFloorEventRow); \
	DECLARE_FUNCTION(execCreateNewFloorEventRow); \
	DECLARE_FUNCTION(execOverwriteFloorEventData); \
	DECLARE_FUNCTION(execOverwriteFloorMapData);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReOrderFloorEventRow); \
	DECLARE_FUNCTION(execDeleteFloorEventRow); \
	DECLARE_FUNCTION(execCreateNewFloorEventRow); \
	DECLARE_FUNCTION(execOverwriteFloorEventData); \
	DECLARE_FUNCTION(execOverwriteFloorMapData);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloorFactory(); \
	friend struct Z_Construct_UClass_UFloorFactory_Statics; \
public: \
	DECLARE_CLASS(UFloorFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UFloorFactory)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFloorFactory(); \
	friend struct Z_Construct_UClass_UFloorFactory_Statics; \
public: \
	DECLARE_CLASS(UFloorFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UFloorFactory)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorFactory(UFloorFactory&&); \
	NO_API UFloorFactory(const UFloorFactory&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorFactory(UFloorFactory&&); \
	NO_API UFloorFactory(const UFloorFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorFactory)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_14_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UFloorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
