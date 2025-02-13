// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick_Chest.h"

#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"

void UGimmick_Chest::SetChestGimmickData(FChestGimmickData aChestGimmickData,UPersistentGameinstance* aPersistentGameinstance )
{
	ChestGimmickData = aChestGimmickData;
	interactableData = aChestGimmickData.GimmickInteractableData;
	persistentGameinstance = aPersistentGameinstance;
}

void UGimmick_Chest::ActivateGimmick()
{
	Super::ActivateGimmick();
	if(isclaimed)
	{
		return;
	}

	
	persistentGameinstance->partyManagerSubsystem->PartyInventory->GetInventoryItems()->AddItem(ChestGimmickData.itemID);
	isclaimed = true;

	interactableData.isInteractable = false;
}

FGimmickInteractableData UGimmick_Chest::GetInteractableData()
{
	return interactableData;
}
