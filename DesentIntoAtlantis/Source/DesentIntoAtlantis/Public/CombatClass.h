// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Skills_Base.h"
#include "CombatClass.generated.h"

struct FClassData;
class USkillFactory;
struct FCombatEntity;

/**
 * 
 */
UCLASS()
class UCombatClass : public UObject
{
	GENERATED_BODY()
	

public:

	void InitializeDataTable(FString aClassExcelSheet,USkillFactory* aSkillFactory, FCombatEntity * combatEntity);

	FCombatEntity* attachedCombatEntity;
	FClassData* currentClassLevel;
	TArray<FClassData*> classLevels;
	TArray<FSkills_Base*> classSkills;

	USkillFactory* skillFactory;
	
	void AddExperience(int aExperience);
	void Levelup();
	int experience;
};



//A combat class is filled with the bases of all stats
USTRUCT()
struct DESENTINTOATLANTIS_API FClassData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	int maxHealth;
	
	UPROPERTY( EditAnywhere )
	int maxMana;

	UPROPERTY( EditAnywhere )
	FString className;

	UPROPERTY( EditAnywhere )
	FString classLevelID;

	UPROPERTY( EditAnywhere )
	int baseStrength;

	UPROPERTY( EditAnywhere )
	int baseMagic;

	UPROPERTY( EditAnywhere )
	int baseHit;

	UPROPERTY( EditAnywhere )
	int baseEvasion;

	UPROPERTY( EditAnywhere )
	int baseDefence;

	UPROPERTY( EditAnywhere )
	int BaseResistance;

	UPROPERTY( EditAnywhere )
	int expToNextClassLevel;

	UPROPERTY( EditAnywhere )
	FString newlyObtainedSkill;
};

