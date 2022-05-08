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

// Called every frame
void AFloorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloorPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFloorPawn::SpawnFloorPawn(AFloorNode* aFloorNode)
{
	currentNodePlayerIsOn = aFloorNode;
}


