// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryItems.h"
#include "ItemBase.h"
#include "SkillData.h"
#include "SkillFactorySubsystem.h"
#include "UPartyInventory.h"


void UInventoryItems::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                               USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;
	
	CreateAllItems();
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

		OnNewItemGainedDelegate.Broadcast(AllUnlockedItems[aItemId]->GetItemData());
		return;
	}
	else
	{
		OnNewItemGainedDelegate.Broadcast(AllUnlockedItems[aItemId]->GetItemData());
		AllUnlockedItems[aItemId]->IncreaseBaseItemTier();
		partyInventoryCompleteData.ItemInventoryInfo[aItemId] = AllUnlockedItems[aItemId]->GetItemData();
	}
	
	
}

bool UInventoryItems::UnlockBrandNewItem(EItemID aItemId)
{
	if(AllUnlockedItems.Contains(aItemId))
	{
		return false;
	}
	
	UItemBase* item = SkillFactorySubsystem->GetItem(aItemId);

	if(item->GetItemData().itemID == EItemID::ItemNotFound)
	{
		return false;
	}
	
	AllUnlockedItems.Add(aItemId,item);
	partyInventoryCompleteData.ItemInventoryInfo.Add(aItemId,item->GetItemData());

	return true;
}


void UInventoryItems::CreateAllItems()
{
	if(AllUnlockedItems.Num() == partyInventoryCompleteData.ItemInventoryInfo.Num())
	{
		return;
	}

	TMap<EItemID, FItemData> itemInventoryInfos = partyInventoryCompleteData.ItemInventoryInfo;

	partyInventoryCompleteData.ItemInventoryInfo.Empty();
	
	for (auto Pair :itemInventoryInfos)
	{
		if(AllUnlockedItems.Contains(Pair.Value.itemID))
		{
			continue;
		}
		
		if(UnlockBrandNewItem(Pair.Value.itemID))
		{
			AllUnlockedItems[Pair.Value.itemID]->SetItemData(Pair.Value);	
		}
	}
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

