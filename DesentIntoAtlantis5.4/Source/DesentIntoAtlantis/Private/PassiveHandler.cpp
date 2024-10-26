// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveHandler.h"

#include "ChallengeSubsystem.h"
#include "PassiveSkills.h"
#include "SkillsData.h"


void UPassiveHandler::InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity)
{
	ownedCombatEntity = aOwnedCombatEntity;
}

void UPassiveHandler::CheckAttackDefencePassives(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker,
                                    FSkillsData aSkill)
{
	for (UPassiveSkills* passiveSkill : passiveSkills)
	{
		if (IOnAttackDefencePassive* SkillableActor = Cast<IOnAttackDefencePassive>(passiveSkill))
		{
			SkillableActor->Execute_CheckDamageAttackPassives(passiveSkill,CurrentDamage,aAttachedEntity, aAttacker,aSkill);
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
}

void UPassiveHandler::RemovePassive(UPassiveSkills* aPassiveSkills)
{
	aPassiveSkills->RemoveEffect(ownedCombatEntity);
	passiveSkills.Remove(aPassiveSkills);
}


