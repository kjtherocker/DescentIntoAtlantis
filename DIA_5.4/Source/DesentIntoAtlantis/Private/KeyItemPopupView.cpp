// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyItemPopupView.h"

void UKeyItemPopupView::SetKeyItemPopup(FKeyItemData aKeyItemData)
{

	SetText(BW_ItemName,aKeyItemData.itemName);
	SetText(BW_ItemDescription,aKeyItemData.descriptionText);
}
