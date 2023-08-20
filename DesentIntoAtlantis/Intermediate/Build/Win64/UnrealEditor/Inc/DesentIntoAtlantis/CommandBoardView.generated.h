// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_CommandBoardView_generated_h
#error "CommandBoardView.generated.h already included, missing '#pragma once' in CommandBoardView.h"
#endif
#define DESENTINTOATLANTIS_CommandBoardView_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPass); \
	DECLARE_FUNCTION(execEscape); \
	DECLARE_FUNCTION(execSkill); \
	DECLARE_FUNCTION(execAttack);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPass); \
	DECLARE_FUNCTION(execEscape); \
	DECLARE_FUNCTION(execSkill); \
	DECLARE_FUNCTION(execAttack);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommandBoardView(); \
	friend struct Z_Construct_UClass_UCommandBoardView_Statics; \
public: \
	DECLARE_CLASS(UCommandBoardView, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UCommandBoardView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCommandBoardView(); \
	friend struct Z_Construct_UClass_UCommandBoardView_Statics; \
public: \
	DECLARE_CLASS(UCommandBoardView, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UCommandBoardView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommandBoardView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandBoardView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommandBoardView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandBoardView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommandBoardView(UCommandBoardView&&); \
	NO_API UCommandBoardView(const UCommandBoardView&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommandBoardView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommandBoardView(UCommandBoardView&&); \
	NO_API UCommandBoardView(const UCommandBoardView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommandBoardView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandBoardView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandBoardView)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_28_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UCommandBoardView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CommandBoardView_h


#define FOREACH_ENUM_ECOMMANDBOARDSTATES(op) \
	op(ECommandBoardStates::Attack) \
	op(ECommandBoardStates::Skill) \
	op(ECommandBoardStates::Escape) \
	op(ECommandBoardStates::Pass) 

enum class ECommandBoardStates;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECommandBoardStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
