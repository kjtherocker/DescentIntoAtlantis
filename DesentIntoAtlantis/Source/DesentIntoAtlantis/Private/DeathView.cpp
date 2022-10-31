// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathView.h"

#include "GameManager.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"

void UDeathView::UiInitialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UDeathView::TryFightAgain  );
	InputComponent->BindAction("Q"       ,IE_Pressed ,this, &UDeathView::Quit  );
}

void UDeathView::TryFightAgain()
{
	gameModeBase->gameManager->ResetPlayerToPreviousPosition();
}

void UDeathView::Quit()
{
	FPlatformMisc::RequestExit(false);
}
