// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "GameFramework/Pawn.h"

#include "FloorPawn.generated.h"

class AFloorGameMode;
class AFloorNode;
enum class ECardinalNodeDirections;
class UFloorPawnPositionInfo;

USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteFloorPawnData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	ECardinalNodeDirections currentFacingDirection = ECardinalNodeDirections::Up; 
	UPROPERTY(EditAnywhere)
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
	TMap<ECardinalNodeDirections, FVector> cardinalDirections;
	UPROPERTY()
	AFloorNode* previousNodePawnWasOn;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UFUNCTION()
	virtual void ForcedMovement(ECardinalNodeDirections directiontoHead);
	virtual void PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode, ECardinalNodeDirections aRotation);
	virtual void SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection);
	virtual void SetNodeToMoveTowards(AFloorNode* aFloorNode);
	virtual void OnNewNodeReached();
	virtual void RotatePawn(float aDeltatime);
	virtual void MovePawn(float aDeltaTime);
	virtual void AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections aDirection,FVector2D aDirectionPosition,FRotator aRotation);

	virtual AFloorNode* GetCurrentNode();
	virtual void SetToStartRotation(double aDirection );

	UPROPERTY()
	TMap<ECardinalNodeDirections,UFloorPawnPositionInfo*>   directionPositionInfo;
	UPROPERTY()
	AFloorGameMode* gameModeBase;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	virtual void LeftRotation();
	virtual void RightRotation();
	virtual void MoveForward();
	TSubclassOf<AActor> commandBoardTest;

	FVector positionOffSet = FVector(0,0,80);
	double newRotation;

	const double FULL_MOVEMENT       = 360;
	
	const float  MOVEMENT_SPEED      = 800;
	const double ROTATION_DIFFERENCE = 5.0f;
	const double ROTATION_SPEED      = 280.0f;
	
	const float  RIGHT_DIRECTION     = 1;
	const float  LEFT_DIRECTION      = -1;

	float movementSpeed = 1000;
	bool hasRotationFinished = true;
	double rotationAngle;

	UPROPERTY()
	AFloorNode* nodeToMoveTowards;
	


	UPROPERTY()
	AFloorNode* currentNodePawnIsOn;



	UPROPERTY()
	int currentMatrixIndex = 0;

	UPROPERTY()
	TMap<int,ECardinalNodeDirections> playerDirectionMatrix;

	UPROPERTY()
	FCompleteFloorPawnData completeFloorPawnData;

	

};
