// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/DataTable.h"
#include "Skills_Base.h"
#include "SkillFactory.h"



USkillFactory::USkillFactory()
{
	static ConstructorHelpers::FObjectFinder<UObject> skillDatatable(TEXT("DataTable'/Game/Skills/AtlantisSkills.AtlantisSkills'"));
	if (skillDatatable.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( skillDatatable.Object);
		
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			allSkills.Add(datatable->FindRow<FSkills_Base>(FName(FString::FromInt(i)),FString("Searching for class levels"),true));
		}
 
		for (FSkills_Base* skills : allSkills)
		{
			skillMap.Add(skills->SkillName,skills);
		}
	}
}

FSkills_Base* USkillFactory::GetSkill(FString aSkillName)
{
	return skillMap.FindRef(aSkillName);
}
