// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatClass.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "SkillFactory.h"
#include "CombatEntity.h"
#include "PlayerCombatEntity.h"


//"DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"



void UCombatClass::InitializeDataTable(FString aClassExcelSheet, USkillFactory* aSkillFactory, FCombatEntity* aCombatEntity)
{
	uint32 InLoadFlags = LOAD_None;
	UDataTable* datatable = LoadObject<UDataTable>(NULL, *aClassExcelSheet, nullptr, InLoadFlags);
	if (datatable)
	{
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			classLevels.Add(datatable->FindRow<FClassData>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
			
		}
		skillFactory = aSkillFactory;
		attachedCombatEntity = aCombatEntity;
		Levelup();
		Levelup();
		Levelup();
		Levelup();
		Levelup();
	}
}



void UCombatClass::AddExperience(int aExperience)
{
	experience += aExperience;
	if(experience > currentClassLevel->expToNextClassLevel)
	{
		Levelup();
	}
}

void UCombatClass::Levelup()
{
	if(classLevels.Num() > 0)
	{
		currentClassLevel = classLevels[0];
		classSkills.Add(skillFactory->GetSkill(currentClassLevel->newlyObtainedSkill));
		attachedCombatEntity->currentHealth = currentClassLevel->maxHealth;
		attachedCombatEntity->currentMana   = currentClassLevel->maxMana;

		classLevels.RemoveAt(0);
	}
}
