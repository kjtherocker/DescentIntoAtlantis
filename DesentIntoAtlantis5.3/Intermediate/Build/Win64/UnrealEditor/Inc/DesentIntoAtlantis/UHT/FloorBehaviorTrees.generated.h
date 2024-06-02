// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloorBehaviorTrees.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBehaviorTaskTypes : int32;
struct FCompleteFloorPawnData;
#ifdef DESENTINTOATLANTIS_FloorBehaviorTrees_generated_h
#error "FloorBehaviorTrees.generated.h already included, missing '#pragma once' in FloorBehaviorTrees.h"
#endif
#define DESENTINTOATLANTIS_FloorBehaviorTrees_generated_h

#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_26_DELEGATE \
DESENTINTOATLANTIS_API void FFloorTaskHasEnded_DelegateWrapper(const FMulticastScriptDelegate& FloorTaskHasEnded, EBehaviorTaskTypes hasBehaviorEnded);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_SPARSE_DATA
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBehaviorLogicController); \
	DECLARE_FUNCTION(execOnTaskEnd);


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_ACCESSORS
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloorBehaviorTree(); \
	friend struct Z_Construct_UClass_UFloorBehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UFloorBehaviorTree, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DesentIntoAtlantis"), NO_API) \
	DECLARE_SERIALIZER(UFloorBehaviorTree)


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorBehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorBehaviorTree(UFloorBehaviorTree&&); \
	NO_API UFloorBehaviorTree(const UFloorBehaviorTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorBehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorBehaviorTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorBehaviorTree) \
	NO_API virtual ~UFloorBehaviorTree();


#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_27_PROLOG
#define FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_SPARSE_DATA \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_ACCESSORS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESENTINTOATLANTIS_API UClass* StaticClass<class UFloorBehaviorTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorBehaviorTrees_h


#define FOREACH_ENUM_EBEHAVIORTASKTYPES(op) \
	op(EBehaviorTaskTypes::None) \
	op(EBehaviorTaskTypes::Patrol) \
	op(EBehaviorTaskTypes::ChasePlayer) \
	op(EBehaviorTaskTypes::ReturnToPatrolStart) 

enum class EBehaviorTaskTypes;
template<> struct TIsUEnumClass<EBehaviorTaskTypes> { enum { Value = true }; };
template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EBehaviorTaskTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
