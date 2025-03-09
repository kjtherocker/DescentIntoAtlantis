// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PersistentGameinstance.h"
#include "QuestData.h"
#include "UObject/NoExportTypes.h"
#include "QuestGoal_Base.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQuestGoalCompletetion);
UCLASS()
class DESENTINTOATLANTIS_API UQuestGoal_Base : public UObject
{
	GENERATED_BODY()


protected:

	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;

	FQuestGoalData questGoalData;
	
public:

	UPROPERTY()
	FOnQuestGoalCompletetion OnQuestGoalCompletetion;
	
	virtual void InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance,FQuestGoalData aQuestGoal);

	virtual void UpdateQuestGoal();
	virtual bool CheckIfGoalWasReached();
	virtual void QuestGoalComplete();
	
	virtual bool GetCompletionStatus(){ return questGoalData.isComplete;}
	virtual FQuestGoalData ReturnQuestGoalData();
	
};
