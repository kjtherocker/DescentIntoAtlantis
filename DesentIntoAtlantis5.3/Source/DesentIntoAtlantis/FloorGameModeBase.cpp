// Copyright Epic Games, Inc. All Rights Reserved.


#include "FloorGameMode.h"
#include "CombatGameModeBase.h"
#include "FloorPlayerController.h"
#include "InGameHUD.h"
#include "InteractableView.h"
#include "LevelProgressionSubsystem.h"
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
    
    floorPawn = Cast<AFloorPlayerPawn>(GetWorld()->SpawnActor<AActor>(floorPawnReference, FVector(0,0,0), rotator));
    floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;
    floorPawn->Initialize();
    levelProgressionSubsystem->SetSubscribeFloorPawnDelegates(floorPawn);
    UInteractableView* interactableView = (UInteractableView*)InGameHUD->PushAndGetView(EViews::InteractableView,    EUiType::PersistentUi);
    levelProgressionSubsystem->SetGameMode(this,interactableView);
    
    saveManagerSubsystem->InitializeSessionSavePlayer(floorPawn);
    
    UMapView* mapView     = (UMapView*)InGameHUD->PushAndGetView(EViews::MapView,         EUiType::PersistentUi);
    mapView->GenerateLevel(floorFactory,levelProgressionSubsystem->GetCurrentFlooridentifier());
    mapView->SetFloorPawnDelegates(floorPawn);
    
    floorManager = Cast<AFloorManager>(world->SpawnActor<AActor>(floorManagerReference, FVector::Zero(), rotator));
    floorManager->Initialize(this,floorEventManager);

  
    floorManager->CreateFloor(levelProgressionSubsystem->GetCurrentFlooridentifier());

   FCompleteFloorPawnData completeFloorPawnData = levelProgressionSubsystem->GetCurrentFloorPawnCompleteData();
    persistentGameInstance->saveManagerSubsystem->ConsumeGameSaveLoadingFlag();
    persistentGameInstance->ConsumeCombatFinishedFlag();
    
    if(completeFloorPawnData.currentNodePositionInGrid == FVector2D(-1,-1))
    {
        floorManager->PlacePlayerAtFloorStartingNode();
    }
    else
    {
        floorManager->PlacePlayerFloorPawn(completeFloorPawnData.currentNodePositionInGrid,completeFloorPawnData.currentFacingDirection);
    }
    
    if(UGameSettings::DISABLE_CUTSCENES)
    {
        //UDialogueView* DialogueView  = (UDialogueView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
        //DialogueView->SetDialogueData(EDialogueTriggers::StartGame);
    }
    

    InGameHUD->PushView(EViews::Healthbars,    EUiType::PersistentUi);


    InGameHUD->PushAndGetView(EViews::Healthbars,    EUiType::PersistentUi);

    floorEventManager->SetCurrentEventSet();
    
    //gameManager->StartGame();

    

}
