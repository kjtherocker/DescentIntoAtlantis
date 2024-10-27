// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSkillFactorySubsystem.h"
#include "PassiveSkills.h"

void UPassiveSkillFactorySubsystem::InitializeDatabase(UDataTable* aPassiveDataTable)
{


	allPassiveSkills.Add(EPassiveSkillIDS::DarkIncrease,NewObject<UGenericOnAttackPassive>());
	allPassiveSkills.Add(EPassiveSkillIDS::DarkResist,NewObject<UGenericOnAttackPassive>());
	allPassiveSkills.Add(EPassiveSkillIDS::StatusAdept, NewObject<UGenericStatPassive>());



	
	UDataTable*  datatable = aPassiveDataTable;
	if(datatable)
	{
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			FPassiveSkillsData skillData = *datatable->FindRow<FPassiveSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);
			
			allPassiveSkills[skillData.passiveSkillID]->InitializePassiveSkilData(skillData);

		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}
}

UPassiveSkills* UPassiveSkillFactorySubsystem::GetPassiveSkill(EPassiveSkillIDS aPassiveSkillID)
{
	if(!allPassiveSkills.Contains(aPassiveSkillID))
	{
		UE_LOG(LogTemp, Log, TEXT("PassiveSkillNotSetIn PassiveSkillFactory"));
		return nullptr;
	}
	return allPassiveSkills[aPassiveSkillID];
}
