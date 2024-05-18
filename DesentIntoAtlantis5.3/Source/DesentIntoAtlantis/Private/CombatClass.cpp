// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatClass.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SkillFactorySubsystem.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"


//"DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"


void UCombatClass::InitializeDependencys(USkillFactorySubsystem* aSkillFactory, UPlayerCombatEntity* aCombatEntity)
{
	skillFactory = aSkillFactory;
	attachedCombatEntity = aCombatEntity;
}

void UCombatClass::CreateClass(FCompleteClassData aLoadedClass,int aClassLevel)
{
	completeClassData = aLoadedClass;
	completeClassData.currentLevel = aClassLevel;
	completeClassData.currentLevelClassData = completeClassData.classLevels[aClassLevel];
	CreateAllClassSkillsForLevel(completeClassData);
}

bool UCombatClass::AddExperience(int aExperience)
{
	experience += aExperience;
	if(completeClassData.classLevels.Num() > 0)
	{
		if(experience > completeClassData.currentLevelClassData.expToNextClassLevel)
		{
			return true;
		}
	}
	return false;
}

void UCombatClass::CreateAllClassSkillsForLevel(FCompleteClassData aCompleteClassData)
{
	for (TTuple<int, ESkillIDS> skillByLevel : aCompleteClassData.unlockableSkillByLevel)
	{
		int skillLevel = skillByLevel.Key;
		if(skillLevel <= aCompleteClassData.currentLevel)
		{
			ESkillIDS skillName = skillByLevel.Value;
			if(skillName != ESkillIDS::None)
			{
				USkillBase* newSkill = skillFactory->GetSkill(skillName);
				classSkills.Add(newSkill);
				attachedCombatEntity->playerCompleteDataSet.skillSlots.Add(skillName);
			}
		}
	}
}

void UCombatClass::SetClassLevel(int aInitalLevel)
{
	currentClassIndex = aInitalLevel - 1;
	completeClassData.currentLevel = currentClassIndex;

	completeClassData.currentLevelClassData = completeClassData.classLevels[currentClassIndex];

	CreateAllClassSkillsForLevel(completeClassData);

	attachedCombatEntity->currentHealth = completeClassData.currentLevelClassData.maxHealth;
	attachedCombatEntity->currentMana   = completeClassData.currentLevelClassData.maxMana;
	attachedCombatEntity->SetAbilityScores();
}

void UCombatClass::SetClassAttributes()
{
	attachedCombatEntity->currentHealth = completeClassData.currentLevelClassData.maxHealth;
	attachedCombatEntity->currentMana   = completeClassData.currentLevelClassData.maxMana;
	attachedCombatEntity->SetAbilityScores();
}



FClassData UCombatClass::Levelup()
{
	currentClassIndex += 1;
	completeClassData.currentLevelClassData = completeClassData.classLevels[currentClassIndex];
	completeClassData.currentLevel = currentClassIndex;

	if(completeClassData.unlockableSkillByLevel.Contains(completeClassData.currentLevel))
	{
		ESkillIDS skillName = completeClassData.unlockableSkillByLevel[completeClassData.currentLevel];
		USkillBase* newSkill = skillFactory->GetSkill(skillName);
		attachedCombatEntity->playerCompleteDataSet.skillSlots.Add(skillName);
		classSkills.Add(newSkill);
	}
	
	
	attachedCombatEntity->currentHealth = completeClassData.currentLevelClassData.maxHealth;
	attachedCombatEntity->currentMana   = completeClassData.currentLevelClassData.maxMana;
	attachedCombatEntity->GatherAndSavePlayerCompleteDataSet();
	attachedCombatEntity->SetAbilityScores();


	return completeClassData.currentLevelClassData;
}
