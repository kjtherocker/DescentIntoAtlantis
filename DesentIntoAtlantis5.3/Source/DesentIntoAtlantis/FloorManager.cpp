// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorManager.h"

#include "FloorGameMode.h"
#include "EFloorIdentifier.h"
#include "FloorPlayerController.h"
#include "PersistentGameinstance.h"
#include "SkillsData.h"
#include "Engine/DataTable.h"
#include "EventManagerSubSystem.h"
#include "FloorDoor.h"
#include "Floor_EnemyPawn.h"
#include "Gimmick_Base.h"
#include "LevelProgressionSubsystem.h"
#include "SaveManagerSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


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

	FUGimmickArrayWrapper teleporter;
	gimmickMap.Add(EFloorGimmicks::Teleporter,teleporter);
	FUGimmickArrayWrapper forcedMovement;
	gimmickMap.Add(EFloorGimmicks::ForcedMovement, forcedMovement);
	FUGimmickArrayWrapper door;
	gimmickMap.Add(EFloorGimmicks::Door, door);
	
	persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());

	eventManagerSubSystem     =  persistentGameInstance->EventManagerSubSystem;
	levelProgressionSubsystem = persistentGameInstance->levelProgressionSubsystem;
	
	floorEventManager = aFloorEventManager;
	floorGameModeBase = aGameModeBase;
}

