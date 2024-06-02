// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorPawn.h"
#include "CombatGameModeBase.h"
#include "InGameHUD.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"
#include "SaveManagerSubsystem.h"
#include "SoundManager.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFloorPawn::AFloorPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloorPawn::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast< AFloorGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
//	AInGameHUD * hud = (AInGameHUD*)GetWorld()->GetFirstPlayerController()->GetHUD();
//	gameModeBase->InGameHUD = hud;
	
}

void AFloorPawn::Initialize()
{
	cardinalDirections.Add(ECardinalNodeDirections::Up,    FVector(0,-1,0));
	cardinalDirections.Add(ECardinalNodeDirections::Down,  FVector(0,1, 0));
	cardinalDirections.Add(ECardinalNodeDirections::Left,  FVector(1,0, 0));
	cardinalDirections.Add(ECardinalNodeDirections::Right, FVector(-1,0, 0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Up,
	FVector2D(0,1), 
	FRotator(0,90,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Right,
    FVector2D(-1,0), 
    FRotator(0,180,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Down ,
    FVector2D(0,-1), 
    FRotator(0,270,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Left ,
    FVector2D(1,0), 
    FRotator(0,0,0));

	playerDirectionMatrix.Add(0,ECardinalNodeDirections::Up);
	playerDirectionMatrix.Add(1,ECardinalNodeDirections::Right);
	playerDirectionMatrix.Add(2,ECardinalNodeDirections::Down);
	playerDirectionMatrix.Add(3,ECardinalNodeDirections::Left);
}



// Called every frame
void AFloorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Handling Rotations
	RotatePawn(DeltaTime);
	MovePawn(DeltaTime);
}

// Called to bind functionality to input
void AFloorPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AFloorPawn::ForcedMovement(ECardinalNodeDirections directiontoHead)
{
	if(!hasRotationFinished || currentNodePawnIsOn == nullptr)
	{
		return;
	} 
	
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Footsteps);
	
	AFloorNode* nodeToMoveTo = nullptr;
	TMap<ECardinalNodeDirections,AFloorNode*> currentNodeNeightbors = currentNodePawnIsOn->floorNodeData.nodeNeighbors;
	
	if(currentNodeNeightbors.Contains(directiontoHead))
	{
		nodeToMoveTo = currentNodePawnIsOn->floorNodeData.nodeNeighbors[directiontoHead];
	}
	
	if(nodeToMoveTo != nullptr)
	{
		nodeToMoveTowards = nodeToMoveTo;
		currentNodePawnIsOn = nullptr;
	}
}

void AFloorPawn::MoveForward()
{
	if(!hasRotationFinished || currentNodePawnIsOn == nullptr)
	{
		return;
	} 
	
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Footsteps);
	

	AFloorNode* nodeToMoveTo = nullptr;
	TMap<ECardinalNodeDirections,AFloorNode*> currentNodeNeightbors = currentNodePawnIsOn->floorNodeData.nodeNeighbors;
	
	if(currentNodeNeightbors.Contains(completeFloorPawnData.currentFacingDirection) &&
		!currentNodePawnIsOn->floorNodeData.additionalLockedDirections.Contains(completeFloorPawnData.currentFacingDirection))
	{
		nodeToMoveTo = currentNodePawnIsOn->floorNodeData.nodeNeighbors[completeFloorPawnData.currentFacingDirection];
	}
	
	if(nodeToMoveTo != nullptr)
	{
		nodeToMoveTowards = nodeToMoveTo;
		currentNodePawnIsOn = nullptr;
	}
}

void AFloorPawn::MovePawn(float aDeltaTime)
{
	if(!hasRotationFinished)
	{
		return;
	}

	if(nodeToMoveTowards == nullptr)
	{
		return;
	}
	

	FVector nodeToMoveTowardsPostion = nodeToMoveTowards->GetActorLocation() + positionOffSet;
	FVector2D nodeToModeTowardsXY = FVector2D(nodeToMoveTowardsPostion.X,nodeToMoveTowardsPostion.Y);
	FVector2D currentActorPositionXY = FVector2D(GetActorLocation().X,GetActorLocation().Y);
	
	if(FVector2D::Distance(currentActorPositionXY, nodeToModeTowardsXY) < 9.5f )
	{
		OnNewNodeReached();
		//SetActorLocation(nodeToMoveTowardsPostion);
		return;
	}


	FVector currentPostion  = GetActorLocation();


	
	float deltaX = nodeToMoveTowardsPostion.X - currentPostion.X;
	float deltaY = nodeToMoveTowardsPostion.Y - currentPostion.Y;

	float AngleToWaypoint = atan2(deltaX,deltaY);
	
	currentPostion.X += sin(AngleToWaypoint) * movementSpeed * aDeltaTime;
	currentPostion.Y += cos(AngleToWaypoint) * movementSpeed * aDeltaTime;
	
	
	SetActorLocation(currentPostion);
	
}

void AFloorPawn::LeftRotation()
{
	if(!hasRotationFinished)
	{
		return;
	}
	
	SetToStartRotation(LEFT_DIRECTION);
}

void AFloorPawn::RightRotation()
{
	if(!hasRotationFinished)
	{
		return;
	}
	
	SetToStartRotation(RIGHT_DIRECTION);
}

void AFloorPawn::SetToStartRotation(double aDirection)
{
	if(playerDirectionMatrix.Num() == 0 || directionPositionInfo.Num() == 0)
	{
		return;
	}

	
	currentMatrixIndex += aDirection;
	if(currentMatrixIndex < 0)
	{
		currentMatrixIndex = 3;
	}
	
	currentMatrixIndex = currentMatrixIndex % 4;
	completeFloorPawnData.currentFacingDirection = playerDirectionMatrix[currentMatrixIndex];
	newRotation = directionPositionInfo[completeFloorPawnData.currentFacingDirection]->rotation.Yaw;
	//playerDirectionHasChanged.Broadcast(completeFloorPawnData);
	rotationAngle = aDirection;
	
	hasRotationFinished = false;
}



void AFloorPawn::RotatePawn(float aDeltatime)
{
	double actorRotation = GetActorRotation().Yaw;
	double currentRotationConversion = FMath::Fmod(actorRotation + FULL_MOVEMENT,FULL_MOVEMENT);

	if(currentRotationConversion == newRotation)
	{
		return;
    }
	
	if( FMath::Abs(currentRotationConversion - newRotation) > ROTATION_DIFFERENCE)
	{
		double currentPosition = currentRotationConversion + rotationAngle * ( ROTATION_SPEED * aDeltatime);
		SetActorRotation(FRotator(0,currentPosition,0));
	}
	else
	{
		if(currentRotationConversion != newRotation)
		{
			//Rotation Finished
			hasRotationFinished = true;
			SetActorRotation(FRotator(0,newRotation,0));
		}
	}
}


void AFloorPawn::AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections aDirection,FVector2D aDirectionPosition, FRotator aRotation)
{
	UFloorPawnPositionInfo* floorPawnPositionInfo = NewObject<UFloorPawnPositionInfo>();
	floorPawnPositionInfo->directions = aDirection;
	floorPawnPositionInfo->directionPosition = aDirectionPosition;
	floorPawnPositionInfo->rotation = aRotation;
	
	directionPositionInfo.Add(aDirection,floorPawnPositionInfo);
}

