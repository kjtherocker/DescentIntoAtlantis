// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest_Base.h"

void UQuest_Base::SetQuest(FQuestData aQuestData)
{
	questData = aQuestData;
}

void UQuest_Base::StartQuest()
{
	QuestStageData = questData.QuestStageDatas[0];
}

void UQuest_Base::StartQuestStage(FQuestStageData aQuestStageData)
{
	
}

void UQuest_Base::QuestStageFinished()
{
}

void UQuest_Base::CheckAllQuestGoals()
{
	TArray<FQuestGoalData,bool> questCompletetionStatus;

	bool hasAllQuestGoalsBeenComplete = true;
	for (auto Element : QuestGoals)
	{
		Element->UpdateQuestGoal();
		Element->GetCompletionStatus();

		questCompletetionStatus.Add(Element->ReturnQuestGoalData(),Element->GetCompletionStatus());

		if(!Element->GetCompletionStatus())
		{
			hasAllQuestGoalsBeenComplete = false;
		}
	}


	if(hasAllQuestGoalsBeenComplete)
	{
		QuestStageFinished();
	}
}