void AFloorManager::CreateGrid(UFloorBase* aFloor)
{
	UFloorBase* tempfloor = aFloor;
	
	FFloorNodeAiData floorNodeData;
	int AmountOfFloorNodes = tempfloor->GridDimensionX * tempfloor->GridDimensionY;
	entireFloorNodeData.Init(floorNodeData,AmountOfFloorNodes);
	
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
			entireFloorNodeData[LevelIndex] = floorNodes[LevelIndex]->floorNodeData;
			
			FVector2D positionInGrid = FVector2D(Row,Column);
	
			if(aFloor->floorEventData.Contains(positionInGrid) && !eventManagerSubSystem->isEventCompleted(positionInGrid))
			{
				floorNodes[LevelIndex]->hasFloorEvent = true;
				floorNodes[LevelIndex]->nodeHasBeenWalkedOn = eventManagerSubSystem->EventHasBeenTriggered;
				SpawnFloorEventTriggers(aFloor->floorEventData[positionInGrid]);
			}
			if(aFloor->ForcedMovementGimmickData.Contains(positionInGrid))
			{
				FForcedMovementGimmick forcedMovementGimmick = aFloor->ForcedMovementGimmickData[positionInGrid];
				
				UGimmick_ForcedMovement* newGimmick = NewObject<UGimmick_ForcedMovement>();
				newGimmick->InitializeGimmick(persistentGameInstance);
				newGimmick->SetGimmick(forcedMovementGimmick);
				newGimmick->SetFloorNodeDelegate(floorNodes[LevelIndex]);
				newGimmick->SetPlayerForcedMovementDelegate(floorGameModeBase->floorPawn);
				gimmickMap[EFloorGimmicks::ForcedMovement].GimmickArray.Add(newGimmick);
				
				SpawnObjectInGrid(positionInGrid,stairsReference);
			}
			if(aFloor->TeleporterGimmickData.Contains(positionInGrid))
			{
				FTeleporterGimmick teleporterGimmick = aFloor->TeleporterGimmickData[positionInGrid];
				
				UGimmick_Teleporter* newGimmick = NewObject<UGimmick_Teleporter>();
				newGimmick->InitializeGimmick(persistentGameInstance);
				newGimmick->SetGimmick(teleporterGimmick);
				newGimmick->SetFloorNodeDelegate(floorNodes[LevelIndex]);
				gimmickMap[EFloorGimmicks::Teleporter].GimmickArray.Add(newGimmick);
				
				SpawnObjectInGrid(positionInGrid,stairsReference);
			}
		}
	}
	
	for (FDoorComplete Element : aFloor->doorGimmicks)
	{
		FDoorGimmick spotA = Element.DoorSpotA;
		int LevelIndexA = aFloor->GetIndex(spotA.positionInGrid.X, spotA.positionInGrid.Y);
		FDoorGimmick spotB = Element.DoorSpotB;
		int LevelIndexB = aFloor->GetIndex(spotB.positionInGrid.X, spotB.positionInGrid.Y);
		
		UGimmick_Doors* newGimmickA = NewObject<UGimmick_Doors>();
		newGimmickA->SetGimmick(spotA);
		UGimmick_Doors* newGimmickB = NewObject<UGimmick_Doors>();
		newGimmickB->SetGimmick(spotB);
		
		AFloorNode* floorNodeA = floorNodes[LevelIndexA];
		floorNodeA->SetAdditionalLockedDirections(spotA.interactDirection);
		AFloorNode* floorNodeB = floorNodes[LevelIndexB];
		floorNodeB->SetAdditionalLockedDirections(spotB.interactDirection);

		nodeALocation = floorNodeA->GetActorLocation();
		nodeBLocation = floorNodeB->GetActorLocation();
		 MidPoint   = (nodeALocation + nodeBLocation) / 2.0f;
		
		FVector PositionOffset = FVector(0,0,SPAWNED_OBJECT_OFFSET);
		
	
		FActorSpawnParameters ActorSpawnParameters;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		ActorSpawnParameters.Owner = this;
	
		AFloorDoor* FloorDoor = Cast<AFloorDoor>(GetWorld()->SpawnActor<AActor>(DoorReference, MidPoint + PositionOffset, FRotator(0,0,0),ActorSpawnParameters));
		spawnedActors.Add(FloorDoor);
		
		spotA.floorDoor = FloorDoor;
		spotB.floorDoor = FloorDoor;

		newGimmickA->SetPlayerForcedMovementDelegate(floorGameModeBase->floorPawn);
		newGimmickB->SetPlayerForcedMovementDelegate(floorGameModeBase->floorPawn);
		
		newGimmickA->SetDoorOpenDelegate(FloorDoor);
		newGimmickB->SetDoorOpenDelegate(FloorDoor);

		
		newGimmickA->doorAnimationType = EDoorAnimationTypes::OpenA;
		newGimmickB->doorAnimationType = EDoorAnimationTypes::OpenB;
		
		levelProgressionSubsystem->SetInteractableGimmick(spotA.positionInGrid,newGimmickA);
		levelProgressionSubsystem->SetInteractableGimmick(spotB.positionInGrid,newGimmickB);
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

TArray<FFloorNodeAiData> AFloorManager::GetCopyOfFloorNodeAIData()
{
	TArray<FFloorNodeAiData> copyArray;

	entireFloorNodeData[0].neightborsFloorData.Add(ECardinalNodeDirections::Down,FFloorNodeData());
	for(int i = 0 ; i < entireFloorNodeData.Num();i++)
	{
		copyArray.Add(FFloorNodeAiData(entireFloorNodeData[i]));
	}

	return copyArray;
}

int AFloorManager::GetNodeIndex(FVector2D aPositionInGrid)
{
	return currentFloor->GetIndex(aPositionInGrid.X,aPositionInGrid.Y);
}

TArray<FVector2D> AFloorManager::GetPositionsOfEnemysBesidesOne(AFloor_EnemyPawn* aEnemyPawn)
{
	TArray<FVector2D> enemyPositions;

	for( int i = 0 ; i < enemyFloorPawns.Num();i++)
	{
		if(enemyFloorPawns[i] != aEnemyPawn)
		{
			FVector2D positionInGrid = enemyFloorPawns[i]->enemyPawnCompleteData.completeFloorPawnData.currentNodePositionInGrid;
			enemyPositions.Add(positionInGrid);
		}
	}

	return enemyPositions;
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
	SetFloorNodeNeightbors(floorNodes,aFloorBase);
	SpawnEnemysInFloor(aFloorBase);
}

void AFloorManager::SpawnEnemysInFloor(UFloorBase* aFloorBase)
{
	FCompleteEnemyInteractionData completeEnemyInteractionData =
			levelProgressionSubsystem->GetEnemyInteractionData(aFloorBase->floorData.floorIdentifier);
	
	for(FFloorEnemyPawnCompleteData enemyPawnData : aFloorBase->floorEnemyPawns)
	{
		FVector2D startPosition = enemyPawnData.enemyPatrolPath.StartPath;
		if(!completeEnemyInteractionData.interactedEnemy.Contains(startPosition))
		{
			SpawnEnemyPawn(enemyPawnData);
		}
	}
}

void AFloorManager::MovePlayerToPreviousNode()
{
	//AFloorPawn* floorPawn = floorGameModeBase->floorPawn;
	//FVector2D previousPosition = floorPawn->previousNodePlayerWasOn->positionInGrid;
	//PlacePlayerFloorPawn(previousPosition);
}

void AFloorManager::SpawnEnemyPawn(FFloorEnemyPawnCompleteData aCompleteFloorPawnData)
{
	FVector PositionOffset = FVector(0,0,SPAWNED_OBJECT_OFFSET);

	FVector ActorFinalSpawnPoint = GetNode(aCompleteFloorPawnData.completeFloorPawnData.currentNodePositionInGrid)->GetActorLocation() + PositionOffset;

	//Rotation
	FRotator rotator = GetActorRotation();
	
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;

	int startPositionIndex = currentFloor->GetIndex( aCompleteFloorPawnData.completeFloorPawnData.currentNodePositionInGrid.X,
		aCompleteFloorPawnData.completeFloorPawnData.currentNodePositionInGrid.Y) ;
	
	AFloor_EnemyPawn* floorPawn = Cast<AFloor_EnemyPawn>(GetWorld()->SpawnActor<AActor>(aCompleteFloorPawnData.floorEnemyPawnReference, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));
	floorPawn->SetEnemyFloorPlan(GetCopyOfFloorNodeAIData());
	floorPawn->SubscribeToActivateEnemyBehavior(floorGameModeBase->floorPawn);
	floorPawn->SetEnemyPawnCompleteData(aCompleteFloorPawnData);
	floorPawn->Initialize();
	floorPawn->PlaceAndInitializieFloorPawn(floorNodes[startPositionIndex],aCompleteFloorPawnData.completeFloorPawnData.currentFacingDirection);
	enemyFloorPawns.Add(floorPawn); 
}

void AFloorManager::SpawnCutsceneFloorPawn(FDialogueActorData aDialogueActor,TSubclassOf<AActor> aCutsceneFloorPawn)
{
	FVector PositionOffset = FVector(0,0,SPAWNED_OBJECT_OFFSET);

	FCompleteFloorPawnData completeFloorPawnData = aDialogueActor.pawnData;
	EDialogueActorsLabel dialogueActor = aDialogueActor.dialogueActor;
	FVector ActorFinalSpawnPoint = GetNode(completeFloorPawnData.currentNodePositionInGrid)->GetActorLocation() + PositionOffset;

	//Rotation
	FRotator rotator = GetActorRotation();
	
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;

	int startPositionIndex = currentFloor->GetIndex( completeFloorPawnData.currentNodePositionInGrid.X,
		completeFloorPawnData.currentNodePositionInGrid.Y) ;
	
	AFloorPawn* floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(aCutsceneFloorPawn, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));
	floorPawn->Initialize();
	floorPawn->PlaceAndInitializieFloorPawn(floorNodes[startPositionIndex],completeFloorPawnData.currentFacingDirection);

	if(aDialogueActor.actorToBePossessed)
	{
		AFloorPlayerController * playerController;
		playerController = Cast<AFloorPlayerController>(GetWorld()->GetFirstPlayerController());

	//	if(playerController != nullptr)
		{
		//	playerController->Possess(floorPawn);
			playerController->SetViewTarget(floorPawn);
		}
	}
	spawnedDialogueActors.Add(dialogueActor,floorPawn); 
}

