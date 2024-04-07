// Copyright Epic Games, Inc. All Rights Reserved.


#include "FloorGameMode.h"
#include "CombatManager.h"
#include "FloorEventManager.h"
#include "FloorPlayerController.h"
#include "SoundManager.h"
#include "InGameHUD.h"
#include "GameManager.h"
#include "TutorialManager.h"
#include "Kismet/GameplayStatics.h"

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
    FVector ActorFinalSpawnPoint;
    FRotator rotator;
    

    if(dataTables.Contains(EDataTableTypes::Floor)
    && dataTables.Contains(EDataTableTypes::FloorEvent))
    {
        if(dataTables[EDataTableTypes::Floor] != nullptr
            &&dataTables[EDataTableTypes::FloorEvent] != nullptr)
        {
            floorFactory = NewObject<UFloorFactory>();
            floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent]);
            floorEventManager = NewObject<UFloorEventManager>();
            floorEventManager->Initialize( this,floorFactory,combatManager);
        }
    }
    
    floorManager = Cast<AFloorManager>(world->SpawnActor<AActor>(floorManagerReference, ActorFinalSpawnPoint, rotator));
    floorManager->Initialize(this,floorEventManager);

    floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(floorPawnReference, ActorFinalSpawnPoint, rotator));
    floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;
    
    gameManager->StartGame();
}
