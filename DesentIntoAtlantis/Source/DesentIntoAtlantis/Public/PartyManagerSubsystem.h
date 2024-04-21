// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "PlayerCombatEntity.h"

#include "Engine/DataTable.h"

#include "UObject/NoExportTypes.h"
#include "PartyManagerSubsystem.generated.h"

class UPersistentGameinstance;
class UCombatManager;
struct FPlayerIdentityData;
enum class EClasses;
class UPlayerCombatEntity;
class UCombatEntity;
class USkillFactorySubsystem;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	UPartyManagerSubsystem();
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

	TMap<EClasses,FCompleteClassData> classDataTables;
	UPersistentGameinstance* persistentGameInstance ;
public:
	
	void InitializeDataTable(UDataTable* aDataTable,UDataTable* aClassDataTable);
	void CreatePlayerEntitys(EPartyMembers aPlayer);
	void AddPlayerToActiveParty(EPartyMembers aPlayer);

	void SavePlayerEntitys();

	void LoadAndCreateAllPlayerEntitys(TMap<EPartyMembers, FPlayerCompleteDataSet> aPlayerCompleteDataSets);
	void ResetActivePartyToDefaultState();
	
	TArray<UPlayerCombatEntity*> ReturnActiveParty();

	TMap<EPartyMembers,FPlayerIdentityData> playerIdenityMap;
	TMap<EPartyMembers,UPlayerCombatEntity*> playerCombatEntityInfo;
	UPROPERTY()
	TArray<FPlayerIdentityData> playerEntityData;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> playerCombatEntity;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> activePartyEntityData;;
	
};
