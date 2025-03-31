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

bool UPopupSubsystem::isPopupAllowedToShowUp()
{

	if(PopupRequestDatas.Num() == 0)
	{
		return false;
	}
	
	if(InGameHUD->isViewActive(EViews::Death))
	{
		return false;
	}

	if(InGameHUD->isViewActive(EViews::Dialogue))
	{
		return false;
	}

	if(InGameHUD->isViewActive(EViews::TransitionView))
	{
		return false;
	}

	return true;
}

void UPopupSubsystem::AddPopupRequest(FPopupRequestData aPopupRequest)
{
	PopupRequestDatas.Add(aPopupRequest);
}//////

void UPopupSubsystem::TriggerPopup()
{
	if(!isPopupAllowedToShowUp())
	{
		return;
	}


	FPopupRequestData popupRequest = PopupRequestDatas[0];
	PopupRequestDatas.RemoveAt(0);
	
	switch (popupRequest.popupType)
	{
	case EPopupType::None:
		break;
	case EPopupType::Item:
		CreateItemPopup(popupRequest.ItemData);
		break;
	case EPopupType::KeyItem:
		CreateKeyItemPopup(popupRequest.KeyItemData);
		break;
	case EPopupType::Equipment:
		CreateEquipmentPopup(popupRequest.EquipmentData);
		break;
	}
}

void UPopupSubsystem::SetPartySubsystem(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	PartyManagerSubsystem = aPartyManagerSubsystem;

	PartyManagerSubsystem->PartyInventory->GetInventoryItems()
	->ItemPopupRequest.AddDynamic(this,&UPopupSubsystem::AddPopupRequest);

	PartyManagerSubsystem->PartyInventory->GetInventoryKeyItems()
	->KeyItemPopupRequest.AddDynamic(this,&UPopupSubsystem::AddPopupRequest);
}

void UPopupSubsystem::CreateKeyItemPopup(FKeyItemData aKeyItemData)
{
	UKeyItemPopupView* KeyItemPopupView =
	(UKeyItemPopupView*)InGameHUD->PushAndGetView(EViews::KeyItemPopupView,  EUiType::ActiveUi);

	KeyItemPopupView->ViewClosed.AddDynamic(this, &UPopupSubsystem::OnPopupEnd);
	KeyItemPopupView->SetKeyItemPopup(aKeyItemData);
}

void UPopupSubsystem::CreateItemPopup(FItemData aItemData)
{
	UItemPopupView* ItemPopupView =
		(UItemPopupView*)InGameHUD->PushAndGetView(EViews::ItemPopupView,  EUiType::ActiveUi);

	ItemPopupView->ViewClosed.RemoveDynamic(this, &UPopupSubsystem::OnPopupEnd);
	ItemPopupView->ViewClosed.AddDynamic(this, &UPopupSubsystem::OnPopupEnd);
	ItemPopupView->SetItemPopup(aItemData);
}

void UPopupSubsystem::CreateEquipmentPopup(FEquipmentPassiveData aEquipmentData)
{
}

void UPopupSubsystem::OnPopupEnd()
{

	if(PopupRequestDatas.Num() == 0)
	{
		OnPopUpClosed.Broadcast();
	}
	else
	{
		TriggerPopup();
	}
}
