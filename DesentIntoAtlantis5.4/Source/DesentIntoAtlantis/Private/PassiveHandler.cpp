// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveHandler.h"

#include "ChallengeSubsystem.h"
#include "PassiveSkills.h"
#include "SkillBase.h"


FPassiveHandlerData UPassiveHandler::GetPassiveHandlerData()
{
	return PassiveHandlerData;
}

void UPassiveHandler::InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity)
{
	ownedCombatEntity = aOwnedCombatEntity;
}

void UPassiveHandler::CheckAttackDefencePassives(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker,
                                    FSkillsData aSkill)
{
	for (UPassiveSkills* passiveSkillWrapper : passiveSkills)
	{
		if (IOnAttackDefencePassive* attackDefencePassive = Cast<IOnAttackDefencePassive>(passiveSkillWrapper))
		{
			if(attackDefencePassive->Execute_IsPassiveTriggered(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill))
			{
				attackDefencePassive->Execute_ActivateAttackDefencePassive(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill);
			}
		}
	}
}

bool UPassiveHandler::TryActivatePassive(UPassiveSkills* aPassiveSkills)
{
	return true;
}

void UPassiveHandler::AddPassive(UPassiveSkills* aPassiveSkills)
{
	if(ownedCombatEntity == nullptr)
	{
		return;
	}

	
	if(TryActivatePassive(aPassiveSkills))
	{
		aPassiveSkills->ApplyEffect(ownedCombatEntity);		
	}

	if (IEventTriggerPassive* EventTriggerPassive = Cast<IEventTriggerPassive>(aPassiveSkills))
	{
		//UChallengeSubsystem godManagerSubsystem = persistentGameInstance->challengeManagerSubsystem;
		//godManagerSubsystem
	}
	passiveSkills.Add(aPassiveSkills);
	PassiveHandlerData.PassiveSkillsDatas.Add(aPassiveSkills->passiveSkillData);
}

void UPassiveHandler::RemovePassive(UPassiveSkills* aPassiveSkills)
{
	aPassiveSkills->RemoveEffect(ownedCombatEntity);
	passiveSkills.Remove(aPassiveSkills);
	//assiveHandlerData.PassiveSkillsDatas.Remove(aPassiveSkills->passiveSkillData);
}

TArray<UPassiveSkills*> UPassiveHandler::GetAllPassives()
{
	return passiveSkills;
}


