// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPopupView.h"

#include "SkillBarElement.h"



void UItemPopupView::SetItemPopup(FItemData ItemData)
{

	BW_PreviousItem->SetSkill(ItemData.itemTierSkillData[ItemData.baseItemTier]);
	BW_NewItem->SetSkill(ItemData.itemTierSkillData[ItemData.baseItemTier + 1]);
}
