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
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"


void USkillView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillView::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USkillView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USkillView::MoveDown  );
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &USkillView::ReturnToPreviousScreen  );

	if(ClassSlot != EClassSlot::None)
	{
		InitializeSkills((ACombatGameModeBase*)aGameModeBase,ClassSlot);
	}
	
}

void USkillView::InitializeSkills(ACombatGameModeBase* aCombatGameMode,EClassSlot aClassSlot)
{
	ClassSlot = aClassSlot;
	combatGameMode = aCombatGameMode;
	currentActivePartyMember = aCombatGameMode->GetCurrentActivePartyMember();
	TArray<USkillBase*> combatClass = currentActivePartyMember->classHandler->GetClassSkills(aClassSlot);

	BW_CharacterName->SetText(FText(FText::FromString(currentActivePartyMember->playerIdentityData.characterName)));
	
	FString className = GetCombatClass()->completeClassData.className;
	
	BW_ClassName->SetText(FText(FText::FromString(className)));
	
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

UCombatClass* USkillView::GetCombatClass()
{
	switch (ClassSlot)
	{
	case EClassSlot::None:
		break;
	case EClassSlot::Main:
		return currentActivePartyMember->classHandler->mainClass;
		break;
	case EClassSlot::Sub:
		return currentActivePartyMember->classHandler->subClass;
		break;
	}
	return nullptr;
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
	if(skillBarElements.Num() == 0)
	{
		return;
	}
	
	skillBarElements[cursorPosition]->UnHightlight();

	Super::MoveUp();
	
	SkillSelection(currentActivePartyMember->classHandler->GetClassSkills(EClassSlot::Main)[cursorPosition]->skillData);
	skillBarElements[cursorPosition]->Highlight();
}

void USkillView::MoveDown()
{
	if(skillBarElements.Num() == 0)
	{
		return;
	}

	
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
	SetCombatToken(aSkill);
	BW_SkillName->SetText(FText(FText::FromString(aSkill.skillName)));
	BW_SkillDescription->SetText
	(FText(FText::FromString(currentActivePartyMember->combatEntityHub->skillHandler->ParseSkillDescription(aSkill))));
}

void USkillView::SetCombatToken(FSkillsData aSkillsData)
{
	for (int i = CombatTokenDescriptionElements.Num() - 1; i >= 0; i--)
	{
		CombatTokenDescriptionElements[i]->RemoveFromParent();
		CombatTokenDescriptionElements.RemoveAt(i);
	}


	for(auto Element : aSkillsData.combatTokensUsedOnSkill)
	{
		CreateCombatToken(Element);
	}
	
}

void USkillView::CreateCombatToken(FCombatTokenStackData aCombatTokenData)
{
	UUserWidget* basewidget = CreateWidget(this, InGameHUD->GetElement(EViewElements::CombatTokenDescriptionElement));

	UCombatTokenDescriptionElement* CombatTokenDescriptionElement = (UCombatTokenDescriptionElement*)basewidget;
	CombatTokenDescriptionElement->UiInitialize(gameModeBase);
	basewidget->AddToViewport();

	CombatTokenDescriptionElement->SetCombatToken(persistentGameinstance->passiveFactorySubsystem,aCombatTokenData);

	CombatTokenDescriptionElements.Add(CombatTokenDescriptionElement);
	
	BW_CombatTokenVerticalBox->AddChild(basewidget);
}

void USkillView::SelectSkill()
{
	TArray<USkillBase*> skillBase = currentActivePartyMember->classHandler->GetClassSkills(ClassSlot);
	
	if(skillBase[cursorPosition]->CanUseSkill(currentActivePartyMember))
	{
		InGameHUD->PopMostRecentActiveView();
		UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
		SelectionView->SetCombatGameMode(combatGameMode);
		
		SelectionView->SetSkill(skillBase[cursorPosition]);
	}
}

