// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipMenuView.h"

#include "CombatEntityHub.h"
#include "PartyInventoryEquipmentView.h"
#include "PassiveHandler.h"
#include "PassiveSkillElement.h"
#include "PassiveSkills.h"
#include "Components/VerticalBox.h"

void UEquipMenuView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UEquipMenuView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UEquipMenuView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UEquipMenuView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UEquipMenuView::PopMostActiveView  );

}

void UEquipMenuView::SetEquipMenuView(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	currentPlayer = aPartyManagerSubsystem->playerCombatEntity[0];
	PartyManagerSubsystem = aPartyManagerSubsystem;
	
	BW_CPAmount->SetText(FText::FromString(FString::FromInt(currentPlayer->classHandler->GetClassPoints())));

	BW_MainClassText->SetText(FText::FromString(currentPlayer->classHandler->GetClassName(EClassSlot::Main)));
	BW_SubClassText->SetText(FText::FromString(currentPlayer->classHandler->GetClassName(EClassSlot::Sub)));


	UEquipmentHandler* EquipmentHandler =  currentPlayer->combatEntityHub->equipmentHandler;
	TArray<UEquipmentPassive*> Equipment = EquipmentHandler->GetAllEquipment();
	FPassiveSkillData genericNotData;
	
	for(int i = 0 ; i < EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		if(Equipment[i] != nullptr)
		{
		   CreatePassiveSkillbar(EEquipmentMenuSlot::Equipment,Equipment[i]->GetPassiveSkill()->passiveSkillData);		
		}
		else
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Equipment,genericNotData);	
		}
	}
	
	UPassiveHandler* PassiveHandler =  currentPlayer->combatEntityHub->passiveHandler;
	TArray<UPassiveSkills*> passiveSkills = currentPlayer->combatEntityHub->passiveHandler->PassiveSlotHandler->GetAllSlotedPassives();
	
	for(int i = 0 ; i < PassiveHandler->PassiveSlotHandler->AMOUNT_OF_PASSIVE_SLOTS;i++)
	{
		if(passiveSkills[i] == nullptr )
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,genericNotData);
			continue;
		}
		
		if(passiveSkills[i])
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,passiveSkills[i]->passiveSkillData);		
		}
	}

	SetHighLightElements((TArray<UBaseHighlightElement*>)passiveHighlightElements);
	SetDefaultMenuState();
}

void UEquipMenuView::CreatePassiveSkillbar(EEquipmentMenuSlot aEquipmentSlot,FPassiveSkillData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::PassiveSkillElement));

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	passiveHighlightElements.Add(baseUserWidget);

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);

	switch (aEquipmentSlot)
	{
		case EEquipmentMenuSlot::None:
			break;

		case EEquipmentMenuSlot::Equipment:
			BW_VerticalEquipBox->AddChild(skillBarElement);
		    baseUserWidget->ViewSelection.AddDynamic(this, &UEquipMenuView::EquipmentClicked);
			break;
		case EEquipmentMenuSlot::Passive:
			BW_VerticalPassiveBox->AddChild(skillBarElement);
		    baseUserWidget->ViewSelection.AddDynamic(this, &UEquipMenuView::PassiveClicked);
			break;
	}
	
	SetPassiveSkillBar(aSkill, baseUserWidget);
}

void UEquipMenuView::SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement)
{
	if(aSkill.passiveSkillID == EPassiveSkillID::None)
	{
		return;
	}
	PassiveSkillElement->SetPassiveSkill(aSkill);
}

void UEquipMenuView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	int classOffset   = 2;
	int equipSlots    = equipmentSlots.Num()-1;
	int passiveSlots  = passiveHighlightElements.Num()-1;
	maxCursorPosition = passiveHighlightElements.Num()-1;
	passiveHighlightElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}


void UEquipMenuView::UpdateEquipScreen()
{
	UEquipmentHandler* EquipmentHandler =  currentPlayer->combatEntityHub->equipmentHandler;
	TArray<UEquipmentPassive*> Equipment = EquipmentHandler->GetAllEquipment();
	FPassiveSkillData genericNotData;
	
	for(int i = 0 ; i < EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		if(Equipment[i] != nullptr)
		{
			SetPassiveSkillBar(Equipment[i]->GetPassiveSkill()->passiveSkillData,passiveHighlightElements[i]);		
		}
		else
		{
	
		}
	}
	
	UPassiveHandler* PassiveHandler =  currentPlayer->combatEntityHub->passiveHandler;
	TArray<UPassiveSkills*> passiveSkills = currentPlayer->combatEntityHub->passiveHandler->PassiveSlotHandler->GetAllSlotedPassives();
	int offSet = EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS;
	
	for(int i = 0 ; i <  PassiveHandler->PassiveSlotHandler->AMOUNT_OF_PASSIVE_SLOTS;i++)
	{
		if(passiveHighlightElements[i + offSet])
		{
			if(passiveSkills[i] != nullptr)
			{
				SetPassiveSkillBar(passiveSkills[i]->passiveSkillData,passiveHighlightElements[i + offSet]);
			}
		}
		
	}
}

void UEquipMenuView::MainClassClicked()
{
}

void UEquipMenuView::SubClassClicked()
{
}

void UEquipMenuView::EquipmentClicked()
{
	UPartyInventoryEquipmentView* partyInventoryEquipment = (UPartyInventoryEquipmentView*)InGameHUD->PushAndGetView(EViews::PartyInventoryEquipment,  EUiType::ActiveUi);
	partyInventoryEquipment->characterChange.AddDynamic(this,&UEquipMenuView::UEquipMenuView::UpdateEquipScreen);
	partyInventoryEquipment->ActivateEquipMenu(currentPlayer,PartyManagerSubsystem,1);
}

void UEquipMenuView::PassiveClicked()
{
}
