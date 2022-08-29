// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManager.h"

#include "CombatEntity.h"
#include "SkillFactory.h"
#include "Engine/DataTable.h"

UPartyManager::UPartyManager()
{
	static ConstructorHelpers::FObjectFinder<UObject> partyDatatable(TEXT("DataTable'/Game/Datatables/Atlantis_-_PlayerCharacters.Atlantis_-_PlayerCharacters'"));
	if (partyDatatable.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( partyDatatable.Object);
		for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
		{
			playerEntityData.Add(datatable->FindRow<FCombatEntity>(FName(FString::FromInt(i)),FString("Searching for seres"),true));
		}
	}
}

void UPartyManager::Initialize (USkillFactory* aSkillFactory)
{
	skillFactory = aSkillFactory;

	for(int i = 0;i < playerEntityData.Num();i++)
	{
		//if we dont get back the correct information from the datatable
		if(playerEntityData[i] != nullptr)
		{
			playerEntityData[i]->SetTacticsEntity(aSkillFactory);
			//combatEntity[i]->currentClass->AddExperience(150);
		}
	}
}

TArray<FCombatEntity*> UPartyManager::ReturnActivePartyEntityData()
{
	return playerEntityData;
}
