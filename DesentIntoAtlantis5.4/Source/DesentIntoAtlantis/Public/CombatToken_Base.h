// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base_Data.h"
#include "PassiveSkills.h"
#include "UObject/NoExportTypes.h"
#include "CombatToken_Base.generated.h"

struct FCombatToken_Base_Data;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatTokenEndEffect,UCombatToken_Base*,combatToken);
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_Base : public UPassiveSkills
{
	GENERATED_BODY()

protected:
	FCombatToken_Base_Data CombatToken_Base_Data;

	int turnsRemaining;
public:

	FCombatTokenEndEffect CombatTokenEndEffect;
	
	virtual FCombatToken_Base_Data GetCombatTokenData(){ return CombatToken_Base_Data;}
	
	virtual void SetCombatToken(FCombatToken_Base_Data combatToken);
	virtual void RoundEnd();

	virtual void RemovePassive() override;
	virtual void ActivatePassive() override;

	virtual void SameCombatTokenWasAdded();
	
};

UCLASS()
class DESENTINTOATLANTIS_API UCombatToken_GenericStat : public UCombatToken_Base, public IStatPassive
{
	GENERATED_BODY()

public:

	virtual int GetStatIncrease_Implementation(EStatTypes aStatType) override;

	virtual void ApplyEffect(UCombatEntity* aCombatEntity) override;
	virtual void RemoveEffect(UCombatEntity* aCombatEntity) override;
	
};
