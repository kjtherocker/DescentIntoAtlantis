// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyManagerSubsystem.h"
#include "EDataTableTypes.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"


UPartyManagerSubsystem::UPartyManagerSubsystem()
{
}

void UPartyManagerSubsystem::InitializeDataTable (UDataTable* aDataTable, TMap<EDataTableClasses,UDataTable*> aClassDataTable)
{


	// Cast the game instance to your custom game instance class
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	USkillFactorySubsystem* skillFactorySubsystem = persistentGameInstance->GetSubsystem<USkillFactorySubsystem>();
	
	skillFactory = skillFactorySubsystem;

	UDataTable* datatable = aDataTable;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		playerEntityData.Add(*datatable->FindRow<FPlayerEntityData>(FName(FString::FromInt(i)),FString("Searching for Players"),true));
	}

	
	for(int i = 0;i < playerEntityData.Num();i++)
	{
		//if we dont get back the correct information from the datatable
		EDataTableClasses classTable = playerEntityData[i].DataTableClass;
		UPlayerCombatEntity* PlayerCombatEntity = NewObject<UPlayerCombatEntity>();

		PlayerCombatEntity->SetPlayerEntity(playerEntityData[i]);
		PlayerCombatEntity->SetTacticsEntity(skillFactory);
		PlayerCombatEntity->SetPlayerClass(aClassDataTable[classTable]);
		

		playerCombatEntity.Add(PlayerCombatEntity);
		playerCombatEntityInfo.Add(classTable,PlayerCombatEntity);
	}
}

void UPartyManagerSubsystem::AddPlayerToActiveParty(EDataTableClasses aClasses)
{
	if(!activePartyEntityData.Contains(playerCombatEntityInfo[aClasses]))
	{
		activePartyEntityData.Add(playerCombatEntityInfo[aClasses]);
	}
}

void UPartyManagerSubsystem::ResetActivePartyToDefaultState()
{
	for(int i = 0 ;i < activePartyEntityData.Num();i++)
	{
		activePartyEntityData[i]->Reset();
	}
}

TArray<UPlayerCombatEntity*> UPartyManagerSubsystem::ReturnActiveParty()
{
	return activePartyEntityData;
}
