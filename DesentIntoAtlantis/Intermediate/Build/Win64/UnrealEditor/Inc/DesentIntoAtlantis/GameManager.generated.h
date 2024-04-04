// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define DESENTINTOATLANTIS_GameManager_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetPlayerToPreviousPosition); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execSetUpTitleMenu);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetPlayerToPreviousPosition); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execSetUpTitleMenu);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend struct Z_Construct_UClass_UGameManager_Statics; \
public: \
	DECLARE_CLASS(UGameManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UGameManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend struct Z_Construct_UClass_UGameManager_Statics; \
public: \
	DECLARE_CLASS(UGameManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UGameManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_13_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
