// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemView.h"

#include "AtlantisGameModeBase.h"
#include "CombatGameModeBase.h"
#include "CombatSelectionView.h"
#include "PartyEquipment.h"
#include "PartyItems.h"

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

void UItemView::CreateItems()
{
	
}

void UItemView::SetItemView(UPlayerCombatEntity* aPlayerCombatEntity)
{
	persistentGameinstance->partyManagerSubsystem->PartyInventory->GetPartyItems()->SetAllItemsTier(aPlayerCombatEntity);
	
}

void UItemView::SelectSkill()
{


	FItemCharges ItemCharges = persistentGameinstance->partyManagerSubsystem->GetPartyManagerData().ItemCharges;

	//USkillBase* itemSkill;
	
	//if(combatClass->classSkills[cursorPosition]->CanUseSkill(currentActivePartyMember))
	{
		InGameHUD->PopMostRecentActiveView();
		UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
		SelectionView->SetCombatGameMode((ACombatGameModeBase*)gameModeBase);
		//SelectionView->SetSkill(itemSkill);
	}
}
