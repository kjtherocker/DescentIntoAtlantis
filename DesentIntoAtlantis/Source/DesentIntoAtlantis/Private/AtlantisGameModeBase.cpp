// Fill out your copyright notice in the Description page of Project Settings.


#include "AtlantisGameModeBase.h"

#include "GameManager.h"
#include "PersistentGameinstance.h"
#include "PartyManagerSubsystem.h"
#include "SoundManager.h"
#include "TutorialManager.h"

void AAtlantisGameModeBase::InitializeLevel()
{
//    //Grabbing Datatables From folder

    

  //  UDataTable* asdasd = LoadObject<UDataTable>(nullptr, TEXT("Game/Atlantis_-_Enemys1.uasset"));
   // dataTables.Add(EDataTableTypes::Enemys,
     //   LoadObject<UDataTable>(nullptr, TEXT("DataTable'/Game/Datatables/Atlantis_-_Enemys'")));
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

    combatManager = NewObject<UCombatManager>();
    combatManager->Initialize(this,world);

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


    if(dataTables.Contains(EDataTableTypes::Dialogue))
    {
        if(dataTables[EDataTableTypes::Dialogue] != nullptr)
        {
            dialogueFactory = NewObject<UDialogueFactory>();
            dialogueFactory->InitializeDatabase(dataTables[EDataTableTypes::Dialogue]);
        }
    }
    UGameInstance* GameInstance = GetGameInstance();

    // Cast the game instance to your custom game instance class
    UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>(GameInstance);

    
    UPartyManagerSubsystem* MySubsystem = GameInstance->GetSubsystem<UPartyManagerSubsystem>();


    int testo = 0;


}

void AAtlantisGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	InitializeLevel();
}
