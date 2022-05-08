// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorManager.h"

#include "EFloorIdentifier.h"
#include "FloorPlayerController.h"


// Sets default values
AFloorManager::AFloorManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AFloorManager::CreateGrid(UFloorBase* aFloor)
{
	UFloorBase* tempfloor = aFloor;
	
	for (int x = 0; x < tempfloor->GridDimensionX; x++)
	{
		for (int y = 0; y < tempfloor->GridDimensionY; y++)
		{
			int LevelIndex = aFloor->GetIndex(x, y);
			//If there is no node then continue
			if (tempfloor->FloorBlueprint[LevelIndex] == (short)ECardinalNodeDirections::Empty)
			{
				continue;
			}

			SpawnFloorNode(x , y,LevelIndex );
			floorNodes[LevelIndex]->SetWalkableDirections(aFloor->FloorBlueprint[LevelIndex]);
		}
	}
	

}


void AFloorManager::SpawnFloorNode(int aRow, int aColumn, int aIndex)
{
	//Setting new Positon
	FVector PositionOffset;
	PositionOffset.Set(200 * aRow, 200 * aColumn, 0);
	FVector ActorFinalSpawnPoint = GetActorLocation() + PositionOffset ;
	
	FVector2D PositionInGrid;
	PositionInGrid.Set(aRow,aColumn);
	
	//Rotation
	FRotator rotator = GetActorRotation();
	
	//Spawn
	AFloorNode* floorNode;


	floorNode = Cast<AFloorNode>(GetWorld()->SpawnActor<AActor>(FloorNodeReference, ActorFinalSpawnPoint, rotator));
	//floorNode->Rename( *FString(aRow + " " + aColumn));
	floorNode->SetPositionInGrid(PositionInGrid);

	floorNodes[aIndex] = floorNode;
}

AFloorNode* AFloorManager::GetNode(FVector2D CurrentPosition, ECardinalNodeDirections TargetDirection)
{
	FVector2D FinalPosition =  FVector2D(CurrentPosition.X + m_CardinalPositions[TargetDirection].X,
        CurrentPosition.Y + m_CardinalPositions[TargetDirection].Y );
    
	int FinalIndex = currentFloor->GetIndex( FinalPosition.X,FinalPosition.Y) ;
    
    
	return floorNodes[FinalIndex] ;
	
}

// Called when the game starts or when spawned
void AFloorManager::BeginPlay()
{
	Super::BeginPlay();

	m_CardinalPositions.Add(ECardinalNodeDirections::Up,    FVector2D(-1,0));
	m_CardinalPositions.Add(ECardinalNodeDirections::Down,  FVector2D(1,0));
	m_CardinalPositions.Add(ECardinalNodeDirections::Left,  FVector2D(0,-1));
	m_CardinalPositions.Add(ECardinalNodeDirections::Right, FVector2D(0,1));
	
	floorDictionary.Add(EFloorIdentifier::Floor1,NewObject<UFloorBase>());

	if(floorDictionary[EFloorIdentifier::Floor1] != nullptr)
	{
		SpawnFloor(floorDictionary[EFloorIdentifier::Floor1]);
	}

	AFloorPlayerController * Testo;
	Testo = Cast<AFloorPlayerController>(GetWorld()->GetFirstPlayerController());

	if(Testo != nullptr)
	{
		//Setting new Positon
		FVector PositionOffset;
		FVector ActorFinalSpawnPoint = floorNodes[1]->GetActorLocation();

		//Rotation
		FRotator rotator = GetActorRotation();
	
		//Spawn
		AFloorPawn* floorNode;

		floorNode = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(FloorPawnReference, ActorFinalSpawnPoint, rotator));
		floorNode->SpawnFloorPawn(floorNodes[1]);

		Testo->SetPawn(floorNode);
	}

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
				AFloorNode* neightborNode = GetNode(mainNode->positionInGrid, direction);

				//In situations where the neightbor in that direction doesnt exist
				if(neightborNode != nullptr)
				{
					mainNode->nodeNeighbors.Add(direction,neightborNode);
				}
			}
		}
	}
}

void AFloorManager::Tick(float DeltaTime)
{
}
