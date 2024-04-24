// Copyright Epic Games, Inc. All Rights Reserved.


#include "FloorGameMode.h"
#include "CombatGameModeBase.h"
#include "FloorPlayerController.h"
#include "InGameHUD.h"

#include "PersistentGameinstance.h"

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

  
 
    if(persistentGameInstance->ConsumeGameSaveLoadingFlag())
    {
        floorManager->CreateFloor(EFloorIdentifier::Floor2,false);
    }
    else
    {
        floorManager->CreateFloor(EFloorIdentifier::Floor2,true);
    }

    
    if(UGameSettings::DISABLE_CUTSCENES)
    {
        //UDialogueView* DialogueView  = (UDialogueView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
        //DialogueView->SetDialogueData(EDialogueTriggers::StartGame);
    }
    

    InGameHUD->PushView(EViews::Healthbars,    EUiType::PersistentUi);
    //gameManager->StartGame();

    

}
