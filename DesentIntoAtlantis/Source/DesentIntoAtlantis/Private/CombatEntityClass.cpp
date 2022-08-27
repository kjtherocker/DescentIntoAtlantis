// Fill out your copyright notice in the Description page of Project Settings.

#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntityClass.h"




//"DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"



void UCombatEntityClass::InitializeDataTable(FString aClassExcelSheet)
{
	static ConstructorHelpers::FObjectFinder<UObject> classDatatable((TEXT("%s"), *aClassExcelSheet));
	gameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	if (classDatatable.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( classDatatable.Object);
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			classLevels.Add(datatable->FindRow<FClassData>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
			
		}
		Levelup();
		
	}
}

void UCombatEntityClass::AddExperience(int aExperience)
{
	experience += aExperience;
	if(experience > currentClassLevel->expToNextClassLevel)
	{
		Levelup();
	}
}

void UCombatEntityClass::Levelup()
{
	currentClassLevel = classLevels[0];
	classSkills.Add(gameModeBase->skillFactory->GetSkill(currentClassLevel->newlyObtainedSkill));

	classLevels.RemoveAt(0);
}
