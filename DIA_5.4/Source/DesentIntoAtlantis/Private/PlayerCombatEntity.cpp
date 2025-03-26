// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"

#include "CombatEntityHub.h"
#include "CombatGameModeBase.h"
#include "CombatStat.h"
#include "ElementalHandler.h"
#include "Health.h"
#include "PartyHealthbarElement.h"
#include "PassiveHandler.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatStat.h"
#include "ResourceHandler.h"

#include "SaveGameData.h"
#include "SyncHandler.h"


class UPlayerCombatStats;


void UPlayerCombatEntity::LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet)
{
	ResourceHandler->LoadSavedCurrentResources(aPlayerCompleteDataSet.ResourceHandlerCompleteData);
}

void UPlayerCombatEntity::SetPlayerEntity(FPlayerIdentityData aPlayerEntityData,FCharacterCostumeData aDialogueCostumeData)
{
	playerCompleteDataSet.playerIdentityData = aPlayerEntityData;
	playerIdentityData                       = aPlayerEntityData;

	SetCurrentCostume(aDialogueCostumeData);
}

void UPlayerCombatEntity::SetCombatEntity(USkillFactorySubsystem* aSkillFactory
	,UPassiveFactorySubsystem* aPassiveSkillFactory,UPersistentGameinstance* aPersistentGameinstance)
{
	Super::SetCombatEntity(aSkillFactory,aPassiveSkillFactory,aPersistentGameinstance);
	characterType = ECharactertype::Ally;
	skillFactory  = aSkillFactory;
	
	classHandler = NewObject<UClassHandler>();
	classHandler->InitializeClassHandler(this,skillFactory,aPersistentGameinstance->partyManagerSubsystem);
	ResourceHandler->SyncHandler->InitializeSyncHandler(playerCompleteDataSet.ResourceHandlerCompleteData.SyncData,this);
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

	ResourceHandler->SetToDefaultState();
	
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

	playerCompleteDataSet.ResourceHandlerCompleteData    = ResourceHandler->SaveAllResourcesAndReturn();
}

void UPlayerCombatEntity::SetCurrentCostume(FCharacterCostumeData aCostumeData)
{
	currentCostumeData = aCostumeData;
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
        
			UCombatStat* PlayerStats = abilityScoreMap[statType];
			PlayerStats->classStatBases.Empty();
			PlayerStats->AddClassStatBase(classHandler->mainClass->completeClassData);

			abilityScoreMap[statType] = PlayerStats;
		}
	}
}

void UPlayerCombatEntity::IncrementMana(int aIncrease)
{
	ResourceHandler->IncrementResource(EResource::Mana,aIncrease);
	hasHealthOrManaValuesChanged.Broadcast();
}

float UPlayerCombatEntity::GetHealthPercentage()
{
	return  ResourceHandler->healthHandler->GetPercentage();
}

float UPlayerCombatEntity::GetManaPercentage()
{
	return ResourceHandler->manaHandler->GetPercentage();
}

float UPlayerCombatEntity::GetSyncPercentage()
{
	return ResourceHandler->SyncHandler->GetPercentage();
}

float UPlayerCombatEntity::GetMainClassEXPPercentage()
{
	float expCurrent    = classHandler->mainClass->experience;
	float expNextLevel  = 1;
	float expPercentage = expCurrent / expNextLevel;
	return expPercentage;
}

int UPlayerCombatEntity::GetBaseAilmentResistance()
{
	return playerCompleteDataSet.AilmentResistData.AilmentResistance;
}

int UPlayerCombatEntity::GetCurrentLevel(){return currentLevel;}

void UPlayerCombatEntity::LevelUp(int aNewLevel)
{

	for (int32 i = static_cast<int32>(EStatTypes::None) + 1; i < static_cast<int32>(EStatTypes::Max); ++i)
	{
		EStatTypes statType = static_cast<EStatTypes>(i);
		UCombatStat* PlayerStats = abilityScoreMap[statType];
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
	HealthData.ResourceBarInfo.Max = 50;
	HealthData.ResourceBarInfo.Max += 5 * aNewLevel;
	HealthData.ResourceBarInfo.Current = HealthData.ResourceBarInfo.Max;
	
	FManaData ManaData;
	ManaData.ResourceBarInfo.Max         = 50;
	ManaData.ResourceBarInfo.Max         += 5 * aNewLevel;
	ManaData.ResourceBarInfo.Current     = ManaData.ResourceBarInfo.Max;
	
	ResourceHandler->SetHealthandMana(HealthData, ManaData);

	SetAbilityScores();
	GatherAndSavePlayerCompleteDataSet();

	hasHealthOrManaValuesChanged.Broadcast();

	
}


