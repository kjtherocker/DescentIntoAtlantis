// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGoal_Quest.h"

#include "QuestSubsystem.h"

void UQuestGoal_Quest::InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance, FQuestGoalData aQuestGoal)
{
	Super::InitializeQuestGoal(aPersistentGameinstance, aQuestGoal);

	aPersistentGameinstance->questSubsystem->OnQuestCompleted.AddDynamic(this,&UQuestGoal_Quest::UpdateQuestGoal);
}

bool UQuestGoal_Quest::CheckIfGoalWasReached()
{
	return persistentGameinstance->questSubsystem->isQuestCompleted(questGoalData.PreRequisiteQuests);
}

void UQuestGoal_Quest::UpdateQuestGoal( FQuestData aQuestData)
{
	questGoalData.isComplete = CheckIfGoalWasReached();
}
