
// Fill out your copyright notice in the Description page of Project Settings.
#include "SkillFactory.h"

#include "CombatEntity.h"
#include "Engine/DataTable.h"
#include "SkillsData.h"




USkillFactory::USkillFactory()
{
}

void USkillFactory::InitializeDatabase(TMap<ESkillType,UDataTable*> aSkillDataTable)
{

	TMap<ESkillType,UDataTable*>  datatable = aSkillDataTable;

	if(datatable[ESkillType::Attack])
	{
		for(int i = 0 ; i < datatable[ESkillType::Attack]->GetRowMap().Num(); i ++)
		{
			FSkillsData skillData = *datatable[ESkillType::Attack]->FindRow<FSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);

			USkillAttack* skillObject = NewObject<USkillAttack>();
			skillObject->Initialize(skillData);
			skillMap.Add(skillData.skillName,skillObject);
		}
	}

	if(datatable[ESkillType::Heal])
	{
		for(int i = 0 ; i < datatable[ESkillType::Heal]->GetRowMap().Num(); i ++)
		{
			FSkillsData skillData = *datatable[ESkillType::Heal]->FindRow<FSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);

			USkillHeal* skillObject = NewObject<USkillHeal>();
			skillObject->Initialize(skillData);
			skillMap.Add(skillData.skillName,skillObject);
		}
	}

	if(datatable[ESkillType::Buff])
	{
		for(int i = 0 ; i < datatable[ESkillType::Buff]->GetRowMap().Num(); i ++)
		{
			FSkillsData skillData = *datatable[ESkillType::Buff]->FindRow<FSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);

			USkillBuff* skillObject = NewObject<USkillBuff>();
			skillObject->Initialize(skillData);
			skillMap.Add(skillData.skillName,skillObject);
		}
	}

	if(datatable[ESkillType::Debuff])
	{
		for(int i = 0 ; i < datatable[ESkillType::Debuff]->GetRowMap().Num(); i ++)
		{
			FSkillsData skillData = *datatable[ESkillType::Debuff]->FindRow<FSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);

			USkillDebuff* skillObject = NewObject<USkillDebuff>();
			skillObject->Initialize(skillData);
			skillMap.Add(skillData.skillName,skillObject);
		}
	}
	

	
}

USkillBase* USkillFactory::GetSkill(FString aSkillName)
{
		return skillMap.FindRef(aSkillName);
}
