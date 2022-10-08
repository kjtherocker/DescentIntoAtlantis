// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarsView.h"
#include "Components/HorizontalBox.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "PartyHealthbarElement.h"

void UPartyHealthbarsView::UiInitialize()
{

	ADesentIntoAtlantisGameModeBase* MyMode = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	UPartyManager* PartyManager =  MyMode->partyManager;

	for(int i = 0 ; i < PartyManager->playerEntityData.Num();i++)
	{
		CreateHealthbar(PartyManager->playerEntityData[i]);
	}
}
 
void UPartyHealthbarsView::CreateHealthbar(FPlayerCombatEntity* aCombatEntity)
{
	UUserWidget* partyStatusHealthbar = CreateWidget(this, InGameHUD->GetElement(EViewElements::PartyStatusHealthbar));

	UPartyHealthbarElement* baseUserWidget = (UPartyHealthbarElement*)partyStatusHealthbar;
	baseUserWidget->UiInitialize();
	partyStatusHealthbar->AddToViewport();

	baseUserWidget->SetCombatEntity(aCombatEntity);
	baseUserWidget->BW_BackgroundHighlight->SetOpacity(0);
	healthBars.Add(baseUserWidget);
	BW_HorizontalBox->AddChild(partyStatusHealthbar);
}

void UPartyHealthbarsView::SetHighlightHealthbar(FPlayerCombatEntity* aPlayerCombatEntity, float aOpacity)
{
	for(int i = 0 ; i < healthBars.Num();i++)
	{
		if(healthBars[i]->characterName == aPlayerCombatEntity->characterName)
		{
			healthBars[i]->BW_BackgroundHighlight->SetOpacity(aOpacity);	
		}
	}
}
