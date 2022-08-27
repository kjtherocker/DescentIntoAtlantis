// Fill out your copyright notice in the Description page of Project Settings.


#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "Components/VerticalBox.h"
#include "SkillBarElement.h"
#include "CombatClass.h"
#include "SkillMenu.h"




void USkillMenu::UiInitialize()
{

	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));


	UCombatClass* testo = GameModeBase->partyManager->combatEntity[0]->currentClass;
	for(int i = 0 ; i < testo->classSkills.Num();i++)
	{
		CreateSkillbar(testo->classSkills[i]);
	}
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
