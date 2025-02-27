// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest_Goal_Element.h"

void UQuest_Goal_Element::SetQuestGoalElement(FQuestGoalData aQuestGoalData)
{
	questGoalData = aQuestGoalData;
	SetText(BW_GoalDescription,questGoalData.questGoalDescription);

	if(aQuestGoalData.isComplete)
	{
		BW_CompletedICon->SetOpacity(0);
	}
	else
	{
		BW_CompletedICon->SetOpacity(1);
	}
}
