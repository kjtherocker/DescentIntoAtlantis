// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleMenuGameMode.h"

#include "FloorPlayerController.h"
#include "Inventory_Items.h"
#include "Inventory_KeyItems.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "Kismet/GameplayStatics.h"
#include "TitleView.h"

ATitleMenuGameMode::ATitleMenuGameMode()
{
	bNetLoadOnClient = false;
	bPauseable = true;
	bStartPlayersAsSpectators = false;
    
	PlayerControllerClass = AFloorPlayerController::StaticClass();


}

void ATitleMenuGameMode::InitializeLevel()
{
	Super::InitializeLevel();
	persistentGameInstance->popupSubsystem->SetGameMode(this);
	CreateMainMenu();
}

void ATitleMenuGameMode::CreateMainMenu()
{
	UTitleView* titleView  = (UTitleView*)InGameHUD->PushAndGetView(EViews::Title,EUiType::ActiveUi);
	startGameDelegate.AddDynamic(this,&ATitleMenuGameMode::StartGame);
	titleView->SetStartGameDelegate(startGameDelegate);


}

void ATitleMenuGameMode::StartGame()
{
	if(UGameSettings::isPrologueDisabled)
	{
		partyManager->PartyInventory->GetInventoryItems()->AddItem(EItemID::FireBomb);
		partyManager->AddPlayerToActiveParty(EPartyMembersID::Kriede);
		
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
