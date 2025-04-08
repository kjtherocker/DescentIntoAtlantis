// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.h"
#include "AttackPassive_MerchantsZeal.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UAttackPassive_MerchantsZeal : public UGenericOnAttackPassive
{
	GENERATED_BODY()
	virtual bool IsPassiveTriggered_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
	virtual FCombatLog_PassiveSkilData ActivateAttackDefencePassive_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill) override;
	
};
