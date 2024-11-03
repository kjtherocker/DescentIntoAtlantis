// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSkillFactorySubsystem.h"
#include "PassiveSkills.h"

void UPassiveSkillFactorySubsystem::InitializeDatabase(UDataTable* aPassiveDataTable)
{


	allPassiveSkills.Add(EPassiveSkillID::DarkIncrease,NewObject<UGenericOnAttackPassive>());
	allPassiveSkills.Add(EPassiveSkillID::DarkResist,  NewObject<UGenericOnAttackPassive>());
	allPassiveSkills.Add(EPassiveSkillID::StatusAdept, NewObject<UGenericStatPassive>());



	
	UDataTable*  datatable = aPassiveDataTable;
	if(datatable)
	{
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			FPassiveSkillData skillData = *datatable->FindRow<FPassiveSkillData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);
			
			allPassiveSkills[skillData.passiveSkillID]->InitializePassiveSkilData(skillData);

		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}
}

UPassiveSkills* UPassiveSkillFactorySubsystem::GetPassiveSkill(EPassiveSkillID aPassiveSkillID)
{
	if(!allPassiveSkills.Contains(aPassiveSkillID))
	{
		UE_LOG(LogTemp, Log, TEXT("PassiveSkillNotSetIn PassiveSkillFactory"));
		return nullptr;
	}
	return allPassiveSkills[aPassiveSkillID];
}
