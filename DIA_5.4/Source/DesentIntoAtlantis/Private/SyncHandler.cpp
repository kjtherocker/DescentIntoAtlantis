// Fill out your copyright notice in the Description page of Project Settings.


#include "SyncHandler.h"

void UResourceBar_Base::InitializeResources(FResourceBarInfo aResourceInfo, UCombatEntity* aCombatEntity)
{
	ResourceBarInfo = aResourceInfo;
	AttachedCombatEntity = aCombatEntity;
	SetResourceInfo(ResourceBarInfo);
}

void UResourceBar_Base::SetResourceInfo(FResourceBarInfo aResourceInfo)
{
	ResourceBarInfo = aResourceInfo;

	ResourceBarInfo.Percentage = GetPercentage();
	HasValuesChanged.Broadcast(ResourceBarInfo);
	hasValuesUpdated.Broadcast();
}

void UResourceBar_Base::SetCurrentValue(int aCurrentMana)
{
	if(ResourceBarInfo.isResourceCompletelyLocked)
	{
		return;
	}
	
	ResourceBarInfo.Current = aCurrentMana;
	HasValuesChanged.Broadcast(ResourceBarInfo);
	hasValuesUpdated.Broadcast();
}

void UResourceBar_Base::IncrementValue(int aIncrementBy)
{
	if(ResourceBarInfo.isResourceCompletelyLocked || ResourceBarInfo.isResourceIncrementingLocked)
	{
		return;
	}

	
	ResourceBarInfo.Current += aIncrementBy;

	if(ResourceBarInfo.Current > ResourceBarInfo.Max)
	{
		ResourceBarInfo.Current = ResourceBarInfo.Max;
	}

	ResourceBarInfo.Percentage = GetPercentage();
	
	HasValuesChanged.Broadcast(ResourceBarInfo);
	hasValuesUpdated.Broadcast();
}

void UResourceBar_Base::DecrementValue(int aDecrementBy)
{
	if(ResourceBarInfo.isResourceCompletelyLocked || ResourceBarInfo.isResourceDecrementingLocked)
	{
		return;
	}
	
	ResourceBarInfo.Current -= aDecrementBy;

	if(ResourceBarInfo.Current < 0)
	{
		ResourceBarInfo.Current = 0;
	}

	ResourceBarInfo.Percentage = GetPercentage();
	
	HasValuesChanged.Broadcast(ResourceBarInfo);
	hasValuesUpdated.Broadcast();
}

void UResourceBar_Base::MaxOutCurrentValue()
{
	ResourceBarInfo.Current = ResourceBarInfo.Max;
}

float UResourceBar_Base::GetPercentage()
{
	return (float)ResourceBarInfo.Current / (float)ResourceBarInfo.Max;
}

float UResourceBar_Base::GetPotentialPercentage(int aChangedValue,bool isNegative)
{
	int tempCurrentHealth = ResourceBarInfo.Current;
	if(isNegative)
	{
		tempCurrentHealth -= aChangedValue;		
	}
	else
	{
		tempCurrentHealth += aChangedValue;	
	}


	return  (float)tempCurrentHealth / (float)ResourceBarInfo.Max;
}

void UResourceBar_Base::ResetAllLocksTo(bool aAllLockStates)
{
	SetCompleteResourceLock( aAllLockStates);
	SetIncrementingLock(aAllLockStates);
	SetDecrementingLock(aAllLockStates);
}

void UResourceBar_Base::SetCompleteResourceLock(bool aLockState)
{
	ResourceBarInfo.isResourceCompletelyLocked = aLockState;
}

void UResourceBar_Base::SetIncrementingLock(bool aLockState)
{
	ResourceBarInfo.isResourceIncrementingLocked = aLockState;
}

void UResourceBar_Base::SetDecrementingLock(bool aLockState)
{
	ResourceBarInfo.isResourceDecrementingLocked = aLockState;
}

void USyncHandler::InitializeSyncHandler(FSyncData aSyncData, UCombatEntity* aCombatEntity)
{
	syncData = 	aSyncData;
	
	InitializeResources(syncData.ResourceBarInfo,aCombatEntity);

	if(aSyncData.isSyncLocked)
	{
		LockSync();
	}
	else
	{
		UnlockSync();
	}
}

void USyncHandler::UnlockSync()
{
	syncData.isSyncLocked            = false;
	ResourceBarInfo.isResourceCompletelyLocked = false;
	SyncHasBeenUnlocked.Broadcast(syncData.isSyncLocked);
	
	ResetAllLocksTo(false);
}

void USyncHandler::LockSync()
{
	syncData.isSyncLocked = true;
	ResourceBarInfo.isResourceCompletelyLocked = true;
	SyncHasBeenUnlocked.Broadcast(syncData.isSyncLocked);
	
	ResetAllLocksTo(true);
}

FSyncData USyncHandler::GetSyncData()
{
	syncData.ResourceBarInfo = ResourceBarInfo;
	return syncData;
}
