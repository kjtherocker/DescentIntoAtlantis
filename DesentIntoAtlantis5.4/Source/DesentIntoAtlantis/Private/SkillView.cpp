// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillView.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "Components/VerticalBox.h"
#include "SkillBarElement.h"
#include "CombatClass.h"
#include "Components/TextBlock.h"
#include "CombatGameModeBase.h"
#include "CombatSelectionView.h"
#include "PlayerCombatEntity.h"


void USkillView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillView::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USkillView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USkillView::MoveDown  );
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &USkillView::ReturnToPreviousScreen  );

	InitializeSkills((ACombatGameModeBase*) aGameModeBase);
	
}

void USkillView::InitializeSkills(ACombatGameModeBase* aCombatGameMode)
{
	combatGameMode = aCombatGameMode;
	currentActivePartyMember = aCombatGameMode->GetCurrentActivePartyMember();
	TArray<USkillBase*> combatClass = currentActivePartyMember->classHandler->GetClassSkills(EClassSlot::Main);

	BW_CharacterName->SetText(FText(FText::FromString(currentActivePartyMember->playerIdentityData.characterName)));
	BW_ClassName->SetText(FText(FText::FromString(currentActivePartyMember->classHandler->mainClass->completeClassData.className)));
	
	for(int i = 0 ; i < combatClass.Num();i++)
	{
		if(combatClass[i] != nullptr)
		{
			CreateSkillbar(combatClass[i]->skillData);	
		}
	}

	if(skillBarElements[cursorPosition] != nullptr)
	{
		skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
		SkillSelection(combatClass[cursorPosition]->skillData);	
	}
	
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
	skillBarElements[cursorPosition]->UnHightlight();

	Super::MoveUp();
	
	SkillSelection(currentActivePartyMember->classHandler->GetClassSkills(EClassSlot::Main)[cursorPosition]->skillData);
	skillBarElements[cursorPosition]->Highlight();
}

void USkillView::MoveDown()
{
	skillBarElements[cursorPosition]->UnHightlight();

	Super::MoveDown();
	
	SkillSelection(currentActivePartyMember->classHandler->GetClassSkills(EClassSlot::Main)[cursorPosition]->skillData);
	skillBarElements[cursorPosition]->Highlight();
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

void USkillView::SkillSelection(FSkillsData aSkill)
{
	BW_SkillName->SetText(FText(FText::FromString(aSkill.skillName)));
	BW_SkillDescription->SetText(FText(FText::FromString(aSkill.skillDescription)));
}

void USkillView::SelectSkill()
{
	UCombatClass* combatClass = currentActivePartyMember->classHandler->mainClass;
	
	if(combatClass->classSkills[cursorPosition]->CanUseSkill(currentActivePartyMember))
	{
		InGameHUD->PopMostRecentActiveView();
		UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
		SelectionView->SetCombatGameMode(combatGameMode);
		
		SelectionView->SetSkill(combatClass->classSkills[cursorPosition]);
	}
}

