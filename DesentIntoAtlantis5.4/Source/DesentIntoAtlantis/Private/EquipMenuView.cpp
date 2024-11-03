// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipMenuView.h"

#include "PassiveHandler.h"
#include "PassiveSkillElement.h"
#include "PassiveSkills.h"
#include "Components/VerticalBox.h"

void UEquipMenuView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UEquipMenuView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UEquipMenuView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UEquipMenuView::ActivateMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UEquipMenuView::PopMostActiveView  );

}

void UEquipMenuView::SetEquipMenuView(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	UPlayerCombatEntity* currentPlayer = aPartyManagerSubsystem->playerCombatEntity[0];

	for(int i = 0 ; i < 4;i++)
	{
		CreatePassiveSkillbar();
	}
	

	TArray<UPassiveSkills*> passiveSkills = currentPlayer->passiveHandler->GetAllPassives();
	for(int i = 0 ;i < passiveSkills.Num();i++ )
	{
		SetPassiveSkillBar(passiveSkills[i]->passiveSkillData,PassiveSkillElements[i]);		
	}
	
	
	SetCursorPositionInfo();
}

void UEquipMenuView::CreatePassiveSkillbar()
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::PassiveSkillElement));

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	PassiveSkillElements.Add(baseUserWidget);

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	BW_VerticalPassiveBox->AddChild(skillBarElement);
	
}

void UEquipMenuView::SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement)
{
	PassiveSkillElement->SetPassiveSkill(aSkill);
}

void UEquipMenuView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = PassiveSkillElements.Num()-1;
	PassiveSkillElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UEquipMenuView::MoveUp()
{
	PassiveSkillElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::Super::MoveUp();
	PassiveSkillElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UEquipMenuView::MoveDown()
{
	PassiveSkillElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::Super::MoveDown();
	PassiveSkillElements[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}
