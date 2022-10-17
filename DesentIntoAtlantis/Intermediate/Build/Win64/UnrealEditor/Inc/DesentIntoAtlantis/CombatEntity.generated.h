// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_CombatEntity_generated_h
#error "CombatEntity.generated.h already included, missing '#pragma once' in CombatEntity.h"
#endif
#define DESENTINTOATLANTIS_CombatEntity_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatEntityData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FCombatEntityData>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatAbilityStats_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<struct FCombatAbilityStats>();

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_RPC_WRAPPERS
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatEntity(); \
	friend struct Z_Construct_UClass_UCombatEntity_Statics; \
public: \
	DECLARE_CLASS(UCombatEntity, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UCombatEntity)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUCombatEntity(); \
	friend struct Z_Construct_UClass_UCombatEntity_Statics; \
public: \
	DECLARE_CLASS(UCombatEntity, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UCombatEntity)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatEntity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatEntity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatEntity(UCombatEntity&&); \
	NO_API UCombatEntity(const UCombatEntity&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatEntity(UCombatEntity&&); \
	NO_API UCombatEntity(const UCombatEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatEntity)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_92_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UCombatEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_CombatEntity_h


#define FOREACH_ENUM_ECHARACTERTYPE(op) \
	op(ECharactertype::Undefined) \
	op(ECharactertype::Ally) \
	op(ECharactertype::Enemy) 

enum class ECharactertype;
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECharactertype>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
