// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGoal_Event.h"

void UQuestGoal_Event::InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance, FQuestGoalData aQuestGoal)
{
	Super::InitializeQuestGoal(aPersistentGameinstance, aQuestGoal);
	aPersistentGameinstance->EventManagerSubSystem->EventHasFinished.AddDynamic(this,&UQuestGoal_Event::OnEventFinished);

	if(aQuestGoal.isComplete)
	{
		QuestGoalComplete();
	}
}

void UQuestGoal_Event::OnEventFinished(int eventID)
{
	Super::UpdateQuestGoal();

	if(questGoalData.GoalID == eventID)
	{
		questGoalData.isComplete = true;
		QuestGoalComplete();
	}

	questGoalData.isComplete = CheckIfGoalWasReached();

	if(questGoalData.isComplete)
	{
		QuestGoalComplete();
	}
	
}

bool UQuestGoal_Event::CheckIfGoalWasReached()
{
	return persistentGameinstance->EventManagerSubSystem->isEventCompleted(questGoalData.GoalID);
}
