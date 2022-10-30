// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManager.h"

#include "CombatEntity.h"
#include "SkillFactory.h"
#include "Engine/DataTable.h"
#include "EDataTableTypes.h"
#include "PlayerCombatEntity.h"

UPartyManager::UPartyManager()
{
}

void UPartyManager::InitializeDataTable (USkillFactory* aSkillFactory,UDataTable* aDataTable, TMap<EDataTableClasses,UDataTable*> aClassDataTable,UCombatManager* aCombatManager)
{
	skillFactory = aSkillFactory;

	UDataTable* datatable = aDataTable;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		playerEntityData.Add(*datatable->FindRow<FPlayerEntityData>(FName(FString::FromInt(i)),FString("Searching for seres"),true));
	}

	
	for(int i = 0;i < playerEntityData.Num();i++)
	{
		//if we dont get back the correct information from the datatable
		EDataTableClasses classTable = playerEntityData[i].DataTableClass;
		UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

		PlayerCombatEntity->SetPlayerEntity(playerEntityData[i]);
		PlayerCombatEntity->SetTacticsEntity(aSkillFactory);
		PlayerCombatEntity->SetPlayerClass(aClassDataTable[classTable]);
		PlayerCombatEntity->SetTacticsEvents(aCombatManager);
		

		playerCombatEntity.Add(PlayerCombatEntity);
		playerCombatEntityInfo.Add(classTable,PlayerCombatEntity);
	}
}

void UPartyManager::AddPlayerToActiveParty(EDataTableClasses aClasses)
{
	activePartyEntityData.Add(playerCombatEntityInfo[aClasses]);
}

TArray<UPlayerCombatEntity*> UPartyManager::ReturnActiveParty()
{
	return activePartyEntityData;
}
