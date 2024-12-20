// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveHandler.h"

#include "ChallengeSubsystem.h"
#include "CombatClass.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PassiveSkills.h"
#include "PersistentGameinstance.h"
#include "SkillBase.h"


FPassiveHandlerData UPassiveHandler::GetPassiveHandlerData()
{
	return PassiveHandlerData;
}

void UPassiveHandler::InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity,UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	
	passiveSkillFactory = aPassiveSkillFactorySubsystem;
	ownedCombatEntity   = aOwnedCombatEntity;
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

void UPassiveHandler::AddMainClassPassives(UCombatClass* aCombatClass)
{
	RemovePassiveBySlotType(EPassiveSkillSlotType::MainClass);
	EPassiveSkillID classLockedPassive = aCombatClass->completeClassData.classLockedPassive;
	
	if(classLockedPassive != EPassiveSkillID::None)
	{
		AddPassive(passiveSkillFactory->GetPassiveSkill(classLockedPassive),EPassiveSkillSlotType::MainClass);
	}
	
	for (auto Element : aCombatClass->completeClassData.classPassives)
	{
		if(Element.isPassiveOwned)
		{
			AddPassive(passiveSkillFactory->GetPassiveSkill(Element.passiveSkillID),EPassiveSkillSlotType::MainClass);
		}
	}
	
}

bool UPassiveHandler::TryActivatePassive(UPassiveSkills* aPassiveSkills)
{
	return true;
}

void UPassiveHandler::AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot)
{
	if(ownedCombatEntity == nullptr)
	{
		return;
	}

	if(aPassiveSkills == nullptr)
	{
		return;
	}

	if(aPassiveSkills->passiveSkillData.passiveSkillID == EPassiveSkillID::None)
	{
		return;
	}
	
	if(passiveSkillSlot == EPassiveSkillSlotType::None )
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
	aPassiveSkills->passiveSkillData.passiveSkillPlacement = passiveSkillSlot;
	passiveSkills.Add(aPassiveSkills);
	PassiveHandlerData.PassiveSkillsDatas.Add(aPassiveSkills->passiveSkillData);
}

void UPassiveHandler::RemovePassive(UPassiveSkills* aPassiveSkills)
{
	aPassiveSkills->RemoveEffect(ownedCombatEntity);
	passiveSkills.Remove(aPassiveSkills);
	//assiveHandlerData.PassiveSkillsDatas.Remove(aPassiveSkills->passiveSkillData);
}

void UPassiveHandler::RemovePassiveBySlotType(EPassiveSkillSlotType passiveSkillSlot)
{
	for (int32 i = passiveSkills.Num() - 1; i >= 0; i--)
	{
		if(passiveSkills[i]->passiveSkillData.passiveSkillPlacement == passiveSkillSlot)
		{
			RemovePassive(passiveSkills[i]);
		}
	}
}

TArray<UPassiveSkills*> UPassiveHandler::GetAllPassives()
{
	return passiveSkills;
}


