// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/FloorDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorDoor() {}
// Cross Module References
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorDoor();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_AFloorDoor_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorAnimationTypes;
	static UEnum* EDoorAnimationTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDoorAnimationTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDoorAnimationTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EDoorAnimationTypes"));
		}
		return Z_Registration_Info_UEnum_EDoorAnimationTypes.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EDoorAnimationTypes>()
	{
		return EDoorAnimationTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::Enumerators[] = {
		{ "EDoorAnimationTypes::none", (int64)EDoorAnimationTypes::none },
		{ "EDoorAnimationTypes::OpenA", (int64)EDoorAnimationTypes::OpenA },
		{ "EDoorAnimationTypes::OpenB", (int64)EDoorAnimationTypes::OpenB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
		{ "none.Name", "EDoorAnimationTypes::none" },
		{ "OpenA.Name", "EDoorAnimationTypes::OpenA" },
		{ "OpenB.Name", "EDoorAnimationTypes::OpenB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EDoorAnimationTypes",
		"EDoorAnimationTypes",
		Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes()
	{
		if (!Z_Registration_Info_UEnum_EDoorAnimationTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorAnimationTypes.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDoorAnimationTypes.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventOpenDoor_Parms
		{
			EDoorAnimationTypes doorDirection;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_doorDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_doorDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::NewProp_doorDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::NewProp_doorDirection = { "doorDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventOpenDoor_Parms, doorDirection), Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes, METADATA_PARAMS(0, nullptr) }; // 451500931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::NewProp_doorDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::NewProp_doorDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "OpenDoor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventOpenDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventOpenDoor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOpenDoor_DelegateWrapper(const FMulticastScriptDelegate& OpenDoor, EDoorAnimationTypes doorDirection)
{
	struct _Script_DesentIntoAtlantis_eventOpenDoor_Parms
	{
		EDoorAnimationTypes doorDirection;
	};
	_Script_DesentIntoAtlantis_eventOpenDoor_Parms Parms;
	Parms.doorDirection=doorDirection;
	OpenDoor.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AFloorDoor::execTriggerAnimation)
	{
		P_GET_ENUM(EDoorAnimationTypes,Z_Param_doorAnimationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAnimation(EDoorAnimationTypes(Z_Param_doorAnimationType));
		P_NATIVE_END;
	}
	void AFloorDoor::StaticRegisterNativesAFloorDoor()
	{
		UClass* Class = AFloorDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerAnimation", &AFloorDoor::execTriggerAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics
	{
		struct FloorDoor_eventTriggerAnimation_Parms
		{
			EDoorAnimationTypes doorAnimationType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_doorAnimationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_doorAnimationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::NewProp_doorAnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::NewProp_doorAnimationType = { "doorAnimationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorDoor_eventTriggerAnimation_Parms, doorAnimationType), Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes, METADATA_PARAMS(0, nullptr) }; // 451500931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::NewProp_doorAnimationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::NewProp_doorAnimationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorDoor, nullptr, "TriggerAnimation", nullptr, nullptr, Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::FloorDoor_eventTriggerAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::FloorDoor_eventTriggerAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFloorDoor_TriggerAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorDoor_TriggerAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorDoor);
	UClass* Z_Construct_UClass_AFloorDoor_NoRegister()
	{
		return AFloorDoor::StaticClass();
	}
	struct Z_Construct_UClass_AFloorDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_openDoorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_openDoorDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_doorMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_doorAnimationMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_doorAnimationMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_doorAnimationMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorAnimationMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_doorAnimationMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorDoor_TriggerAnimation, "TriggerAnimation" }, // 375177165
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorDoor.h" },
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorDoor_Statics::NewProp_openDoorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFloorDoor_Statics::NewProp_openDoorDelegate = { "openDoorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorDoor, openDoorDelegate), Z_Construct_UDelegateFunction_DesentIntoAtlantis_OpenDoor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::NewProp_openDoorDelegate_MetaData), Z_Construct_UClass_AFloorDoor_Statics::NewProp_openDoorDelegate_MetaData) }; // 3896051166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorMesh_MetaData[] = {
		{ "Category", "FloorDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorMesh = { "doorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorDoor, doorMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorMesh_MetaData), Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_ValueProp = { "doorAnimationMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_Key_KeyProp = { "doorAnimationMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EDoorAnimationTypes, METADATA_PARAMS(0, nullptr) }; // 451500931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_MetaData[] = {
		{ "Category", "FloorDoor" },
		{ "ModuleRelativePath", "Public/FloorDoor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap = { "doorAnimationMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorDoor, doorAnimationMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_MetaData), Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_MetaData) }; // 451500931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorDoor_Statics::NewProp_openDoorDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorDoor_Statics::NewProp_doorAnimationMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorDoor_Statics::ClassParams = {
		&AFloorDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorDoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorDoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorDoor()
	{
		if (!Z_Registration_Info_UClass_AFloorDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorDoor.OuterSingleton, Z_Construct_UClass_AFloorDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorDoor.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<AFloorDoor>()
	{
		return AFloorDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorDoor);
	AFloorDoor::~AFloorDoor() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics::EnumInfo[] = {
		{ EDoorAnimationTypes_StaticEnum, TEXT("EDoorAnimationTypes"), &Z_Registration_Info_UEnum_EDoorAnimationTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 451500931U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorDoor, AFloorDoor::StaticClass, TEXT("AFloorDoor"), &Z_Registration_Info_UClass_AFloorDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorDoor), 761726445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_1908582021(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_FloorDoor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
