// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGoal_Event.h"

void UQuestGoal_Event::InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance, FQuestGoalData aQuestGoal)
{
	Super::InitializeQuestGoal(aPersistentGameinstance, aQuestGoal);
	aPersistentGameinstance->EventManagerSubSystem->EventHasFinished.AddDynamic(this,&UQuestGoal_Event::UpdateQuestGoal);
}

void UQuestGoal_Event::UpdateQuestGoal(int eventID)
{
	Super::UpdateQuestGoal();

	questGoalData.isComplete = CheckIfGoalWasReached();

	if(questGoalData.isComplete)
	{
		QuestGoalComplete();
	}
}

bool UQuestGoal_Event::CheckIfGoalWasReached()
{
	return persistentGameinstance->EventManagerSubSystem->isEventCompleted(questGoalData.PreRequisiteEvents);
}
