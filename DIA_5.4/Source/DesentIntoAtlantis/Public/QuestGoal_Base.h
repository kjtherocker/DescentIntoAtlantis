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
UCLASS()
class DESENTINTOATLANTIS_API UQuestGoal_Base : public UObject
{
	GENERATED_BODY()


protected:

	UPROPERTY()
	UPersistentGameinstance* persistentGameinstance;

	FQuestGoalData questGoalData;
	
public:

	virtual void InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance,FQuestGoalData aQuestGoal);

	virtual void UpdateQuestGoal();
	virtual bool CheckIfGoalWasReached();
	virtual bool GetCompletionStatus(){ return questGoalData.isComplete;}
	virtual FQuestGoalData ReturnQuestGoalData(){return questGoalData;}
	
};
