// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorDoor.h"
#include "FloorEnum.h"
#include "FloorPlayerPawn.h"
#include "UObject/NoExportTypes.h"
#include "Gimmick_Base.generated.h"

class FPlayerForcedMovement;
class AFloorNode;
class FPlayerHasMoved;
struct FGimmickData;
class AFloorPlayerPawn;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UGimmick_Base : public UObject
{
	GENERATED_BODY()

protected:
	UPersistentGameinstance* persistentGameinstance;
public:
	virtual void InitializeGimmick(UPersistentGameinstance* aPersistentGameInstance);
	
	virtual void ActivateGimmick(FVector2D aPosition);
	void SetGimmick(FGimmickData aGimmick);
	
};




USTRUCT()
struct FUGimmickArrayWrapper
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<UGimmick_Base*> GimmickArray;
};

UCLASS()
class DESENTINTOATLANTIS_API UGimmick_Interactable: public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;
public:
	FGimmickInteractableData interactableData;
//	virtual void InitializeGimmick(UPersistentGameinstance* aPersistentGameInstance);
//	
	virtual void ActivateGimmick();
//	void SetGimmick(FGimmickData aGimmick);

	virtual FGimmickInteractableData GetInteractableData();
	
};


UCLASS()
class DESENTINTOATLANTIS_API UGimmick_Teleporter : public UGimmick_Base
{
	GENERATED_BODY()
	
public:
	
	const FString hoverOverText = "Do you want to ascend to the next floor";
	
	FTeleporterGimmick currentActiveGimmick;
	UFUNCTION()
	virtual void SetFloorNodeDelegate(AFloorNode* aFloorNode);

	UFUNCTION()
	virtual void ActivateGimmick(FVector2D aPosition) override;
	void SetGimmick(FTeleporterGimmick aGimmick);
	
};



UCLASS()
class DESENTINTOATLANTIS_API UGimmick_ForcedMovement : public UGimmick_Base
{
	GENERATED_BODY()
	
public:
	
	//const FString hoverOverText = "Do you want to ascend to the next floor";
	
	FForcedMovementGimmick currentActiveGimmick;

	FPlayerForcedMovement playerForcedMovementDelegate;
	
	UFUNCTION()
	virtual void SetFloorNodeDelegate(AFloorNode* aFloorNode);
	UFUNCTION()
	virtual void SetPlayerForcedMovementDelegate(AFloorPlayerPawn* floorPawn);

	UFUNCTION()
	virtual void ActivateGimmick(FVector2D aPosition) override;
	void SetGimmick(FForcedMovementGimmick aGimmick);
	
};

UCLASS()
class DESENTINTOATLANTIS_API UGimmick_Doors : public UGimmick_Interactable
{
	GENERATED_BODY()
	
public:
	
	//const FString hoverOverText = "Do you want to ascend to the next floor";
	UPROPERTY()
	EDoorAnimationTypes doorAnimationType;
	UPROPERTY()
	FDoorGimmick currentDoorGimmick;
	FPlayerForcedMovement playerForcedMovementDelegate;
	FOpenDoor openDoorDelegate;
	
	UFUNCTION()
	virtual void SetPlayerForcedMovementDelegate(AFloorPlayerPawn* aFloorpawn);
	UFUNCTION()
	virtual void SetDoorOpenDelegate(AFloorDoor* aFloorDoor);
//
	UFUNCTION()
	virtual void ActivateGimmick() override;
	void SetGimmick(FDoorGimmick aGimmick);
	
	virtual FGimmickInteractableData GetInteractableData() override;

	
	
};
