// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/CombatEntityWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEntityWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UAilmentShellTakeOver();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UAilmentShellTakeOver_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCalculateDamage_Base();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCalculateDamage_Base_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCalculateDamage_Fear();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCalculateDamage_Fear_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntity_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntityWrapper();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_UCombatEntityWrapper_NoRegister();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType();
	DESENTINTOATLANTIS_API UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FAilmentInfo();
	DESENTINTOATLANTIS_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatEntityWrapperType;
	static UEnum* ECombatEntityWrapperType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatEntityWrapperType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatEntityWrapperType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("ECombatEntityWrapperType"));
		}
		return Z_Registration_Info_UEnum_ECombatEntityWrapperType.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<ECombatEntityWrapperType>()
	{
		return ECombatEntityWrapperType_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::Enumerators[] = {
		{ "ECombatEntityWrapperType::None", (int64)ECombatEntityWrapperType::None },
		{ "ECombatEntityWrapperType::CalculateDamage", (int64)ECombatEntityWrapperType::CalculateDamage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::Enum_MetaDataParams[] = {
		{ "CalculateDamage.Name", "ECombatEntityWrapperType::CalculateDamage" },
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
		{ "None.Name", "ECombatEntityWrapperType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"ECombatEntityWrapperType",
		"ECombatEntityWrapperType",
		Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType()
	{
		if (!Z_Registration_Info_UEnum_ECombatEntityWrapperType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatEntityWrapperType.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatEntityWrapperType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics
	{
		struct _Script_DesentIntoAtlantis_eventResetOneWrapperToDefault_Parms
		{
			ECombatEntityWrapperType shelltype;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_shelltype_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_shelltype;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::NewProp_shelltype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::NewProp_shelltype = { "shelltype", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DesentIntoAtlantis_eventResetOneWrapperToDefault_Parms, shelltype), Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType, METADATA_PARAMS(0, nullptr) }; // 1506590368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::NewProp_shelltype_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::NewProp_shelltype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UENUM()\n//class enum ECreaturesAilment\n//{\n//\x09None,\n//\x09Poison,\n//\x09""Daze,\n//\x09Sleep,\n//\x09Rage,\n//};\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UENUM()\nclass enum ECreaturesAilment\n{\n       None,\n       Poison,\n       Daze,\n       Sleep,\n       Rage,\n};" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis, nullptr, "ResetOneWrapperToDefault__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventResetOneWrapperToDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::_Script_DesentIntoAtlantis_eventResetOneWrapperToDefault_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResetOneWrapperToDefault_DelegateWrapper(const FMulticastScriptDelegate& ResetOneWrapperToDefault, ECombatEntityWrapperType shelltype)
{
	struct _Script_DesentIntoAtlantis_eventResetOneWrapperToDefault_Parms
	{
		ECombatEntityWrapperType shelltype;
	};
	_Script_DesentIntoAtlantis_eventResetOneWrapperToDefault_Parms Parms;
	Parms.shelltype=shelltype;
	ResetOneWrapperToDefault.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AilmentInfo;
class UScriptStruct* FAilmentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AilmentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AilmentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAilmentInfo, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("AilmentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AilmentInfo.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FAilmentInfo>()
{
	return FAilmentInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAilmentInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_resetShellToDefault_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_resetShellToDefault;
		static const UECodeGen_Private::FIntPropertyParams NewProp_combatEntityWrapperType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatEntityWrapperType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_combatEntityWrapperType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ailmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ailmentLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAilmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAilmentInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_resetShellToDefault_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//\x09""EStatusAilments statusAilment;\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\n       EStatusAilments statusAilment;" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_resetShellToDefault = { "resetShellToDefault", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAilmentInfo, resetShellToDefault), Z_Construct_UDelegateFunction_DesentIntoAtlantis_ResetOneWrapperToDefault__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_resetShellToDefault_MetaData), Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_resetShellToDefault_MetaData) }; // 4226140094
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType = { "combatEntityWrapperType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAilmentInfo, combatEntityWrapperType), Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType_MetaData), Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType_MetaData) }; // 1506590368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_ailmentLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_ailmentLength = { "ailmentLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAilmentInfo, ailmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_ailmentLength_MetaData), Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_ailmentLength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAilmentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_resetShellToDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_combatEntityWrapperType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewProp_ailmentLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAilmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"AilmentInfo",
		Z_Construct_UScriptStruct_FAilmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAilmentInfo_Statics::PropPointers),
		sizeof(FAilmentInfo),
		alignof(FAilmentInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAilmentInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAilmentInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAilmentInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAilmentInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AilmentInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AilmentInfo.InnerSingleton, Z_Construct_UScriptStruct_FAilmentInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AilmentInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo;
class UScriptStruct* FCompleteEntityWrapperInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo, (UObject*)Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("CompleteEntityWrapperInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo.OuterSingleton;
}
template<> DESENTINTOATLANTIS_API UScriptStruct* StaticStruct<FCompleteEntityWrapperInfo>()
{
	return FCompleteEntityWrapperInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ailments_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ailments_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ailments_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ailments_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ailments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteEntityWrapperInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_ValueProp = { "ailments", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAilmentInfo, METADATA_PARAMS(0, nullptr) }; // 1970845933
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_Key_KeyProp = { "ailments_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType, METADATA_PARAMS(0, nullptr) }; // 1506590368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments = { "ailments", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteEntityWrapperInfo, ailments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_MetaData), Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_MetaData) }; // 1506590368 1970845933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewProp_ailments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		&NewStructOps,
		"CompleteEntityWrapperInfo",
		Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::PropPointers),
		sizeof(FCompleteEntityWrapperInfo),
		alignof(FCompleteEntityWrapperInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo.InnerSingleton, Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo.InnerSingleton;
	}
	void UAilmentShellTakeOver::StaticRegisterNativesUAilmentShellTakeOver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAilmentShellTakeOver);
	UClass* Z_Construct_UClass_UAilmentShellTakeOver_NoRegister()
	{
		return UAilmentShellTakeOver::StaticClass();
	}
	struct Z_Construct_UClass_UAilmentShellTakeOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAilmentShellTakeOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAilmentShellTakeOver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAilmentShellTakeOver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntityWrapper.h" },
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAilmentShellTakeOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAilmentShellTakeOver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAilmentShellTakeOver_Statics::ClassParams = {
		&UAilmentShellTakeOver::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAilmentShellTakeOver_Statics::Class_MetaDataParams), Z_Construct_UClass_UAilmentShellTakeOver_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAilmentShellTakeOver()
	{
		if (!Z_Registration_Info_UClass_UAilmentShellTakeOver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAilmentShellTakeOver.OuterSingleton, Z_Construct_UClass_UAilmentShellTakeOver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAilmentShellTakeOver.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UAilmentShellTakeOver>()
	{
		return UAilmentShellTakeOver::StaticClass();
	}
	UAilmentShellTakeOver::UAilmentShellTakeOver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAilmentShellTakeOver);
	UAilmentShellTakeOver::~UAilmentShellTakeOver() {}
	void UCalculateDamage_Base::StaticRegisterNativesUCalculateDamage_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCalculateDamage_Base);
	UClass* Z_Construct_UClass_UCalculateDamage_Base_NoRegister()
	{
		return UCalculateDamage_Base::StaticClass();
	}
	struct Z_Construct_UClass_UCalculateDamage_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCalculateDamage_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAilmentShellTakeOver,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCalculateDamage_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculateDamage_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntityWrapper.h" },
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCalculateDamage_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCalculateDamage_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCalculateDamage_Base_Statics::ClassParams = {
		&UCalculateDamage_Base::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCalculateDamage_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UCalculateDamage_Base_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCalculateDamage_Base()
	{
		if (!Z_Registration_Info_UClass_UCalculateDamage_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCalculateDamage_Base.OuterSingleton, Z_Construct_UClass_UCalculateDamage_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCalculateDamage_Base.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCalculateDamage_Base>()
	{
		return UCalculateDamage_Base::StaticClass();
	}
	UCalculateDamage_Base::UCalculateDamage_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCalculateDamage_Base);
	UCalculateDamage_Base::~UCalculateDamage_Base() {}
	void UCalculateDamage_Fear::StaticRegisterNativesUCalculateDamage_Fear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCalculateDamage_Fear);
	UClass* Z_Construct_UClass_UCalculateDamage_Fear_NoRegister()
	{
		return UCalculateDamage_Fear::StaticClass();
	}
	struct Z_Construct_UClass_UCalculateDamage_Fear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCalculateDamage_Fear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCalculateDamage_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCalculateDamage_Fear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalculateDamage_Fear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntityWrapper.h" },
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCalculateDamage_Fear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCalculateDamage_Fear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCalculateDamage_Fear_Statics::ClassParams = {
		&UCalculateDamage_Fear::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCalculateDamage_Fear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCalculateDamage_Fear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCalculateDamage_Fear()
	{
		if (!Z_Registration_Info_UClass_UCalculateDamage_Fear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCalculateDamage_Fear.OuterSingleton, Z_Construct_UClass_UCalculateDamage_Fear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCalculateDamage_Fear.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCalculateDamage_Fear>()
	{
		return UCalculateDamage_Fear::StaticClass();
	}
	UCalculateDamage_Fear::UCalculateDamage_Fear(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCalculateDamage_Fear);
	UCalculateDamage_Fear::~UCalculateDamage_Fear() {}
	DEFINE_FUNCTION(UCombatEntityWrapper::execRemoveAilment)
	{
		P_GET_ENUM(ECombatEntityWrapperType,Z_Param_aCombatEntityWrapperType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAilment(ECombatEntityWrapperType(Z_Param_aCombatEntityWrapperType));
		P_NATIVE_END;
	}
	void UCombatEntityWrapper::StaticRegisterNativesUCombatEntityWrapper()
	{
		UClass* Class = UCombatEntityWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveAilment", &UCombatEntityWrapper::execRemoveAilment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics
	{
		struct CombatEntityWrapper_eventRemoveAilment_Parms
		{
			ECombatEntityWrapperType aCombatEntityWrapperType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_aCombatEntityWrapperType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_aCombatEntityWrapperType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::NewProp_aCombatEntityWrapperType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::NewProp_aCombatEntityWrapperType = { "aCombatEntityWrapperType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatEntityWrapper_eventRemoveAilment_Parms, aCombatEntityWrapperType), Z_Construct_UEnum_DesentIntoAtlantis_ECombatEntityWrapperType, METADATA_PARAMS(0, nullptr) }; // 1506590368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::NewProp_aCombatEntityWrapperType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::NewProp_aCombatEntityWrapperType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatEntityWrapper, nullptr, "RemoveAilment", nullptr, nullptr, Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::CombatEntityWrapper_eventRemoveAilment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::CombatEntityWrapper_eventRemoveAilment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEntityWrapper);
	UClass* Z_Construct_UClass_UCombatEntityWrapper_NoRegister()
	{
		return UCombatEntityWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UCombatEntityWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_calculateDamage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_calculateDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedCombatEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedCombatEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completeEntityWrapperInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_completeEntityWrapperInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatEntityWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatEntityWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatEntityWrapper_RemoveAilment, "RemoveAilment" }, // 3495477545
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntityWrapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatEntityWrapper.h" },
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_calculateDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_calculateDamage = { "calculateDamage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntityWrapper, calculateDamage), Z_Construct_UClass_UCalculateDamage_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_calculateDamage_MetaData), Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_calculateDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_AttachedCombatEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_AttachedCombatEntity = { "AttachedCombatEntity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntityWrapper, AttachedCombatEntity), Z_Construct_UClass_UCombatEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_AttachedCombatEntity_MetaData), Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_AttachedCombatEntity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_completeEntityWrapperInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombatEntityWrapper.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_completeEntityWrapperInfo = { "completeEntityWrapperInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEntityWrapper, completeEntityWrapperInfo), Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_completeEntityWrapperInfo_MetaData), Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_completeEntityWrapperInfo_MetaData) }; // 2740858902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatEntityWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_calculateDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_AttachedCombatEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEntityWrapper_Statics::NewProp_completeEntityWrapperInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatEntityWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEntityWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEntityWrapper_Statics::ClassParams = {
		&UCombatEntityWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatEntityWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEntityWrapper_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEntityWrapper_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatEntityWrapper()
	{
		if (!Z_Registration_Info_UClass_UCombatEntityWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEntityWrapper.OuterSingleton, Z_Construct_UClass_UCombatEntityWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatEntityWrapper.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<UCombatEntityWrapper>()
	{
		return UCombatEntityWrapper::StaticClass();
	}
	UCombatEntityWrapper::UCombatEntityWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEntityWrapper);
	UCombatEntityWrapper::~UCombatEntityWrapper() {}
	struct Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::EnumInfo[] = {
		{ ECombatEntityWrapperType_StaticEnum, TEXT("ECombatEntityWrapperType"), &Z_Registration_Info_UEnum_ECombatEntityWrapperType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1506590368U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::ScriptStructInfo[] = {
		{ FAilmentInfo::StaticStruct, Z_Construct_UScriptStruct_FAilmentInfo_Statics::NewStructOps, TEXT("AilmentInfo"), &Z_Registration_Info_UScriptStruct_AilmentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAilmentInfo), 1970845933U) },
		{ FCompleteEntityWrapperInfo::StaticStruct, Z_Construct_UScriptStruct_FCompleteEntityWrapperInfo_Statics::NewStructOps, TEXT("CompleteEntityWrapperInfo"), &Z_Registration_Info_UScriptStruct_CompleteEntityWrapperInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteEntityWrapperInfo), 2740858902U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAilmentShellTakeOver, UAilmentShellTakeOver::StaticClass, TEXT("UAilmentShellTakeOver"), &Z_Registration_Info_UClass_UAilmentShellTakeOver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAilmentShellTakeOver), 2444391878U) },
		{ Z_Construct_UClass_UCalculateDamage_Base, UCalculateDamage_Base::StaticClass, TEXT("UCalculateDamage_Base"), &Z_Registration_Info_UClass_UCalculateDamage_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCalculateDamage_Base), 1567441968U) },
		{ Z_Construct_UClass_UCalculateDamage_Fear, UCalculateDamage_Fear::StaticClass, TEXT("UCalculateDamage_Fear"), &Z_Registration_Info_UClass_UCalculateDamage_Fear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCalculateDamage_Fear), 4060648325U) },
		{ Z_Construct_UClass_UCombatEntityWrapper, UCombatEntityWrapper::StaticClass, TEXT("UCombatEntityWrapper"), &Z_Registration_Info_UClass_UCombatEntityWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEntityWrapper), 2260871174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_2112783218(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kylej_Desktop_DescentIntoAtlantis_DesentIntoAtlantis5_3_Source_DesentIntoAtlantis_Public_CombatEntityWrapper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
