// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick_Base.h"

#include "FloorDoor.h"
#include "FloorPlayerPawn.h"
#include "Inventory_KeyItems.h"
#include "LevelProgressionSubsystem.h"
#include "PartyManagerSubsystem.h"
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

FGimmickInteractableData UGimmick_Interactable::GetInteractableData()
{
	return interactableData;
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

void UGimmick_ForcedMovement::SetPlayerForcedMovementDelegate(AFloorPlayerPawn* floorPawn)
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

void UGimmick_Doors::SetPlayerForcedMovementDelegate(AFloorPlayerPawn* aFloorpawn)
{
	playerForcedMovementDelegate = aFloorpawn->playerForcedMovement;
}

void UGimmick_Doors::SetDoorOpenDelegate(AFloorDoor* aFloorDoor)
{
	openDoorDelegate = aFloorDoor->openDoorDelegate;
}

void UGimmick_Doors::ActivateGimmick()
{
	Super::ActivateGimmick();

	if(currentDoorGimmick.canBeLocked)
	{
		UInventory_KeyItems* KeyItems = persistentGameinstance->partyManagerSubsystem->PartyInventory->GetInventoryKeyItems();
		for (auto Element : currentDoorGimmick.LockedByKeyItem)
		{
			if(!KeyItems->DoesPartyOwnKeyItem(Element))
			{
				return;
			}
		}

	}
	
	openDoorDelegate.Broadcast(doorAnimationType);
	playerForcedMovementDelegate.Broadcast(currentDoorGimmick.interactDirection);
}

void UGimmick_Doors::SetGimmick(FDoorGimmick aGimmick)
{
	currentDoorGimmick = aGimmick;
}

FGimmickInteractableData UGimmick_Doors::GetInteractableData()
{
	return FGimmickInteractableData(currentDoorGimmick);
}

