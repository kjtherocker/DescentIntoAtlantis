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
#include "PlayerCombatEntity.h"


void USkillMenu::UiInitialize()
{
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillMenu::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USkillMenu::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USkillMenu::MoveDown  );
	
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	UCombatClass* testo = GameModeBase->partyManager->playerEntityData[0]->currentClass;

    currentActivePartyMember = GameModeBase->combatManager->ReturnCurrentActivePartyMember();

    BW_CharacterName->Text = FText(FText::FromString(currentActivePartyMember->characterName));
    BW_ClassName->Text     = FText(FText::FromString(currentActivePartyMember->currentClass->currentClassLevel->className));
	
	for(int i = 0 ; i < testo->classSkills.Num();i++)
	{
		CreateSkillbar(testo->classSkills[i]);
	}

	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
	SkillSelection(testo->classSkills[cursorPosition]);
}



void USkillMenu::CreateSkillbar(FSkills_Base* aSkill)
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

void USkillMenu::SkillSelection(FSkills_Base* aSkill)
{
	BW_SkillName->SetText(FText(FText::FromString(aSkill->SkillName)));
	BW_SkillDescription->SetText(FText(FText::FromString(aSkill->SkillDescription)));
}

void USkillMenu::SelectSkill()
{
	InGameHUD->PopMostRecentActiveView();
	InGameHUD->PushView(EViews::EnemySelection,EUiType::ActiveUi);
}

void USkillMenu::MoveUp()
{
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(0);
	cursorPosition--;

	if(-1 == cursorPosition)
	{
		cursorPosition = currentActivePartyMember->currentClass->classSkills.Num() - 1;
	}
	SkillSelection(currentActivePartyMember->currentClass->classSkills[cursorPosition]);
	
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);

}

void USkillMenu::MoveDown()
{
	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(0);
	cursorPosition++;

	if(cursorPosition >= currentActivePartyMember->currentClass->classSkills.Num())
	{
		cursorPosition = 0;
	}
	SkillSelection(currentActivePartyMember->currentClass->classSkills[cursorPosition]);

	skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
}
