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
	bool shouldReturnToInitialPosition = true;
	const int CAMERA_SPEED = 750;

	const FVector3d InitialPosition = FVector3d(0,-50,0);
	const FRotator InitialRotation = FRotator(0,0,0);
	const FVector zoomInPosition = FVector(158,-153,100);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void RotateCameraToActor(AActor* aRotateTowards);
	virtual void ZoomCameraInTowardsActor(AActor* aRotateTowards);
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
