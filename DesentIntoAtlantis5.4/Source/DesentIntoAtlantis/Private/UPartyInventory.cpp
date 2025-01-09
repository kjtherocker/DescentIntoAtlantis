// Fill out your copyright notice in the Description page of Project Settings.


#include "UPartyInventory.h"

#include "EquipmentPassive.h"
#include "PassiveSkillFactorySubsystem.h"

void UPartyInventory::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem )
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
}

UEquipmentPassive*  UPartyInventory::GetEquipment(EEquipmentID aEquipmentID)
{
	if(AllEquipment.Contains(aEquipmentID))
	{
		return AllEquipment[aEquipmentID];		
	}
	else
	{
		return nullptr;
	}
}

void UPartyInventory::AddEquipmentToInventory(FEquipmentRequestInfo aEquipmentRequest)
{

	EEquipmentID EquipmentID = aEquipmentRequest.equipmentID;
	UEquipmentPassive* getEquipment = GetEquipment( EquipmentID);

	if(getEquipment != nullptr)
	{
		getEquipment->RequestEquipment(aEquipmentRequest);
		return;
	}
	
	UEquipmentPassive* newEquipment = passiveFactorySubsystem->CreateEquipment( EquipmentID);
	if(newEquipment != nullptr)
	{
		newEquipment->RequestEquipment(aEquipmentRequest);
		AllEquipment.Add(EquipmentID,newEquipment);
	}
}

