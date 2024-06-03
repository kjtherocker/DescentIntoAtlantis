// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CombatCameraPawn.generated.h"

UCLASS()
class DESENTINTOATLANTIS_API ACombatCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACombatCameraPawn();
bool testHasBeenReached = true;
	const int CAMERA_SPEED = 1000;
	const FVector3d ENEMY_POSITION1 = FVector3d(90,-500,43.0);
	const FVector3d ENEMY_POSITION2 = FVector3d(90,0,43.0);
	const FVector3d ENEMY_POSITION3 = FVector3d(90,500,43.0);

	const FVector3d InitialPosition = FVector3d(0,-50,0);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Rotate();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
