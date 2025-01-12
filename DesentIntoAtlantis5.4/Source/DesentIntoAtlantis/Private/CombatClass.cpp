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

void UCombatClass::CreateClass(FCompleteClassData aLoadedClass)
{
	completeClassData = aLoadedClass;
	completeClassData.classStatBase = completeClassData.classBaseStat;
	CreateAllUnlockedClassSkills(completeClassData);
}



void UCombatClass::CreateAllUnlockedClassSkills(FCompleteClassData aCompleteClassData)
{
	for (FSkillClassData skillByLevel : aCompleteClassData.skillClassData)
	{
		if(skillByLevel.isSkillOwned == false)
		{
			continue;
		}
		
		ESkillIDS skillName = skillByLevel.SkillIds;
		if(skillName != ESkillIDS::None)
		{
			USkillBase* newSkill = skillFactory->GetSkill(skillName);
			classSkills.Add(newSkill);
			attachedCombatEntity->playerCompleteDataSet.skillSlots.Add(skillName);
		}
	}
}



