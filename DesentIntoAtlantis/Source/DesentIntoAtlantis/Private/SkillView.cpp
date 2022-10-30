// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillView.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "Components/VerticalBox.h"
#include "SkillBarElement.h"
#include "CombatClass.h"
#include "Components/TextBlock.h"
#include "CombatManager.h"
#include "CombatSelectionView.h"
#include "PlayerCombatEntity.h"


void USkillView::UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillView::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USkillView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USkillView::MoveDown  );
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &USkillView::ReturnToPreviousScreen  );
	
	currentActivePartyMember = gameModeBase->combatManager->ReturnCurrentActivePartyMember();
	UCombatClass* combatClass = currentActivePartyMember->baseClass;

    BW_CharacterName->SetText(FText(FText::FromString(currentActivePartyMember->playerEntityData.characterName)));
    BW_ClassName->SetText(FText(FText::FromString(currentActivePartyMember->baseClass->currentClassLevel.className)));
	
	for(int i = 0 ; i < combatClass->classSkills.Num();i++)
	{
		CreateSkillbar(combatClass->classSkills[i]->skillData);
	}

	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
	SkillSelection(combatClass->classSkills[cursorPosition]->skillData);
	SetCursorPositionInfo();
}
void USkillView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = skillBarElements.Num()-1;
}

void USkillView::MoveUp()
{
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(0);

	Super::MoveUp();
	
	SkillSelection(currentActivePartyMember->baseClass->classSkills[cursorPosition]->skillData);
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
}

void USkillView::MoveDown()
{
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(0);

	Super::MoveDown();
	
	SkillSelection(currentActivePartyMember->baseClass->classSkills[cursorPosition]->skillData);
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
}



void USkillView::CreateSkillbar(FSkillsData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::SkillBar));

	USkillBarElement* baseUserWidget = (USkillBarElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();

	baseUserWidget->SetSkill(aSkill);

	skillBarElements.Add(baseUserWidget);
	
	BW_VerticalBox->AddChild(skillBarElement);
}

void USkillView::ReturnToPreviousScreen()
{
	InGameHUD->ReturnToPreviousActiveView();
}

void USkillView::SkillSelection(FSkillsData aSkill)
{
	BW_SkillName->SetText(FText(FText::FromString(aSkill.skillName)));
	BW_SkillDescription->SetText(FText(FText::FromString(aSkill.skillDescription)));
}

void USkillView::SelectSkill()
{
	InGameHUD->PopMostRecentActiveView();
	UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,EUiType::ActiveUi);
	UCombatClass* combatClass = currentActivePartyMember->baseClass;
	
	SelectionView->SetSkill(combatClass->classSkills[cursorPosition]);
}

