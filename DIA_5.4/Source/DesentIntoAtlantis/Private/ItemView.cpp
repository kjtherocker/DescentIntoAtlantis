// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemView.h"

#include "AtlantisGameModeBase.h"
#include "CombatGameModeBase.h"
#include "CombatSelectionView.h"
#include "Inventory_Equipment.h"
#include "Inventory_Items.h"
#include "SkillBarElement.h"
#include "Components/VerticalBox.h"

class USkillBarElement;
class UCombatSelectionView;

void UItemView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UItemView::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UItemView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UItemView::MoveDown  );
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &UItemView::ReturnToPreviousScreen  );
	
}

void UItemView::CreateSkillbar(FSkillsData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::SkillBar));

	USkillBarElement* baseUserWidget = (USkillBarElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();

	baseUserWidget->SetSkill(aSkill);

	skillBarElements.Add(baseUserWidget);
	
	BW_VerticalBox->AddChild(skillBarElement);
}

void UItemView::CreateItems()
{
	
	
}

void UItemView::SetItemView(UPlayerCombatEntity* aPlayerCombatEntity)
{
	currentActivePartyMember = aPlayerCombatEntity;
	
	UInventory_Items* InventoryItems = persistentGameinstance->partyManagerSubsystem->PartyInventory->GetInventoryItems();
	InventoryItems->SetAllItemsTier(aPlayerCombatEntity);
	TArray<UItemBase*>  allItems = InventoryItems->GetAllItems();

	if(allItems.Num() == 0)
	{
		ReturnToPreviousScreen();
		return;
	}
	
	for(int i = 0 ; i < allItems.Num();i++)
	{
		if(allItems[i] != nullptr)
		{
			CreateSkillbar(allItems[i]->currentSkill->skillData);	
		}
	}

	if(skillBarElements[cursorPosition] != nullptr)
	{
		skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
	}

	SetHighLightElements(TArray<UBaseHighlightElement*>(skillBarElements));
	SetCursorPositionInfo();
	SetDefaultMenuState();
}

void UItemView::SelectSkill()
{
//	FItemChargesCompleteData ItemCharges = persistentGameinstance->partyManagerSubsystem->GetPartyManagerData().ItemCharges;

	UInventory_Items* InventoryItems = persistentGameinstance->partyManagerSubsystem->PartyInventory->GetInventoryItems();

	TArray<UItemBase*>  allItems = InventoryItems->GetAllItems();

	USkillBase* skill = allItems[cursorPosition]->currentSkill;

	if(skill->CanUseSkill(currentActivePartyMember,ESkillResourceUsed::ItemCharges))
	{
		InGameHUD->PopMostRecentActiveView();
		UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
		SelectionView->SetCombatGameMode((ACombatGameModeBase*)gameModeBase);
		SelectionView->SetSkill(skill);
	}
}
