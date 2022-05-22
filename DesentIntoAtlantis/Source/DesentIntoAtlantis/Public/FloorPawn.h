// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "FloorPawn.generated.h"

class UFloorPawnPositionInfo;
UCLASS()
class DESENTINTOATLANTIS_API AFloorPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloorPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Initialize();
	AFloorNode* currentNodePlayerIsOn;
	double newRotation;

	const double FULL_MOVEMENT       = 360;
	const double ROTATION_DIFFERENCE = 2.0f;
	const double ROTATION_SPEED      = 180.0f;
	const float  RIGHT_DIRECTION     = 1;
	const float  LEFT_DIRECTION      = -1;
	bool hasRotationFinished = true;
	
	double testo2;
	
	double rotationDirection;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SpawnFloorPawn(AFloorNode* aFloorNode);
	void RotatePawn(float aDeltatime);
	void AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections aDirection,FVector2D aDirectionPosition,FRotator aRotation);
	void LeftRotation();
	void RightRotation();

	void SetRotation(TArray<UFloorPawnPositionInfo*> aDirectionalModel, double aDirection );

	
	TArray<UFloorPawnPositionInfo*>   directionModel;

};



UCLASS()
class DESENTINTOATLANTIS_API UFloorPawnPositionInfo : public UObject
{
	GENERATED_BODY()
public:

	ECardinalNodeDirections directions;
	FVector2D directionPosition;
	FRotator rotation;
};
