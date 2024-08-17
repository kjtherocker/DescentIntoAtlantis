// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatClass.h"
#include "PlayerCombatEntity.generated.h"

enum class EClasses;
class UPartyHealthbarElement;
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerIdentityData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EPartyMembers characterIdentifier;
		
	UPROPERTY( EditAnywhere )
	EClasses initalClass;


	UPROPERTY(EditAnywhere)
	FCombatEntityData playerStatGrowths;
	UPROPERTY(EditAnywhere)
	FCombatEntityData playerStatBases;
	
	UPROPERTY( EditAnywhere )
	FString characterName;
	
	UPROPERTY( EditAnywhere )
	UMaterialInterface*  characterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* halfBodyCharacterPortrait;

	UPROPERTY(EditAnywhere)
	int initialLevel;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerCompleteDataSet
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	FPlayerIdentityData playerIdentityData;

	UPROPERTY()
	FCompleteClassData mainClassData;
	
	UPROPERTY(EditAnywhere)
	TMap<EClasses,FCompleteClassData> unlockedPlayerClasses;

	UPROPERTY(EditAnywhere)
	int jobPoints;
	
	UPROPERTY(EditAnywhere)
	TArray<ESkillIDS> skillSlots;

	UPROPERTY()
	int currentHP;
	UPROPERTY()
	int currentMP;
	UPROPERTY()
	float currentSync;
};


UCLASS()
class DESENTINTOATLANTIS_API UPlayerAbilityStats : public UCombatAbilityStats
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TMap<EClasses,int> classStatBases;
	
	inline static const float ABILITYSCORE_CONVERSION_RATIO = 3;

	virtual int  GetAllStats() override
	{
		int classBase = GetClassBases();
		
		return base + classBase + buff + debuff + domain;
	}

	void SetStat(FPlayerIdentityData aPlayerIdentityData,int aCurrentLevel)
	{
		int baseGrowth = aPlayerIdentityData.playerStatGrowths.baseStats[StatType] ;
		int baseStat   = aPlayerIdentityData.playerStatBases.baseStats[StatType];
		
		base = baseStat + (aCurrentLevel / baseGrowth);
	}

	void AddClassStatBase(FCompleteClassData aCompleteClassData)
	{
		classStatBases.Add(aCompleteClassData.classIdentifer,aCompleteClassData.classStatBase.baseStats[StatType]);
	}
	
	int GetClassBases()
	{
		int classBase = 0;

		if(classStatBases.Num() == 0)
		{
			return classBase;
		}
		
		for (TTuple<EClasses, int> Element : classStatBases)
		{
			classBase += Element.Value;
		}
		
		return classBase;
	}
	
	
};


UCLASS()
class DESENTINTOATLANTIS_API UPlayerCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

public:
	
	UPROPERTY()
	UCombatClass* mainClass;

	UPROPERTY()
	TMap<EClasses,UCombatClass*> unlockedClasses;

	UPROPERTY()
	FPlayerCompleteDataSet playerCompleteDataSet;
	
	UPROPERTY()
	FPlayerIdentityData playerIdentityData;
	UPROPERTY()
	UPartyHealthbarElement* partyHealthbarElement;

	UPROPERTY()
	TArray<UAilment*> activeAilments;

    virtual void InitializeStats(EStatTypes aAbilityScoreTypes) override;
	virtual void LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet);
	virtual void SetPlayerEntity(FPlayerIdentityData aPlayerEntityData);
	virtual void SetTacticsEntity(USkillFactorySubsystem* aSkillFactory) override;
	
	virtual void InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData, int aClassLevel);
	virtual void SetMainClass(EClasses aClass);
	virtual void Reset() override;
	virtual void SetToDefaultState() override;

	virtual void GatherAndSavePlayerCompleteDataSet();

	void SetAbilityScores();
	
	virtual float GetHealthPercentage() override;
	virtual float GetManaPercentage()   override;
	virtual float GetSyncPercentage() override;
	virtual float GetMainClassEXPPercentage();
	
	virtual void LevelUp(int aNewLevel);
};


