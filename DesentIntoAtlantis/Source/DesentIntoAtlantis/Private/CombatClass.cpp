// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatClass.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SkillFactory.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"


//"DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"



void UCombatClass::InitializeDataTable(UDataTable* aClassDataTable, USkillFactory* aSkillFactory, UPlayerCombatEntity* aCombatEntity,int aInitialLevel)
{
	UDataTable* datatable = aClassDataTable;

	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		classLevels.Add(*datatable->FindRow<FClassData>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
	}
	
	skillFactory = aSkillFactory;
	attachedCombatEntity = aCombatEntity;
	for(int i = 0 ; i < aInitialLevel;i++)
	{
		Levelup();
	}
}



bool UCombatClass::AddExperience(int aExperience)
{
	experience += aExperience;
	if(classLevels.Num() > 0)
	{
		if(experience > currentClassLevel.expToNextClassLevel)
		{
			return true;
		}
	}
	return false;
}

FClassData UCombatClass::Levelup()
{
	currentClassLevel = classLevels[0];
	USkillBase* newSkill = skillFactory->GetSkill(currentClassLevel.newlyObtainedSkill);

	classSkills.Add(newSkill);
	attachedCombatEntity->currentHealth = currentClassLevel.maxHealth;
	attachedCombatEntity->currentMana   = currentClassLevel.maxMana;
	attachedCombatEntity->SetAbilityScores();
	
	classLevels.RemoveAt(0);
	return currentClassLevel;
}
