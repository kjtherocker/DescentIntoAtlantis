// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSkillFactorySubsystem.h"
#include "PassiveSkills.h"

void UPassiveSkillFactorySubsystem::InitializeDatabase(UDataTable* aPassiveDataTable,UDataTable*  aCombatTokenDataTable)
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

	UDataTable*  combatTokenDataTable = aCombatTokenDataTable;
	if(combatTokenDataTable)
	{
		for(int i = 0 ; i < combatTokenDataTable->GetRowMap().Num(); i ++)
		{
			FCombatToken_Base_Data skillData = *combatTokenDataTable->FindRow<FCombatToken_Base_Data>(FName(FString::FromInt(i)),FString("Searching for Skills"),true);
			
			allCombatTokensData.Add(skillData.CombatTokenID,skillData );
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}
}

UPassiveSkills* UPassiveSkillFactorySubsystem::GetPassiveSkill(EPassiveSkillID aPassiveSkillID)
{
	if(aPassiveSkillID == EPassiveSkillID::None)
	{
		return nullptr;
	}
	
	if(!allPassiveSkills.Contains(aPassiveSkillID))
	{
		UE_LOG(LogTemp, Log, TEXT("PassiveSkillNotSetIn PassiveSkillFactory"));
		return nullptr;
	}
	return allPassiveSkills[aPassiveSkillID];
}

FCombatToken_Base_Data UPassiveSkillFactorySubsystem::GetCombatTokenData(ECombatTokenID combatTokenID)
{
	FCombatToken_Base_Data empty;
	if(combatTokenID == ECombatTokenID::None)
	{
		return empty;
	}
	
	if(!allCombatTokensData.Contains(combatTokenID))
	{
		UE_LOG(LogTemp, Log, TEXT("CombatToken not set in PassiveSkillFactory"));
		return empty;
	}
	
	return allCombatTokensData[combatTokenID];
}

bool UPassiveSkillFactorySubsystem::DoesPassiveSkillExist(EPassiveSkillID aPassiveSkillID)
{
	return allPassiveSkills.Contains(aPassiveSkillID);
}
