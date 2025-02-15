// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UPartyInventory.h"
#include "UObject/NoExportTypes.h"
#include "Inventory_Items.generated.h"

class UPassiveFactorySubsystem;
class USkillFactorySubsystem;
class UPlayerCombatEntity;
enum class EItemID : uint8;
class UItemBase;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewItemGained,FItemData,ItemData);

UCLASS()
class DESENTINTOATLANTIS_API UInventory_Items : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;
	
	UPROPERTY()
	TMap<EItemID,UItemBase*> AllUnlockedItems;
	
	UPROPERTY()
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;

	void CreateAllItems();
	
public:

	UPROPERTY()
	FOnNewItemGained OnNewItemGainedDelegate;
	
	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,USkillFactorySubsystem* aSkillFactorySubsystem );

	void SetAllItemsTier(UPlayerCombatEntity* aPlayerCombatEntity);
	
	FPartyInventoryCompleteData GetPartyInventoryCompleteData(){return partyInventoryCompleteData;}
	
	int GetBaseItemTier(EItemID aItemId);

	void AddItem(EItemID aItemId);

	bool UnlockBrandNewItem(EItemID aItemId);

	TArray<UItemBase*> GetAllItems();
	
};
