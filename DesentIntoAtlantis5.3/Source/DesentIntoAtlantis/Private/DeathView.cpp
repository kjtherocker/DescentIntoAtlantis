// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathView.h"

#include "GameManager.h"
#include "PersistentGameinstance.h"
#include "SaveManagerSubsystem.h"
#include "DesentIntoAtlantis/FloorGameMode.h"

void UDeathView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UDeathView::TryFightAgain  );
	InputComponent->BindAction("Q"       ,IE_Pressed ,this, &UDeathView::Quit  );
}

void UDeathView::TryFightAgain()
{
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	persistentGameInstance->saveManagerSubsystem->LoadSaveDataAndTransitionToMap(TEXT("Floor1"));
}

void UDeathView::Quit()
{
	FPlatformMisc::RequestExit(false);
}
