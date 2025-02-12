// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"

#include "GameFramework/Actor.h"
#include "FloorNode.generated.h"

struct FFloorNodeData;
class UGimmick_Base;
class UFloorNodeWallInfo;



USTRUCT(BlueprintType)
struct FFloorNodeData
{
	GENERATED_BODY()
public:
	TArray<ECardinalNodeDirections> walkableDirections;
	
	FVector2D positionInGrid;
	
	UPROPERTY()
	TMap<ECardinalNodeDirections,AFloorNode*> nodeNeighbors;
	UPROPERTY()
	TArray<ECardinalNodeDirections> additionalLockedDirections;
	UPROPERTY()
	TArray<ECardinalNodeDirections> cardinalNodeDirections;
	
};


USTRUCT(BlueprintType)
struct FFloorNodeAiData : public FFloorNodeData
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<ECardinalNodeDirections,FFloorNodeData> neightborsFloorData;
	FVector2D positionInGrid;

	UPROPERTY()
	bool hasBeenCalculated = false;
	UPROPERTY()
	int heuristic = -1;
	FFloorNodeAiData() {}
    
	FFloorNodeAiData(const FFloorNodeData& floorNodeData)
	{
		// Copy base struct data to derived struct
		walkableDirections = floorNodeData.walkableDirections;
		positionInGrid = floorNodeData.positionInGrid;
		nodeNeighbors = floorNodeData.nodeNeighbors;
		additionalLockedDirections = floorNodeData.additionalLockedDirections;
		cardinalNodeDirections = floorNodeData.cardinalNodeDirections;

		// Initialize FFloorNodeAiData specific members
		hasBeenCalculated = false;
		heuristic = -1;
	}
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
	//	WalkOntopTriggerTypes m_WalkOnTopTriggerTypes;
	void PlayerIsOnTopOfNode();
	void SetAdditionalLockedDirections(ECardinalNodeDirections aCardinalNodeDirections);

	FNodeHasBeenWalkedOn nodeHasBeenWalkedOn;
	
	UPROPERTY( EditAnywhere )
	bool hasFloorEvent;

	UPROPERTY( EditAnywhere )
	bool IsWalkable = true;
	
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
