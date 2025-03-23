// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ManaData.h"
#include "SyncHandler.h"
#include "UObject/NoExportTypes.h"
#include "Mana.generated.h"

class UCombatEntity;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHasManaValuesChanged,FManaData,ManaData);

UCLASS()
class DESENTINTOATLANTIS_API UMana : public UResourceBar_Base
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FManaData ManaData;

	

public:

	FHasManaValuesChanged HasManaValuesChanged;

	virtual void InitializeMana(FManaData aManaData, UCombatEntity* aCombatEntity);

	FManaData GetManaData();
	
};
