// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipMenuView.h"

#include "ClassElement.h"
#include "ClassSelectionElement.h"
#include "ClassSelectionView.h"
#include "CombatEntityHub.h"
#include "CombatStat.h"
#include "CombatStatView.h"
#include "PartyInventoryEquipmentView.h"
#include "PassiveHandler.h"
#include "PassiveSelectionView.h"
#include "PassiveSkillElement.h"
#include "PassiveSkills.h"
#include "Components/VerticalBox.h"

void UEquipMenuView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UEquipMenuView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UEquipMenuView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UEquipMenuView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UEquipMenuView::PopMostActiveView  );
	
}

void UEquipMenuView::SetEquipMenuView(UPartyManagerSubsystem* aPartyManagerSubsystem,UPlayerCombatEntity* aPlayerCombatEntity)
{
	
	BW_CombatStatView->UiInitialize(gameModeBase);
	
	currentPlayer         = aPlayerCombatEntity;
	PartyManagerSubsystem = aPartyManagerSubsystem;

	BW_Portrait->SetBrushFromTexture(currentPlayer->currentCostumeData.fullBodyCharacterPortrait);
	
	BW_CombatStatView->SetPlayerStatView(currentPlayer,currentPlayer->classHandler->mainClass);
	
	BW_CPAmount->SetText(FText::FromString(FString::FromInt(currentPlayer->classHandler->GetClassPoints())));
	
	BW_MainClassElement->SetMainText("<TitleStyling>"+currentPlayer->classHandler->GetClassName(EClassSlot::Main)+"</>");
	BW_SubClassElement->SetMainText("<TitleStyling>"+currentPlayer->classHandler->GetClassName(EClassSlot::Sub)+"</>");

	BW_MainClassElement->ViewSelection.AddDynamic(this,&UEquipMenuView::MainClassClicked);
	BW_SubClassElement->ViewSelection.AddDynamic(this,&UEquipMenuView::SubClassClicked);
	
	passiveHighlightElements.Add(BW_MainClassElement);
	passiveHighlightElements.Add(BW_SubClassElement);
	
	UEquipmentHandler* EquipmentHandler =  currentPlayer->combatEntityHub->equipmentHandler;
	TArray<UEquipmentPassive*> Equipment = EquipmentHandler->GetAllEquipment();
	FPassiveSkillData genericNotData;
	
	for(int i = 0 ; i < EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		if(Equipment[i] != nullptr)
		{
		   CreatePassiveSkillbar(EEquipmentMenuSlot::Equipment,Equipment[i]->GetPassiveSkill()->passiveSkillData,i);		
		}
		else
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Equipment,genericNotData,i);	
		}
	}
	
	UPassiveHandler* PassiveHandler =  currentPlayer->combatEntityHub->passiveHandler;
	TArray<UPassiveSkills*> passiveSkills = currentPlayer->combatEntityHub->passiveHandler->PassiveSlotHandler->GetAllSlotedPassives();
	
	for(int i = 0 ; i < PassiveHandler->PassiveSlotHandler->AMOUNT_OF_PASSIVE_SLOTS;i++)
	{
		if(passiveSkills[i] == nullptr )
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,genericNotData,i);
			continue;
		}
		
		if(passiveSkills[i])
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,passiveSkills[i]->passiveSkillData,i);		
		}
	}

	SetHighLightElements(passiveHighlightElements);
	SetDefaultMenuState();
}

void UEquipMenuView::CreatePassiveSkillbar(EEquipmentMenuSlot aEquipmentSlot,FPassiveSkillData aSkill,int aSlot)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::PassiveSkillElement));

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	passiveHighlightElements.Add(baseUserWidget);

	baseUserWidget->SetMainText("");
	baseUserWidget->slot = aSlot;
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



void UEquipMenuView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	int classOffset   = 2;
	int passiveSlots  = passiveHighlightElements.Num()-1;
	maxCursorPosition = passiveHighlightElements.Num()-1;
	passiveHighlightElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}


