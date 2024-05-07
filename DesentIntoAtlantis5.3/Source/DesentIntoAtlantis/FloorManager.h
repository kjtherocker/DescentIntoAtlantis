// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "DataTableUtils.h"
#include "EFloorIdentifier.h"
#include "GameFramework/Actor.h"
#include "FloorNode.h"
#include "FloorBase.h"
#include "FloorPawn.h"
#include "FloorEnemyPawn.h"
#include "Gimmick_Base.h"
#include "FloorManager.generated.h"


class ULevelProgressionSubsystem;
class UEventManagerSubSystem;
struct FSkillsData;
UCLASS()
class DESENTINTOATLANTIS_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorManager();
	void Initialize(AAtlantisGameModeBase* aGameModeBase,UEventManagerSubSystem* aFloorEventManager);
	
	void CreateGrid(UFloorBase* aFloor);
	void CreateFloor(EFloorIdentifier aFloorIdentifier);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);
	void SpawnFloorEventTriggers(FFloorEventData AFloorEventData);
	void SpawnFloor(UFloorBase* aFloorBase);
	void PlacePlayerFloorPawn(FVector2D aStartPositionInGrid,ECardinalNodeDirections aPlayerFacingDirection);
	void MovePlayerToPreviousNode();

	UFUNCTION()
	void LoadNextLevel(FVector2D aPositionInGrid);
	
	AFloorNode* GetNodeInDirection(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);
	AFloorNode* GetNode(FVector2D CurrentPosition);

	UPROPERTY()
	TArray<AFloorNode*> floorNodes;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorNodeReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> floorEnemyPawnReference;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> stairsReference;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> DoorReference;

	FVector MidPoint;

	FVector nodeALocation;
	FVector nodeBLocation;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	UEventManagerSubSystem* eventManagerSubSystem;

	UPROPERTY()
	ULevelProgressionSubsystem* levelProgressionSubsystem;
	
	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;

	UPROPERTY()
	EFloorIdentifier currentFloorIdentifier;
	UPROPERTY()
	UFloorBase* currentFloor;

	
	TMap<ECardinalNodeDirections, FVector2D>  cardinalPositions;
	
	UPROPERTY()
	TMap<EFloorGimmicks,FUGimmickArrayWrapper> gimmickMap;
	
	void SpawnObjectInGrid(FVector2D aPositionInGrid, TSubclassOf<AActor> objectToSpawn);

private:
	const double FLOOR_EVENT_HEIGHT_OFFSET = 240;
	const double SPAWNED_OBJECT_OFFSET = 210;
	void SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes);

	UPersistentGameinstance* persistentGameInstance;
	UPROPERTY()
	UEventManagerSubSystem* floorEventManager;
	AAtlantisGameModeBase* floorGameModeBase;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void PlacePlayerAtFloorStartingNode();

};
