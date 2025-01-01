// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyHealthbarsView.h"
#include "Components/HorizontalBox.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"
#include "PartyHealthbarElement.h"
#include "PersistentGameinstance.h"

void UPartyHealthbarsView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	UPartyManagerSubsystem* PartyManager = persistentGameinstance->partyManagerSubsystem;

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
	baseUserWidget->InGameHUD = InGameHUD;
	baseUserWidget->SetCombatEntity(aCombatEntity);
	baseUserWidget->BW_BackgroundHighlight->SetOpacity(0);
	healthBars.Add(baseUserWidget);
	baseUserWidget->SetCombatTokenRow(aCombatEntity,InGameHUD);
	BW_HorizontalBox->AddChild(partyStatusHealthbar);
}

void UPartyHealthbarsView::SetHighlightHealthbar(UPlayerCombatEntity* aPlayerCombatEntity, float aOpacity)
{
	for(int i = 0 ; i < healthBars.Num();i++)
	{
		if(healthBars[i]->characterName == aPlayerCombatEntity->playerIdentityData.characterName)
		{
			healthBars[i]->BW_BackgroundHighlight->SetOpacity(aOpacity);	
		}
	}
}
