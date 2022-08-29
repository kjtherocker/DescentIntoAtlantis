// Fill out your copyright notice in the Description page of Project Settings.


#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "Components/VerticalBox.h"
#include "SkillBarElement.h"
#include "CombatClass.h"
#include "SkillMenu.h"
#include "Components/TextBlock.h"
#include "CombatManager.h"


void USkillMenu::UiInitialize()
{
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillMenu::ReturnToPreviousScreen  );
	
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	UCombatClass* testo = GameModeBase->partyManager->playerEntityData[0]->currentClass;

	currentActivePartyMember = GameModeBase->combatManager->ReturnCurrentActivePartyMember();

	BW_CharacterName->Text = FText(FText::FromString(currentActivePartyMember->characterName));
	BW_ClassName->Text     = FText(FText::FromString(currentActivePartyMember->currentClass->currentClassLevel->className));
	
	for(int i = 0 ; i < testo->classSkills.Num();i++)
	{
		CreateSkillbar(testo->classSkills[i]);
	}

	SkillSelection(testo->classSkills[1]);
}



void USkillMenu::CreateSkillbar(FSkills_Base* aSkill)
{
	UUserWidget* testo = CreateWidget(this, InGameHUD->GetElement(EViewElements::SkillBar));

	USkillBarElement* baseUserWidget = (USkillBarElement*)testo;
	baseUserWidget->UiInitialize();
	testo->AddToViewport();

	baseUserWidget->SetSkill(aSkill);

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
	BW_SkillName->Text            = FText(FText::FromString(aSkill->SkillName));
	BW_SkillDescription->Text     = FText(FText::FromString(aSkill->SkillDescription));
}
