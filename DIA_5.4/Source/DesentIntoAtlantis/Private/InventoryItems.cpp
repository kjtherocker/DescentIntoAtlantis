// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryItems.h"

#include "ItemBase.h"
#include "SkillFactorySubsystem.h"
#include "UPartyInventory.h"


void UInventoryItems::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                           USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;
}

void UInventoryItems::SetAllItemsTier(UPlayerCombatEntity* aPlayerCombatEntity)
{
	for (auto Element : AllUnlockedItems)
	{
		Element.Value->SetItemTier(aPlayerCombatEntity);
	}
}

int UInventoryItems::GetBaseItemTier(EItemID aItemId)
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

void UInventoryItems::AddItem(EItemID aItemId)
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

void UInventoryItems::UnlockBrandNewItem(EItemID aItemId)
{
	UItemBase* item = SkillFactorySubsystem->GetItem(aItemId);

	AllUnlockedItems.Add(aItemId,item);
}

TArray<UItemBase*> UInventoryItems::GetAllItems()
{
	TArray<UItemBase*> itemsToGet;
	for (auto Element : AllUnlockedItems)
	{
		itemsToGet.Add(Element.Value);
	}

	return itemsToGet;
}

