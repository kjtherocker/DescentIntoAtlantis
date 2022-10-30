// Copyright Epic Games, Inc. All Rights Reserved.


#include "DesentIntoAtlantisGameModeBase.h"
#include "CombatManager.h"
#include "FloorEventManager.h"
#include "FloorPlayerController.h"
#include "SoundManager.h"
#include "InGameHUD.h"
#include "GameManager.h"
#include "TutorialManager.h"
#include "Kismet/GameplayStatics.h"

ADesentIntoAtlantisGameModeBase::ADesentIntoAtlantisGameModeBase()
{
    bNetLoadOnClient = false;
    bPauseable = true;
    bStartPlayersAsSpectators = false;
    
    PlayerControllerClass = AFloorPlayerController::StaticClass();
}

void ADesentIntoAtlantisGameModeBase::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    world = GetWorld();
    FVector ActorFinalSpawnPoint;
    FRotator rotator;
    
    soundManager = Cast<ASoundManager>(world->SpawnActor<AActor>(soundManagerReference, ActorFinalSpawnPoint, rotator));
    
    skillFactory = NewObject<USkillFactory>();
    
    skillFactory->InitializeDatabase(dataTablesSkills);

    if(dataTables.Contains(EDataTableTypes::Enemys) ||
       dataTables.Contains(EDataTableTypes::EnemyGroups))
    {
        enemyFactory = NewObject<UEnemyFactory>();
        enemyFactory->InitializeDatabase(dataTables[EDataTableTypes::Enemys],
            dataTables[EDataTableTypes::EnemyGroups]);
    }

    combatManager = NewObject<UCombatManager>();
    combatManager->Initialize(this,world);

    if(dataTables.Contains(EDataTableTypes::Party) ||
       !dataTablesClasses.IsEmpty())
    {
        partyManager = NewObject<UPartyManager>();
        partyManager->InitializeDataTable(skillFactory,dataTables[EDataTableTypes::Party], dataTablesClasses,combatManager);
    }

    if(dataTables.Contains(EDataTableTypes::Tutorial))
    {
        tutorialManager = NewObject<UTutorialManager>();
        tutorialManager->InitializeDatabase(dataTables[EDataTableTypes::Tutorial]);
    }
    if(dataTables.Contains(EDataTableTypes::Floor)
        && dataTables.Contains(EDataTableTypes::FloorEvent))
    {
        floorFactory = NewObject<UFloorFactory>();
        floorFactory->InitializeDatabase(dataTables[EDataTableTypes::Floor],dataTables[EDataTableTypes::FloorEvent]);
        floorEventManager = NewObject<UFloorEventManager>();
        floorEventManager->Initialize( this,floorFactory,combatManager);
    }

    if(dataTables.Contains(EDataTableTypes::Dialogue))
    {
        dialogueFactory = NewObject<UDialogueFactory>();
        dialogueFactory->InitializeDatabase(dataTables[EDataTableTypes::Dialogue]);
    }

    floorManager = Cast<AFloorManager>(world->SpawnActor<AActor>(floorManagerReference, ActorFinalSpawnPoint, rotator));
    floorManager->Initialize(this);

    floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(floorPawnReference, ActorFinalSpawnPoint, rotator));
    floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void ADesentIntoAtlantisGameModeBase::BeginPlay()
{
    Super::BeginPlay();

 
     gameManager = NewObject<UGameManager>();
     gameManager->Initialize(this);
 //   gameManager->StartGame();
}
