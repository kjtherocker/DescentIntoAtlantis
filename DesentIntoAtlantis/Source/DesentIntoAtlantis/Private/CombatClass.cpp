// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatClass.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SkillFactorySubsystem.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"


//"DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"



void UCombatClass::InitializeDataTable(UDataTable* aClassDataTable, USkillFactorySubsystem* aSkillFactory, UPlayerCombatEntity* aCombatEntity)
{
	UDataTable* datatable = aClassDataTable;

	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		classLevels.Add(*datatable->FindRow<FClassData>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
	}
	
	skillFactory = aSkillFactory;
	attachedCombatEntity = aCombatEntity;
}

void UCombatClass::LoadAndReplaceClass(FClassData aLoadedClass)
{
	currentClassLevel = aLoadedClass;


	CreateAllClassSkillsForLevel(currentClassLevel);
	

	attachedCombatEntity->currentHealth = currentClassLevel.maxHealth;
	attachedCombatEntity->currentMana   = currentClassLevel.maxMana;
	attachedCombatEntity->SetAbilityScores();
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

void UCombatClass::CreateAllClassSkillsForLevel(FClassData currentClass)
{
	for(int i = 0 ; i < currentClass.classSkills.Num();i++)
	{
		USkillBase* newSkill = skillFactory->GetSkill(currentClassLevel.classSkills[i]);
		classSkills.Add(newSkill);
		attachedCombatEntity->playerCompleteDataSet.skillSlots.Add(currentClassLevel.classSkills[i]);
	}
}

void UCombatClass::SetClassLevelToInitalLevel(int aInitalLevel)
{
	currentClassIndex = aInitalLevel - 1;

	currentClassLevel = classLevels[currentClassIndex];

	CreateAllClassSkillsForLevel(currentClassLevel);

	attachedCombatEntity->currentHealth = currentClassLevel.maxHealth;
	attachedCombatEntity->currentMana   = currentClassLevel.maxMana;
	attachedCombatEntity->SetAbilityScores();
}

FClassData UCombatClass::Levelup()
{
	currentClassLevel = classLevels[currentClassIndex +1];

	USkillBase* newSkill = skillFactory->GetSkill(currentClassLevel.newlyObtainedSkill);

	classSkills.Add(newSkill);
	attachedCombatEntity->currentHealth = currentClassLevel.maxHealth;
	attachedCombatEntity->currentMana   = currentClassLevel.maxMana;
	attachedCombatEntity->SetAbilityScores();

	attachedCombatEntity->playerCompleteDataSet.skillSlots.Add(currentClassLevel.newlyObtainedSkill);

	return currentClassLevel;
}
