// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyCombatEntity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_EnemyCombatEntity_generated_h
#error "EnemyCombatEntity.generated.h already included, missing '#pragma once' in EnemyCombatEntity.h"
#endif
#define DESENTINTOATLANTIS_EnemyCombatEntity_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyEntityData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCombatEntityData Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FEnemyEntityData>();

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyCombatEntity(); \
	friend struct Z_Construct_UClass_UEnemyCombatEntity_Statics; \
public: \
	DECLARE_CLASS(UEnemyCombatEntity, UCombatEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UEnemyCombatEntity)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyCombatEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyCombatEntity(UEnemyCombatEntity&&); \
	NO_API UEnemyCombatEntity(const UEnemyCombatEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyCombatEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyCombatEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyCombatEntity) \
	NO_API virtual ~UEnemyCombatEntity();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_63_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UEnemyCombatEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_EnemyCombatEntity_h


#define FOREACH_ENUM_EENEMYCOMBATPOSITIONS(op) \
	op(EEnemyCombatPositions::Left) \
	op(EEnemyCombatPositions::Middle) \
	op(EEnemyCombatPositions::Right) 

enum class EEnemyCombatPositions;
template<> struct TIsUEnumClass<EEnemyCombatPositions> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EEnemyCombatPositions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