void AFloorManager::MoveCutscenePawnToLocation(FDialogueActorData actorData)
{
	EDialogueActorsLabel dialogueActorsLabel       = actorData.dialogueActor;
	FCompleteFloorPawnData CompleteFloorPawnData   = actorData.pawnData;
	FVector2D positionInGrid                       = CompleteFloorPawnData.currentNodePositionInGrid;
	
	AFloorPawn* cutScenePawn = spawnedDialogueActors[dialogueActorsLabel];
	AFloorNode* floorNodeToMoveTowards = GetNode(positionInGrid);

	cutScenePawn->SetRotationWithoutAnimation(CompleteFloorPawnData.currentFacingDirection);
	cutScenePawn->SetNodeToMoveTowards(floorNodeToMoveTowards);
	
}

void AFloorManager::LoadNextLevel(FVector2D aPositionInGrid)
{

}


void AFloorManager::SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes,UFloorBase* aFloorBase)
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
			TArray<ECardinalNodeDirections> walkableDirections = mainNode->floorNodeData.walkableDirections;
		
			for (ECardinalNodeDirections direction : walkableDirections)
			{
				AFloorNode* neightborNode = GetNodeInDirection(mainNode->floorNodeData.positionInGrid, direction);

				//In situations where the neightbor in that direction doesnt exist
				if(neightborNode != nullptr)
				{
					mainNode->floorNodeData.nodeNeighbors.Add(direction,neightborNode);
				}
			}

			FVector2D mainNodePositionInGrid = mainNode->floorNodeData.positionInGrid;
			int LevelIndex = aFloorBase->GetIndex(mainNodePositionInGrid.X, mainNodePositionInGrid.Y);
			entireFloorNodeData[LevelIndex] = mainNode->floorNodeData;
			
			for (TTuple<ECardinalNodeDirections, AFloorNode*> neightbors : mainNode->floorNodeData.nodeNeighbors)
			{
				entireFloorNodeData[LevelIndex].neightborsFloorData.Add(neightbors.Key,neightbors.Value->floorNodeData);
			}
			
		}
	}
}

