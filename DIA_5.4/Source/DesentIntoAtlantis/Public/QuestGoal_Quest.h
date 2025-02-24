// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestGoal_Base.h"
#include "QuestData.h"
#include "QuestGoal_Quest.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuestGoal_Quest : public UQuestGoal_Base
{
	GENERATED_BODY()


	
	virtual void InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance,FQuestGoalData aQuestGoal) override;
	virtual bool CheckIfGoalWasReached() override;

	UFUNCTION()
	 void UpdateQuestGoal( FQuestData aQuestData);
};
