// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPawn() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorPawnPositionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	void AFloorPawn::StaticRegisterNativesAFloorPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPawn);
	UClass* Z_Construct_UClass_AFloorPawn_NoRegister()
	{
		return AFloorPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFloorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentNodePlayerIsOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentNodePlayerIsOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeToMoveTowards_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_nodeToMoveTowards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameModeBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gameModeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previousNodePlayerWasOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_previousNodePlayerWasOn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_directionModel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_directionModel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_directionModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FloorPawn.h" },
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePlayerIsOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePlayerIsOn = { "currentNodePlayerIsOn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorPawn, currentNodePlayerIsOn), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePlayerIsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePlayerIsOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards = { "nodeToMoveTowards", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorPawn, nodeToMoveTowards), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase = { "gameModeBase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorPawn, gameModeBase), Z_Construct_UClass_ADesentIntoAtlantisGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn = { "previousNodePlayerWasOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorPawn, previousNodePlayerWasOn), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel_Inner = { "directionModel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel = { "directionModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorPawn, directionModel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_currentNodePlayerIsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_nodeToMoveTowards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_gameModeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_previousNodePlayerWasOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPawn_Statics::NewProp_directionModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPawn_Statics::ClassParams = {
		&AFloorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorPawn()
	{
		if (!Z_Registration_Info_UClass_AFloorPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPawn.OuterSingleton, Z_Construct_UClass_AFloorPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorPawn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorPawn>()
	{
		return AFloorPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPawn);
	void UFloorPawnPositionInfo::StaticRegisterNativesUFloorPawnPositionInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPawnPositionInfo);
	UClass* Z_Construct_UClass_UFloorPawnPositionInfo_NoRegister()
	{
		return UFloorPawnPositionInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPawnPositionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPawnPositionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPawnPositionInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorPawn.h" },
		{ "ModuleRelativePath", "Public/FloorPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPawnPositionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPawnPositionInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPawnPositionInfo_Statics::ClassParams = {
		&UFloorPawnPositionInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloorPawnPositionInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPawnPositionInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPawnPositionInfo()
	{
		if (!Z_Registration_Info_UClass_UFloorPawnPositionInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPawnPositionInfo.OuterSingleton, Z_Construct_UClass_UFloorPawnPositionInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPawnPositionInfo.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorPawnPositionInfo>()
	{
		return UFloorPawnPositionInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPawnPositionInfo);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPawn, AFloorPawn::StaticClass, TEXT("AFloorPawn"), &Z_Registration_Info_UClass_AFloorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPawn), 73854899U) },
		{ Z_Construct_UClass_UFloorPawnPositionInfo, UFloorPawnPositionInfo::StaticClass, TEXT("UFloorPawnPositionInfo"), &Z_Registration_Info_UClass_UFloorPawnPositionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPawnPositionInfo), 3445471168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_1553924005(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_FloorPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
