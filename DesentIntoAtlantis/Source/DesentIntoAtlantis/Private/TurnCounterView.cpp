// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnCounterView.h"

#include "TurnCounterElement.h"
#include "Components/HorizontalBox.h"


void UTurnCounterView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	TSubclassOf<UUserWidget> TurncounterElement = InGameHUD->GetElement(EViewElements::TurnCounterElement);

	for(int i = 0; i < 9; i++)
	{
		AddTurnCounterToUi(TurncounterElement);
	}
}

void UTurnCounterView::AddTurnCounterToUi(TSubclassOf<UUserWidget> aTurnCounter)
{
	UUserWidget* turnCounter = CreateWidget(this, aTurnCounter);

	
	UTurnCounterElement* baseUserWidget = (UTurnCounterElement*)turnCounter;
	baseUserWidget->UiInitialize(gameModeBase);
	turnCounter->AddToViewport();

	turnCounter->SetColorAndOpacity(FLinearColor(1,1,1,0));
	BW_HorizontalBox->AddChild(turnCounter);
	TurnCounter.Add(baseUserWidget);
}

void UTurnCounterView::SetEmpowerTurnIcon(int aTurnIndex)
{
	TurnCounter[aTurnIndex]->EmpowerTurn(true);
}

void UTurnCounterView::SetTurnOrder(int turn, ECharactertype aCharacterType)
{
	for(int i = 0 ; i <= TurnCounter.Num() - 1;i++)
	{
		TurnCounter[i]->SetColorAndOpacity(FLinearColor(1,1,1,0));
		TurnCounter[i]->EmpowerTurn(false);
	}

	
	for(int i = 0 ; i <= turn-1;i++)
	{
		TurnCounter[i]->SetColorAndOpacity(FLinearColor(1,1,1,1));
		TurnCounter[i]->SwitchTurnIcons(aCharacterType);
	}
	
}
