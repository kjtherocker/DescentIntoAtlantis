// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestGoal_Base.h"
#include "QuestGoal_Event.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuestGoal_Event : public UQuestGoal_Base
{
	GENERATED_BODY()


	virtual void InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance,FQuestGoalData aQuestGoal) override;
	UFUNCTION()
	virtual void UpdateQuestGoal(int eventID);
	virtual bool CheckIfGoalWasReached() override;
};
