// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UPartyInventory.h"
#include "UObject/NoExportTypes.h"
#include "Inventory_KeyItems.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewKeyItemGained,FKeyItemData,ItemData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyItemPopupRequest,FPopupRequestData,itemPopupRequest);
UCLASS()
class DESENTINTOATLANTIS_API UInventory_KeyItems : public UObject
{
	GENERATED_BODY()

private:
	
	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;
	UPROPERTY()
	UKeyItemFactorySubsystem* keyItemFactorySubSystem;

	void ValidateSaveDataWithDatabase();
	
public:

	UPROPERTY()
	FOnNewKeyItemGained OnNewKeyItemGained;

	UPROPERTY()
	FKeyItemPopupRequest KeyItemPopupRequest;
	
	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UKeyItemFactorySubsystem* aKeyItemFactorySubSystem);
	
	void AddKeyItem(EKeyItemsID aKeyItemID);

	void GiveAllKeyItems();

	void SendPopupRequest(FKeyItemData aKeyItemData);
	
	bool DoesPartyOwnKeyItem(EKeyItemsID aKeyItemID);
	FPartyInventoryCompleteData GetPartyInventoryCompleteData(){return partyInventoryCompleteData;}
	
};
