// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorPawn.h"
#include "DesentIntoAtlantis/FloorNode.h"

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
	
}

void AFloorPawn::Initialize()
{
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Up,
FVector2D(-1,0), 
FRotator(0,0,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Left,
    FVector2D(0,1), 
    FRotator(0,90,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Down ,
    FVector2D(1,0), 
    FRotator(0,180,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Right ,
    FVector2D(-1,0), 
    FRotator(0,270,0));
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

	//InputComponent->BindAxis("LeftRight", this, &AFloorPawn::RotatePawn);
	InputComponent->BindAction("Left" ,IE_Pressed ,this, &AFloorPawn::LeftRotation );
	InputComponent->BindAction("Right",IE_Pressed ,this, &AFloorPawn::RightRotation);
	InputComponent->BindAction("Up"   ,IE_Pressed ,this, &AFloorPawn::MoveForward  );

}

void AFloorPawn::MoveForward()
{
	if(!hasRotationFinished)
	{
		return;
	}

	ECardinalNodeDirections currentNodeDirection = directionModel[0]->directions;

	AFloorNode* nodeToMoveTo = nullptr;
	TMap<ECardinalNodeDirections,AFloorNode*> currentNodeNeightbors = currentNodePlayerIsOn->nodeNeighbors;
	
	if(currentNodeNeightbors.Contains(currentNodeDirection))
	{
		nodeToMoveTo = currentNodePlayerIsOn->nodeNeighbors[currentNodeDirection];
	}
	
	if(nodeToMoveTo != nullptr)
	{
		//FVector PositionOffset = FVector(0,0,300);
		//FVector Finalposition  = nodeToMoveTo->GetActorLocation() + PositionOffset;
		//SetActorLocation(Finalposition);
		nodeToMoveTowards = nodeToMoveTo;
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
	
	FVector PositionOffset = FVector(0,0,300);
	FVector nodeToMoveTowardsPostion = nodeToMoveTowards->GetActorLocation() + PositionOffset;
	
	if(FVector::Dist(GetActorLocation(), nodeToMoveTowardsPostion) < 20.5f )
	{
		hasRotationFinished = true;
		currentNodePlayerIsOn = nodeToMoveTowards;
		nodeToMoveTowards = nullptr;
		return;
	}


	FVector currentPostion  = GetActorLocation();
	
	float deltaX = nodeToMoveTowardsPostion.X - currentPostion.X;
	float deltaY = nodeToMoveTowardsPostion.Y - currentPostion.Y;

	float AngleToWaypoint = atan2(deltaX,deltaY);
	
	currentPostion.X += sin(AngleToWaypoint) * MOVEMENT_SPEED * aDeltaTime;
	currentPostion.Y += cos(AngleToWaypoint) * MOVEMENT_SPEED * aDeltaTime;
	
	
	SetActorLocation(currentPostion);
	
}

void AFloorPawn::LeftRotation()
{
	if(!hasRotationFinished)
	{
		return;
	}
	
	TArray<UFloorPawnPositionInfo*>   newDirectionModel;
	newDirectionModel.Add(directionModel[3]); 
	for(int i = 0 ; i < 3; i++)
	{
		newDirectionModel.Add(directionModel[i]);
	}

	SetRotation(newDirectionModel, LEFT_DIRECTION);
}

void AFloorPawn::RightRotation()
{
	if(!hasRotationFinished)
	{
		return;
	}

	TArray<UFloorPawnPositionInfo*>   newDirectionModel;
	
	for(int i = 1 ; i < 4; i++)
	{
		newDirectionModel.Add(directionModel[i]);
	}
	newDirectionModel.Add(directionModel[0]);
	
	SetRotation(newDirectionModel, RIGHT_DIRECTION);
}

void AFloorPawn::SetRotation(TArray<UFloorPawnPositionInfo*> aDirectionalModel, double aDirection)
{
	directionModel = aDirectionalModel;
	newRotation = directionModel[0]->rotation.Yaw;
	rotationDirection = aDirection;

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
		double currentPosition = currentRotationConversion + rotationDirection * ( ROTATION_SPEED * aDeltatime);
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
	
	directionModel.Add(floorPawnPositionInfo);

}

void AFloorPawn::SpawnFloorPawn(AFloorNode* aFloorNode)
{
	Initialize();
	
	currentNodePlayerIsOn = aFloorNode;
	SetActorRotation(directionModel[0]->rotation);
}




