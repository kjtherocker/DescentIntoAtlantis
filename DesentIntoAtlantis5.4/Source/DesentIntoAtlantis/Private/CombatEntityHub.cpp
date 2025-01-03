// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatEntityHub.h"

#include "ElementalHandler.h"
#include "PassiveHandler.h"

void UCombatEntityHub::InitializeCombatEntityHub(UCombatEntity* aOwnedCombatEntity,
                                                 UPassiveSkillFactorySubsystem* aPassiveSkillFactorySubsystem)
{
	passiveHandler     = NewObject<UPassiveHandler>();
	combatTokenHandler = NewObject<UCombatTokenHandler>();
	elementalHandler   = NewObject<UElementalHandler>();
	
	elementalHandler->Initialize(aOwnedCombatEntity);
	passiveHandler->InitializePassiveHandler(aOwnedCombatEntity,aPassiveSkillFactorySubsystem);
	combatTokenHandler->InitializeCombatTokenHandler(aOwnedCombatEntity,aPassiveSkillFactorySubsystem);

}

TArray<FCombatLog_PassiveSkilData> UCombatEntityHub::CheckAttackDefencePassivesAndTokens(int& CurrentDamage,
	UCombatEntity* aAttachedEntity, UCombatEntity* aAttacker, FSkillsData aSkill)
{
	TArray<FCombatLog_PassiveSkilData> PassiveSkilDatas;

	for (FCombatLog_PassiveSkilData PassiveSkilData : passiveHandler->CheckAttackDefencePassives(CurrentDamage,aAttachedEntity,aAttacker,aSkill))
	{
		PassiveSkilDatas.Add(PassiveSkilData);
	}

	for (FCombatLog_PassiveSkilData tokenData : combatTokenHandler->CheckAttackDefenceTokens(CurrentDamage,aAttachedEntity,aAttacker,aSkill))
	{
		PassiveSkilDatas.Add(tokenData);
	}
	

	return PassiveSkilDatas;
}
