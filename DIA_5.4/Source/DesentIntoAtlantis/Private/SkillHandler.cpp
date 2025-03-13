// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillHandler.h"

#include "SkillBase.h"

void USkillHandler::Initialize(UCombatEntity* aAttachedCombatEntity, UPassiveHandler* aPassiveHandler)
{
	attachedCombatEntity = aAttachedCombatEntity;
	attachedPassiveHandler = aPassiveHandler;
}

void USkillHandler::AddSkillModification(FSkillModification aSkillModification)
{
	skillModification.Add(aSkillModification);

	ValidateAllSkillModifications();
}

void USkillHandler::ValidateAllSkillModifications()
{
	for (auto skills : currentSkills)
	{
		TArray<FSkillModification> SkillModifications;
		for (auto skillModification : skillModification)
		{
			if(isSkillModifcationValidForSkill(skills->skillData,skillModification))
			{
				SkillModifications.Add(skillModification);
			
			}
		}
		ModifySkill(skills->skillData,SkillModifications);
	}
	
}

FSkillsData USkillHandler::ModifySkill(FSkillsData aSkillData,TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	

	return ModifiedSkill;
}

bool USkillHandler::isSkillModifcationValidForSkill(FSkillsData aSkill, FSkillModification aSkillModification)
{
	for (auto Element : aSkillModification.SkillsThatCanBeModified)
	{
		if(aSkill.skillID == Element)
		{
			return true;
		}
			
	}
	
	return false;
}
