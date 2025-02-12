// Fill out your copyright notice in the Description page of Project Settings.


#include "UPartyInventory.h"

#include "PartyEquipment.h"
#include "PartyItems.h"
#include "SkillFactorySubsystem.h"

void UPartyInventory::InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,
                                               USkillFactorySubsystem* aSkillFactorySubsystem)
{
	partyInventoryCompleteData = aPartyInventoryCompleteData;
	passiveFactorySubsystem    = aPassiveFactorySubsystem;
	SkillFactorySubsystem      = aSkillFactorySubsystem;

	PartyEquipment = NewObject<UPartyEquipment>();
	PartyEquipment->InitializePartyInventory(partyInventoryCompleteData,passiveFactorySubsystem,SkillFactorySubsystem);

	PartyItems   = NewObject<UPartyItems>();
	PartyItems->InitializePartyInventory(partyInventoryCompleteData,passiveFactorySubsystem,SkillFactorySubsystem);
}

