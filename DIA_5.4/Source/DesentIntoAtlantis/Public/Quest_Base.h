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
	FOnQuestCompletetion OnQuestCompletetion;

	void InitializeQuest(UPersistentGameinstance* aPersistantGameInstance);
	
	void SetQuest(FQuestData aQuestData);

	void CreateAllQuestGoalsOfStage(FQuestStageData aQuestStageData);
	
	void StartQuest();
	void SetQuestStage(FQuestStageData aQuestStageData);
	void QuestStageFinished();
	void QuestFinshed();
	UFUNCTION()
	void CheckAllQuestGoals();
	FQuestStageData GetCurrentQuestStage();

	UQuestGoal_Base* CreateNewQuestGoal(FQuestGoalData aQuestGoalData);
};
