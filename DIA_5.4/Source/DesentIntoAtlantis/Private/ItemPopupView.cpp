// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPopupView.h"

#include "SkillBarElement.h"



void UItemPopupView::SetItemPopup(FItemData ItemData)
{

	SetText(BW_PreviousDescription,ItemData.itemTierSkillData[ItemData.baseItemTier].skillDescription);
	SetText(BW_NewDescription,ItemData.itemTierSkillData[ItemData.baseItemTier + 1].skillDescription);

	BW_PreviousItem->SetSkill(ItemData.itemTierSkillData[ItemData.baseItemTier]);
	BW_NewItem->SetSkill(ItemData.itemTierSkillData[ItemData.baseItemTier + 1]);
}
