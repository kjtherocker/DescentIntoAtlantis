// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "FloorPawn.generated.h"

class UFloorPawnPositionInfo;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerHasMoved,int,row,int,column);
UCLASS()

class DESENTINTOATLANTIS_API AFloorPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloorPawn();

	UPROPERTY()
	FVector2D currentNodePositionInGrid;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Initialize();
	
	void LeftRotation();
	void RightRotation();
	void MoveForward();
	TSubclassOf<AActor> commandBoardTest;

	double newRotation;

	const double FULL_MOVEMENT       = 360;
	
	const float  MOVEMENT_SPEED      = 800;
	const double ROTATION_DIFFERENCE = 5.0f;
	const double ROTATION_SPEED      = 280.0f;
	
	const float  RIGHT_DIRECTION     = 1;
	const float  LEFT_DIRECTION      = -1;
	
	bool hasRotationFinished = true;
	double rotationDirection;

	UPROPERTY()
	AFloorNode* nodeToMoveTowards;
	
	UPROPERTY()
	AFloorGameMode* gameModeBase;

	UPROPERTY()
	AFloorNode* currentNodePlayerIsOn;


public:

	UPROPERTY()
	AFloorNode* previousNodePlayerWasOn;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode);
	void RotatePawn(float aDeltatime);
	void MovePawn(float aDeltaTime);
	void AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections aDirection,FVector2D aDirectionPosition,FRotator aRotation);
	void SetFloorPawnInput(bool aIsInputActive);


	void SetRotation(TArray<UFloorPawnPositionInfo*> aDirectionalModel, double aDirection );

	void WriteSaveGame();

	UPROPERTY()
	TArray<UFloorPawnPositionInfo*>   directionModel;
	
	UPROPERTY()
	FPlayerHasMoved playerhasMovedDelegate;
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
