// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/Floor_EnemyPawn.h"
#include "DesentIntoAtlantis/Public/FloorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloor_EnemyPawn() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteFloorPawnData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventActivateEnemyBehavior_Parms
		{
			FCompleteFloorPawnData floorData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_floorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::NewProp_floorData = { "floorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventActivateEnemyBehavior_Parms, floorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::NewProp_floorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "ActivateEnemyBehavior__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventActivateEnemyBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventActivateEnemyBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ActivateEnemyBehavior__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActivateEnemyBehavior_DelegateWrapper(const FMulticastScriptDelegate& ActivateEnemyBehavior, FCompleteFloorPawnData floorData)
{
	struct _Script_DesentIntoAtlantis_eventActivateEnemyBehavior_Parms
	{
		FCompleteFloorPawnData floorData;
	};
	_Script_DesentIntoAtlantis_eventActivateEnemyBehavior_Parms Parms;
	Parms.floorData=floorData;
	ActivateEnemyBehavior.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AFloor_EnemyPawn::execActivateEnemysFloorBehavior)
	{
		P_GET_STRUCT(FCompleteFloorPawnData,Z_Param_aPlayerCompleteFloorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateEnemysFloorBehavior(Z_Param_aPlayerCompleteFloorData);
		P_NATIVE_END;
	}
	void AFloor_EnemyPawn::StaticRegisterNativesAFloor_EnemyPawn()
	{
		UClass* Class = AFloor_EnemyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateEnemysFloorBehavior", &AFloor_EnemyPawn::execActivateEnemysFloorBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics
	{
		struct Floor_EnemyPawn_eventActivateEnemysFloorBehavior_Parms
		{
			FCompleteFloorPawnData aPlayerCompleteFloorData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerCompleteFloorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::NewProp_aPlayerCompleteFloorData = { "aPlayerCompleteFloorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Floor_EnemyPawn_eventActivateEnemysFloorBehavior_Parms, aPlayerCompleteFloorData), Z_Construct_UScriptStruct_FCompleteFloorPawnData, METADATA_PARAMS(0, nullptr) }; // 300927908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::NewProp_aPlayerCompleteFloorData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloor_EnemyPawn, nullptr, "ActivateEnemysFloorBehavior", nullptr, nullptr, Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::Floor_EnemyPawn_eventActivateEnemysFloorBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::Floor_EnemyPawn_eventActivateEnemysFloorBehavior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloor_EnemyPawn);
	UClass* Z_Construct_UClass_AFloor_EnemyPawn_NoRegister()
	{
		return AFloor_EnemyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFloor_EnemyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialInstanceDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialInstanceDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTreeTaskTest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTreeTaskTest;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorEnemyTextures_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorEnemyTextures_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_floorEnemyTextures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorEnemyTextures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_floorEnemyTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Testooo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Testooo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloor_EnemyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFloorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloor_EnemyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloor_EnemyPawn_ActivateEnemysFloorBehavior, "ActivateEnemysFloorBehavior" }, // 86465830
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Floor_EnemyPawn.h" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_materialInstanceDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_materialInstanceDynamic = { "materialInstanceDynamic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloor_EnemyPawn, materialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_materialInstanceDynamic_MetaData), Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_materialInstanceDynamic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloor_EnemyPawn, meshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_meshComponent_MetaData), Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_meshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_behaviorTreeTaskTest_MetaData[] = {
		{ "Category", "Floor_EnemyPawn" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_behaviorTreeTaskTest = { "behaviorTreeTaskTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloor_EnemyPawn, behaviorTreeTaskTest), Z_Construct_UClass_UBehaviorTreeTaskTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_behaviorTreeTaskTest_MetaData), Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_behaviorTreeTaskTest_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_ValueProp = { "floorEnemyTextures", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_Key_KeyProp = { "floorEnemyTextures_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECardinalNodeDirections, METADATA_PARAMS(0, nullptr) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_MetaData[] = {
		{ "Category", "Floor_EnemyPawn" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures = { "floorEnemyTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloor_EnemyPawn, floorEnemyTextures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_MetaData), Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_MetaData) }; // 1177015594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo_MetaData[] = {
		{ "Category", "Floor_EnemyPawn" },
		{ "ModuleRelativePath", "Public/Floor_EnemyPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo = { "Testooo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloor_EnemyPawn, Testooo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo_MetaData), Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_materialInstanceDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_behaviorTreeTaskTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_floorEnemyTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_EnemyPawn_Statics::NewProp_Testooo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloor_EnemyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloor_EnemyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloor_EnemyPawn_Statics::ClassParams = {
		&AFloor_EnemyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloor_EnemyPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_EnemyPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloor_EnemyPawn()
	{
		if (!Z_Registration_Info_UClass_AFloor_EnemyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloor_EnemyPawn.OuterSingleton, Z_Construct_UClass_AFloor_EnemyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloor_EnemyPawn.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloor_EnemyPawn>()
	{
		return AFloor_EnemyPawn::StaticClass();
	}
	AFloor_EnemyPawn::AFloor_EnemyPawn() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloor_EnemyPawn);
	AFloor_EnemyPawn::~AFloor_EnemyPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloor_EnemyPawn, AFloor_EnemyPawn::StaticClass, TEXT("AFloor_EnemyPawn"), &Z_Registration_Info_UClass_AFloor_EnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloor_EnemyPawn), 3048677942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_3781005186(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Floor_EnemyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
