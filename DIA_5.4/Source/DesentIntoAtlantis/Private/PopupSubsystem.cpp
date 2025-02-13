// Fill out your copyright notice in the Description page of Project Settings.


#include "PopupSubsystem.h"

#include "AtlantisGameModeBase.h"
#include "ItemPopupView.h"
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
