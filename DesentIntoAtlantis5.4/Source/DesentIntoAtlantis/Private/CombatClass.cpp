// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatClass.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SkillFactorySubsystem.h"
#include "CombatEntity.h"
#include "ESkillID.h"
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
	completeClassData.classStatBase = completeClassData.classBaseStat;
	CreateAllClassSkillsForLevel(completeClassData);
}

bool UCombatClass::AddExperience(int aExperience)
{
	experience += aExperience;
	//if(completeClassData.classBaseStat.Num() > 0)
	//{
	//	if(experience > completeClassData.currentLevelClassData.expToNextClassLevel)
	//	{
			return false;
	//	}
	//}
//	return false;
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



