// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick_Base.h"
#include "FloorPawn.h"
#include "LevelProgressionSubsystem.h"
#include "PersistentGameinstance.h"


void UGimmick_Base::InitializeGimmick(UPersistentGameinstance* aPersistentGameInstance)
{
	persistentGameinstance = aPersistentGameInstance;
}

void UGimmick_Base::ActivateGimmick(FVector2D aPosition)
{
}



void UGimmick_Base::SetGimmick(FGimmickData aGimmick)
{
}

void UGimmick_Interactable::ActivateGimmick()
{
}

FGimmickInteractableData UGimmick_Interactable::GetCurrentGimmick()
{
	return activeCurrentGimmick;
}

void UGimmick_Teleporter::SetFloorNodeDelegate(AFloorNode* aFloorNode)
{
	aFloorNode->nodeHasBeenWalkedOn.AddDynamic(this,&UGimmick_Teleporter::ActivateGimmick);
}

void UGimmick_Teleporter::ActivateGimmick(FVector2D aPosition)
{
	Super::ActivateGimmick(aPosition);
	
	FCompleteFloorPawnData completeFloorPawnData;
	completeFloorPawnData.currentNodePositionInGrid = currentActiveGimmick.nextLevelsSpawnPosition;
	completeFloorPawnData.currentFacingDirection    = currentActiveGimmick.nextLevelSpawnDirection;
	persistentGameinstance->levelProgressionSubsystem->SetCompleteFloorPawnWithLockData(completeFloorPawnData);
	persistentGameinstance->LoadLevel(currentActiveGimmick.floorIdentifier);
}

void UGimmick_Teleporter::SetGimmick(FTeleporterGimmick aGimmick)
{
	currentActiveGimmick = aGimmick;
}

void UGimmick_ForcedMovement::SetFloorNodeDelegate(AFloorNode* aFloorNode)
{
	aFloorNode->nodeHasBeenWalkedOn.AddDynamic(this,&UGimmick_ForcedMovement::ActivateGimmick);
}

void UGimmick_ForcedMovement::SetPlayerForcedMovementDelegate(AFloorPawn* floorPawn)
{
	playerForcedMovementDelegate = floorPawn->playerForcedMovement;
}

void UGimmick_ForcedMovement::ActivateGimmick(FVector2D aPosition)
{
	Super::ActivateGimmick(aPosition);

	playerForcedMovementDelegate.Broadcast(currentActiveGimmick.movedNodeDirection);
}

void UGimmick_ForcedMovement::SetGimmick(FForcedMovementGimmick aGimmick)
{
	currentActiveGimmick = aGimmick;
}

void UGimmick_Doors::SetPlayerForcedMovementDelegate(AFloorPawn* floorPawn)
{
	playerForcedMovementDelegate = floorPawn->playerForcedMovement;
}

void UGimmick_Doors::ActivateGimmick()
{
	Super::ActivateGimmick();
	playerForcedMovementDelegate.Broadcast(currentDoorGimmick.interactDirection);
}

void UGimmick_Doors::SetGimmick(FDoorGimmick aGimmick)
{
	currentDoorGimmick = aGimmick;
}

FGimmickInteractableData UGimmick_Doors::GetCurrentGimmick()
{
	return FGimmickInteractableData(currentDoorGimmick);
}

