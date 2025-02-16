// Fill out your copyright notice in the Description page of Project Settings.


#include "PopupSubsystem.h"

#include "AtlantisGameModeBase.h"
#include "Inventory_KeyItems.h"
#include "ItemPopupView.h"
#include "KeyItemPopupView.h"
#include "PassiveSkillData.h"
#include "SkillData.h"

void UPopupSubsystem::SetGameMode(AAtlantisGameModeBase* aGameMode)
{
	GameModeBase = aGameMode;
	InGameHUD = GameModeBase->InGameHUD;
}

void UPopupSubsystem::SetPartySubsystem(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	PartyManagerSubsystem = aPartyManagerSubsystem;

	PartyManagerSubsystem->PartyInventory->GetInventoryItems()
	->OnNewItemGainedDelegate.AddDynamic(this,&UPopupSubsystem::CreateItemPopup);

	PartyManagerSubsystem->PartyInventory->GetInventoryKeyItems()
	->OnNewKeyItemGained.AddDynamic(this,&UPopupSubsystem::CreateKeyItemPopup);
}

void UPopupSubsystem::CreateKeyItemPopup(FKeyItemData aKeyItemData)
{
	UKeyItemPopupView* ItemPopupView =
	(UKeyItemPopupView*)InGameHUD->PushAndGetView(EViews::KeyItemPopupView,  EUiType::ActiveUi);
	
	ItemPopupView->SetKeyItemPopup(aKeyItemData);
}

void UPopupSubsystem::CreateItemPopup(FItemData aItemData)
{
	UItemPopupView* ItemPopupView =
		(UItemPopupView*)InGameHUD->PushAndGetView(EViews::ItemPopupView,  EUiType::ActiveUi);
	
	ItemPopupView->SetItemPopup(aItemData);
}

void UPopupSubsystem::CreateEquipmentPopup(FEquipmentPassiveData aEquipmentData)
{
}
