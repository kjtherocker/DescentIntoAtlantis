// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory_KeyItems.h"

#include "PopupSubsystem.h"

void UInventory_KeyItems::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UKeyItemFactorySubsystem* aKeyItemFactorySubSystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	keyItemFactorySubSystem    = aKeyItemFactorySubSystem;
	ValidateSaveDataWithDatabase();
}

void UInventory_KeyItems::ValidateSaveDataWithDatabase()
{
	TArray<EKeyItemsID> KeyItemsToRemove;
	for (auto Element : partyInventoryCompleteData.keyItemData)
	{
		FKeyItemData KeyItemData = keyItemFactorySubSystem->GetKeyItemData(Element.Key);

		if(KeyItemData.KeyItemsID == EKeyItemsID::KeyItemDoesNotExist ||
			KeyItemData.KeyItemsID == EKeyItemsID::None)
		{
			KeyItemsToRemove.Add(Element.Key);
			continue;
		}

		partyInventoryCompleteData.keyItemData[Element.Key] = KeyItemData;
	}

	for (EKeyItemsID ItemsToRemove : KeyItemsToRemove)
	{
		partyInventoryCompleteData.keyItemData.Remove(ItemsToRemove);
	}
}

void UInventory_KeyItems::AddKeyItem(EKeyItemsID aKeyItemID)
{
	FKeyItemData ItemData = keyItemFactorySubSystem->GetKeyItemData(aKeyItemID);

	if(ItemData.KeyItemsID == EKeyItemsID::KeyItemDoesNotExist ||
		ItemData.KeyItemsID == EKeyItemsID::None)
	{
		return;
	}
	
	partyInventoryCompleteData.keyItemData.Add(aKeyItemID,ItemData);

	OnNewKeyItemGained.Broadcast(ItemData);
	SendPopupRequest(ItemData);
}

void UInventory_KeyItems::GiveAllKeyItems()
{
	partyInventoryCompleteData.keyItemData = keyItemFactorySubSystem->GetAllKeyItems();
}

void UInventory_KeyItems::SendPopupRequest(FKeyItemData aKeyItemData)
{
	FPopupRequestData PopupRequestData;
	
	PopupRequestData.popupType    = EPopupType::KeyItem;
	PopupRequestData.KeyItemData  = aKeyItemData;
	
	KeyItemPopupRequest.Broadcast(PopupRequestData);
}

bool UInventory_KeyItems::DoesPartyOwnKeyItem(EKeyItemsID aKeyItemID)
{
	return partyInventoryCompleteData.keyItemData.Contains(aKeyItemID);
}
