// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Skills_Base.h"
#include "CombatClass.generated.h"

struct FPlayerCombatEntity;
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
	
private:
	bool isReadyToLevelup = false;
	
public:

	void InitializeDataTable(FString aClassExcelSheet,USkillFactory* aSkillFactory, FPlayerCombatEntity * combatEntity);
	ConstructorHelpers::FObjectFinder<UObject> ReturnFoundClass(FString aClassExcelSheet);
	FPlayerCombatEntity* attachedCombatEntity;
	FClassData* currentClassLevel;
	TArray<FClassData*> classLevels;
	TArray<FSkills_Base*> classSkills;

	USkillFactory* skillFactory;
	
	void AddExperience(int aExperience);
	FClassData* Levelup();
	int experience;
};



