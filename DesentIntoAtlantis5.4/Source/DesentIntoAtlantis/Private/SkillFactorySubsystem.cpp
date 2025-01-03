// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillFactorySubsystem.h"

#include "CombatEntity.h"
#include "Engine/DataTable.h"
#include "SkillBase.h"
#include "SkillType.h"


void USkillFactorySubsystem::InitializeDatabase(UDataTable*  aSkillDataTable)
{

	UDataTable*  datatable = aSkillDataTable;

	allAliments.Add(EStatusAilments::Fear,NewObject<UAilment_Fear>());
	
	if(datatable)
	{
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			FSkillsData skillData = *datatable->FindRow<FSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);

			
			USkillBase* skillBase = GetSkillClass(skillData);
			if(skillBase != nullptr)
			{
				skillBase->Initialize(skillData);
				allSkillsMap.Add(skillData.skillID,skillBase);
			}

		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}
	
	

	
}

USkillBase* USkillFactorySubsystem::GetSkill(ESkillIDS aSkillID)
{
	return allSkillsMap.FindRef(aSkillID);
}

UAilment* USkillFactorySubsystem::GetAilment(EStatusAilments aAilment)
{
	return allAliments[aAilment];
}

USkillBase* USkillFactorySubsystem::GetSkillClass(FSkillsData skillData)
{
	//Unique Hand made skills that have there own classes 
	switch (skillData.skillID)
	{
		case ESkillIDS::Bonk:
			return NewObject<USkillAlimentAttackFear>();
			break;
		case ESkillIDS::Boo:
			return NewObject<USkillAlimentAttackFear>();
			break;
	}

	//More generic Easily Flexible skills
	switch (skillData.skillType)
	{
		case ESkillType::Attack:
			return NewObject<USkillAttack>();
			break;
		case ESkillType::Heal:
			return NewObject<USkillHeal>();
			break;
		case ESkillType::PositiveCombatToken:
			return NewObject<USkillCombatToken>();
			break;
		case ESkillType::NegativeCombatToken:
			return NewObject<USkillCombatToken>();
			break;
		case ESkillType::HealPositiveCombatToken:
			break;
		case ESkillType::AttackNegativeCombatToken:
			break;
		case ESkillType::Start:
			break;
		case ESkillType::Unique:
			break;
	}

	return nullptr;
}
