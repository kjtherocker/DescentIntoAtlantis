// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGoal_Event.h"

void UQuestGoal_Event::InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance, FQuestGoalData aQuestGoal)
{
	Super::InitializeQuestGoal(aPersistentGameinstance, aQuestGoal);
	
}

void UQuestGoal_Event::UpdateQuestGoal()
{
	Super::UpdateQuestGoal();

	questGoalData.isComplete = CheckIfGoalWasReached();
}

bool UQuestGoal_Event::CheckIfGoalWasReached()
{
	return persistentGameinstance->EventManagerSubSystem->isEventCompleted(questGoalData.PreRequisiteEvents);
}
