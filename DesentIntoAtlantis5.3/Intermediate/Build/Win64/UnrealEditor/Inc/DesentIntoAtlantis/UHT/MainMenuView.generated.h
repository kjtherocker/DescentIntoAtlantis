// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenuView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_MainMenuView_generated_h
#error "MainMenuView.generated.h already included, missing '#pragma once' in MainMenuView.h"
#endif
#define DESENTINTOATLANTIS_MainMenuView_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOption); \
	DECLARE_FUNCTION(execStatus); \
	DECLARE_FUNCTION(execClass); \
	DECLARE_FUNCTION(execSkills); \
	DECLARE_FUNCTION(execItem);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuView(); \
	friend struct Z_Construct_UClass_UMainMenuView_Statics; \
public: \
	DECLARE_CLASS(UMainMenuView, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuView)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuView(UMainMenuView&&); \
	NO_API UMainMenuView(const UMainMenuView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuView) \
	NO_API virtual ~UMainMenuView();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_26_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UMainMenuView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_MainMenuView_h


#define FOREACH_ENUM_EMAINMENUSTATES(op) \
	op(EMainMenuStates::None) \
	op(EMainMenuStates::Item) \
	op(EMainMenuStates::Skills) \
	op(EMainMenuStates::Class) \
	op(EMainMenuStates::Status) \
	op(EMainMenuStates::Option) 

enum class EMainMenuStates;
template<> struct TIsUEnumClass<EMainMenuStates> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EMainMenuStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
