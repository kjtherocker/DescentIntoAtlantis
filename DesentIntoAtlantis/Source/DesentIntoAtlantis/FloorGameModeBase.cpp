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

void AFloorGameMode::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    
}

void AFloorGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
    Super::InitGame(MapName, Options, ErrorMessage);
}




void AFloorGameMode::BeginPlay()
{
    Super::BeginPlay();

    InitializeLevel();
}

void AFloorGameMode::InitializeLevel()
{
    
    world = GetWorld();
    FVector ActorFinalSpawnPoint;
    FRotator rotator;

    gameManager = NewObject<UGameManager>();
    gameManager->Initialize(this);

    gameSettings = NewObject<UGameSettings>();
    
    soundManager = Cast<ASoundManager>(world->SpawnActor<AActor>(soundManagerReference, ActorFinalSpawnPoint, rotator));
    
    skillFactory = NewObject<USkillFactory>();
    
    skillFactory->InitializeDatabase(dataTablesSkills);

    if(dataTables.Contains(EDataTableTypes::Enemys) &&
       dataTables.Contains(EDataTableTypes::EnemyGroups))
    {
        if(dataTables[EDataTableTypes::Enemys] != nullptr
            && dataTables[EDataTableTypes::EnemyGroups] != nullptr)
        {
            enemyFactory = NewObject<UEnemyFactory>();
            enemyFactory->InitializeDatabase(dataTables[EDataTableTypes::Enemys],
                dataTables[EDataTableTypes::EnemyGroups]);
        }
    }

    combatManager = NewObject<UCombatManager>();
    combatManager->Initialize(this,world);

    if(dataTables.Contains(EDataTableTypes::Party) &&
       !dataTablesClasses.IsEmpty())
    {
        if(dataTables[EDataTableTypes::Party] != nullptr)
        {
            partyManager = NewObject<UPartyManager>();
            partyManager->InitializeDataTable(skillFactory,dataTables[EDataTableTypes::Party], dataTablesClasses,combatManager);
        }
    }

    if(dataTables.Contains(EDataTableTypes::Tutorial))
    {
        if(dataTables[EDataTableTypes::Tutorial] != nullptr)
        {
            tutorialManager = NewObject<UTutorialManager>();
            tutorialManager->InitializeDatabase(dataTables[EDataTableTypes::Tutorial]);
        }
    }
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

    if(dataTables.Contains(EDataTableTypes::Dialogue))
    {
        if(dataTables[EDataTableTypes::Dialogue] != nullptr)
        {
            dialogueFactory = NewObject<UDialogueFactory>();
            dialogueFactory->InitializeDatabase(dataTables[EDataTableTypes::Dialogue]);
        }
    }

    floorManager = Cast<AFloorManager>(world->SpawnActor<AActor>(floorManagerReference, ActorFinalSpawnPoint, rotator));
    floorManager->Initialize(this,floorEventManager);

    floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(floorPawnReference, ActorFinalSpawnPoint, rotator));
    floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;

    gameManager->StartGame();
}
