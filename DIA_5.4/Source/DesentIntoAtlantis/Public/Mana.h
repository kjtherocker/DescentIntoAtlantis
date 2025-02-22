// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ManaData.h"
#include "UObject/NoExportTypes.h"
#include "Mana.generated.h"

class UCombatEntity;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHasManaValuesChanged,FManaData,ManaData);

UCLASS()
class DESENTINTOATLANTIS_API UMana : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FManaData ManaData;

	UPROPERTY()
	UCombatEntity* CombatEntity;

public:

	FHasManaValuesChanged HasManaValuesChanged;

	virtual void InitializeMana(FManaData aManaData, UCombatEntity* aCombatEntity);

	virtual void SetMana(FManaData aManaData);
	
	virtual void IncrementMana(int aIncrementBy);
	
	virtual void DecrementMana(int aDecrementBy);

	virtual float GetManaPercentage();

	virtual FManaData GetManaData(){return ManaData;}
};
