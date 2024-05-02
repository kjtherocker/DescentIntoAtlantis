// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorManager.h"

#include "FloorGameMode.h"
#include "EFloorIdentifier.h"
#include "FloorPlayerController.h"
#include "PersistentGameinstance.h"
#include "SkillsData.h"
#include "Engine/DataTable.h"
#include "EventManagerSubSystem.h"
#include "LevelProgressionSubsystem.h"
#include "SaveManagerSubsystem.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFloorManager::AFloorManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AFloorManager::Initialize(AAtlantisGameModeBase* aGameModeBase,UEventManagerSubSystem* aFloorEventManager)
{
	cardinalPositions.Add(ECardinalNodeDirections::Up,    FVector2D(0,-1));
	cardinalPositions.Add(ECardinalNodeDirections::Down,  FVector2D(0,1));
	cardinalPositions.Add(ECardinalNodeDirections::Left,  FVector2D(-1,0));
	cardinalPositions.Add(ECardinalNodeDirections::Right, FVector2D(1,0));


	gimmickMap.Add(EFloorGimmicks::Door,       NewObject<UGimmick_Base>());
	gimmickMap.Add(EFloorGimmicks::Lava,       NewObject<UGimmick_Base>());
	gimmickMap.Add(EFloorGimmicks::Teleporter, NewObject<UGimmick_Base>());
	gimmickMap.Add(EFloorGimmicks::Movement,   NewObject<UGimmick_Base>());
	gimmickMap.Add(EFloorGimmicks::Stairs,     NewObject<UGimmick_Base>());

	persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());

	eventManagerSubSystem     =  persistentGameInstance->EventManagerSubSystem;
	levelProgressionSubsystem = persistentGameInstance->levelProgressionSubsystem;
	
	floorEventManager = aFloorEventManager;
	floorGameModeBase = aGameModeBase;
}

void AFloorManager::CreateGrid(UFloorBase* aFloor)
{
	UFloorBase* tempfloor = aFloor;
	for (int Column = 0; Column < tempfloor->GridDimensionX; Column++)
	{
		for (int Row = 0; Row < tempfloor->GridDimensionY; Row++)
		{
			int LevelIndex = aFloor->GetIndex(Row, Column);
			//If there is no node then continue
			if (tempfloor->floorData.floorBlueprint[LevelIndex] == (short)ECardinalNodeDirections::Empty)
			{
				continue;
			}

			SpawnFloorNode(Row , Column,LevelIndex );
			floorNodes[LevelIndex]->SetWalkableDirections(aFloor->floorData.floorBlueprint[LevelIndex]);
			FVector2D positionInGrid = FVector2D(Row,Column);
	
			if(aFloor->floorEventData.Contains(positionInGrid) && !eventManagerSubSystem->isEventCompleted(positionInGrid))
			{
				floorNodes[LevelIndex]->hasFloorEvent = true;
				floorNodes[LevelIndex]->nodeHasBeenWalkedOn = eventManagerSubSystem->EventHasBeenTriggered;
				SpawnFloorEventTriggers(positionInGrid);
			}
			if(aFloor->TeleporterGimmickData.Contains(positionInGrid))
			{
				floorNodes[LevelIndex]->nodeHasBeenWalkedOn.AddDynamic(this,&AFloorManager::LoadNextLevel);
				SpawnObjectInGrid(positionInGrid,stairsReference);
			}
		}
	}
	

}

void AFloorManager::CreateFloor(EFloorIdentifier aFloorIdentifier)
{
	currentFloorIdentifier = aFloorIdentifier;
	floorEventManager->SetFloor(currentFloorIdentifier);
	floorDictionary = floorGameModeBase->floorFactory->floorDictionary;
	
	if(floorDictionary[currentFloorIdentifier] != nullptr)
	{
	
		SpawnFloor(floorDictionary[currentFloorIdentifier]);
	}
}


