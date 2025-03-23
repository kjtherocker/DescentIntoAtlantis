// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorPawn.h"
#include "GameFramework/Pawn.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "FloorPlayerPawn.generated.h"

class UFloorPawnPositionInfo;



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerForcedMovement, ECardinalNodeDirections, direction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerHasMoved,FCompleteFloorPawnData,floorData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDirectionHasChanged,FCompleteFloorPawnData,playerFacingDirection);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIsPlayerInputEnabled,bool,playerInput);
UCLASS()

class DESENTINTOATLANTIS_API AFloorPlayerPawn : public AFloorPawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloorPlayerPawn();

	virtual void Initialize() override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void ActivateMainMenu();
	TSubclassOf<AActor> commandBoardTest;

	UPROPERTY()
	UPersistentGameinstance* persistentGameInstance ;


public:

	
	FIsPlayerInputEnabled isPlayerInputEnabled;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	virtual void PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode, ECardinalNodeDirections aRotation) override;
	virtual void SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection) override;
	UFUNCTION()
	virtual void SetFloorPawnInput(bool aIsInputActive);
	FVector2D GetPosition();

	virtual void SetToStartRotation(double aDirection ) override;

	virtual void OnNewNodeReached() override;
	
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
