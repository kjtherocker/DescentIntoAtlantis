// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "DefaultTestFightData.h"
#include "ItemChargeHandler.h"
#include "PartyData.h"

#include "UPartyInventory.h"

#include "Engine/DataTable.h"

#include "UObject/NoExportTypes.h"
#include "PartyManagerSubsystem.generated.h"


class UPartyGroup;
class UPartyInventory;
class UPassiveFactorySubsystem;
class UPersistentGameinstance;
class ACombatGameModeBase;
struct FPlayerIdentityData;
enum class EClassID  : uint8;
class UPlayerCombatEntity;
class UCombatEntity;
class USkillFactorySubsystem;



/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartyManagerHasChanged,FCompletePartyManagerSubsystemData,partyManagerData);
UCLASS()
class DESENTINTOATLANTIS_API UPartyManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
private:
	UPartyManagerSubsystem();
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

	UPROPERTY()
	UPassiveFactorySubsystem* passiveSkillFactory;

	TMap<int,int> LevelExperienceTable;
	TMap<EClassID,FCompleteClassData> classDataTables;
	UPROPERTY()
	UPersistentGameinstance* persistentGameInstance;

	UPROPERTY()
	FItemChargesCompleteData ItemChargesBase;
	

	FCompletePartyManagerSubsystemData CompletePartyManagerSubsystemData;
	int totalExperience = 0;
	int totalClassPoints = 0;
	int partyLevel      = 1;
public:

	TArray<FDefaultTestFightData> DefaultTestFightData;
	FPartyManagerHasChanged PartyManagerHasChanged;

	FCompletePartyManagerSubsystemData GetPartyManagerData(){return CompletePartyManagerSubsystemData;}
	void LoadSavedPartyManagerSubsystem(FCompletePartyManagerSubsystemData APartyManagerSubsystemData);
	void InitializeDataTable(UDataTable* aPlayerData,UDataTable* aClassDataTable, UDataTable* aPartyExperienceTable, UDataTable* aTestCombatInfo);
	void CreatePartyGroups(FCompletePartyManagerSubsystemData aCompletePartyManagerSubsystemData);
	void CreatePlayerEntitys(EPartyMembersID aPlayer);
	void AddPlayerToActiveParty(EPartyMembersID aPlayer);


	UPlayerCombatEntity* GetAndCreatePlayerEntity(EPartyMembersID aPlayer);
	
	void RemovePartyMemberToInaccessible(EPartyMembersID aPlayer);
	void RemoveAllCombatTokensFromParty();

	void UnlockClassForAll(EClassID aClassID);
	
	void CreateTestParty();
	
	void SavePartyManager();

	void SavePlayerEntitys();

	int GetPartyLevel() const;

	void AddPartyExperience(int aExperience);
	void AddPartyClassPoints(int aClassPoints);
	void SetPartyLevel(int aPartyLevel);
	
	UPlayerCombatEntity* GetSpecificPartyMember(EPartyMembersID aPartyMember);
	void LoadAndCreateAllPlayerEntitys(TMap<EPartyMembersID, FPlayerCompleteDataSet> aPlayerCompleteDataSets);
	void ResetActivePartyToDefaultState();

	FCompleteClassData GetClassData(EClassID aClassID){ return classDataTables[aClassID];}
	
	TArray<UPlayerCombatEntity*> ReturnActiveParty();

	FPartyGroupCompleteData CreatePartyGroupData();



	UPROPERTY()
	UPartyInventory* PartyInventory;
	
	TMap<EPartyMembersID,FPlayerIdentityData> playerIdenityMap;
	UPROPERTY()
	TMap<EPartyMembersID,UPlayerCombatEntity*> playerCombatEntityInfo;
	UPROPERTY()
	TArray<FPlayerIdentityData> playerEntityData;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> playerCombatEntity;
	
	UPROPERTY()
	TMap<EPartyType,UPartyGroup*> partyGroup;
	
};
