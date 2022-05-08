// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorPlayerController.h"

// Sets default values
AFloorPlayerController::AFloorPlayerController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloorPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloorPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloorPlayerController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Called to bind functionality to input
