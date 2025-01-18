// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"

#include "CombatEntityHub.h"
#include "CombatGameModeBase.h"
#include "ElementalHandler.h"
#include "Health.h"
#include "PartyHealthbarElement.h"
#include "PassiveHandler.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatStat.h"

#include "SaveGameData.h"


class UPlayerCombatStats;

void UPlayerCombatEntity::InitializeStats(EStatTypes aAbilityScoreTypes)
{
	abilityScoreMap.Add(aAbilityScoreTypes,  NewObject<UPlayerCombatStats>());
	abilityScoreMap[aAbilityScoreTypes]->SetStatType(aAbilityScoreTypes);
}

void UPlayerCombatEntity::LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	health->InitializeHealth(aPlayerCompleteDataSet.HealthData,this);
	currentMana   = aPlayerCompleteDataSet.currentMP;
	currentSync   = aPlayerCompleteDataSet.currentSync;
}

void UPlayerCombatEntity::SetPlayerEntity(FPlayerIdentityData aPlayerEntityData)
{
	playerCompleteDataSet.playerIdentityData = aPlayerEntityData;
	playerIdentityData                       = aPlayerEntityData;
}

void UPlayerCombatEntity::SetCombatEntity(USkillFactorySubsystem* aSkillFactory
	,UPassiveFactorySubsystem* aPassiveSkillFactory,UPersistentGameinstance* aPersistentGameinstance)
{
	Super::SetCombatEntity(aSkillFactory,aPassiveSkillFactory,aPersistentGameinstance);
	characterType = ECharactertype::Ally;
	skillFactory  = aSkillFactory;
	
	classHandler = NewObject<UClassHandler>();
	classHandler->InitializeClassHandler(this,skillFactory);
}

void UPlayerCombatEntity::EquipEquipment(UEquipmentPassive* aEquipment, int aSlot)
{
	combatEntityHub->equipmentHandler->EquipEquipment(aEquipment,aSlot);
	GatherAndSavePlayerCompleteDataSet();
}

void UPlayerCombatEntity::EquipPassive(UPassiveSkills* aPassive, int aSlot)
{
	combatEntityHub->passiveHandler->PassiveSlotHandler->EquipPassiveInSlot(aPassive->passiveSkillData.passiveSkillID,aSlot);
	GatherAndSavePlayerCompleteDataSet();
}

void UPlayerCombatEntity::SetEquipmentState(FEquipmentHandlerData aEquipmentHandlerData)
{
	combatEntityHub->equipmentHandler->SetEquipmentState(aEquipmentHandlerData);
	GatherAndSavePlayerCompleteDataSet();
}

void UPlayerCombatEntity::InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData)
{
	classHandler->InitializeAndUnlockCombatClassFromDataTable(aCompleteClassData);
}


void UPlayerCombatEntity::SetMainClass(EClassID aClass)
{
	classHandler->SetClass(aClass,EClassSlot::Main);
}

void UPlayerCombatEntity::Reset()
{
	Super::Reset();
	SetToDefaultState();
}

void UPlayerCombatEntity::SetToDefaultState()
{
	Super::SetToDefaultState();

	maxMana           =  classHandler->mainClass->completeClassData.classStatBase.maxMana;
	health->GiveMaxHp();
	
	currentMana       =  maxMana;
    isMarkedForDeath  =  false;

	for (TTuple<EStatTypes, UCombatStat*> abilityStats : abilityScoreMap)
	{
		abilityStats.Value->ResetAbilityscore();
	}
}

FString UPlayerCombatEntity::GetEntityName()
{
	return playerIdentityData.characterName;
}

void UPlayerCombatEntity::GiveClassPoints(int aClassPoints)
{
	classHandler->GiveClassPoints(aClassPoints);
}

void UPlayerCombatEntity::RemoveClassPoints(int aClassPoints)
{
	classHandler->RemoveClassPoints(aClassPoints);
}

int UPlayerCombatEntity::GetClassPoints()
{
	return classHandler->GetClassPoints();
}

