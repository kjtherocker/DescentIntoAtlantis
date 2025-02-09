// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentHandler.h"

#include "PassiveHandler.h"
#include "PassiveSkillFactorySubsystem.h"

void UEquipmentHandler::InitializeEquipmentHandler(UPassiveHandler* aPassiveHandler,UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	for(int i = 0 ; i < AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		equipedEquipment.Add(nullptr);
		FEquipmentPassiveData equipmentPassiveData;
		equipmentPassiveData.EquipmentID = EEquipmentID::None;
		EquipmentHandlerData.equipmentPassiveData.Add(equipmentPassiveData);
	}

	

	PassiveFactorySubsystem = aPassiveSkillFactorySubsystem;
	ownedCombatEntity = aOwnedCombatEntity;
	passiveHandler    = aPassiveHandler;
}

void UEquipmentHandler::SetEquipmentState(FEquipmentHandlerData aEquipmentHandlerData)
{
	for(int i = 0 ; i <  aEquipmentHandlerData.equipmentPassiveData.Num(); i++)
	{
		EEquipmentID EquipmentID = aEquipmentHandlerData.equipmentPassiveData[i].EquipmentID;
		EquipEquipment(CreateEquipment(EquipmentID), i);
	}
}

void UEquipmentHandler::EquipEquipment(UEquipmentPassive* aEquipment, int aSlot)
{
	if(aEquipment == nullptr)
	{
		return;
	}
	
	if(equipedEquipment.Num() < aSlot)
	{
		return;
	}
	
	UEquipmentPassive* EquipmentPassive = aEquipment;

	if(EquipmentPassive == nullptr)
	{
		return;
	}
	
	EquipmentHandlerData.equipmentPassiveData[aSlot].EquipmentID = EquipmentPassive->GetEquipmentID();
	
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
	EquipmentHandlerData.equipmentPassiveData[aSlot].EquipmentID = EEquipmentID::None;
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
