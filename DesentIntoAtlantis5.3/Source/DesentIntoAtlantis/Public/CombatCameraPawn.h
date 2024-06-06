// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatGameModeBase.h"
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
	const int       CAMERA_SPEED       = UCombatSettings::CAMERA_SPEED;

	const FVector3d INITIAL_POSITION   = UCombatSettings::INITIAL_CAMERA_POSITION;
	const FRotator  INITIAL_ROTATION   = UCombatSettings::INITIAL_CAMERA_ROTATION;
	const FVector   ZOOM_IN_POSITION   = UCombatSettings::CAMERA_ZOOM_IN_POSITION;
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
