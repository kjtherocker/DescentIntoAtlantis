// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackPassive_MerchantsZeal.h"


#include "ResourceHandler.h"

bool UAttackPassive_MerchantsZeal::IsPassiveTriggered_Implementation(int& CurrentDamage, UCombatEntity* aAttachedEntity,
                                                       UCombatEntity* aAttacker, FSkillsData aSkill)
{
	if(aAttacker->ResourceHandler->ItemChargeHandler->HowManyChargesAreFull() == 0)
	{
		return false;
	}
	
	if(aSkill.skillType != ESkillType::Attack)
	{
		return false;
	}
	
	return true;
}

FCombatLog_PassiveSkilData UAttackPassive_MerchantsZeal::ActivateAttackDefencePassive_Implementation(int& CurrentDamage,
	UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FCombatLog_PassiveSkilData CombatLog_PassiveSkilData;

	CombatLog_PassiveSkilData.PassiveSkillData = passiveSkillData;
	// Calculate the damage increase as a percentage of CurrentDamage
	int DamageIncrease = passiveSkillData.damageIncrease;

	int itemCharges = aAttacker->ResourceHandler->ItemChargeHandler->HowManyChargesAreFull();

	int FinalNumber = itemCharges * DamageIncrease;
	
	CombatLog_PassiveSkilData.passiveResult = FinalNumber;
	// Add the calculated increase to CurrentDamage
	CurrentDamage += FinalNumber;
	
	return CombatLog_PassiveSkilData;
}