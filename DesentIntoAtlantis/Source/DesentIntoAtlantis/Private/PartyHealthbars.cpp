// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbars.h"
#include "Components/HorizontalBox.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "PartyStatusHealthbar.h"

void UPartyHealthbars::UiInitialize()
{

	ADesentIntoAtlantisGameModeBase* MyMode = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	UPartyManager* PartyManager =  MyMode->partyManager;

	for(int i = 0 ; i < PartyManager->playerEntityData.Num();i++)
	{
		CreateHealthbar(PartyManager->playerEntityData[i]);
	}
}
 
void UPartyHealthbars::CreateHealthbar(FPlayerCombatEntity* aCombatEntity)
{
	UUserWidget* partyStatusHealthbar = CreateWidget(this, InGameHUD->GetElement(EViewElements::PartyStatusHealthbar));

	UPartyStatusHealthbar* baseUserWidget = (UPartyStatusHealthbar*)partyStatusHealthbar;
	baseUserWidget->UiInitialize();
	partyStatusHealthbar->AddToViewport();

	baseUserWidget->SetCombatEntity(aCombatEntity);
	baseUserWidget->BW_BackgroundHighlight->SetOpacity(0);
	healthBars.Add(baseUserWidget);
	BW_HorizontalBox->AddChild(partyStatusHealthbar);
}

void UPartyHealthbars::SetHighlightHealthbar(FPlayerCombatEntity* aPlayerCombatEntity, float aOpacity)
{
	for(int i = 0 ; i < healthBars.Num();i++)
	{
		if(healthBars[i]->characterName == aPlayerCombatEntity->characterName)
		{
			healthBars[i]->BW_BackgroundHighlight->SetOpacity(aOpacity);	
		}
	}
}
