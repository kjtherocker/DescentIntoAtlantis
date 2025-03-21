// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestData.h"
#include "QuestGoal_Base.h"
#include "UObject/NoExportTypes.h"
#include "Quest_Base.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestCompletetion,int, QuestID,FQuestData,QuestData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestChange, int, questID ,FQuestData, questData);

UCLASS()
class DESENTINTOATLANTIS_API UQuest_Base : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
	FQuestData questData;

	UPROPERTY()
	int questStageIndex;

	UPROPERTY()
	FQuestStageData QuestStageData;

	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;
	
	UPROPERTY()
	TArray<UQuestGoal_Base*> QuestGoals;


	
public:

	UPROPERTY()
	FOnQuestChange onQuestChange;
	
	UPROPERTY()
	FOnQuestCompletetion OnQuestCompletetion;

	void InitializeQuest(UPersistentGameinstance* aPersistantGameInstance);
	
	void SetQuest(FQuestData aQuestData);

	void CreateAllQuestGoalsOfStage(FQuestStageData aQuestStageData);
	
	void StartQuest();

	FQuestData SaveAndReturn();

	void SetQuestStage(FQuestStageData aQuestStageData);
	void QuestStageFinished();
	void QuestFinshed();
	UFUNCTION()
	void CheckAllQuestGoals();

	void UpdateQuestGoals();
	FQuestStageData GetCurrentQuestStage();

	FQuestData GetQuestData(){ return questData;};
	int32 GetQuestID(){return questData.QuestID;}
	UQuestGoal_Base* CreateNewQuestGoal(FQuestGoalData aQuestGoalData);
};