void AFloorManager::SpawnFloorNode(int aRow, int aColumn, int aIndex)
{
	//Setting new Positon
	FVector PositionOffset;
	PositionOffset.Set(200 * aRow, 200 * aColumn, 0);
	FVector ActorFinalSpawnPoint = PositionOffset;
	
	FVector2D PositionInGrid;
	PositionInGrid.Set(aRow,aColumn);
	
	//Rotation
	const FRotator rotator(0.0f,0.0f,0.0f);
	
	//Spawn
	AFloorNode* floorNode;


	floorNode = Cast<AFloorNode>(GetWorld()->SpawnActor<AActor>(floorNodeReference, ActorFinalSpawnPoint, rotator));
	floorNode->SetPositionInGrid(PositionInGrid);
	USceneComponent* ParentRootComponent = this->GetRootComponent();

	floorNode->AttachToComponent(ParentRootComponent,FAttachmentTransformRules::KeepRelativeTransform);


	floorNodes[aIndex] = floorNode;
}

AFloorNode* AFloorManager::GetNodeInDirection(FVector2D CurrentPosition, ECardinalNodeDirections TargetDirection)
{
	FVector2D FinalPosition =  FVector2D(CurrentPosition.X + cardinalPositions[TargetDirection].X,
        CurrentPosition.Y + cardinalPositions[TargetDirection].Y );
    
	int FinalIndex = currentFloor->GetIndex( FinalPosition.X,FinalPosition.Y) ;
    
    if(FinalIndex > floorNodes.Num() || FinalIndex < 0)
    {
	    return nullptr;
    }
	return floorNodes[FinalIndex] ;
	
}

AFloorNode* AFloorManager::GetNode(FVector2D CurrentPosition)
{
	int FinalIndex = currentFloor->GetIndex( CurrentPosition.X,CurrentPosition.Y) ;
    
	if(FinalIndex > floorNodes.Num() || FinalIndex < 0)
	{
		return nullptr;
	}
	return floorNodes[FinalIndex] ;
}

// Called when the game starts or when spawned
void AFloorManager::BeginPlay()
{
	Super::BeginPlay();

}

void AFloorManager::SpawnFloor(UFloorBase* aFloorBase)
{
	if(aFloorBase == nullptr)
	{
		return;
	}

	aFloorBase->Initialize();

	AFloorNode* Object = nullptr;
	int AmountOfFloorNodes = aFloorBase->GridDimensionX * aFloorBase->GridDimensionY;

	floorNodes.Init(Object,AmountOfFloorNodes);
	currentFloor = aFloorBase;

	CreateGrid(aFloorBase);
	SetFloorNodeNeightbors(floorNodes);
	
}

void AFloorManager::MovePlayerToPreviousNode()
{
	//AFloorPawn* floorPawn = floorGameModeBase->floorPawn;
	//FVector2D previousPosition = floorPawn->previousNodePlayerWasOn->positionInGrid;
	//PlacePlayerFloorPawn(previousPosition);
}

void AFloorManager::LoadNextLevel(FVector2D aPositionInGrid)
{
	FTeleporterGimmick teleporterGimmick = currentFloor->TeleporterGimmickData[aPositionInGrid];
	FCompleteFloorPawnData CompleteFloorPawnData;
	CompleteFloorPawnData.currentFacingDirection    = teleporterGimmick.nextLevelSpawnDirection;
	CompleteFloorPawnData.currentNodePositionInGrid = teleporterGimmick.nextLevelsSpawnPosition;

	levelProgressionSubsystem->SetCompleteFloorPawnWithLockData(CompleteFloorPawnData);

	persistentGameInstance->LoadLevel(teleporterGimmick.floorIdentifier);
}


