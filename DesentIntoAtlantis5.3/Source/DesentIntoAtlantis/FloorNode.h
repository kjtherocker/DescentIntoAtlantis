// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ECardinalDirections.h"
#include "FloorBase.h"
#include "GameFramework/Actor.h"
#include "FloorNode.generated.h"

class UGimmick_Base;
class UFloorNodeWallInfo;

USTRUCT()
struct FFloorNodeData
{
	GENERATED_BODY()

	TArray<ECardinalNodeDirections> walkableDirections;
	
	FVector2D positionInGrid;

	UPROPERTY()
	TMap<ECardinalNodeDirections,AFloorNode*> nodeNeighbors;
	UPROPERTY()
	TArray<ECardinalNodeDirections> additonalLockedDirections;
	UPROPERTY()
	TArray<ECardinalNodeDirections> cardinalNodeDirections;
};




UCLASS()
class DESENTINTOATLANTIS_API AFloorNode : public AActor
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	AFloorNode();
	~AFloorNode();

	virtual void SetWalkableDirections(short aWalkabledirections);
	virtual void SetLevelNode(TArray<ECardinalNodeDirections> aWalkableDirections);
	virtual void SetPositionInGrid(FVector2D aPosition);
	bool IsDirectionWalkable(ECardinalNodeDirections aDirection);
	void SetFloorNodeWallInfo(ECardinalNodeDirections aCardinalDirection, FVector aWallPosition, FRotator aRotation);
	//	WalkOntopTriggerTypes m_WalkOnTopTriggerTypes;
	void PlayerIsOnTopOfNode();
	void SetAdditionalLockedDirections(ECardinalNodeDirections aCardinalNodeDirections);

	FNodeHasBeenWalkedOn nodeHasBeenWalkedOn;
	
	UPROPERTY( EditAnywhere )
	bool hasFloorEvent;

	AActor* SpawnNodeWall(UFloorNodeWallInfo* nodeWallInfo,ECardinalNodeDirections aCardinalDirection);
	TMap<ECardinalNodeDirections,UFloorNodeWallInfo*> floorNodeWallInfos;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> wallReference;
	
	UPROPERTY()
	FFloorNodeData floorNodeData;
	
	FNodeHasBeenWalkedOn floorEventHasBeenTriggered;

private:


};



UCLASS()
class DESENTINTOATLANTIS_API UFloorNodeWallInfo: public UObject
{
	GENERATED_BODY()
public:

	FVector wallPosition;
	FRotator rotation;
	UPROPERTY()
	AActor* wallActor;
};
