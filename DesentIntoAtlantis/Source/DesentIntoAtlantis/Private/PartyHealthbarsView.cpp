// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarsView.h"
#include "Components/HorizontalBox.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "PartyHealthbarElement.h"

void UPartyHealthbarsView::UiInitialize(AFloorGameMode* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	UPartyManager* PartyManager =  gameModeBase->partyManager;

	TArray<UPlayerCombatEntity*> activeParty = PartyManager->ReturnActiveParty();
	
	for(int i = 0 ; i < activeParty.Num();i++)
	{
		CreateHealthbar(activeParty[i]);
	}
}
 
void UPartyHealthbarsView::CreateHealthbar(UPlayerCombatEntity* aCombatEntity)
{
	UUserWidget* partyStatusHealthbar = CreateWidget(this, InGameHUD->GetElement(EViewElements::PartyStatusHealthbar));

	UPartyHealthbarElement* baseUserWidget = (UPartyHealthbarElement*)partyStatusHealthbar;
	baseUserWidget->UiInitialize(gameModeBase);
	partyStatusHealthbar->AddToViewport();

	baseUserWidget->SetCombatEntity(aCombatEntity);
	baseUserWidget->BW_BackgroundHighlight->SetOpacity(0);
	healthBars.Add(baseUserWidget);
	BW_HorizontalBox->AddChild(partyStatusHealthbar);
}

void UPartyHealthbarsView::SetHighlightHealthbar(UPlayerCombatEntity* aPlayerCombatEntity, float aOpacity)
{
	for(int i = 0 ; i < healthBars.Num();i++)
	{
		if(healthBars[i]->characterName == aPlayerCombatEntity->playerEntityData.characterName)
		{
			healthBars[i]->BW_BackgroundHighlight->SetOpacity(aOpacity);	
		}
	}
}
