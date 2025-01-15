// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSlotHandler.h"

#include "PassiveHandler.h"
#include "PassiveSkillFactorySubsystem.h"

void UPassiveSlotHandler::InitializePassiveSlotHandler(UPassiveHandler* aPassiveHandler,
                                                       UCombatEntity* aOwnedCombatEntity, UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	for(int i = 0 ; i < AMOUNT_OF_PASSIVE_SLOTS;i++)
	{
		PassiveSlotHandlerData.passiveSlotData.Add(EPassiveSkillID::None);
		equipedPassives.Add(nullptr);
	}

	
	PassiveHandler = aPassiveHandler;
	OwnedCombatEntity = aOwnedCombatEntity;
	PassiveSkillFactorySubsystem = aPassiveSkillFactorySubsystem;
}

void UPassiveSlotHandler::SetPassiveSlotState(FPassiveSlotHandlerData aPassiveSlotData)
{
	for(int i = 0 ; i <  aPassiveSlotData.passiveSlotData.Num(); i++)
	{
		EPassiveSkillID PassiveSkillID = aPassiveSlotData.passiveSlotData[i];
		EquipPassiveInSlot(PassiveSkillID,i);
	}
}

void UPassiveSlotHandler::EquipPassiveInSlot(EPassiveSkillID passiveSkillID, int aSlot)
{
	if(equipedPassives.Num() < aSlot)
	{
		return;
	}
	
	UPassiveSkills* passiveInSlot = PassiveSkillFactorySubsystem->GetPassiveSkill(passiveSkillID);
	PassiveSlotHandlerData.passiveSlotData[aSlot] = passiveSkillID;
	equipedPassives[aSlot] = passiveInSlot;
	PassiveHandler->AddPassive(passiveInSlot,EPassiveSkillSlotType::SlotPassive);
}

UPassiveSkills* UPassiveSlotHandler::EquipPassiveInSlotAndReturnPrevious(EPassiveSkillID passiveSkillID, int aSlot)
{
	UPassiveSkills* previousPassive = equipedPassives[aSlot];
	EquipPassiveInSlot( passiveSkillID,  aSlot);
	return previousPassive;
}

void UPassiveSlotHandler::RemovePassiveInSlot(int aSlot)
{
	equipedPassives[aSlot] = nullptr;
}
