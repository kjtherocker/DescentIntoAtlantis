// Fill out your copyright notice in the Description page of Project Settings.


#include "AtlantisGameModeBase.h"

#include "GameManager.h"
#include "SoundManager.h"
#include "TutorialManager.h"

void AAtlantisGameModeBase::InitializeLevel()
{
//    //Grabbing Datatables From folder
//    dataTables.Add(EDataTableTypes::Enemys,
//        LoadObject<UDataTable>(nullptr, TEXT("DesentIntoAtlantis/Datatables/Atlantis_-_Enemys.uasset'")));
//
//    dataTables.Add(EDataTableTypes::EnemyGroups,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'DesentIntoAtlantis/Content/Datatables/Atlantis_-_EnemyGroup.uasset'")));
//
//    dataTables.Add(EDataTableTypes::PlayerCharacters,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_PlayerCharacters.uasset'")));
//
//    dataTables.Add(EDataTableTypes::Tutorial,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_Tutorial.uasset'")));
//
//    dataTables.Add(EDataTableTypes::Floor,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_Floor.uasset'")));
//
//    dataTables.Add(EDataTableTypes::FloorEvent,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_FloorEvent.uasset'")));
//
//    dataTables.Add(EDataTableTypes::Dialogue,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_Dialogue.uasset'")));
//
//
//    //Grabbing Class DataTables from folder
//
//    dataTablesClasses.Add(EDataTableClasses::Paladin,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_Paladin.uasset'")));
//
//    dataTablesClasses.Add(EDataTableClasses::DarkKnight,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_DarkKnight'")));
//
//    dataTablesClasses.Add(EDataTableClasses::Dancer,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_Dancer.uasset'")));
//
//    dataTablesClasses.Add(EDataTableClasses::SoulEater,
//        LoadObject<UDataTable>(nullptr, TEXT("DataTable'Content/Datatables/Atlantis_-_SoulEater.uasset'")));





    
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

    if(dataTables.Contains(EDataTableTypes::PlayerCharacters) &&
       !dataTablesClasses.IsEmpty())
    {
        if(dataTables[EDataTableTypes::PlayerCharacters] != nullptr)
        {
            partyManager = NewObject<UPartyManager>();
            partyManager->InitializeDataTable(skillFactory,dataTables[EDataTableTypes::PlayerCharacters], dataTablesClasses,combatManager);
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
}

void AAtlantisGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	InitializeLevel();
}
