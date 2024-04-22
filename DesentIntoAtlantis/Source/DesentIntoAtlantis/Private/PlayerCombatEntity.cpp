// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"
#include "CombatManager.h"
#include "PartyHealthbarElement.h"
#include "PersistentGameinstance.h"
#include "SaveGameData.h"


void UPlayerCombatEntity::LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	currentHealth = aPlayerCompleteDataSet.currentHP;
	currentMana   = aPlayerCompleteDataSet.currentMP;
}

void UPlayerCombatEntity::SetPlayerEntity(FPlayerIdentityData aPlayerEntityData)
{
	playerCompleteDataSet.playerIdentityData = aPlayerEntityData;
	playerIdentityData                       = aPlayerEntityData;
}

void UPlayerCombatEntity::SetTacticsEntity(USkillFactorySubsystem* aSkillFactory)
{
	Super::SetTacticsEntity(aSkillFactory);
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
	mainClass->SetClassAttributes();

	currentHealth = mainClass->completeClassData.currentLevelClassData.maxHealth;
	currentMana   = mainClass->completeClassData.currentLevelClassData.maxMana;
	
	elementalStrength = mainClass->completeClassData.ElementalStrength;
	elementalWeakness = mainClass->completeClassData.ElementalWeakness;
	
	SetAbilityScores();
	SetToDefaultState();
	playerCompleteDataSet.mainClassData = mainClass->completeClassData;
	playerCompleteDataSet.currentMainClassLevel = mainClass->completeClassData.currentLevelClassData;
}

void UPlayerCombatEntity::Reset()
{
	Super::Reset();
	SetToDefaultState();
}

void UPlayerCombatEntity::SetToDefaultState()
{
	Super::SetToDefaultState();
	maxHealth         =  mainClass->completeClassData.currentLevelClassData.maxHealth;
	currentHealth     = maxHealth;
	maxMana           =  mainClass->completeClassData.currentLevelClassData.maxMana;
	currentMana       = maxMana;
    isMarkedForDeath  = false;
	for (TTuple<EAbilityScoreTypes, UCombatAbilityStats*> abilityStats : abilityScoreMap)
	{
		abilityStats.Value->ResetAbilityscore();
	}
}

void UPlayerCombatEntity::GatherAndSavePlayerCompleteDataSet()
{
	playerCompleteDataSet.playerIdentityData    = playerIdentityData;
	playerCompleteDataSet.mainClassData         = mainClass->completeClassData;
	playerCompleteDataSet.currentMainClassLevel = mainClass->completeClassData.currentLevelClassData;

	playerCompleteDataSet.unlockedPlayerClasses.Add(mainClass->completeClassData.classIdentifer,mainClass->completeClassData);

	playerCompleteDataSet.currentHP = currentHealth;
	playerCompleteDataSet.currentMP = currentMana;
}

void UPlayerCombatEntity::SetAbilityScores()
{
	abilityScoreMap[EAbilityScoreTypes::Strength]->base   =  mainClass->completeClassData.currentLevelClassData.baseStrength;
	abilityScoreMap[EAbilityScoreTypes::Magic]->base      =  mainClass->completeClassData.currentLevelClassData.baseMagic;
	abilityScoreMap[EAbilityScoreTypes::Hit]->base        =  mainClass->completeClassData.currentLevelClassData.baseHit;
	abilityScoreMap[EAbilityScoreTypes::Evasion]->base    =  mainClass->completeClassData.currentLevelClassData.baseEvasion;
	abilityScoreMap[EAbilityScoreTypes::Defence]->base    =  mainClass->completeClassData.currentLevelClassData.baseDefence;
	abilityScoreMap[EAbilityScoreTypes::Resistance]->base =  mainClass->completeClassData.currentLevelClassData.baseResistance;
}

float UPlayerCombatEntity::GetHealthPercentage()
{
	return  (float)currentHealth /  (float)mainClass->completeClassData.currentLevelClassData.maxHealth;
}

float UPlayerCombatEntity::GetManaPercentage()
{
	return (float)currentMana / (float)mainClass->completeClassData.currentLevelClassData.maxMana;
}
