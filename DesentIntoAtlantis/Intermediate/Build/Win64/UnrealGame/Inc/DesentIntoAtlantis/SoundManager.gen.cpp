// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesentIntoAtlantis/Public/SoundManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundManager() {}
// Cross Module References
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources();
	UPackage* Z_Construct_UPackage__Script_DesentIntoAtlantis();
	DESENTINTOATLANTIS_API UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAudio();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ASoundManager_NoRegister();
	DESENTINTOATLANTIS_API UClass* Z_Construct_UClass_ASoundManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSources;
	static UEnum* EAudioSources_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioSources.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioSources.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EAudioSources"));
		}
		return Z_Registration_Info_UEnum_EAudioSources.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAudioSources>()
	{
		return EAudioSources_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::Enumerators[] = {
		{ "EAudioSources::None", (int64)EAudioSources::None },
		{ "EAudioSources::OverworldMusic", (int64)EAudioSources::OverworldMusic },
		{ "EAudioSources::CombatMusic", (int64)EAudioSources::CombatMusic },
		{ "EAudioSources::OverworldSoundEffect", (int64)EAudioSources::OverworldSoundEffect },
		{ "EAudioSources::CombatSoundEffect", (int64)EAudioSources::CombatSoundEffect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::Enum_MetaDataParams[] = {
		{ "CombatMusic.Name", "EAudioSources::CombatMusic" },
		{ "CombatSoundEffect.Name", "EAudioSources::CombatSoundEffect" },
		{ "ModuleRelativePath", "Public/SoundManager.h" },
		{ "None.Name", "EAudioSources::None" },
		{ "OverworldMusic.Name", "EAudioSources::OverworldMusic" },
		{ "OverworldSoundEffect.Name", "EAudioSources::OverworldSoundEffect" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EAudioSources",
		"EAudioSources",
		Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources()
	{
		if (!Z_Registration_Info_UEnum_EAudioSources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSources.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EAudioSources_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioSources.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudio;
	static UEnum* EAudio_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudio.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudio.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DesentIntoAtlantis_EAudio, Z_Construct_UPackage__Script_DesentIntoAtlantis(), TEXT("EAudio"));
		}
		return Z_Registration_Info_UEnum_EAudio.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UEnum* StaticEnum<EAudio>()
	{
		return EAudio_StaticEnum();
	}
	struct Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::Enumerators[] = {
		{ "EAudio::None", (int64)EAudio::None },
		{ "EAudio::Accept", (int64)EAudio::Accept },
		{ "EAudio::Footsteps", (int64)EAudio::Footsteps },
		{ "EAudio::Selection", (int64)EAudio::Selection },
		{ "EAudio::WallBounce", (int64)EAudio::WallBounce },
		{ "EAudio::EnemyEncounter", (int64)EAudio::EnemyEncounter },
		{ "EAudio::Overword", (int64)EAudio::Overword },
		{ "EAudio::Combat", (int64)EAudio::Combat },
		{ "EAudio::FireBall", (int64)EAudio::FireBall },
		{ "EAudio::MainMenu", (int64)EAudio::MainMenu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::Enum_MetaDataParams[] = {
		{ "Accept.Name", "EAudio::Accept" },
		{ "Combat.Name", "EAudio::Combat" },
		{ "EnemyEncounter.Name", "EAudio::EnemyEncounter" },
		{ "FireBall.Name", "EAudio::FireBall" },
		{ "Footsteps.Name", "EAudio::Footsteps" },
		{ "MainMenu.Name", "EAudio::MainMenu" },
		{ "ModuleRelativePath", "Public/SoundManager.h" },
		{ "None.Name", "EAudio::None" },
		{ "Overword.Name", "EAudio::Overword" },
		{ "Selection.Name", "EAudio::Selection" },
		{ "WallBounce.Name", "EAudio::WallBounce" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
		nullptr,
		"EAudio",
		"EAudio",
		Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DesentIntoAtlantis_EAudio()
	{
		if (!Z_Registration_Info_UEnum_EAudio.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudio.InnerSingleton, Z_Construct_UEnum_DesentIntoAtlantis_EAudio_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudio.InnerSingleton;
	}
	void ASoundManager::StaticRegisterNativesASoundManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoundManager);
	UClass* Z_Construct_UClass_ASoundManager_NoRegister()
	{
		return ASoundManager::StaticClass();
	}
	struct Z_Construct_UClass_ASoundManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundEffects_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_soundEffects_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundEffects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundEffects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_soundEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoundManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DesentIntoAtlantis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundManager.h" },
		{ "ModuleRelativePath", "Public/SoundManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_ValueProp = { "soundEffects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_Key_KeyProp = { "soundEffects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DesentIntoAtlantis_EAudio, METADATA_PARAMS(nullptr, 0) }; // 767484525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SoundManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects = { "soundEffects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, soundEffects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_MetaData)) }; // 767484525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoundManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_soundEffects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoundManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoundManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoundManager_Statics::ClassParams = {
		&ASoundManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoundManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoundManager()
	{
		if (!Z_Registration_Info_UClass_ASoundManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoundManager.OuterSingleton, Z_Construct_UClass_ASoundManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASoundManager.OuterSingleton;
	}
	template<> DESENTINTOATLANTIS_API UClass* StaticClass<ASoundManager>()
	{
		return ASoundManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoundManager);
	struct Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics::EnumInfo[] = {
		{ EAudioSources_StaticEnum, TEXT("EAudioSources"), &Z_Registration_Info_UEnum_EAudioSources, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2531486063U) },
		{ EAudio_StaticEnum, TEXT("EAudio"), &Z_Registration_Info_UEnum_EAudio, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 767484525U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASoundManager, ASoundManager::StaticClass, TEXT("ASoundManager"), &Z_Registration_Info_UClass_ASoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoundManager), 986781566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_1969659557(TEXT("/Script/DesentIntoAtlantis"),
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesentIntoAtlantis_Source_DesentIntoAtlantis_Public_SoundManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
