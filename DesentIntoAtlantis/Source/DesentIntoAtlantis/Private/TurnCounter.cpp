// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnCounter.h"

#include "TurnCounterElement.h"
#include "Components/HorizontalBox.h"


void UTurnCounter::UiInitialize()
{
	Super::UiInitialize();

	TSubclassOf<UUserWidget> TurncounterElement = InGameHUD->GetElement(EViewElements::TurnCounterElement);

	for(int i = 0; i < 9; i++)
	{
		AddTurnCounterToUi(TurncounterElement);
	}
}

void UTurnCounter::AddTurnCounterToUi(TSubclassOf<UUserWidget> aTurnCounter)
{
	UUserWidget* turnCounter = CreateWidget(this, aTurnCounter);

	
	UTurnCounterElement* baseUserWidget = (UTurnCounterElement*)turnCounter;
	baseUserWidget->UiInitialize();
	turnCounter->AddToViewport();

	turnCounter->SetColorAndOpacity(FLinearColor(1,1,1,0));
	BW_HorizontalBox->AddChild(turnCounter);
	TurnCounter.Add(baseUserWidget);
}

void UTurnCounter::SetTurnOrder(int turn)
{
	for(int i = 0 ; i <= TurnCounter.Num() - 1;i++)
	{
		TurnCounter[i]->SetColorAndOpacity(FLinearColor(1,1,1,0));
	}

	
	for(int i = 0 ; i <= turn-1;i++)
	{
		TurnCounter[i]->SetColorAndOpacity(FLinearColor(1,1,1,1));
	}
	
}
