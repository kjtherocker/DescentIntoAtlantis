// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ECardinalDirections.h"
#include "GameFramework/Actor.h"
#include "FloorNode.generated.h"

class UFloorNodeWallInfo;
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
	TArray<ECardinalNodeDirections> walkableDirections;

	AActor* SpawnNodeWall(UFloorNodeWallInfo* nodeWallInfo,ECardinalNodeDirections aCardinalDirection);
	
	UPROPERTY()
	TMap<ECardinalNodeDirections,AFloorNode*> nodeNeighbors;
	FVector2D positionInGrid;

	TArray<ECardinalNodeDirections> cardinalNodeDirections;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> wallReference;

	TMap<ECardinalNodeDirections,UFloorNodeWallInfo*> floorNodeWallInfos;


};

UCLASS()
class DESENTINTOATLANTIS_API UFloorNodeWallInfo: public UObject
{
	GENERATED_BODY()
public:

	FVector wallPosition;
	FRotator rotation;
	AActor* wallActor;
};

