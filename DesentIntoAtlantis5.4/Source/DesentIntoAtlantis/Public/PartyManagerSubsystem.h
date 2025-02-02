// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "DefaultTestFightData.h"
#include "PlayerCombatEntity.h"
#include "UPartyInventory.h"

#include "Engine/DataTable.h"

#include "UObject/NoExportTypes.h"
#include "PartyManagerSubsystem.generated.h"

class UPartyInventory;
class UPassiveFactorySubsystem;
class UPersistentGameinstance;
class ACombatGameModeBase;
struct FPlayerIdentityData;
enum class EClassID  : uint8;
class UPlayerCombatEntity;
class UCombatEntity;
class USkillFactorySubsystem;



USTRUCT(Atomic)
struct DESENTINTOATLANTIS_API FPartyExperienceTable :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	TMap<int,int> LevelExpValue;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCompletePartyManagerSubsystemData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	int partyLevel = 0;
	UPROPERTY(EditAnywhere)
	int totalExperience = 0;
	UPROPERTY(EditAnywhere)
	int totalClassPoints = 0;

	UPROPERTY()
	FPartyInventoryCompleteData PartyInventoryCompleteData;

	UPROPERTY()
	TArray<EPartyMembers> activePartyMembers;
	
	UPROPERTY()
	TMap<EPartyMembers, FPlayerCompleteDataSet> playerCompleteDataSet;
};

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
	void CreatePlayerEntitys(EPartyMembers aPlayer);
	void AddPlayerToActiveParty(EPartyMembers aPlayer);

	void RemoveAllCombatTokensFromParty();

	void CreateTestParty();
	
	void SavePartyManager();

	void SavePlayerEntitys();

	int GetPartyLevel() const;

	void AddPartyExperience(int aExperience);
	void AddPartyClassPoints(int aClassPoints);
	void SetPartyLevel(int aPartyLevel);
	
	void LoadAndCreateAllPlayerEntitys(TMap<EPartyMembers, FPlayerCompleteDataSet> aPlayerCompleteDataSets);
	void ResetActivePartyToDefaultState();
	
	TArray<UPlayerCombatEntity*> ReturnActiveParty();


	UPROPERTY()
	UPartyInventory* PartyInventory;
	
	TMap<EPartyMembers,FPlayerIdentityData> playerIdenityMap;
	UPROPERTY()
	TMap<EPartyMembers,UPlayerCombatEntity*> playerCombatEntityInfo;
	UPROPERTY()
	TArray<FPlayerIdentityData> playerEntityData;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> playerCombatEntity;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> activePartyEntityData;;
	
};
