// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

#include "PlayerCombatEntity.h"

void UItemBase::InitializeItem(FItemData aItemData,USkillBase* aCurrentSkill)
{
	itemData     = aItemData;
	currentSkill = aCurrentSkill;
}

void UItemBase::SetItemTier(UPlayerCombatEntity* aPlayerCombatEntity)
{
	int itemTier = aPlayerCombatEntity->combatEntityHub->OnGetItemTier(itemData.itemID);

	currentSkill->Initialize(itemData.itemTierSkillData[itemTier]);
}

void UItemBase::IncreaseBaseItemTier()
{
	itemData.baseItemTier++;

	currentSkill->Initialize(itemData.itemTierSkillData[itemData.baseItemTier]);
}

USkillBase* UItemBase::GetItemBasedOnTier()
{
	return nullptr;
}
