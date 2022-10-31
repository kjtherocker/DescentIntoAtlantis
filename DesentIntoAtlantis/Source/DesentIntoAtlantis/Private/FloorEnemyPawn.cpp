// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorEnemyPawn.h"

// Sets default values
AFloorEnemyPawn::AFloorEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloorEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloorEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloorEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFloorEnemyPawn::DeleteEnemyPawn()
{
	Destroy();
}