void AFloorManager::SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes)
{
	if(aFloorNodes.Num() == 0)
	{
		return;
	}

	for(int i = 0 ; i < aFloorNodes.Num();i++)
	{
		AFloorNode* mainNode = aFloorNodes[i];

		// In situations where the node was removed at creation
		if(mainNode != nullptr)
		{
			TArray<ECardinalNodeDirections> walkableDirections = mainNode->walkableDirections;
		
			for (ECardinalNodeDirections direction : walkableDirections)
			{
				AFloorNode* neightborNode = GetNodeInDirection(mainNode->positionInGrid, direction);

				//In situations where the neightbor in that direction doesnt exist
				if(neightborNode != nullptr)
				{
					mainNode->nodeNeighbors.Add(direction,neightborNode);
				}
			}
		}
	}
}

void AFloorManager::PlacePlayerFloorPawn(FVector2D aStartPositionInGrid,ECardinalNodeDirections aPlayerFacingDirection)
{
	AFloorPlayerController * playerController;
	playerController = Cast<AFloorPlayerController>(GetWorld()->GetFirstPlayerController());

	if(playerController != nullptr)
	{
		int startPositionIndex = currentFloor->GetIndex( aStartPositionInGrid.X,aStartPositionInGrid.Y) ;
		//Setting new Positon

		if(floorNodes[startPositionIndex] == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("PLAYER SPAWN POSITION IS NULL AT INDEX"), *aStartPositionInGrid.ToString());
			return;
		}

		
		FVector PositionOffset = FVector(0,0,300);
		FVector ActorFinalSpawnPoint = floorNodes[startPositionIndex]->GetActorLocation() + PositionOffset;

		//Rotation
		FRotator rotator = GetActorRotation();
	
		//Spawn
		AFloorPawn* floorPawn = floorGameModeBase->floorPawn;
		floorPawn->PlaceAndInitializieFloorPawn(floorNodes[startPositionIndex],aPlayerFacingDirection);
		floorPawn->SetActorLocation(ActorFinalSpawnPoint);
		floorPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;
		playerController->SetPawn(floorPawn);
	}

}

void AFloorManager::PlacePlayerAtFloorStartingNode()
{
	FFloorData floorData = floorDictionary[currentFloorIdentifier]->floorData;
	PlacePlayerFloorPawn(floorData.startPosition,floorData.startRotation);
}

void AFloorManager::SpawnFloorEventTriggers(FVector2D aPositionInGrid)
{
	FVector PositionOffset = FVector(0,0,FLOOR_EVENT_HEIGHT_OFFSET);

	FVector ActorFinalSpawnPoint = GetNode(aPositionInGrid)->GetActorLocation() + PositionOffset;

	//Rotation
	FRotator rotator = GetActorRotation();
	
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;
	
	 AFloorEnemyPawn* floorPawn;
	floorPawn = Cast<AFloorEnemyPawn>(GetWorld()->SpawnActor<AActor>(floorEnemyPawnReference, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));

	USceneComponent* ParentRootComponent = this->GetRootComponent();

	floorPawn->AttachToComponent(ParentRootComponent,FAttachmentTransformRules::KeepRelativeTransform);

	if (floorPawn)
	{
		floorPawn->SetActorLocation(ActorFinalSpawnPoint);
		floorEventManager->AddFloorEnemyEvents(aPositionInGrid,floorPawn);
	}
	else
	{
		// Handle the failure
		UE_LOG(LogTemp, Error, TEXT("Failed to spawn AFloorEnemyPawn at location: %s"), *ActorFinalSpawnPoint.ToString());
	}

}


void AFloorManager::SpawnObjectInGrid(FVector2D aPositionInGrid, TSubclassOf<AActor> objectToSpawn)
{
	FVector PositionOffset = FVector(0,0,SPAWNED_OBJECT_OFFSET);

	FVector ActorFinalSpawnPoint = GetNode(aPositionInGrid)->GetActorLocation() + PositionOffset;

	//Rotation
	FRotator rotator = GetActorRotation();
	
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;
	
	AActor* floorPawn = Cast<AFloorEnemyPawn>(GetWorld()->SpawnActor<AActor>(objectToSpawn, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));
}


void AFloorManager::Tick(float DeltaTime)
{
}
