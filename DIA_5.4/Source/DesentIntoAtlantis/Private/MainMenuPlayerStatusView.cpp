// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuPlayerStatusView.h"
#include "EquipMenuView.h"
#include "AtlantisGameModeBase.h"
#include "PersistentGameinstance.h"
#include "StatusMainMenuElement.h"

void UMainMenuPlayerStatusView::InitializeStatusView(TMap<ESlot,UPlayerCombatEntity*>  aPlayerCombatEntitys,UPersistentGameinstance* aPersistentGameinstance)
{
	persistentGameinstance = aPersistentGameinstance;

	BW_Slot1->SetPersistantGameInstance(persistentGameinstance);
	statusMenuElements.Add(ESlot::Slot1,BW_Slot1);

	BW_Slot2->SetPersistantGameInstance(persistentGameinstance);
	statusMenuElements.Add(ESlot::Slot2,BW_Slot2);

	BW_Slot3->SetPersistantGameInstance(persistentGameinstance);
	statusMenuElements.Add(ESlot::Slot3,BW_Slot3);

	BW_Slot4->SetPersistantGameInstance(persistentGameinstance);
	statusMenuElements.Add(ESlot::Slot4,BW_Slot4);
	
	SetPlayerStatus(aPlayerCombatEntitys);

	for (auto Element : aPlayerCombatEntitys)
	{
		PlayerCombatEntities.Add(Element.Value);
	}
	
	TArray<UBaseHighlightElement*> HighlightElements;
	for (auto Element : statusMenuElements)
	{
		Element.Value->BW_HightlightElement->ViewSelection.
		AddDynamic(this,&UMainMenuPlayerStatusView::UMainMenuPlayerStatusView::ActivateEquip);
		Element.Value->BW_HightlightElement->SetMainText("Slot");
		HighlightElements.Add(Element.Value->BW_HightlightElement);
	}

	SetHighLightElements(HighlightElements);
}

void UMainMenuPlayerStatusView::ActivateInput()
{

	InitializeInputComponent();
	InputComponent->BindAction("Left"      ,IE_Pressed ,this, &UMainMenuPlayerStatusView::MoveUp  );
	InputComponent->BindAction("Right"    ,IE_Pressed ,this, &UMainMenuPlayerStatusView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UMainMenuPlayerStatusView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UMainMenuPlayerStatusView::ReturnToPreviousScreen  );
	
	SetDefaultMenuState();
}

void UMainMenuPlayerStatusView::SetPlayerStatus(TMap<ESlot, UPlayerCombatEntity*> aPlayerCombatEntitys)
{
	for (auto Element : aPlayerCombatEntitys)
	{
		statusMenuElements[Element.Key]->SetCombatEntity(Element.Value);
	}
	
	
}

void UMainMenuPlayerStatusView::ReturnToPreviousScreen()
{
	DisableInput();
}

void UMainMenuPlayerStatusView::ActivateEquip()
{

	if(PlayerCombatEntities[cursorPosition] != nullptr)
	{
		UEquipMenuView* equipMenuView =  (UEquipMenuView*)gameModeBase->InGameHUD->PushAndGetView(EViews::EquipView,    EUiType::ActiveUi);
		equipMenuView->SetEquipMenuView(persistentGameinstance->partyManagerSubsystem,PlayerCombatEntities[cursorPosition] );
	}
}
