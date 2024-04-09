// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"

#include "FloorPlayerController.h"
#include "PersistentGameinstance.h"
#include "TitleView.h"

AMainMenuGameMode::AMainMenuGameMode()
{
	bNetLoadOnClient = false;
	bPauseable = true;
	bStartPlayersAsSpectators = false;
    
	PlayerControllerClass = AFloorPlayerController::StaticClass();
}

void AMainMenuGameMode::InitializeLevel()
{
	Super::InitializeLevel();
	CreateMainMenu();
}

void AMainMenuGameMode::CreateMainMenu()
{
	UTitleView* titleView  = (UTitleView*)InGameHUD->PushAndGetView(EViews::Title,EUiType::ActiveUi);
	startGameDelegate.AddDynamic(this,&AMainMenuGameMode::StartGame);
	titleView->SetStartGameDelegate(startGameDelegate);
}

void AMainMenuGameMode::StartGame()
{
	UGameInstance* GameInstance = GetGameInstance();

	// Cast the game instance to your custom game instance class
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>(GameInstance);
	
	if (persistentGameInstance)
	{
		persistentGameInstance->LoadLevel(TEXT("Floor1"));
	}
}
