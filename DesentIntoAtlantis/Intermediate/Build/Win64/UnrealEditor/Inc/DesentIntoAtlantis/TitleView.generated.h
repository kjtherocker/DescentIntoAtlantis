// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_TitleView_generated_h
#error "TitleView.generated.h already included, missing '#pragma once' in TitleView.h"
#endif
#define DESENTINTOATLANTIS_TitleView_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execStartGame);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execStartGame);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleView(); \
	friend struct Z_Construct_UClass_UTitleView_Statics; \
public: \
	DECLARE_CLASS(UTitleView, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UTitleView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTitleView(); \
	friend struct Z_Construct_UClass_UTitleView_Statics; \
public: \
	DECLARE_CLASS(UTitleView, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UTitleView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTitleView(UTitleView&&); \
	NO_API UTitleView(const UTitleView&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTitleView(UTitleView&&); \
	NO_API UTitleView(const UTitleView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_23_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UTitleView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_TitleView_h


#define FOREACH_ENUM_ETITLESTATES(op) \
	op(ETitleStates::Start) \
	op(ETitleStates::Exit) 

enum class ETitleStates;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETitleStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
