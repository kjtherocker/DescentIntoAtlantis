// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "QuestData.h"
#include "Quest_Base.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestSubsystem.generated.h"

/**
 * 
 */


class UEventManagerSubSystem;
class UPartyManagerSubsystem;
class UPersistentGameinstance;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestStart, FQuestData, questData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestCompleted, FQuestData, questData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestSubsystemHasChanged,FQuestSubsystemCompleteData,QuestSubsystemCompleteData);

UCLASS()
class DESENTINTOATLANTIS_API UQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
private:
	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;

	UPROPERTY()
	UEventManagerSubSystem* eventManagerSubSystem;

	UPROPERTY()
	UPartyManagerSubsystem* partyManagerSubsystem;
	
	UPROPERTY()
	FQuestSubsystemCompleteData questCompleteData;

	UPROPERTY()
	TMap<int,FQuestData> allQuestData;

	UPROPERTY()
	TArray<FQuestData> activeQuests;

	UPROPERTY()
	FQuestData currentHighlightQuest;

	UPROPERTY()
	FQuestData currentMainQuest;
	
public:

	UPROPERTY()
	FQuestSubsystemHasChanged QuestSubsystemHasChanged;
	
	UPROPERTY()
	TMap<int32,UQuest_Base*> AllActiveQuests;
	
	UPROPERTY()
	FOnQuestStart OnQuestStart;
	UPROPERTY()
	FOnQuestCompleted OnQuestCompleted;
	
	void InitializeSubsystem(UDataTable* aQuestTable,UPersistentGameinstance* aPersistentGameinstance);

	void SetLoadedQuestSubsystemCompleteData(FQuestSubsystemCompleteData aQuestCompleteData);

	bool ValidateQuestRequirements(FQuestData aQuestData);
	void StartQuest(int32 aQuestID);

	void CreateAllSavedActiveQuests();
	void SaveQuestSubsystem();
	
	bool isQuestCompleted(int32 aQuestID);

	UFUNCTION()
	void QuestCompleted(int aQuestID,FQuestData aQuestData);
	
	void MarkQuestAsCompleted(int32 aQuestID);

	void ValidateQuestStage();

	UQuest_Base* CreateQuest(FQuestData aQuestData);

	FQuestData      GetActiveQuestData(int aQuestID);
	FQuestStageData GetCurrentQuestStage(int aQuestID);
	
	void GiveQuestReward(FRewardsData aRewardData);
	FQuestSubsystemCompleteData GetQuestCompleteData(){return questCompleteData;}
};
