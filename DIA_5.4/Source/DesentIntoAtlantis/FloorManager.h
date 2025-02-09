// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "DataTableUtils.h"
#include "EFloorIdentifier.h"
#include "GameFramework/Actor.h"
#include "FloorNode.h"
#include "FloorBase.h"
#include "FloorPlayerPawn.h"
#include "FloorEventMarker.h"
#include "FloorFactory.h"
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
	void Initialize(AAtlantisGameModeBase* aGameModeBase,UEventManagerSubSystem* aFloorEventManager,UFloorFactory* aFloorFactor);
	
	void CreateGrid(UFloorBase* aFloor);
	void CreateFloor(EFloorIdentifier aFloorIdentifier);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex,TSubclassOf<AActor> aFloorNodePrefab);
	void SpawnFloorEventTriggers(FFloorEventData AFloorEventData);
	void SpawnFloor(UFloorBase* aFloorBase);
	void SpawnEnemysInFloor(UFloorBase* aFloorBase);
	void SpawnDoorGimmick(FDoorComplete aDoorCompleteData,UFloorBase* aFloor );
	void SpawnNodeGimmicks(int aCurrentNodeIndex,FVector2d aPositionInGrid,UFloorBase* aFloor);
	void PlacePlayerFloorPawn(FVector2D aPositionInGrid,ECardinalNodeDirections aPlayerFacingDirection);
	void MovePlayerToPreviousNode();

	UFUNCTION()
	void SpawnEnemyPawn(FFloorEnemyPawnCompleteData aCompleteFloorPawnData);

	UFUNCTION()
	void SpawnCutsceneFloorPawn(FDialogueActorData aDialogueActor,TSubclassOf<AActor> aCutsceneFloorPawn);
	UFUNCTION()
	void MoveCutscenePawnToLocation(FDialogueActorData actorData);
	UFUNCTION()
	void LoadNextLevel(FVector2D aPositionInGrid);
	
	AFloorNode* GetNodeInDirection(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);
	AFloorNode* GetNode(FVector2D CurrentPosition);

	TArray<FFloorNodeAiData> GetCopyOfFloorNodeAIData();
	int GetNodeIndex(FVector2D aPositionInGrid);

	TArray<FVector2D> GetPositionsOfEnemysBesidesOne(AFloor_EnemyPawn* aEnemyPawn);
	UPROPERTY()
	TArray<AFloorNode*> floorNodes;

	UPROPERTY()
	UFloorFactory* floorFactory;

	UPROPERTY()
	TArray<FFloorNodeAiData> entireFloorNodeData;

	UPROPERTY()
	TArray<AFloor_EnemyPawn*> enemyFloorPawns;
	UPROPERTY()
	TMap<EDialogueActorsLabel, AFloorPawn*> spawnedDialogueActors;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorNodeReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> floorEnemyPawnReference;

	UPROPERTY()
	TArray<AActor*> spawnedActors;
	
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
	const double FLOOR_EVENT_HEIGHT_OFFSET = 25;
	const double SPAWNED_OBJECT_OFFSET = 0;
	const FVector FLOOR_PAWN_HEIGHT_OFFSET = FVector(0,0,100);
	void SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes,UFloorBase* aFloorBase);

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
