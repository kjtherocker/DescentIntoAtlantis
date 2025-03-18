// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SyncData.h"
#include "UObject/NoExportTypes.h"
#include "SyncHandler.generated.h"

/**
 * 
 */

class UCombatEntity;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHasValuesUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHasValuesChanged, FResourceBarInfo, resourceInfo);

UCLASS()
class DESENTINTOATLANTIS_API UResourceBar_Base : public UObject
{
	GENERATED_BODY()


	
protected:
	UPROPERTY()
	FResourceBarInfo ResourceBarInfo;

	UPROPERTY()
	UCombatEntity* AttachedCombatEntity;

public:

	FHasValuesChanged HasValuesChanged;
	FHasValuesUpdated hasValuesUpdated;

	virtual void InitializeResources(FResourceBarInfo aResourceInfo, UCombatEntity* aCombatEntity);

	virtual void SetResourceInfo(FResourceBarInfo aResourceInfo);
	virtual void SetCurrentValue(int aCurrentMana);
	
	virtual void IncrementValue(int aIncrementBy);
	
	virtual void DecrementValue(int aDecrementBy);

	virtual int GetCurrentValue(){return ResourceBarInfo.Current;}

	virtual void MaxOutCurrentValue();
	
	virtual float GetPercentage();

	virtual float GetPotentialPercentage(int aChangedValue,bool isNegative);

	virtual FResourceBarInfo GetResourceInfoData(){return ResourceBarInfo;}

	virtual void ResetAllLocksTo(bool aAllLockStates);
	
	virtual void SetCompleteResourceLock(bool aLockState);
	virtual void SetIncrementingLock(bool aLockState);
	virtual void SetDecrementingLock(bool aLockState);
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSyncLockStateChange, bool, SyncUnlock);
UCLASS()
class DESENTINTOATLANTIS_API USyncHandler : public UResourceBar_Base
{
	GENERATED_BODY()

private:

	UPROPERTY()
	FSyncData syncData;
public:
	

	UPROPERTY()
	FSyncLockStateChange SyncHasBeenUnlocked;
	
	virtual void InitializeSyncHandler(FSyncData aSyncData, UCombatEntity* aCombatEntity);

	virtual void UnlockSync();
	virtual void LockSync();

	virtual int GetCurrentSync(){return ResourceBarInfo.Current;}

	virtual bool GetSyncisLockedState(){return syncData.isSyncLocked;}
	
	virtual FSyncData GetSyncData();
};
