// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TitleView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_TitleView_generated_h
#error "TitleView.generated.h already included, missing '#pragma once' in TitleView.h"
#endif
#define DESENTINTOATLANTIS_TitleView_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execOpenSettings); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execStartGame);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleView(); \
	friend struct Z_Construct_UClass_UTitleView_Statics; \
public: \
	DECLARE_CLASS(UTitleView, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UTitleView)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTitleView(UTitleView&&); \
	NO_API UTitleView(const UTitleView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleView) \
	NO_API virtual ~UTitleView();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_25_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UTitleView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis_5_1_5_2_5_3_Source_DesentIntoAtlantis_Public_TitleView_h


#define FOREACH_ENUM_ETITLESTATES(op) \
	op(ETitleStates::Start) \
	op(ETitleStates::Load) \
	op(ETitleStates::Settings) \
	op(ETitleStates::Exit) 

enum class ETitleStates;
template<> struct TIsUEnumClass<ETitleStates> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ETitleStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
