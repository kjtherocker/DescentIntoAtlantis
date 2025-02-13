// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gimmick_Base.h"
#include "Gimmick_Chest.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UGimmick_Chest : public UGimmick_Interactable
{
	GENERATED_BODY()

public:

	FChestGimmickData ChestGimmickData;

	bool isclaimed = false;
	void SetChestGimmickData(FChestGimmickData aChestGimmickData,UPersistentGameinstance* aPersistentGameinstance );
	virtual void SetChestState(bool aHasChestBeenClaimed);
	virtual void ActivateGimmick();
	virtual FGimmickInteractableData GetInteractableData();
};
