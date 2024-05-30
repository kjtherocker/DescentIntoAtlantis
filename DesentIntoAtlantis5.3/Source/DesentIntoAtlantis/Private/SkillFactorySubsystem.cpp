// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillFactorySubsystem.h"

#include "CombatEntity.h"
#include "Engine/DataTable.h"
#include "SkillsData.h"


void USkillFactorySubsystem::InitializeDatabase(UDataTable*  aSkillDataTable)
{

	UDataTable*  datatable = aSkillDataTable;

	allAliments.Add(EStatusAilments::Fear,NewObject<UAilment_Fear>());

	allSkillsMap.Add(ESkillIDS::DefaultAttack,NewObject<USkillAttack>());
	//Banshee
	allSkillsMap.Add(ESkillIDS::Bonk,NewObject<USkillAlimentAttackFear>());
	allSkillsMap.Add(ESkillIDS::Boo,NewObject<USkillAlimentAttackFear>());
	allSkillsMap.Add(ESkillIDS::RejuvenatingLink,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::WailingScream,NewObject<USkillAttack>());
	//Gem Thief
	allSkillsMap.Add(ESkillIDS::Lunge,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::SpreadInfection,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::RustyBlade,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::CoupDeGrace,NewObject<USkillAttack>());
	//Atlantian Warden
	allSkillsMap.Add(ESkillIDS::OceansBalm,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::BoilInsides,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::WavesSweetRelease,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::EmboldingSpeech,NewObject<USkillAttack>());
	//Laid Off Executioner
	allSkillsMap.Add(ESkillIDS::MarkForDeath,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::MockingTaunt,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::AbsoluteGuard,NewObject<USkillAttack>());
	allSkillsMap.Add(ESkillIDS::SelfIndulgentRevenge,NewObject<USkillAttack>());
	

	if(datatable)
	{
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			FSkillsData skillData = *datatable->FindRow<FSkillsData>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);
			
			allSkillsMap[skillData.skillID]->Initialize(skillData);

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