AFloorNode* AFloorPawn::GetCurrentNode()
{
	return currentNodePawnIsOn;
}

void AFloorPawn::PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode, ECardinalNodeDirections aRotation)
{
	
	currentNodePawnIsOn = aFloorNode;
	completeFloorPawnData.currentNodePositionInGrid = currentNodePawnIsOn->floorNodeData.positionInGrid;
	
	SetRotationWithoutAnimation(aRotation);
}

void AFloorPawn::SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection)
{
	completeFloorPawnData.currentFacingDirection = aCardinalNodeDirection;

	for (TTuple<int, ECardinalNodeDirections> indexAndDirection : playerDirectionMatrix)
	{
		if(indexAndDirection.Value == completeFloorPawnData.currentFacingDirection)
		{
			currentMatrixIndex = indexAndDirection.Key;
			break;
		}
	}
	SetActorRotation(directionPositionInfo[completeFloorPawnData.currentFacingDirection]->rotation);
}

void AFloorPawn::SetNodeToMoveTowards(AFloorNode* aFloorNode)
{
	nodeToMoveTowards = aFloorNode;
}

void AFloorPawn::OnNewNodeReached()
{
	hasRotationFinished       = true;
	previousNodePawnWasOn   = currentNodePawnIsOn;
	currentNodePawnIsOn     = nodeToMoveTowards;
	nodeToMoveTowards         = nullptr;

	completeFloorPawnData.currentNodePositionInGrid = currentNodePawnIsOn->floorNodeData.positionInGrid;
}




