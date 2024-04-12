// Copyright Epic Games, Inc. All Rights Reserved.


#include "FloorGameMode.h"
#include "CombatManager.h"
#include "FloorEventManager.h"
#include "FloorPlayerController.h"
#include "SoundManager.h"
#include "InGameHUD.h"
#include "GameManager.h"
#include "SaveGameData.h"
#include "TitleView.h"
#include "TutorialManagerSubsystem.h"
#include "Engine/LevelStreaming.h"
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


   floorManager->CreateFloor(EFloorIdentifier::Floor2);

    if(UGameSettings::DISABLE_CUTSCENES)
    {
        //UDialogueView* DialogueView  = (UDialogueView*)gameModeBase->InGameHUD->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
        //DialogueView->SetDialogueData(EDialogueTriggers::StartGame);
    }
    partyManager->AddPlayerToActiveParty(EDataTableClasses::Paladin);
    if(UGameSettings::DEBUG_MODE)
    {
       partyManager->AddPlayerToActiveParty(EDataTableClasses::Dancer);
       partyManager->AddPlayerToActiveParty(EDataTableClasses::SoulEater);
       partyManager->AddPlayerToActiveParty(EDataTableClasses::DarkKnight);
    }
    

    
    //gameManager->StartGame();


    
  //  USaveGameData* SaveGameObject = Cast<USaveGameData>(UGameplayStatics::CreateSaveGameObject(USaveGameData::StaticClass()));
  //  SaveGameObject->SetTest(999);
  //  SaveGameObject->SetFloorPawn(floorPawn);
  //  //
  //  //
  //  UGameplayStatics::SaveGameToSlot(SaveGameObject,TEXT("SaveSlot1"), 0);
//

   // USaveGameData* LoadedSaveGameObject = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlot1"),0));

    int testo23 = 0;

    

}
