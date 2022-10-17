// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillMenu.h"
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


void USkillMenu::UiInitialize()
{
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillMenu::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USkillMenu::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USkillMenu::MoveDown  );
	
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	currentActivePartyMember = GameModeBase->combatManager->ReturnCurrentActivePartyMember();
	UCombatClass* testo = currentActivePartyMember->baseClass;

    BW_CharacterName->Text = FText(FText::FromString(currentActivePartyMember->playerEntityData.characterName));
    BW_ClassName->Text     = FText(FText::FromString(currentActivePartyMember->baseClass->currentClassLevel.className));
	
	for(int i = 0 ; i < testo->classSkills.Num();i++)
	{
		CreateSkillbar(testo->classSkills[i]);
	}

	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
	SkillSelection(testo->classSkills[cursorPosition]);
}



void USkillMenu::CreateSkillbar(FSkills_Base aSkill)
{
	UUserWidget* testo = CreateWidget(this, InGameHUD->GetElement(EViewElements::SkillBar));

	USkillBarElement* baseUserWidget = (USkillBarElement*)testo;
	baseUserWidget->UiInitialize();
	testo->AddToViewport();

	baseUserWidget->SetSkill(aSkill);

	skillBarElements.Add(baseUserWidget);
	
	BW_VerticalBox->AddChild(testo);
}

void USkillMenu::ReturnToPreviousScreen()
{
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	AInGameHUD * inGameHUD = GameModeBase->InGameHUD;
	
	inGameHUD->ReturnToPreviousActiveView();

}

void USkillMenu::SkillSelection(FSkills_Base aSkill)
{
	BW_SkillName->SetText(FText(FText::FromString(aSkill.skillName)));
	BW_SkillDescription->SetText(FText(FText::FromString(aSkill.skillDescription)));
}

void USkillMenu::SelectSkill()
{
	InGameHUD->PopMostRecentActiveView();
	InGameHUD->PushView(EViews::EnemySelection,EUiType::ActiveUi);
	UCombatSelectionView* SkillMenu = (UCombatSelectionView*)InGameHUD->GetActiveHUDView(EViews::EnemySelection,EUiType::ActiveUi);
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	currentActivePartyMember = GameModeBase->combatManager->ReturnCurrentActivePartyMember();
	
	UCombatClass* testo = currentActivePartyMember->baseClass;
	SkillMenu->SetSkill(testo->classSkills[cursorPosition]);
}

void USkillMenu::MoveUp()
{
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(0);
	cursorPosition--;

	if(-1 == cursorPosition)
	{
		cursorPosition = currentActivePartyMember->baseClass->classSkills.Num() - 1;
	}
	SkillSelection(currentActivePartyMember->baseClass->classSkills[cursorPosition]);
	
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);

}

void USkillMenu::MoveDown()
{
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(0);
	cursorPosition++;

	if(cursorPosition >= currentActivePartyMember->baseClass->classSkills.Num())
	{
		cursorPosition = 0;
	}
	SkillSelection(currentActivePartyMember->baseClass->classSkills[cursorPosition]);

	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
}
