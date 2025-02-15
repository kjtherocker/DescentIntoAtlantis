// Fill out your copyright notice in the Description page of Project Settings.


#include "UPartyInventory.h"

#include "Inventory_Equipment.h"
#include "Inventory_Items.h"
#include "Inventory_KeyItems.h"
#include "SkillFactorySubsystem.h"

void UPartyInventory::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData, UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                               USkillFactorySubsystem* aSkillFactorySubsystem, UKeyItemFactorySubsystem* aKeyItemFactorySubSystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;

	PartyEquipment = NewObject<UInventory_Equipment>();
	PartyEquipment->InitializePartyInventory(partyInventoryCompleteData,passiveFactorySubsystem,SkillFactorySubsystem);

	PartyItems   = NewObject<UInventory_Items>();
	PartyItems->InitializePartyInventory(partyInventoryCompleteData,passiveFactorySubsystem,SkillFactorySubsystem);

	KeyItems   = NewObject<UInventory_KeyItems>();
	KeyItems->InitializePartyInventory(partyInventoryCompleteData,aKeyItemFactorySubSystem);
}

void UPartyInventory::SavePartyInventory()
{
	partyInventoryCompleteData.equipmentInventoryInfo =
		PartyEquipment->GetPartyInventoryCompleteData().equipmentInventoryInfo;

	partyInventoryCompleteData.ItemInventoryInfo =
		PartyItems->GetPartyInventoryCompleteData().ItemInventoryInfo;

	partyInventoryCompleteData.keyItemData =
		KeyItems->GetPartyInventoryCompleteData().keyItemData;
}

FPartyInventoryCompleteData UPartyInventory::GetPartyInventoryCompleteData()
{
	SavePartyInventory();
	return partyInventoryCompleteData;
}

