// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloorEventData;
#ifdef DESENTINTOATLANTIS_MapEventEditorView_generated_h
#error "MapEventEditorView.generated.h already included, missing '#pragma once' in MapEventEditorView.h"
#endif
#define DESENTINTOATLANTIS_MapEventEditorView_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_33_DELEGATE \
struct MapEventEditorView_eventFloorEventDelegate_Parms \
{ \
	int32 aFloorEventDataTableIndex; \
	FFloorEventData aNewEventData; \
}; \
static inline void FFloorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloorEventDelegate, int32 aFloorEventDataTableIndex, FFloorEventData& aNewEventData) \
{ \
	MapEventEditorView_eventFloorEventDelegate_Parms Parms; \
	Parms.aFloorEventDataTableIndex=aFloorEventDataTableIndex; \
	Parms.aNewEventData=aNewEventData; \
	FloorEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
	aNewEventData=Parms.aNewEventData; \
}


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_34_DELEGATE \
struct MapEventEditorView_eventFloorEventDeletionDelegate_Parms \
{ \
	int32 aFloorEventDataTableIndex; \
}; \
static inline void FFloorEventDeletionDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloorEventDeletionDelegate, int32 aFloorEventDataTableIndex) \
{ \
	MapEventEditorView_eventFloorEventDeletionDelegate_Parms Parms; \
	Parms.aFloorEventDataTableIndex=aFloorEventDataTableIndex; \
	FloorEventDeletionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_35_DELEGATE \
struct MapEventEditorView_eventFloorEventCreationDelegate_Parms \
{ \
	FFloorEventData aFloorEventData; \
}; \
static inline void FFloorEventCreationDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloorEventCreationDelegate, FFloorEventData& aFloorEventData) \
{ \
	MapEventEditorView_eventFloorEventCreationDelegate_Parms Parms; \
	Parms.aFloorEventData=aFloorEventData; \
	FloorEventCreationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
	aFloorEventData=Parms.aFloorEventData; \
}


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteEvent); \
	DECLARE_FUNCTION(execSaveEvent);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteEvent); \
	DECLARE_FUNCTION(execSaveEvent);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapEventEditorView(); \
	friend struct Z_Construct_UClass_UMapEventEditorView_Statics; \
public: \
	DECLARE_CLASS(UMapEventEditorView, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UMapEventEditorView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMapEventEditorView(); \
	friend struct Z_Construct_UClass_UMapEventEditorView_Statics; \
public: \
	DECLARE_CLASS(UMapEventEditorView, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UMapEventEditorView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapEventEditorView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapEventEditorView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapEventEditorView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapEventEditorView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapEventEditorView(UMapEventEditorView&&); \
	NO_API UMapEventEditorView(const UMapEventEditorView&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapEventEditorView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapEventEditorView(UMapEventEditorView&&); \
	NO_API UMapEventEditorView(const UMapEventEditorView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapEventEditorView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapEventEditorView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapEventEditorView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_18_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UMapEventEditorView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_MapEventEditorView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
