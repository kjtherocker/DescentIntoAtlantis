// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCombatEntity.h"

#include "CombatEntityHub.h"
#include "EnemyBeastiaryData.h"
#include "EnemyBehaviour.h"
#include "EnemyPortraitElement.h"
#include "CombatGameModeBase.h"
#include "CombatStat.h"
#include "ElementalHandler.h"
#include "Health.h"
#include "ResourceHandler.h"
#include "SkillFactorySubsystem.h"
#include "SkillHandler.h"

void UEnemyCombatEntity::SetEnemyEntityData(FEnemyEntityCompleteData AEnemyEntityData,USkillFactorySubsystem * skillFactory,EEnemyCombatPositions aPortraitPosition)
{
	characterType   = ECharactertype::Enemy;
	enemyEntityCompleteData = AEnemyEntityData;

	enemyEntityInfo = enemyEntityCompleteData.CombatEntityData[EDiffculty::Normal];
	CombatEntityData = enemyEntityInfo.CombatEntityData;
	


	portraitPosition = aPortraitPosition;
	
	combatEntityHub->elementalHandler->LoadSavedInfo(enemyEntityInfo.CompleteElementalHandlerData);
	
	enemyBehaviour = NewObject<UEnemyBehaviour>();
	enemyBehaviour->Initialize(this);

	combatEntityHub->equipmentHandler->SetEquipmentState(enemyEntityInfo.EquipmentHandlerData);
	combatEntityHub->InterruptHandler->SetInterruptData(enemyEntityInfo.EnemyInterruptData);
	
	for(int i = 0 ; i < enemyEntityInfo.skillIDS.Num();i++)
	{
		combatEntityHub->skillHandler->AddSkill(enemyEntityInfo.skillIDS[i]);
	
	}
	
	ResourceHandler->healthHandler->InitializeHealth(CombatEntityData.HealthData,this);
	ResourceHandler->manaHandler->InitializeMana(CombatEntityData.ManaData,this);

	for(auto Element : enemyEntityInfo.PassiveSkillIds)
	{
		combatEntityHub->passiveHandler->AddPassive(Element,EPassiveSkillSlotType::SlotPassive);
	}

	
	SetAbilityScores();
}

void UEnemyCombatEntity::Death()
{
	UCombatEntity::Death();

	wasKilled.Broadcast();
}

FCombatLog_AttackDefense_Data UEnemyCombatEntity::AttackResource(EResource aResource, UCombatEntity* aAttacker, FSkillsData aSkill)
{
	beastiaryData->RevealElementalInfo(aSkill.elementalType);
	FCombatLog_AttackDefense_Data attackDefenceData = UCombatEntity::AttackResource(aResource,aAttacker, aSkill);
	return attackDefenceData;
}


FString UEnemyCombatEntity::GetEntityName()
{
	return enemyEntityCompleteData.characterName;
}

int UEnemyCombatEntity::GetExperience()
{
	return enemyEntityInfo.experience;
}

int UEnemyCombatEntity::GetClassPoints()
{
	return  enemyEntityInfo.ClassPoints;
}

void UEnemyCombatEntity::SetAbilityScores()
{
	abilityScoreMap[EStatTypes::Strength]->base    =  CombatEntityData.baseStats[EStatTypes::Strength];
	abilityScoreMap[EStatTypes::Magic]->base       =  CombatEntityData.baseStats[EStatTypes::Magic];
	abilityScoreMap[EStatTypes::Hit]->base         =  CombatEntityData.baseStats[EStatTypes::Hit];
	abilityScoreMap[EStatTypes::Evasion]->base     =  CombatEntityData.baseStats[EStatTypes::Evasion];
	abilityScoreMap[EStatTypes::Defence]->base     =  CombatEntityData.baseStats[EStatTypes::Defence];
	abilityScoreMap[EStatTypes::Resistance]->base  =  CombatEntityData.baseStats[EStatTypes::Resistance];
}
