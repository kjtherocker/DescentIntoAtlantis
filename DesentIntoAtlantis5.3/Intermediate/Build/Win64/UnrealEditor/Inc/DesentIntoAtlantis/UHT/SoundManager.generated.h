// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_SoundManager_generated_h
#error "SoundManager.generated.h already included, missing '#pragma once' in SoundManager.h"
#endif
#define DESENTINTOATLANTIS_SoundManager_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoundManager(); \
	friend struct Z_Construct_UClass_ASoundManager_Statics; \
public: \
	DECLARE_CLASS(ASoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(ASoundManager)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoundManager(ASoundManager&&); \
	NO_API ASoundManager(const ASoundManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoundManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoundManager) \
	NO_API virtual ~ASoundManager();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_38_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class ASoundManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_SoundManager_h


#define FOREACH_ENUM_EAUDIOSOURCES(op) \
	op(EAudioSources::None) \
	op(EAudioSources::OverworldMusic) \
	op(EAudioSources::CombatMusic) \
	op(EAudioSources::OverworldSoundEffect) \
	op(EAudioSources::CombatSoundEffect) 

enum class EAudioSources;
template<> struct TIsUEnumClass<EAudioSources> { enum { Value = true }; };
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
template<> struct TIsUEnumClass<EAudio> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAudio>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
