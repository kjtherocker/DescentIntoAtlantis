// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest_Base.h"
#include "QuestData.h"
#include "QuestGoal_Event.h"
#include "QuestGoal_Quest.h"

void UQuest_Base::InitializeQuest(UPersistentGameinstance* aPersistantGameInstance)
{
	persistentGameinstance = aPersistantGameInstance;
}

void UQuest_Base::SetQuest(FQuestData aQuestData)
{
	questData = aQuestData;
	SetQuestStage(GetCurrentQuestStage());
}

void UQuest_Base::CreateAllQuestGoalsOfStage(FQuestStageData aQuestStageData)
{
	TArray<FQuestGoalData> allQuestGoals = aQuestStageData.QuestGoals;

	for(int i = 0 ; i < allQuestGoals.Num();i++)
	{
		UQuestGoal_Base* newQuestGoal = CreateNewQuestGoal(allQuestGoals[i]);
		if(newQuestGoal != nullptr)
		{
			QuestGoals.Add(newQuestGoal);
		}
	}
}

void UQuest_Base::StartQuest()
{
	SetQuestStage(GetCurrentQuestStage());
}

FQuestData UQuest_Base::SaveAndReturn()
{
	UpdateQuestGoals();

	return questData;
	
}

void UQuest_Base::SetQuestStage(FQuestStageData aQuestStageData)
{
	QuestStageData = aQuestStageData;
	CreateAllQuestGoalsOfStage(QuestStageData);
	CheckAllQuestGoals();
}

void UQuest_Base::QuestStageFinished()
{
	QuestGoals.Empty();
	
	questData.currentQuestStage++;
	int currentQuestStage = questData.currentQuestStage;

	if(currentQuestStage >= questData.QuestStageDatas.Num() )
	{
		QuestFinshed();
		return;
	}

	SetQuestStage(questData.QuestStageDatas[currentQuestStage]);
}

void UQuest_Base::QuestFinshed()
{
	OnQuestCompletetion.Broadcast(questData.QuestID,questData);
}

void UQuest_Base::CheckAllQuestGoals()
{
	UpdateQuestGoals();
	int completedGoals = 0;
	for (int i = QuestGoals.Num() - 1; i >= 0; i--)
	{
		if(QuestGoals[i]->GetCompletionStatus())
		{
			completedGoals++;
		}
	}
	
	if(QuestGoals.Num() == completedGoals)
	{
		QuestStageFinished();
	}

	onQuestChange.Broadcast(questData.QuestID,questData);
}

void UQuest_Base::UpdateQuestGoals()
{
	for (int i = QuestGoals.Num() - 1; i >= 0; i--)
	{
		questData.QuestStageDatas[questData.currentQuestStage].QuestGoals[i] = QuestGoals[i]->ReturnQuestGoalData();
	}
}

FQuestStageData UQuest_Base::GetCurrentQuestStage()
{
	int currentQuestStage = questData.currentQuestStage;

	if(currentQuestStage >= questData.QuestStageDatas.Num() )
	{
		FQuestStageData Empty;
		return Empty;
	}
	
	return questData.QuestStageDatas[currentQuestStage];
}

UQuestGoal_Base* UQuest_Base::CreateNewQuestGoal(FQuestGoalData aQuestGoalData)
{
	if(aQuestGoalData.isComplete)
	{
		return nullptr;
	}
	
	EQuestGoal questGoal = aQuestGoalData.QuestGoal;

	UQuestGoal_Base* QuestGoal = nullptr;
	
	switch (questGoal)
	{
	case EQuestGoal::None:
		break;
	case EQuestGoal::Event:
		QuestGoal = NewObject<UQuestGoal_Event>();
		break;
	case EQuestGoal::Kill:
		break;
	case EQuestGoal::Quest:
		QuestGoal = NewObject<UQuestGoal_Quest>();
		break;
	}


	if(QuestGoal != nullptr)
	{
		QuestGoal->OnQuestGoalCompletetion.AddDynamic(this,&UQuest_Base::CheckAllQuestGoals);
		QuestGoal->InitializeQuestGoal(persistentGameinstance,aQuestGoalData);
	}

	return QuestGoal;
	
}
