// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassHandler.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatClass.h"
#include "CompleteClassHandlerData.h"
#include "CompleteElementalHandlerData.h"
#include "DialogueManagerSubsystem.h"
#include "EquipmentHandler.h"
#include "FloorEnum.h"
#include "PartyEnum.h"
#include "PassiveSkillHandlerData.h"
#include "SyncData.h"
#include "PlayerCombatEntity.generated.h"


class USyncHandler;
struct FDialogueData;
enum class ECharacterCostume : uint8;
enum class EClassID  : uint8;
class UPartyHealthbarElement;
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerIdentityData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EPartyMembersID characterIdentifier;

	UPROPERTY(EditAnywhere)
	EDialogueActorsLabel DialogueActorsLabel;
	
	UPROPERTY( EditAnywhere )
	EClassID initalClass;

	UPROPERTY(EditAnywhere)
	FEquipmentHandlerData DefaultSpawnEquipmentHandlerData;
	
	UPROPERTY(EditAnywhere)
	FCombatEntityData playerStatGrowths;
	UPROPERTY(EditAnywhere)
	FCombatEntityData playerStatBases;
	
	UPROPERTY( EditAnywhere )
	FString characterName;
	
	UPROPERTY(EditAnywhere)
	ECharacterCostume defaultCostume;
	
	UPROPERTY()
	ECharacterCostume currentCharacterCostume;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* SaveIcon;

	UPROPERTY(EditAnywhere)
	int initialLevel;
	
	UPROPERTY( EditAnywhere )
	bool isGuestCharacter = false;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FPlayerCompleteDataSet
{
	GENERATED_USTRUCT_BODY()
	
	
	UPROPERTY()
	FPlayerIdentityData playerIdentityData;

	UPROPERTY()
	FCompleteClassHandlerData CompleteClassHandlerData;

	UPROPERTY(EditAnywhere)
	FPassiveHandlerData PassiveHandlerData;
	
	UPROPERTY( EditAnywhere )
	FEquipmentHandlerData EquipmentHandlerData;
	
	UPROPERTY(EditAnywhere)
	TArray<ESkillIDS> skillSlots;

	UPROPERTY()
	FHealthData HealthData;
	UPROPERTY()
	FManaData ManaData;

	UPROPERTY()
	FSyncData SyncData;
	
	UPROPERTY()
	float currentSync;

	UPROPERTY()
	EPartySlotType currentPartySlot;
	
	UPROPERTY()
	FCompleteElementalHandlerData CompleteElementalHandlerData;
};

UCLASS()
class DESENTINTOATLANTIS_API UPlayerCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

	UPROPERTY()
	int currentLevel;
public:

	UPROPERTY()
	UClassHandler* classHandler;
	

	UPROPERTY()
	TMap<EClassID,UCombatClass*> unlockedClasses;

	UPROPERTY()
	FPlayerCompleteDataSet playerCompleteDataSet;
	
	UPROPERTY()
	FPlayerIdentityData playerIdentityData;
	UPROPERTY()
	UPartyHealthbarElement* partyHealthbarElement;

	UPROPERTY()
	TArray<UAilment*> activeAilments;

	UPROPERTY()
	FCharacterCostumeData currentCostumeData;
	
	virtual EPartyMembersID GetPartyMemberID(){ return playerIdentityData.characterIdentifier; }
	
	virtual void LoadSavedHPAndMP(FPlayerCompleteDataSet aPlayerCompleteDataSet);
	virtual void SetPlayerEntity(FPlayerIdentityData aPlayerEntityData,FCharacterCostumeData aDialogueCostumeData);
	virtual void SetCombatEntity(USkillFactorySubsystem* aSkillFactory,UPassiveFactorySubsystem* aPassiveSkillFactory,UPersistentGameinstance* aPersistentGameinstance) override;
	virtual void EquipEquipment(UEquipmentPassive* aEquipment, int aSlot);
	virtual void EquipPassive(UPassiveSkills* aPassive, int aSlot);
	virtual void SetEquipmentState(FEquipmentHandlerData aEquipmentHandlerData);
	
	virtual void InitializeAndUnlockCombatClassFromDataTable(FCompleteClassData aCompleteClassData);
	virtual void SetMainClass(EClassID aClass);
	virtual void Reset() override;
	virtual void SetToDefaultState() override;
	virtual FString GetEntityName() override;

	virtual void GiveClassPoints(int aClassPoints);
	virtual void RemoveClassPoints(int aClassPoints);
	virtual int  GetClassPoints();
	virtual void GatherAndSavePlayerCompleteDataSet();

	virtual void SetCurrentCostume(FCharacterCostumeData aCostumeData);
	virtual  FCharacterCostumeData GetCurrentCostumeData() { return currentCostumeData;}
	
	virtual void AddPassive(UPassiveSkills* aPassiveSkills,EPassiveSkillSlotType passiveSkillSlot) override;
	virtual void RemovePassive(UPassiveSkills* aPassiveSkills) override;

	void SetAbilityScores();

	virtual void IncrementMana(int aIncrease) override;
	
	virtual float GetHealthPercentage() override;
	virtual float GetManaPercentage()   override;
	virtual float GetSyncPercentage() override;
	virtual float GetMainClassEXPPercentage();

	virtual int GetCurrentLevel();
	
	virtual void LevelUp(int aNewLevel);
};


