// Fill out your copyright notice in the Description page of Project Settings.


#include "UPartyInventory.h"

#include "InventoryEquipment.h"
#include "InventoryItems.h"
#include "SkillFactorySubsystem.h"

void UPartyInventory::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                               USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;

	PartyEquipment = NewObject<UInventoryEquipment>();
	PartyEquipment->InitializePartyInventory(partyInventoryCompleteData,passiveFactorySubsystem,SkillFactorySubsystem);

	PartyItems   = NewObject<UInventoryItems>();
	PartyItems->InitializePartyInventory(partyInventoryCompleteData,passiveFactorySubsystem,SkillFactorySubsystem);
}

