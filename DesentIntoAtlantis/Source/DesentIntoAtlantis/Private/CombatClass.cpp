// Fill out your copyright notice in the Description page of Project Settings.

#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "SkillFactory.h"
#include "CombatClass.h"




//"DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"



void UCombatClass::InitializeDataTable(FString aClassExcelSheet, USkillFactory* aSkillFactory)
{
	static ConstructorHelpers::FObjectFinder<UObject> classDatatable((TEXT("%s"), *aClassExcelSheet));
	if (classDatatable.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( classDatatable.Object);
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			classLevels.Add(datatable->FindRow<FClassData>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
			
		}
	}

	skillFactory = aSkillFactory;
	Levelup();
	Levelup();
	Levelup();
	Levelup();
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
	currentClassLevel = classLevels[0];
	classSkills.Add(skillFactory->GetSkill(currentClassLevel->newlyObtainedSkill));

	classLevels.RemoveAt(0);
}
