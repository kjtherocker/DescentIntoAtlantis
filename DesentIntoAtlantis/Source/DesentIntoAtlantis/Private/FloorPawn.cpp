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
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Right,
    FVector2D(0,1), 
    FRotator(0,90,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Down ,
    FVector2D(1,0), 
    FRotator(0,160,0));
	
	AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections::Left ,
    FVector2D(-1,0), 
    FRotator(0,250,0));
}

// Called every frame
void AFloorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(FMath::Abs(GetActorRotation().Euler().Z - newRotation) > 10.0f)
	{
		double currentRotation = GetActorRotation().Euler().Z + 40.0f * DeltaTime;
		SetActorRotation(FRotator(0,currentRotation,0));
	}
	else
	{
		SetActorRotation(FRotator(0,newRotation,0));
	}
}

// Called to bind functionality to input
void AFloorPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//InputComponent->BindAxis("LeftRight", this, &AFloorPawn::RotatePawn);
	InputComponent->BindAction("Left",IE_Pressed ,this, &AFloorPawn::RightMovement);

}

void AFloorPawn::RightMovement()
{
	RotatePawn(1);
}


void AFloorPawn::RotatePawn(float aRotation)
{
	TArray<UFloorPawnPositionInfo*>   newDirectionModel;
	if(aRotation == 1.0)
	{
		newDirectionModel.Add(directionModel[3]); 
		for(int i = 0 ; i < 3; i++)
		{
			newDirectionModel.Add(directionModel[i]);
		}

		directionModel = newDirectionModel;
		newRotation = directionModel[0]->rotation.Yaw;
	}
}

void AFloorPawn::RotateEntirePawn(FRotator aNewRotation)
{
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




