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
	partyManager->AddPlayerToActiveParty(EPartyMembers::Kriede);

	partyManager->PartyInventory->GetInventoryItems()->AddItem(EItemID::FlatHealPotion);
	partyManager->PartyInventory->GetInventoryKeyItems()->AddKeyItem(EKeyItemsID::PrisonZ_Floor2_CellKey);
	if (persistentGameInstance)
	{
		persistentGameInstance->LoadLevel(EFloorIdentifier::PrizonZ_Floor1);
	}

	
	
}