void UPlayerCombatEntity::GatherAndSavePlayerCompleteDataSet()
{
	playerCompleteDataSet.playerIdentityData              = playerIdentityData;
	playerCompleteDataSet.CompleteClassHandlerData        = classHandler->CompleteClassHandlerData;
	playerCompleteDataSet.CompleteElementalHandlerData    = combatEntityHub->elementalHandler->CompleteElementalHandlerData;
	playerCompleteDataSet.PassiveHandlerData              = combatEntityHub->passiveHandler->GetPassiveHandlerData();
	playerCompleteDataSet.PassiveHandlerData.PassiveSlotHandlerData = combatEntityHub->passiveHandler->PassiveSlotHandler->GetPassiveSlotData();

	playerCompleteDataSet.EquipmentHandlerData           = combatEntityHub->equipmentHandler->GetEquipmentHandlerData();
	playerCompleteDataSet.HealthData.currentHealth = health->GetCurrentHealth();
	playerCompleteDataSet.currentMP = currentMana;
}

void UPlayerCombatEntity::AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot)
{
	Super::AddPassive(aPassiveSkills,passiveSkillSlot);
	GatherAndSavePlayerCompleteDataSet();
}

void UPlayerCombatEntity::RemovePassive(UPassiveSkills* aPassiveSkills)
{
	Super::RemovePassive(aPassiveSkills);
	GatherAndSavePlayerCompleteDataSet();
}

void UPlayerCombatEntity::SetAbilityScores()
{
	if(classHandler->mainClass != nullptr)
	{
		for (int32 i = static_cast<int32>(EStatTypes::None) + 1; i < static_cast<int32>(EStatTypes::Max); ++i)
		{
			EStatTypes statType = static_cast<EStatTypes>(i);
		
			if(statType == EStatTypes::None)
			{
				continue;
			}
        
			UPlayerCombatStats* PlayerStats = Cast<UPlayerCombatStats>(abilityScoreMap[statType]);
			PlayerStats->classStatBases.Empty();
			PlayerStats->AddClassStatBase(classHandler->mainClass->completeClassData);

			abilityScoreMap[statType] = PlayerStats;
		}
	}
}

float UPlayerCombatEntity::GetHealthPercentage()
{
	return  health->GetHealthPercentage();
}

float UPlayerCombatEntity::GetManaPercentage()
{
	return (float)currentMana / (float)maxMana;
}

float UPlayerCombatEntity::GetSyncPercentage()
{
	return currentSync / MAX_SYNC;
}

float UPlayerCombatEntity::GetMainClassEXPPercentage()
{
	float expCurrent    = classHandler->mainClass->experience;
	float expNextLevel  = 1;
	float expPercentage = expCurrent / expNextLevel;
	return expPercentage;
}

int UPlayerCombatEntity::GetCurrentLevel(){return currentLevel;}

void UPlayerCombatEntity::LevelUp(int aNewLevel)
{

	for (int32 i = static_cast<int32>(EStatTypes::None) + 1; i < static_cast<int32>(EStatTypes::Max); ++i)
	{
		EStatTypes statType = static_cast<EStatTypes>(i);
		UPlayerCombatStats* PlayerStats = Cast<UPlayerCombatStats>(abilityScoreMap[statType]);
		PlayerStats->SetStat(playerIdentityData,aNewLevel);

		abilityScoreMap[statType] = PlayerStats;
	}
	

	//if(completeClassData.unlockableSkillByLevel.Contains(completeClassData.currentLevel))
	//{
	//	ESkillIDS skillName = completeClassData.unlockableSkillByLevel[completeClassData.currentLevel];
	//	USkillBase* newSkill = skillFactory->GetSkill(skillName);
	//	attachedCombatEntity->playerCompleteDataSet.skillSlots.Add(skillName);
	//	classSkills.Add(newSkill);
	//}

	currentLevel = aNewLevel;

	FHealthData HealthData;
	HealthData.maxHealth = 50;
	HealthData.maxHealth += 5 * aNewLevel;
	health->SetHealth(HealthData);
	
	maxMana       = 50;
	maxMana       += 5 * aNewLevel;


	currentMana   = maxMana;

	SetAbilityScores();
	GatherAndSavePlayerCompleteDataSet();

	hasHealthOrManaValuesChanged.Broadcast();

	
}


