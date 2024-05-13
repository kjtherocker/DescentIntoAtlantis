// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/Gimmick_Base.h"
#include "DesentIntoAtlantis/Public/FloorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGimmick_Base() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorDoor_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorPawn_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Base();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Base_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Doors();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Doors_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_ForcedMovement();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_ForcedMovement_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Interactable();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Interactable_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Teleporter();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UGimmick_Teleporter_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UPersistentGameinstance_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FDoorGimmick();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FUGimmickArrayWrapper();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	void UGimmick_Base::StaticRegisterNativesUGimmick_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGimmick_Base);
	UClass* Z_Construct_UClass_UGimmick_Base_NoRegister()
	{
		return UGimmick_Base::StaticClass();
	}
	struct Z_Construct_UClass_UGimmick_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGimmick_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gimmick_Base.h" },
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGimmick_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGimmick_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGimmick_Base_Statics::ClassParams = {
		&UGimmick_Base::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UGimmick_Base_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGimmick_Base()
	{
		if (!Z_Registration_Info_UClass_UGimmick_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGimmick_Base.OuterSingleton, Z_Construct_UClass_UGimmick_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGimmick_Base.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGimmick_Base>()
	{
		return UGimmick_Base::StaticClass();
	}
	UGimmick_Base::UGimmick_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGimmick_Base);
	UGimmick_Base::~UGimmick_Base() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper;
class UScriptStruct* FUGimmickArrayWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGimmickArrayWrapper, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("UGimmickArrayWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FUGimmickArrayWrapper>()
{
	return FUGimmickArrayWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GimmickArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GimmickArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GimmickArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGimmickArrayWrapper>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray_Inner = { "GimmickArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGimmick_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray = { "GimmickArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGimmickArrayWrapper, GimmickArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray_MetaData), Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewProp_GimmickArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"UGimmickArrayWrapper",
		Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::PropPointers),
		sizeof(FUGimmickArrayWrapper),
		alignof(FUGimmickArrayWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUGimmickArrayWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper.InnerSingleton, Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper.InnerSingleton;
	}
	void UGimmick_Interactable::StaticRegisterNativesUGimmick_Interactable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGimmick_Interactable);
	UClass* Z_Construct_UClass_UGimmick_Interactable_NoRegister()
	{
		return UGimmick_Interactable::StaticClass();
	}
	struct Z_Construct_UClass_UGimmick_Interactable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_persistentGameinstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_persistentGameinstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGimmick_Interactable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Interactable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Interactable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick_Base.h" },
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Interactable_Statics::NewProp_persistentGameinstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGimmick_Interactable_Statics::NewProp_persistentGameinstance = { "persistentGameinstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGimmick_Interactable, persistentGameinstance), Z_Construct_UClass_UPersistentGameinstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Interactable_Statics::NewProp_persistentGameinstance_MetaData), Z_Construct_UClass_UGimmick_Interactable_Statics::NewProp_persistentGameinstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGimmick_Interactable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGimmick_Interactable_Statics::NewProp_persistentGameinstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGimmick_Interactable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGimmick_Interactable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGimmick_Interactable_Statics::ClassParams = {
		&UGimmick_Interactable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGimmick_Interactable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Interactable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Interactable_Statics::Class_MetaDataParams), Z_Construct_UClass_UGimmick_Interactable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Interactable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGimmick_Interactable()
	{
		if (!Z_Registration_Info_UClass_UGimmick_Interactable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGimmick_Interactable.OuterSingleton, Z_Construct_UClass_UGimmick_Interactable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGimmick_Interactable.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGimmick_Interactable>()
	{
		return UGimmick_Interactable::StaticClass();
	}
	UGimmick_Interactable::UGimmick_Interactable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGimmick_Interactable);
	UGimmick_Interactable::~UGimmick_Interactable() {}
	DEFINE_FUNCTION(UGimmick_Teleporter::execActivateGimmick)
	{
		P_GET_STRUCT(FVector2D,Z_Param_aPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGimmick(Z_Param_aPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGimmick_Teleporter::execSetFloorNodeDelegate)
	{
		P_GET_OBJECT(AFloorNode,Z_Param_aFloorNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloorNodeDelegate(Z_Param_aFloorNode);
		P_NATIVE_END;
	}
	void UGimmick_Teleporter::StaticRegisterNativesUGimmick_Teleporter()
	{
		UClass* Class = UGimmick_Teleporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGimmick", &UGimmick_Teleporter::execActivateGimmick },
			{ "SetFloorNodeDelegate", &UGimmick_Teleporter::execSetFloorNodeDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics
	{
		struct Gimmick_Teleporter_eventActivateGimmick_Parms
		{
			FVector2D aPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::NewProp_aPosition = { "aPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_Teleporter_eventActivateGimmick_Parms, aPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::NewProp_aPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_Teleporter, nullptr, "ActivateGimmick", nullptr, nullptr, Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::Gimmick_Teleporter_eventActivateGimmick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::Gimmick_Teleporter_eventActivateGimmick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics
	{
		struct Gimmick_Teleporter_eventSetFloorNodeDelegate_Parms
		{
			AFloorNode* aFloorNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloorNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::NewProp_aFloorNode = { "aFloorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_Teleporter_eventSetFloorNodeDelegate_Parms, aFloorNode), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::NewProp_aFloorNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_Teleporter, nullptr, "SetFloorNodeDelegate", nullptr, nullptr, Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::Gimmick_Teleporter_eventSetFloorNodeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::Gimmick_Teleporter_eventSetFloorNodeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGimmick_Teleporter);
	UClass* Z_Construct_UClass_UGimmick_Teleporter_NoRegister()
	{
		return UGimmick_Teleporter::StaticClass();
	}
	struct Z_Construct_UClass_UGimmick_Teleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGimmick_Teleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGimmick_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Teleporter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGimmick_Teleporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGimmick_Teleporter_ActivateGimmick, "ActivateGimmick" }, // 404729462
		{ &Z_Construct_UFunction_UGimmick_Teleporter_SetFloorNodeDelegate, "SetFloorNodeDelegate" }, // 1307956859
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Teleporter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Teleporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick_Base.h" },
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGimmick_Teleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGimmick_Teleporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGimmick_Teleporter_Statics::ClassParams = {
		&UGimmick_Teleporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Teleporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGimmick_Teleporter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGimmick_Teleporter()
	{
		if (!Z_Registration_Info_UClass_UGimmick_Teleporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGimmick_Teleporter.OuterSingleton, Z_Construct_UClass_UGimmick_Teleporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGimmick_Teleporter.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGimmick_Teleporter>()
	{
		return UGimmick_Teleporter::StaticClass();
	}
	UGimmick_Teleporter::UGimmick_Teleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGimmick_Teleporter);
	UGimmick_Teleporter::~UGimmick_Teleporter() {}
	DEFINE_FUNCTION(UGimmick_ForcedMovement::execActivateGimmick)
	{
		P_GET_STRUCT(FVector2D,Z_Param_aPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGimmick(Z_Param_aPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGimmick_ForcedMovement::execSetPlayerForcedMovementDelegate)
	{
		P_GET_OBJECT(AFloorPawn,Z_Param_floorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerForcedMovementDelegate(Z_Param_floorPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGimmick_ForcedMovement::execSetFloorNodeDelegate)
	{
		P_GET_OBJECT(AFloorNode,Z_Param_aFloorNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloorNodeDelegate(Z_Param_aFloorNode);
		P_NATIVE_END;
	}
	void UGimmick_ForcedMovement::StaticRegisterNativesUGimmick_ForcedMovement()
	{
		UClass* Class = UGimmick_ForcedMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGimmick", &UGimmick_ForcedMovement::execActivateGimmick },
			{ "SetFloorNodeDelegate", &UGimmick_ForcedMovement::execSetFloorNodeDelegate },
			{ "SetPlayerForcedMovementDelegate", &UGimmick_ForcedMovement::execSetPlayerForcedMovementDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics
	{
		struct Gimmick_ForcedMovement_eventActivateGimmick_Parms
		{
			FVector2D aPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::NewProp_aPosition = { "aPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_ForcedMovement_eventActivateGimmick_Parms, aPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::NewProp_aPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_ForcedMovement, nullptr, "ActivateGimmick", nullptr, nullptr, Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::Gimmick_ForcedMovement_eventActivateGimmick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::Gimmick_ForcedMovement_eventActivateGimmick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics
	{
		struct Gimmick_ForcedMovement_eventSetFloorNodeDelegate_Parms
		{
			AFloorNode* aFloorNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloorNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::NewProp_aFloorNode = { "aFloorNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_ForcedMovement_eventSetFloorNodeDelegate_Parms, aFloorNode), Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::NewProp_aFloorNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_ForcedMovement, nullptr, "SetFloorNodeDelegate", nullptr, nullptr, Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::Gimmick_ForcedMovement_eventSetFloorNodeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::Gimmick_ForcedMovement_eventSetFloorNodeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics
	{
		struct Gimmick_ForcedMovement_eventSetPlayerForcedMovementDelegate_Parms
		{
			AFloorPawn* floorPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::NewProp_floorPawn = { "floorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_ForcedMovement_eventSetPlayerForcedMovementDelegate_Parms, floorPawn), Z_Construct_UClass_AFloorPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::NewProp_floorPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_ForcedMovement, nullptr, "SetPlayerForcedMovementDelegate", nullptr, nullptr, Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::Gimmick_ForcedMovement_eventSetPlayerForcedMovementDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::Gimmick_ForcedMovement_eventSetPlayerForcedMovementDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGimmick_ForcedMovement);
	UClass* Z_Construct_UClass_UGimmick_ForcedMovement_NoRegister()
	{
		return UGimmick_ForcedMovement::StaticClass();
	}
	struct Z_Construct_UClass_UGimmick_ForcedMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGimmick_ForcedMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGimmick_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_ForcedMovement_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGimmick_ForcedMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGimmick_ForcedMovement_ActivateGimmick, "ActivateGimmick" }, // 1316062250
		{ &Z_Construct_UFunction_UGimmick_ForcedMovement_SetFloorNodeDelegate, "SetFloorNodeDelegate" }, // 3312392337
		{ &Z_Construct_UFunction_UGimmick_ForcedMovement_SetPlayerForcedMovementDelegate, "SetPlayerForcedMovementDelegate" }, // 3732360839
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_ForcedMovement_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_ForcedMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick_Base.h" },
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGimmick_ForcedMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGimmick_ForcedMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGimmick_ForcedMovement_Statics::ClassParams = {
		&UGimmick_ForcedMovement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_ForcedMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UGimmick_ForcedMovement_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGimmick_ForcedMovement()
	{
		if (!Z_Registration_Info_UClass_UGimmick_ForcedMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGimmick_ForcedMovement.OuterSingleton, Z_Construct_UClass_UGimmick_ForcedMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGimmick_ForcedMovement.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGimmick_ForcedMovement>()
	{
		return UGimmick_ForcedMovement::StaticClass();
	}
	UGimmick_ForcedMovement::UGimmick_ForcedMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGimmick_ForcedMovement);
	UGimmick_ForcedMovement::~UGimmick_ForcedMovement() {}
	DEFINE_FUNCTION(UGimmick_Doors::execActivateGimmick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGimmick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGimmick_Doors::execSetDoorOpenDelegate)
	{
		P_GET_OBJECT(AFloorDoor,Z_Param_aFloorDoor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorOpenDelegate(Z_Param_aFloorDoor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGimmick_Doors::execSetPlayerForcedMovementDelegate)
	{
		P_GET_OBJECT(AFloorPawn,Z_Param_aFloorpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerForcedMovementDelegate(Z_Param_aFloorpawn);
		P_NATIVE_END;
	}
	void UGimmick_Doors::StaticRegisterNativesUGimmick_Doors()
	{
		UClass* Class = UGimmick_Doors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGimmick", &UGimmick_Doors::execActivateGimmick },
			{ "SetDoorOpenDelegate", &UGimmick_Doors::execSetDoorOpenDelegate },
			{ "SetPlayerForcedMovementDelegate", &UGimmick_Doors::execSetPlayerForcedMovementDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_Doors, nullptr, "ActivateGimmick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics
	{
		struct Gimmick_Doors_eventSetDoorOpenDelegate_Parms
		{
			AFloorDoor* aFloorDoor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloorDoor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::NewProp_aFloorDoor = { "aFloorDoor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_Doors_eventSetDoorOpenDelegate_Parms, aFloorDoor), Z_Construct_UClass_AFloorDoor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::NewProp_aFloorDoor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_Doors, nullptr, "SetDoorOpenDelegate", nullptr, nullptr, Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::Gimmick_Doors_eventSetDoorOpenDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::Gimmick_Doors_eventSetDoorOpenDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics
	{
		struct Gimmick_Doors_eventSetPlayerForcedMovementDelegate_Parms
		{
			AFloorPawn* aFloorpawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aFloorpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::NewProp_aFloorpawn = { "aFloorpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gimmick_Doors_eventSetPlayerForcedMovementDelegate_Parms, aFloorpawn), Z_Construct_UClass_AFloorPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::NewProp_aFloorpawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGimmick_Doors, nullptr, "SetPlayerForcedMovementDelegate", nullptr, nullptr, Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::Gimmick_Doors_eventSetPlayerForcedMovementDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::Gimmick_Doors_eventSetPlayerForcedMovementDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGimmick_Doors);
	UClass* Z_Construct_UClass_UGimmick_Doors_NoRegister()
	{
		return UGimmick_Doors::StaticClass();
	}
	struct Z_Construct_UClass_UGimmick_Doors_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_doorAnimationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorAnimationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_doorAnimationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentDoorGimmick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentDoorGimmick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGimmick_Doors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGimmick_Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGimmick_Doors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGimmick_Doors_ActivateGimmick, "ActivateGimmick" }, // 4100444774
		{ &Z_Construct_UFunction_UGimmick_Doors_SetDoorOpenDelegate, "SetDoorOpenDelegate" }, // 2551281130
		{ &Z_Construct_UFunction_UGimmick_Doors_SetPlayerForcedMovementDelegate, "SetPlayerForcedMovementDelegate" }, // 1139047302
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Doors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick_Base.h" },
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//const FString hoverOverText = \"Do you want to ascend to the next floor\";\n" },
#endif
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "const FString hoverOverText = \"Do you want to ascend to the next floor\";" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType = { "doorAnimationType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGimmick_Doors, doorAnimationType), Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType_MetaData), Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType_MetaData) }; // 451500931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_currentDoorGimmick_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gimmick_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_currentDoorGimmick = { "currentDoorGimmick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGimmick_Doors, currentDoorGimmick), Z_Construct_UScriptStruct_FDoorGimmick, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_currentDoorGimmick_MetaData), Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_currentDoorGimmick_MetaData) }; // 1787684693
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGimmick_Doors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_doorAnimationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGimmick_Doors_Statics::NewProp_currentDoorGimmick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGimmick_Doors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGimmick_Doors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGimmick_Doors_Statics::ClassParams = {
		&UGimmick_Doors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGimmick_Doors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::Class_MetaDataParams), Z_Construct_UClass_UGimmick_Doors_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmick_Doors_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGimmick_Doors()
	{
		if (!Z_Registration_Info_UClass_UGimmick_Doors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGimmick_Doors.OuterSingleton, Z_Construct_UClass_UGimmick_Doors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGimmick_Doors.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UGimmick_Doors>()
	{
		return UGimmick_Doors::StaticClass();
	}
	UGimmick_Doors::UGimmick_Doors(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGimmick_Doors);
	UGimmick_Doors::~UGimmick_Doors() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics::ScriptStructInfo[] = {
		{ FUGimmickArrayWrapper::StaticStruct, Z_Construct_UScriptStruct_FUGimmickArrayWrapper_Statics::NewStructOps, TEXT("UGimmickArrayWrapper"), &Z_Registration_Info_UScriptStruct_UGimmickArrayWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGimmickArrayWrapper), 3718211037U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGimmick_Base, UGimmick_Base::StaticClass, TEXT("UGimmick_Base"), &Z_Registration_Info_UClass_UGimmick_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGimmick_Base), 1401537033U) },
		{ Z_Construct_UClass_UGimmick_Interactable, UGimmick_Interactable::StaticClass, TEXT("UGimmick_Interactable"), &Z_Registration_Info_UClass_UGimmick_Interactable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGimmick_Interactable), 3982811649U) },
		{ Z_Construct_UClass_UGimmick_Teleporter, UGimmick_Teleporter::StaticClass, TEXT("UGimmick_Teleporter"), &Z_Registration_Info_UClass_UGimmick_Teleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGimmick_Teleporter), 2058825105U) },
		{ Z_Construct_UClass_UGimmick_ForcedMovement, UGimmick_ForcedMovement::StaticClass, TEXT("UGimmick_ForcedMovement"), &Z_Registration_Info_UClass_UGimmick_ForcedMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGimmick_ForcedMovement), 624451906U) },
		{ Z_Construct_UClass_UGimmick_Doors, UGimmick_Doors::StaticClass, TEXT("UGimmick_Doors"), &Z_Registration_Info_UClass_UGimmick_Doors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGimmick_Doors), 3858921216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_3611493454(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_Gimmick_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
