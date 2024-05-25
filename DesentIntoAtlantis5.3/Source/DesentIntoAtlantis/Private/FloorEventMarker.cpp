// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorEventMarker.h"

// Sets default values
AFloorEventMarker::AFloorEventMarker()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

// Called when the game starts or when spawned
void AFloorEventMarker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloorEventMarker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloorEventMarker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFloorEventMarker::DeleteEnemyPawn()
{
	Destroy();
}

