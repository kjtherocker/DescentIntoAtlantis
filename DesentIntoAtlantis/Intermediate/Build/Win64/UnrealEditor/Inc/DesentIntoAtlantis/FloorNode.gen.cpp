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
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_nodeNeighbors_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_nodeNeighbors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_nodeNeighbors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_nodeNeighbors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorNode.h" },
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_ValueProp = { "nodeNeighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp = { "nodeNeighbors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(nullptr, 0) }; // 3248041013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_MetaData[] = {
		{ "ModuleRelativePath", "FloorNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors = { "nodeNeighbors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorNode, nodeNeighbors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_MetaData)) }; // 3248041013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorNode_Statics::NewProp_nodeNeighbors,
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
		METADATA_PARAMS(Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorNode_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorNode, AFloorNode::StaticClass, TEXT("AFloorNode"), &Z_Registration_Info_UClass_AFloorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorNode), 2026094367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorNode_h_560513451(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_FloorNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