void AFloorManager::PlacePlayerFloorPawn(FVector2D aPositionInGrid,ECardinalNodeDirections aPlayerFacingDirection)
{
	AFloorPlayerController * playerController;
	playerController = Cast<AFloorPlayerController>(GetWorld()->GetFirstPlayerController());
	

	if(playerController != nullptr)
	{
		int startPositionIndex = currentFloor->GetIndex( aPositionInGrid.X,aPositionInGrid.Y) ;
		//Setting new Positon

		if(floorNodes[startPositionIndex] == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("PLAYER SPAWN POSITION IS NULL AT INDEX"), *aPositionInGrid.ToString());
			return;
		}
		
		FVector PositionOffset       = FVector(0,0,300);
		FVector ActorFinalSpawnPoint = floorNodes[startPositionIndex]->GetActorLocation() + PositionOffset;

		//Rotation
		FRotator rotator = GetActorRotation();
	
		//Spawn
		AFloorPlayerPawn* floorPawn = floorGameModeBase->floorPawn;
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

void AFloorManager::SpawnFloorEventTriggers(FFloorEventData AFloorEventData)
{
	FVector PositionOffset = FVector(0,0,FLOOR_EVENT_HEIGHT_OFFSET);

	FVector2D eventPositionInGrid = AFloorEventData.positionInGrid;

	FVector ActorFinalSpawnPoint = GetNode(eventPositionInGrid)->GetActorLocation() + PositionOffset;

	//Rotation
	FRotator rotator = GetActorRotation();
	
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;
	
	 AFloorEventMarker* floorPawn;
	floorPawn = Cast<AFloorEventMarker>(GetWorld()->SpawnActor<AActor>(AFloorEventData.eventActorReference, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));

	USceneComponent* ParentRootComponent = this->GetRootComponent();

	floorPawn->AttachToComponent(ParentRootComponent,FAttachmentTransformRules::KeepRelativeTransform);

	if (floorPawn)
	{
		floorPawn->SetActorLocation(ActorFinalSpawnPoint);
		floorEventManager->AddFloorEnemyEvents(eventPositionInGrid,floorPawn);
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
	
	AActor* floorPawn = Cast<AFloorEventMarker>(GetWorld()->SpawnActor<AActor>(objectToSpawn, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));
}


void AFloorManager::Tick(float DeltaTime)
{
}
