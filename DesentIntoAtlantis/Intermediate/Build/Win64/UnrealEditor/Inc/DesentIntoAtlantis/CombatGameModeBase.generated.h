// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_CombatGameModeBase_generated_h
#error "CombatGameModeBase.generated.h already included, missing '#pragma once' in CombatGameModeBase.h"
#endif
#define DESENTINTOATLANTIS_CombatGameModeBase_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_30_DELEGATE \
static inline void FRoundEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& RoundEndDelegate) \
{ \
	RoundEndDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeLevel);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeLevel);


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatGameModeBase(); \
	friend struct Z_Construct_UClass_ACombatGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACombatGameModeBase, AAtlantisGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(ACombatGameModeBase)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesACombatGameModeBase(); \
	friend struct Z_Construct_UClass_ACombatGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACombatGameModeBase, AAtlantisGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(ACombatGameModeBase)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatGameModeBase(ACombatGameModeBase&&); \
	NO_API ACombatGameModeBase(const ACombatGameModeBase&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatGameModeBase() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatGameModeBase(ACombatGameModeBase&&); \
	NO_API ACombatGameModeBase(const ACombatGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatGameModeBase)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_31_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class ACombatGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
