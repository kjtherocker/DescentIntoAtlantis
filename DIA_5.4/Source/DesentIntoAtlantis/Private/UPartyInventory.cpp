// Fill out your copyright notice in the Description page of Project Settings.


#include "UPartyInventory.h"

#include "EquipmentPassive.h"
#include "ItemBase.h"
#include "PassiveSkillFactorySubsystem.h"

void UPartyInventory::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                               USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;
}

void UPartyInventory::SetAllItemsTier(UPlayerCombatEntity* aPlayerCombatEntity)
{
	for (auto Element : AllUnlockedItems)
	{
		Element.Value->SetItemTier(aPlayerCombatEntity);
	}
}

int UPartyInventory::GetBaseItemTier(EItemID aItemId)
{
	if(!AllUnlockedItems.Contains(aItemId))
	{
		return 0;
	}
	else
	{
		return AllUnlockedItems[aItemId]->GetItemTier();
	}
	
}

void UPartyInventory::AddItem(EItemID aItemId)
{
	if(!AllUnlockedItems.Contains(aItemId))
	{
		UnlockBrandNewItem(aItemId);
		return;
	}
	else
	{
		AllUnlockedItems[aItemId]->IncreaseBaseItemTier();
	}
	
	
}

void UPartyInventory::UnlockBrandNewItem(EItemID aItemId)
{
	UItemBase* item = SkillFactorySubsystem->GetItem(aItemId);

	AllUnlockedItems.Add(aItemId,item);
}

void UPartyInventory::AddMoreStacksOfEquipment(FEquipmentRequestInfo aEquipmentRequest)
{
	 FEquipmentPassiveInventoryInfo PassiveInventoryInfo = partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentRequest.equipmentID];

	PassiveInventoryInfo.Amount = PassiveInventoryInfo.Amount + aEquipmentRequest.amount >= PassiveInventoryInfo.EquipmentMaxStack
	?  PassiveInventoryInfo.EquipmentMaxStack : PassiveInventoryInfo.Amount + aEquipmentRequest.amount ;
	
	partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentRequest.equipmentID] = PassiveInventoryInfo;
}

void UPartyInventory::ReturnEquipment(EPartyMembers aOldOwner, EEquipmentID aEquipmentID)
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

UEquipmentPassive* UPartyInventory::TakeOutEquipment(EPartyMembers aNewOwner, EEquipmentID aEquipmentID)
{
	if(!isEquipmentFreeToTake(aEquipmentID))
	{
		return nullptr;
	}
	
	partyInventoryCompleteData.equipmentInventoryInfo[aEquipmentID].equipmentOwners.Add(aNewOwner);
	
	UEquipmentPassive* EquipmentPassive = passiveFactorySubsystem->CreateEquipment(aEquipmentID);

	return EquipmentPassive;
}

bool UPartyInventory::isEquipmentFreeToTake(EEquipmentID aEquipmentID)
{
	FEquipmentPassiveInventoryInfo equipmentPassiveInventory = GetEquipment( aEquipmentID);
	return  equipmentPassiveInventory.equipmentOwners.Num()
	        < equipmentPassiveInventory.Amount;
}

FEquipmentPassiveInventoryInfo  UPartyInventory::GetEquipment(EEquipmentID aEquipmentID)
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

FPassiveSkillData UPartyInventory::GetEquipmentPassiveSkillData(EEquipmentID aEquipmentID)
{
	return passiveFactorySubsystem->GetEquipmentPassiveSkillData(aEquipmentID);
}

void UPartyInventory::AddEquipmentToInventory(FEquipmentRequestInfo aEquipmentRequest)
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



