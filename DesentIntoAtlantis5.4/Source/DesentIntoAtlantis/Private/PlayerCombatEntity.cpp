// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"
#include "CombatGameModeBase.h"
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

void UPlayerCombatEntity::SetCombatEntity(USkillFactorySubsystem* aSkillFactory,UPassiveSkillFactorySubsystem* aPassiveSkillFactory)
{
	Super::SetCombatEntity(aSkillFactory,aPassiveSkillFactory);
	characterType = ECharactertype::Ally;
	skillFactory  = aSkillFactory;
}

void UPlayerCombatEntity::InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData, int aClassLevel)
{
	UCombatClass* newClass = NewObject<UCombatClass>();
	newClass->InitializeDependencys(skillFactory,this );
	newClass->CreateClass(aCompleteClassData,aClassLevel);
	playerCompleteDataSet.unlockedPlayerClasses.Add(aCompleteClassData.classIdentifer,newClass->completeClassData);
	unlockedClasses.Add(aCompleteClassData.classIdentifer,newClass);
}


void UPlayerCombatEntity::SetMainClass(EClasses aClass)
{
	mainClass = unlockedClasses[aClass];
	
	elementalStrength = mainClass->completeClassData.ElementalStrength;
	elementalWeakness = mainClass->completeClassData.ElementalWeakness;
	
	SetAbilityScores();
	SetToDefaultState();
	playerCompleteDataSet.mainClassData = mainClass->completeClassData;
	passiveHandler->AddMainClassPassives(mainClass);
}

void UPlayerCombatEntity::Reset()
{
	Super::Reset();
	SetToDefaultState();
}

void UPlayerCombatEntity::SetToDefaultState()
{
	Super::SetToDefaultState();
	maxHealth         =  mainClass->completeClassData.classStatBase.maxHealth;
	currentHealth     =  maxHealth;
	maxMana           =  mainClass->completeClassData.classStatBase.maxMana;

	health->SetHealth(maxHealth);
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
	playerCompleteDataSet.ClassPoints += aClassPoints;

	if(playerCompleteDataSet.ClassPoints >= 9999)
	{
		playerCompleteDataSet.ClassPoints = 9999;
	}
}

void UPlayerCombatEntity::RemoveClassPoints(int aClassPoints)
{
	playerCompleteDataSet.ClassPoints -= aClassPoints;
	if(playerCompleteDataSet.ClassPoints <= 0)
	{
		playerCompleteDataSet.ClassPoints = 0;
	}
}

int UPlayerCombatEntity::GetClassPoints()
{
	return playerCompleteDataSet.ClassPoints;
}

void UPlayerCombatEntity::GatherAndSavePlayerCompleteDataSet()
{
	playerCompleteDataSet.playerIdentityData    = playerIdentityData;
	playerCompleteDataSet.mainClassData         = mainClass->completeClassData;
	playerCompleteDataSet.PassiveHandlerData    = passiveHandler->GetPassiveHandlerData();

	playerCompleteDataSet.unlockedPlayerClasses.Add(mainClass->completeClassData.classIdentifer,mainClass->completeClassData);

	playerCompleteDataSet.HealthData.currentHealth = health->GetHealth();
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
	if(mainClass != nullptr)
	{
		for (int32 i = static_cast<int32>(EStatTypes::None) + 1; i < static_cast<int32>(EStatTypes::Max); ++i)
		{
			EStatTypes statType = static_cast<EStatTypes>(i);
		
			if(statType == EStatTypes::None)
			{
				continue;
			}
        
			UPlayerCombatStats* PlayerStats = Cast<UPlayerCombatStats>(abilityScoreMap[statType]);
			PlayerStats->AddClassStatBase(mainClass->completeClassData);

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
	float expCurrent    = mainClass->experience;
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
	
	maxHealth     = 10 * aNewLevel;
	maxMana       = 25 * aNewLevel;
	currentHealth = maxHealth;
	currentMana   = maxMana;

	SetAbilityScores();
	GatherAndSavePlayerCompleteDataSet();

	hasHealthOrManaValuesChanged.Broadcast();

	
}


