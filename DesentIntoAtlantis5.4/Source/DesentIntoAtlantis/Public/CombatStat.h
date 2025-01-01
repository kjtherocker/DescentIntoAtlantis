// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.h"
#include "UObject/NoExportTypes.h"
#include "CombatStat.generated.h"

/**
 * 
 */

class UPassiveSkills;
enum class EStatTypes  : uint8;

UCLASS()
class DESENTINTOATLANTIS_API UCombatStat : public UObject
{
	GENERATED_BODY()
public:
 
	UPROPERTY(EditAnywhere)
	EStatTypes StatType;
	     
	UPROPERTY( EditAnywhere )
	int base    			= 0;
	UPROPERTY( EditAnywhere )
	int buff    			= 0;
	UPROPERTY( EditAnywhere )
	int debuff  			= 0;
	UPROPERTY( EditAnywhere )
	int domain  			= 0;
     
	UPROPERTY(EditAnywhere)
	TMap<FString,UPassiveSkills*> passives;
	UPROPERTY( EditAnywhere )
	int passive  			= 0;
	UPROPERTY( EditAnywhere )
	int buffTimeRemaining   = 0;
	UPROPERTY( EditAnywhere )
	int debuffTimeRemaining = 0;
	
	inline static const float ABILITYSCORE_CONVERSION_RATIO = 1;

	
	virtual int GetAllStats();

	void SetStatType(EStatTypes aStatType);
	virtual void TryAddStatPassive(UPassiveSkills* aPassiveSkills);
	virtual void TryRemoveStatPassive(UPassiveSkills* aPassiveSkills);
	virtual int GetAllPassive();

	     
	virtual void AttachAbilityScoreChange(int timeLimit,bool isBuff);

     
	virtual void ResetAbilityscore();
     
	virtual void TurnEnd();
	
};
