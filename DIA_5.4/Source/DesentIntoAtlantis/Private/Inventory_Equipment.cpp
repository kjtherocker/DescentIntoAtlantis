// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory_Equipment.h"

#include "UPartyInventory.h"
#include "EquipmentPassive.h"
#include "ItemBase.h"
#include "PassiveSkillFactorySubsystem.h"
#include "SkillFactorySubsystem.h"



void UInventory_Equipment::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                               USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;
}

void UInventory_Equipment::AddMoreStacksOfEquipment(FEquipmentRequestInfo aEquipmentRequest)
{
	 FEquipmentPassiveInventoryInfo PassiveInventoryInfo = partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentRequest.equipmentID];

	PassiveInventoryInfo.Amount = PassiveInventoryInfo.Amount + aEquipmentRequest.amount >= PassiveInventoryInfo.EquipmentMaxStack
	?  PassiveInventoryInfo.EquipmentMaxStack : PassiveInventoryInfo.Amount + aEquipmentRequest.amount ;
	
	partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentRequest.equipmentID] = PassiveInventoryInfo;
}

void UInventory_Equipment::ReturnEquipment(EPartyMembersID aOldOwner, EEquipmentID aEquipmentID)
{
	 FEquipmentPassiveInventoryInfo equipmentInventoryInfo = GetEquipment( aEquipmentID);
	int numberOfEquipmentOwners = 	equipmentInventoryInfo.equipmentOwners.Num();

	for(int i = 0 ; i < numberOfEquipmentOwners;i++)
	{
		if(aOldOwner == equipmentInventoryInfo.equipmentOwners[i])
		{
			equipmentInventoryInfo.equipmentOwners.RemoveAt(i);
			break;
		}
	}
	
	partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentID] = equipmentInventoryInfo;
}

UEquipmentPassive* UInventory_Equipment::TakeOutEquipment(EPartyMembersID aNewOwner, EEquipmentID aEquipmentID)
{
	if(!isEquipmentFreeToTake(aEquipmentID))
	{
		return nullptr;
	}
	
	partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentID].equipmentOwners.Add(aNewOwner);
	
	UEquipmentPassive* EquipmentPassive = passiveFactorySubsystem->CreateEquipment(aEquipmentID);

	return EquipmentPassive;
}

bool UInventory_Equipment::isEquipmentFreeToTake(EEquipmentID aEquipmentID)
{
	FEquipmentPassiveInventoryInfo equipmentPassiveInventory = GetEquipment( aEquipmentID);
	return  equipmentPassiveInventory.equipmentOwners.Num()
	        < equipmentPassiveInventory.Amount;
}

FEquipmentPassiveInventoryInfo  UInventory_Equipment::GetEquipment(EEquipmentID aEquipmentID)
{
	if(partyInventoryCompleteData.equipmentInventoryInfo.Contains(aEquipmentID))
	{
		return partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentID];		
	}
	else
	{
		FEquipmentPassiveInventoryInfo empty;
		return empty;
	}
}

FPassiveSkillData UInventory_Equipment::GetEquipmentPassiveSkillData(EEquipmentID aEquipmentID)
{
	return passiveFactorySubsystem->GetEquipmentPassiveSkillData(aEquipmentID);
}

void UInventory_Equipment::AddEquipmentToInventory(FEquipmentRequestInfo aEquipmentRequest)
{

	EEquipmentID EquipmentID = aEquipmentRequest.equipmentID;
	FEquipmentPassiveInventoryInfo getEquipment = GetEquipment( EquipmentID);

	if(getEquipment.EquipmentID != EEquipmentID::None)
	{
		AddMoreStacksOfEquipment(aEquipmentRequest);
		return;
	}
	
	FEquipmentPassiveInventoryInfo newEquipment;
	newEquipment.EquipmentID = EquipmentID;
	newEquipment.Amount      = aEquipmentRequest.amount;
	newEquipment.EquipmentMaxStack = 5;
	
	partyInventoryCompleteData.equipmentInventoryInfo.Add(EquipmentID,newEquipment);
}



