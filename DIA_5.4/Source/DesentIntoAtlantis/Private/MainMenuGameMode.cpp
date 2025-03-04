// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"

#include "FloorPlayerController.h"
#include "Inventory_Items.h"
#include "Inventory_KeyItems.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "Kismet/GameplayStatics.h"
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
	persistentGameInstance->popupSubsystem->SetGameMode(this);
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
	if(UGameSettings::isPrologueDisabled)
	{
		partyManager->AddPlayerToActiveParty(EPartyMembersID::Kriede);
		partyManager->AddPlayerToActiveParty(EPartyMembersID::Feienne);
		partyManager->AddPlayerToActiveParty(EPartyMembersID::Rain);
		partyManager->AddPlayerToActiveParty(EPartyMembersID::Watcher);
		
		if (persistentGameInstance)
		{
			persistentGameInstance->LoadLevel(EFloorID::PrizonZ_Floor1);
		}
	}
	else
	{
		partyManager->AddPlayerToActiveParty(EPartyMembersID::Watcher);
		
		if (persistentGameInstance)
		{
			persistentGameInstance->LoadLevel(EFloorID::Prologue);
		}
	}

	
	
}