void UEquipMenuView::UpdateEquipScreen()
{
	int classOffset = 2;
	
	BW_CombatStatView->SetPlayerStatView(currentPlayer,currentPlayer->classHandler->mainClass);
	BW_MainClassElement->SetMainText("<TitleStyling>"+currentPlayer->classHandler->GetClassName(EClassSlot::Main)+"</>");
	BW_SubClassElement->SetMainText("<TitleStyling>"+currentPlayer->classHandler->GetClassName(EClassSlot::Sub)+"</>");

	
	UEquipmentHandler* EquipmentHandler =  currentPlayer->combatEntityHub->equipmentHandler;
	TArray<UEquipmentPassive*> Equipment = EquipmentHandler->GetAllEquipment();
	FPassiveSkillData genericNotData;
	
	for(int i = 0 ; i < EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		if(Equipment[i] != nullptr)
		{
			SetPassiveSkillBar(Equipment[i]->GetPassiveSkill()->passiveSkillData,(UPassiveSkillElement*)passiveHighlightElements[i+classOffset]);		
		}
		else
		{
	
		}
	}
	
	UPassiveHandler* PassiveHandler =  currentPlayer->combatEntityHub->passiveHandler;
	TArray<UPassiveSkills*> passiveSkills = currentPlayer->combatEntityHub->passiveHandler->PassiveSlotHandler->GetAllSlotedPassives();
	int offSet = EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS + classOffset;
	
	for(int i = 0 ; i <  PassiveHandler->PassiveSlotHandler->AMOUNT_OF_PASSIVE_SLOTS;i++)
	{
		if(passiveHighlightElements[i + offSet])
		{
			if(passiveSkills[i] != nullptr)
			{
				SetPassiveSkillBar(passiveSkills[i]->passiveSkillData,(UPassiveSkillElement*)passiveHighlightElements[i + offSet]);
			}
		}
		
	}
}

void UEquipMenuView::MainClassClicked()
{
	UClassSelectionView* partyInventoryEquipment = (UClassSelectionView*)InGameHUD->PushAndGetView(EViews::ClassSelectionView,  EUiType::ActiveUi);
	partyInventoryEquipment->characterChange.AddDynamic(this,&UEquipMenuView::UEquipMenuView::UpdateEquipScreen);
	partyInventoryEquipment->ActivateClassSelectionView(currentPlayer,PartyManagerSubsystem,EClassSlot::Main);
}

void UEquipMenuView::SubClassClicked()
{
	UClassSelectionView* partyInventoryEquipment = (UClassSelectionView*)InGameHUD->PushAndGetView(EViews::ClassSelectionView,  EUiType::ActiveUi);
	partyInventoryEquipment->characterChange.AddDynamic(this,&UEquipMenuView::UEquipMenuView::UpdateEquipScreen);
	partyInventoryEquipment->ActivateClassSelectionView(currentPlayer,PartyManagerSubsystem,EClassSlot::Sub);
}

void UEquipMenuView::EquipmentClicked()
{
	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)highlightElements[cursorPosition];

	if(baseUserWidget)
	{
		UPartyInventoryEquipmentView* partyInventoryEquipment = (UPartyInventoryEquipmentView*)InGameHUD->PushAndGetView(EViews::PartyInventoryEquipment,  EUiType::ActiveUi);
		partyInventoryEquipment->characterChange.AddDynamic(this,&UEquipMenuView::UEquipMenuView::UpdateEquipScreen);
		partyInventoryEquipment->ActivateEquipMenu(currentPlayer,PartyManagerSubsystem,baseUserWidget->slot);
	}
}

void UEquipMenuView::PassiveClicked()
{
	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)highlightElements[cursorPosition];

	if(baseUserWidget)
	{
		UPassiveSelectionView* passiveSelectionView = (UPassiveSelectionView*)InGameHUD->PushAndGetView(EViews::PassiveSelectionView,  EUiType::ActiveUi);
		passiveSelectionView->characterChange.AddDynamic(this,&UEquipMenuView::UEquipMenuView::UpdateEquipScreen);
		passiveSelectionView->ActivatePassiveMenu(currentPlayer,baseUserWidget->slot);	
	}
}
