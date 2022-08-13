// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESENTINTOATLANTIS_Skills_Base_generated_h
#error "Skills_Base.generated.h already included, missing '#pragma once' in Skills_Base.h"
#endif
#define DESENTINTOATLANTIS_Skills_Base_generated_h

#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_SPARSE_DATA
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_RPC_WRAPPERS
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkills_Base(); \
	friend struct Z_Construct_UClass_USkills_Base_Statics; \
public: \
	DECLARE_CLASS(USkills_Base, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(USkills_Base)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUSkills_Base(); \
	friend struct Z_Construct_UClass_USkills_Base_Statics; \
public: \
	DECLARE_CLASS(USkills_Base, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(USkills_Base)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkills_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkills_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkills_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkills_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkills_Base(USkills_Base&&); \
	NO_API USkills_Base(const USkills_Base&); \
public:


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkills_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkills_Base(USkills_Base&&); \
	NO_API USkills_Base(const USkills_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkills_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkills_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkills_Base)


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_55_PROLOG
#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_RPC_WRAPPERS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_INCLASS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_SPARSE_DATA \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_INCLASS_NO_PURE_DECLS \
	FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class USkills_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_Skills_Base_h


#define FOREACH_ENUM_ESKILLTYPE(op) \
	op(Attack) \
	op(Heal) \
	op(Defence) \
	op(Domain) 
#define FOREACH_ENUM_EELEMENTALTYPES(op) \
	op(Null) \
	op(Fire) \
	op(Ice) \
	op(Wind) \
	op(Lighting) \
	op(Shadow) \
	op(Light) 
#define FOREACH_ENUM_EAILMENT(op) \
	op(None) \
	op(Poison) \
	op(Daze) \
	op(Sleep) \
	op(Rage) 
#define FOREACH_ENUM_ESKILLRANGE(op) \
	op(Single) \
	op(Multi) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
