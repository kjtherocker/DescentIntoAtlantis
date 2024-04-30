// Copyright Epic Games, Inc. All Rights Reserved.


#include "FloorGameMode.h"
#include "CombatGameModeBase.h"
#include "FloorPlayerController.h"
#include "InGameHUD.h"
#include "MapView.h"

#include "PersistentGameinstance.h"
#include "SaveManagerSubsystem.h"

#include "Engine/LevelStreaming.h"

AFloorGameMode::AFloorGameMode()
{
    bNetLoadOnClient = false;
    bPauseable = true;
    bStartPlayersAsSpectators = false;
    
    PlayerControllerClass = AFloorPlayerController::StaticClass();
    
}

void AFloorGameMode::InitializeLevel()
{
    Super::InitializeLevel();
   
    world = GetWorld();
    FVector ActorFinalSpawnPoint(0,0,0);
    FRotator rotator(0.0f,0.0f,0.0f);
    
    floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(floorPawnReference, FVector(0,0,0), rotator));
    floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;

    
    floorManager = Cast<AFloorManager>(world->SpawnActor<AActor>(floorManagerReference, FVector::Zero(), rotator));
    floorManager->Initialize(this,floorEventManager);

  
    floorManager->CreateFloor(EFloorIdentifier::Floor1);
    
    if(persistentGameInstance->saveManagerSubsystem->ConsumeGameSaveLoadingFlag() || persistentGameInstance->hasRecentlyFinishedCombat)
    {
        floorManager->PlacePlayerFloorPawn(persistentGameInstance->saveManagerSubsystem->LoadFloorPawnPosition());
    }
    else
    {
        floorManager->PlacePlayerAtFloorStartingNode();
    }

    
    if(UGameSettings::DISABLE_CUTSCENES)
    {
        //UDialogueView* DialogueView  = (UDialogueView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
        //DialogueView->SetDialogueData(EDialogueTriggers::StartGame);
    }
    

    InGameHUD->PushView(EViews::Healthbars,    EUiType::PersistentUi);


    InGameHUD->PushAndGetView(EViews::Healthbars,    EUiType::PersistentUi);
    UMapView* mapView     = (UMapView*)InGameHUD->PushAndGetView(EViews::MapView,         EUiType::PersistentUi);
    mapView->GenerateLevel(floorFactory);
    mapView->SetPlayerMovementDelegate(floorPawn);
    
    
    //gameManager->StartGame();

    

}
