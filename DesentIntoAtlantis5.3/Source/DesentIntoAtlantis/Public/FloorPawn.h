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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerForcedMovement, ECardinalNodeDirections, direction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerHasMoved,FCompleteFloorPawnData,floorData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDirectionHasChanged,FCompleteFloorPawnData,playerFacingDirection);
UCLASS()

class DESENTINTOATLANTIS_API AFloorPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloorPawn();

	void Initialize();	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
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
	double rotationAngle;

	UPROPERTY()
	AFloorNode* nodeToMoveTowards;
	
	UPROPERTY()
	AFloorGameMode* gameModeBase;

	UPROPERTY()
	AFloorNode* currentNodePlayerIsOn;



	UPROPERTY()
	int currentMatrixIndex = 0;

	UPROPERTY()
	TMap<int,ECardinalNodeDirections> playerDirectionMatrix;

	UPROPERTY()
	FCompleteFloorPawnData completeFloorPawnData;

public:

	
	UPROPERTY()
	AFloorNode* previousNodePlayerWasOn;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void ForcedMovement(ECardinalNodeDirections directiontoHead);
	void PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode, ECardinalNodeDirections aRotation);
	void SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection);
	void RotatePawn(float aDeltatime);
	void MovePawn(float aDeltaTime);
	void AddUFloorPawnPositionInfoToDirectionModel(ECardinalNodeDirections aDirection,FVector2D aDirectionPosition,FRotator aRotation);
	void SetFloorPawnInput(bool aIsInputActive);


	void SetToStartRotation(double aDirection );

	void WriteSaveGame();

	UPROPERTY()
	TMap<ECardinalNodeDirections,UFloorPawnPositionInfo*>   directionPositionInfo;
	
	UPROPERTY()
	FPlayerHasMoved playerhasMovedDelegate;

	UPROPERTY()
	FPlayerDirectionHasChanged playerDirectionHasChanged;

	UPROPERTY()
	FPlayerForcedMovement playerForcedMovement;
};



UCLASS()
class DESENTINTOATLANTIS_API UFloorPawnPositionInfo : public UObject
{
	GENERATED_BODY()
public:

	ECardinalNodeDirections directions ;
	FVector2D directionPosition;
	FRotator rotation;
};
