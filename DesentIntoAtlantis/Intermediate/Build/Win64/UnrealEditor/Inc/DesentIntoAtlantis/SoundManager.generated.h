// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_SoundManager_generated_h
#error "SoundManager.generated.h already included, missing '#pragma once' in SoundManager.h"
#endif
#define DESENTINTOATLANTIS_SoundManager_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_RPC_WRAPPERS
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoundManager(); \
	friend struct Z_Construct_UClass_ASoundManager_Statics; \
public: \
	DECLARE_CLASS(ASoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(ASoundManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_INCLASS \
private: \
	static void StaticRegisterNativesASoundManager(); \
	friend struct Z_Construct_UClass_ASoundManager_Statics; \
public: \
	DECLARE_CLASS(ASoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(ASoundManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASoundManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASoundManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoundManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoundManager(ASoundManager&&); \
	NO_API ASoundManager(const ASoundManager&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoundManager(ASoundManager&&); \
	NO_API ASoundManager(const ASoundManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoundManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoundManager)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_38_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class ASoundManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h


#define FOREACH_ENUM_EAUDIOSOURCES(op) \
	op(EAudioSources::None) \
	op(EAudioSources::OverworldMusic) \
	op(EAudioSources::CombatMusic) \
	op(EAudioSources::OverworldSoundEffect) \
	op(EAudioSources::CombatSoundEffect) 

enum class EAudioSources;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAudioSources>();

#define FOREACH_ENUM_EAUDIO(op) \
	op(EAudio::None) \
	op(EAudio::Accept) \
	op(EAudio::Footsteps) \
	op(EAudio::Selection) \
	op(EAudio::WallBounce) \
	op(EAudio::EnemyEncounter) \
	op(EAudio::Overword) \
	op(EAudio::Combat) \
	op(EAudio::FireBall) \
	op(EAudio::MainMenu) 

enum class EAudio;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAudio>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
