// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGoal_Base.h"

void UQuestGoal_Base::InitializeQuestGoal(UPersistentGameinstance* aPersistentGameinstance,FQuestGoalData aQuestGoal)
{
	persistentGameinstance = aPersistentGameinstance;
	questGoalData          = aQuestGoal;
}

void UQuestGoal_Base::UpdateQuestGoal()
{
}

bool UQuestGoal_Base::CheckIfGoalWasReached()
{
	return true;
}

void UQuestGoal_Base::QuestGoalComplete()
{
	OnQuestGoalCompletetion.Broadcast();
}
