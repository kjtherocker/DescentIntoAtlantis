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

void UPassiveHandler::InitializeCombatArena()
{

}

void UPassiveHandler::InitializePassiveHandler(UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	PassiveSlotHandler = NewObject<UPassiveSlotHandler>();
	PassiveSlotHandler->InitializePassiveSlotHandler(this,aOwnedCombatEntity,aPassiveSkillFactorySubsystem);
	sendPassiveTrigger.AddDynamic(this,&UPassiveHandler::CheckGenericTriggerPassives);
	passiveSkillFactory = aPassiveSkillFactorySubsystem;
	ownedCombatEntity   = aOwnedCombatEntity;
}

void UPassiveHandler::SetPassiveHandlerState(FPassiveHandlerData aPassiveHandler)
{
	FPassiveHandlerData passiveHandler = aPassiveHandler;
	
	for (auto PassiveSkillData : passiveHandler.PassiveSkillsDatas)
	{
		if(PassiveSkillData.passiveSkillPlacement == EPassiveSkillSlotType::Debug)
		{
			continue;
		}
		AddPassive(passiveSkillFactory->GetPassiveSkill(PassiveSkillData.passiveSkillID),PassiveSkillData.passiveSkillPlacement);			
	}

	PassiveSlotHandler->SetPassiveSlotState(passiveHandler.PassiveSlotHandlerData);
}

void UPassiveHandler::CheckGenericTriggerPassives(EGenericTrigger aPassiveTrigger)
{
	passiveSkillsUsed.Empty();
	 
	for (UPassiveSkills* passiveSkillWrapper : allPassiveSkills)
	{
		if (IOnGenericPassive* genericTriggerPassive = Cast<IOnGenericPassive>(passiveSkillWrapper))
		{
			if(genericTriggerPassive->IsPassiveTriggered_Implementation(aPassiveTrigger))
			{
				passiveSkillsUsed.Add(genericTriggerPassive->ActivateGenericPassive_Implementation(ownedCombatEntity));
			}
		}
	}
}

TArray< FCombatLog_PassiveSkilData> UPassiveHandler::CheckAttackDefencePassives(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker,
                                                                                FSkillsData aSkill)
{
	passiveSkillsUsed.Empty();
	 
	for (UPassiveSkills* passiveSkillWrapper : allPassiveSkills)
	{
		if (IOnAttackDefencePassive* attackDefencePassive = Cast<IOnAttackDefencePassive>(passiveSkillWrapper))
		{
			if(attackDefencePassive->Execute_IsPassiveTriggered(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill))
			{
				passiveSkillsUsed.Add(attackDefencePassive->Execute_ActivateAttackDefencePassive(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill));
			}
		}
	}

	return passiveSkillsUsed;
}

//TArray<FCombatLog_PassiveSkilData> UPassiveHandler::CheckBaseDamagePassives(UCombatEntity* aAttachedEntity,
//	UCombatEntity* aAttacker, FSkillsData aSkill)
//{
//	passiveSkillsUsed.Empty();
//	 
//	for (UPassiveSkills* passiveSkillWrapper : allPassiveSkills)
//	{
//		if (IOnAttackDefencePassive* attackDefencePassive = Cast<IOnAttackDefencePassive>(passiveSkillWrapper))
//		{
//			if(attackDefencePassive->Execute_IsPassiveTriggered(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill))
//			{
//				passiveSkillsUsed.Add(attackDefencePassive->Execute_ActivateAttackDefencePassive(passiveSkillWrapper,CurrentDamage,aAttachedEntity, aAttacker,aSkill));
//			}
//		}
//	}
//
//	return passiveSkillsUsed;
//}

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
	allPassiveSkills.Add(aPassiveSkills);
	PassiveHandlerData.PassiveSkillsDatas.Add(aPassiveSkills->passiveSkillData);
}

void UPassiveHandler::RemovePassive(UPassiveSkills* aPassiveSkills)
{
	aPassiveSkills->RemoveEffect(ownedCombatEntity);
	allPassiveSkills.Remove(aPassiveSkills);
	//assiveHandlerData.PassiveSkillsDatas.Remove(aPassiveSkills->passiveSkillData);
}

void UPassiveHandler::RemovePassiveBySlotType(EPassiveSkillSlotType passiveSkillSlot)
{
	for (int32 i = allPassiveSkills.Num() - 1; i >= 0; i--)
	{
		if(allPassiveSkills[i]->passiveSkillData.passiveSkillPlacement == passiveSkillSlot)
		{
			RemovePassive(allPassiveSkills[i]);
		}
	}
}

TArray<UPassiveSkills*> UPassiveHandler::GetAllPassives()
{
	return allPassiveSkills;
}

TArray<UPassiveSkills*> UPassiveHandler::GetAllFreeSlotPassives()
{
	TArray<UPassiveSkills*> passives;
	
	for(int i = 0 ; i < allPassiveSkills.Num();i++)
	{
		EPassiveSkillSlotType currentPassiveData = allPassiveSkills[i]->passiveSkillData.passiveSkillPlacement;
		if(currentPassiveData == EPassiveSkillSlotType::SlotPassive)
		{
			passives.Add(allPassiveSkills[i]);
		}
	}
	
	return passives;
}




