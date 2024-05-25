// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "FloorPawn.generated.h"

class UFloorPawnPositionInfo;

USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteFloorPawnData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	ECardinalNodeDirections currentFacingDirection = ECardinalNodeDirections::Up; 
	UPROPERTY()
	FVector2D currentNodePositionInGrid = FVector2D(-1,-1);
};

UCLASS()
class DESENTINTOATLANTIS_API AFloorPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloorPawn();

	virtual void Initialize();
		
	UPROPERTY()
	AFloorNode* previousNodePlayerWasOn;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UFUNCTION()
	virtual void ForcedMovement(ECardinalNodeDirections directiontoHead);
	virtual void PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode, ECardinalNodeDirections aRotation);
	virtual void SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection);
	virtual void RotatePawn(float aDeltatime);
	virtual void MovePawn(float aDeltaTime);
	virtual void AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections aDirection,FVector2D aDirectionPosition,FRotator aRotation);


	virtual void SetToStartRotation(double aDirection );

	UPROPERTY()
	TMap<ECardinalNodeDirections,UFloorPawnPositionInfo*>   directionPositionInfo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	virtual void LeftRotation();
	virtual void RightRotation();
	virtual void MoveForward();
	TSubclassOf<AActor> commandBoardTest;

	double newRotation;

	const double FULL_MOVEMENT       = 360;
	
	const float  MOVEMENT_SPEED      = 800;
	const double ROTATION_DIFFERENCE = 5.0f;
	const double ROTATION_SPEED      = 280.0f;
	
	const float  RIGHT_DIRECTION     = 1;
	const float  LEFT_DIRECTION      = -1;

	float movementSpeed;
	bool hasRotationFinished = true;
	double rotationAngle;

	UPROPERTY()
	AFloorNode* nodeToMoveTowards;
	
	UPROPERTY()
	AFloorGameMode* gameModeBase;

	UPROPERTY()
	AFloorNode* currentNodePawnIsOn;



	UPROPERTY()
	int currentMatrixIndex = 0;

	UPROPERTY()
	TMap<int,ECardinalNodeDirections> playerDirectionMatrix;

	UPROPERTY()
	FCompleteFloorPawnData completeFloorPawnData;

	

};
