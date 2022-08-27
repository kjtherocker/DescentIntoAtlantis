// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManager.h"

#include "CombatEntity.h"
#include "SkillFactory.h"
#include "Engine/DataTable.h"

UPartyManager::UPartyManager()
{
	static ConstructorHelpers::FObjectFinder<UObject> PlayerAttackMontageObject(TEXT("DataTable'/Game/Skills/Atlantis_-_PlayerCharacters.Atlantis_-_PlayerCharacters'"));
	if (PlayerAttackMontageObject.Succeeded())
	{ 
		UDataTable* datatable = dynamic_cast<UDataTable*>( PlayerAttackMontageObject.Object);
		combatEntity.Add(datatable->FindRow<FCombatEntity>(FName(TEXT("0")),FString("Searching for seres"),true));
	}
}

void UPartyManager::Initialize (USkillFactory* aSkillFactory)
{
	skillFactory = aSkillFactory;

	for(int i = 0;i < combatEntity.Num();i++)
	{
		combatEntity[i]->SetTacticsEntity(aSkillFactory);
		combatEntity[i]->currentClass->AddExperience(150);
	}
}
