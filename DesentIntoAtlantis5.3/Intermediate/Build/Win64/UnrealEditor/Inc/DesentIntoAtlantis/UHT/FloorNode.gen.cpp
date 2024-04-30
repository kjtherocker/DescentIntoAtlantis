// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/FloorNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorNodeWallInfo();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UFloorNodeWallInfo_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void AFloorNode::StaticRegisterNativesAFloorNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorNode);
	UClass* Z_Construct_UClass_AFloorNode_NoRegister()
	{
		return AFloorNode::StaticClass();
	}
	struct Z_Construct_UClass_AFloorNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasFloorEvent_MetaData[];
#endif
		static void NewProp_hasFloorEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasFloorEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_nodeNeighbors_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_nodeNeighbors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_nodeNeighbors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_nodeNeighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_wallReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorNode.h" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_MetaData[] = {
		{ "Category", "FloorNode" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	void Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_SetBit(void* Obj)
	{
		((AFloorNode*)Obj)->hasFloorEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent = { "hasFloorEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFloorNode), &Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_MetaData), Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_ValueProp = { "nodeNeighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp = { "nodeNeighbors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors = { "nodeNeighbors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorNode, nodeNeighbors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_MetaData), Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_MetaData) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference_MetaData[] = {
		{ "Category", "FloorNode" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference = { "wallReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorNode, wallReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference_MetaData), Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_hasFloorEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_wallReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorNode_Statics::ClassParams = {
		&AFloorNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorNode()
	{
		if (!Z_Registration_Info_UClass_AFloorNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorNode.OuterSingleton, Z_Construct_UClass_AFloorNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorNode.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorNode>()
	{
		return AFloorNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorNode);
	void UFloorNodeWallInfo::StaticRegisterNativesUFloorNodeWallInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorNodeWallInfo);
	UClass* Z_Construct_UClass_UFloorNodeWallInfo_NoRegister()
	{
		return UFloorNodeWallInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFloorNodeWallInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_wallActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorNodeWallInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorNodeWallInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorNode.h" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor = { "wallActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloorNodeWallInfo, wallActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor_MetaData), Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorNodeWallInfo_Statics::NewProp_wallActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorNodeWallInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorNodeWallInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorNodeWallInfo_Statics::ClassParams = {
		&UFloorNodeWallInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorNodeWallInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorNodeWallInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFloorNodeWallInfo()
	{
		if (!Z_Registration_Info_UClass_UFloorNodeWallInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorNodeWallInfo.OuterSingleton, Z_Construct_UClass_UFloorNodeWallInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorNodeWallInfo.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UFloorNodeWallInfo>()
	{
		return UFloorNodeWallInfo::StaticClass();
	}
	UFloorNodeWallInfo::UFloorNodeWallInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorNodeWallInfo);
	UFloorNodeWallInfo::~UFloorNodeWallInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorNode, AFloorNode::StaticClass, TEXT("AFloorNode"), &Z_Registration_Info_UClass_AFloorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorNode), 3610057644U) },
		{ Z_Construct_UClass_UFloorNodeWallInfo, UFloorNodeWallInfo::StaticClass, TEXT("UFloorNodeWallInfo"), &Z_Registration_Info_UClass_UFloorNodeWallInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorNodeWallInfo), 524741027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_3288057776(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
