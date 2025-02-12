// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyItems.h"

#include "ItemBase.h"
#include "SkillFactorySubsystem.h"
#include "UPartyInventory.h"


void UPartyItems::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                           USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;
}

void UPartyItems::SetAllItemsTier(UPlayerCombatEntity* aPlayerCombatEntity)
{
	for (auto Element : AllUnlockedItems)
	{
		Element.Value->SetItemTier(aPlayerCombatEntity);
	}
}

int UPartyItems::GetBaseItemTier(EItemID aItemId)
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

void UPartyItems::AddItem(EItemID aItemId)
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

void UPartyItems::UnlockBrandNewItem(EItemID aItemId)
{
	UItemBase* item = SkillFactorySubsystem->GetItem(aItemId);

	AllUnlockedItems.Add(aItemId,item);
}

