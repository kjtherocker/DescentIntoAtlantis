// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest_Base.h"

void UQuest_Base::SetQuest(FQuestData aQuestData)
{
	questData = aQuestData;
}

void UQuest_Base::StartQuest()
{
	QuestStageData = questData.QuestStageDatas[0];
	SetQuestStage(QuestStageData);
}

void UQuest_Base::SetQuestStage(FQuestStageData aQuestStageData)
{
	QuestStageData = aQuestStageData;
}

void UQuest_Base::QuestStageFinished()
{
	int currentQuestStage = questData.currentQuestStage++;

	if(currentQuestStage >= questData.QuestStageDatas.Num() )
	{
		QuestFinshed();
	}

	SetQuestStage(questData.QuestStageDatas[currentQuestStage]);
}

void UQuest_Base::QuestFinshed()
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
