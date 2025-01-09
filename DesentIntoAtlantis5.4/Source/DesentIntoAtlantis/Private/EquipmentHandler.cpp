// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentHandler.h"

#include "PassiveHandler.h"
#include "PassiveSkillFactorySubsystem.h"

void UEquipmentHandler::InitializeEquipmentHandler(UPassiveHandler* aPassiveHandler,UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	for(int i = 0 ; i < AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		equipedEquipment.Add(nullptr);
	}

	PassiveFactorySubsystem = aPassiveSkillFactorySubsystem;
	ownedCombatEntity = aOwnedCombatEntity;
	passiveHandler    = aPassiveHandler;
}

void UEquipmentHandler::SetEquipmentState(FEquipmentHandlerData EquipmentHandlerData)
{
	for(int i = 0 ; i <  EquipmentHandlerData.equipmentPassiveData.Num(); i++)
	{
		EEquipmentID EquipmentID = EquipmentHandlerData.equipmentPassiveData[i].EquipmentID;
		EquipEquipment(EquipmentID, i);
	}
}

void UEquipmentHandler::EquipEquipment(EEquipmentID EquipmentID, int aSlot)
{
	if(equipedEquipment.Num() < aSlot)
	{
		return;
	}
	
	UEquipmentPassive* EquipmentPassive = CreateEquipment(EquipmentID);

	equipedEquipment[aSlot] = EquipmentPassive;
	passiveHandler->AddPassive(EquipmentPassive->GetPassiveSkill(),EPassiveSkillSlotType::Equipment);
}

void UEquipmentHandler::RemoveEquipment(int aSlot)
{
	if(equipedEquipment.Num() < aSlot)
	{
		return;
	}

	
	UEquipmentPassive* EquipmentPassive = equipedEquipment[aSlot];
	passiveHandler->RemovePassive(EquipmentPassive->GetPassiveSkill());

	equipedEquipment[aSlot] = nullptr;
}

 UEquipmentPassive* UEquipmentHandler::CreateEquipment(EEquipmentID EquipmentID)
{
	return  PassiveFactorySubsystem->CreateEquipment(EquipmentID);
}

bool UEquipmentHandler::isEquipmentInHandler(EEquipmentID aEquipmentID)
{
	for (auto Element : equipedEquipment)
	{
		if(Element->GetEquipmentID() == aEquipmentID)
		{
			return true;
		}
	}

	return false;
}
