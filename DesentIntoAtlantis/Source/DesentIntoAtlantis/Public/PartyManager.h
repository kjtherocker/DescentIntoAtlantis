// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/DataTable.h"

#include "UObject/NoExportTypes.h"
#include "PartyManager.generated.h"

class UCombatManager;
struct FPlayerEntityData;
enum class EDataTableClasses;
class UPlayerCombatEntity;
class UCombatEntity;
class USkillFactory;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyManager : public UObject
{
	GENERATED_BODY()
	UPartyManager();
	UPROPERTY()
	USkillFactory* skillFactory;

	
public:
	
	void InitializeDataTable(USkillFactory* aSkillFactory,UDataTable* aDataTable,TMap<EDataTableClasses,UDataTable*> aClassDataTable,UCombatManager* aCombatManager);

	void AddPlayerToActiveParty(EDataTableClasses aClasses);
	void ResetActivePartyToDefaultState();
	
	TArray<UPlayerCombatEntity*> ReturnActiveParty();

	TMap<EDataTableClasses,UPlayerCombatEntity*> playerCombatEntityInfo;
	UPROPERTY()
	TArray<FPlayerEntityData> playerEntityData;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> playerCombatEntity;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> activePartyEntityData;;

	
};
