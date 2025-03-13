// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillHandler.h"

#include "SkillBase.h"

void USkillHandler::Initialize(UCombatEntity* aAttachedCombatEntity, UPassiveHandler* aPassiveHandler)
{
	attachedCombatEntity = aAttachedCombatEntity;
	attachedPassiveHandler = aPassiveHandler;
}

void USkillHandler::AddSkillModification(EPassiveSkillID aPassiveSkillID,FSkillModification aSkillModification)
{
	skillModification.Add(aPassiveSkillID,aSkillModification);

	ValidateAllSkillModifications();
}

void USkillHandler::ValidateAllSkillModifications()
{
	for (auto skills : currentSkills)
	{
		TArray<FSkillModification> SkillModifications;
		for (auto skillModification : skillModification)
		{
			if(isSkillModifcationValidForSkill(skills->skillData,skillModification.Value))
			{
				SkillModifications.Add(skillModification.Value);
			
			}
		}
		ModifySkill(skills->skillData,SkillModifications);
	}
	
}

FSkillsData USkillHandler::ModifySkill(FSkillsData aSkillData,TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	ModifiedSkill = ModifyDamage( ModifiedSkill, aModifySkill);

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifyDamage(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.BaseDamage)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.damage = BaseDamage.Value;
			}
		}
	}
	
	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.BaseDamage)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Subtractive)
			{
				ModifiedSkill.damage -= BaseDamage.Value;
			}
		}
	}

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.BaseDamage)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Additional)
			{
				ModifiedSkill.damage += BaseDamage.Value;
			}
		}
	}
	

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
