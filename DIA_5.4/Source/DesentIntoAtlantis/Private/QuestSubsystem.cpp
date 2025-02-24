// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSubsystem.h"

#include "PartyManagerSubsystem.h"
#include "PersistentGameinstance.h"

void UQuestSubsystem::InitializeSubsystem(UDataTable* aQuestTable,UPersistentGameinstance* aPersistentGameinstance)
{
	persistentGameinstance = aPersistentGameinstance;

	eventManagerSubSystem = persistentGameinstance->EventManagerSubSystem;
	partyManagerSubsystem = persistentGameinstance->partyManagerSubsystem;

	
	UDataTable* questDataTable = aQuestTable;
	
	if(questDataTable)
	{
		for (auto Element : questDataTable->GetRowNames())
		{
			FQuestData skillData = *questDataTable->FindRow<FQuestData>(FName(Element),FString("Searching for Skills"),true);
			
			allQuestData.Add(skillData.QuestID,skillData);
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}
}

void UQuestSubsystem::SetLoadedQuestSubsystemCompleteData(FQuestSubsystemCompleteData aQuestCompleteData)
{
	for (auto Element : aQuestCompleteData.currentQuestInfo.activeQuest)
	{
		if(!allQuestData.Contains(Element.QuestID))
		{
			continue;
		}
		FQuestData RawQuestData = allQuestData[Element.QuestID];

		RawQuestData.isComplete        = Element.isComplete;
		RawQuestData.currentQuestStage = Element.currentQuestStage;

		for (int i = 0; i < Element.QuestStageDatas.Num();i++)
		{
			FQuestStageData RawQuestStageGoals = RawQuestData.QuestStageDatas[i];
			FQuestStageData SavedStageGoals    = Element.QuestStageDatas[i];
			RawQuestStageGoals.isComplete      = Element.QuestStageDatas[i].isComplete;
			
			for(int j = 0; j < Element.QuestStageDatas[i].QuestGoals.Num();j++)
			{
				RawQuestStageGoals.QuestGoals[j].isComplete = SavedStageGoals.QuestGoals[j].isComplete;
			}
		}
		
		Element = RawQuestData;
	}
	
	questCompleteData = aQuestCompleteData;
}

bool UQuestSubsystem::ValidateQuestRequirements(FQuestData aQuestData)
{
	for (auto Element : aQuestData.QuestPreRequisitesData.PreRequisiteEvents)
	{
		if(!eventManagerSubSystem->isEventCompleted(Element))
		{
			return false;
		}
	}

	for (auto Element : aQuestData.QuestPreRequisitesData.PreRequisiteQuests)
	{
		if(!isQuestCompleted(Element))
		{
			return false;
		}
	}

	return true;
}

void UQuestSubsystem::StartQuest(int32 aQuestID)
{
	FQuestData QuestData = allQuestData[aQuestID];


	if(!ValidateQuestRequirements(QuestData))
	{
		return;
	}
	
	
	questCompleteData.currentQuestInfo.activeQuest.Add(QuestData);

	if(QuestData.questType == EQuestType::MainQuest
		&& questCompleteData.currentQuestInfo.currentMainQuest.questType == EQuestType::None)
	{
		questCompleteData.currentQuestInfo.currentMainQuest = QuestData;
	}

	AllActiveQuests.Add(CreateQuest(QuestData));

	OnQuestStart.Broadcast(QuestData);
}

bool UQuestSubsystem::isQuestCompleted(int32 aQuestID)
{
	return questCompleteData.completedQuest.Contains(aQuestID);
}

void UQuestSubsystem::QuestCompleted(int aQuestID, FQuestData aQuestData)
{

	MarkQuestAsCompleted( aQuestID);
}

void UQuestSubsystem::MarkQuestAsCompleted(int32 aQuestID)
{
	FQuestData completedQuest = allQuestData[aQuestID];
	
	questCompleteData.completedQuest.Add(aQuestID,completedQuest);
	GiveQuestReward(completedQuest.questReward);
}

void UQuestSubsystem::ValidateQuestStage()
{
}

UQuest_Base* UQuestSubsystem::CreateQuest(FQuestData aQuestData)
{
	EQuestType questType = aQuestData.questType;

	UQuest_Base* Quest_Base = nullptr;
	
	switch (questType)
	{
	case EQuestType::None:
		break;
	case EQuestType::MainQuest:
		Quest_Base = NewObject<UQuest_Base>();
		break;
	case EQuestType::SideQuest:
		Quest_Base = NewObject<UQuest_Base>();
		break;
	case EQuestType::GodQuest:
		Quest_Base = NewObject<UQuest_Base>();
		break;
	}


	if(Quest_Base != nullptr)
	{
		Quest_Base->OnQuestCompletetion.AddDynamic(this,&UQuestSubsystem::QuestCompleted);
		Quest_Base->InitializeQuest(persistentGameinstance);
		Quest_Base->SetQuest(aQuestData);
	}

	return Quest_Base;
}

FQuestData UQuestSubsystem::GetActiveQuestData(int aQuestID)
{
	for (auto Element : 	questCompleteData.currentQuestInfo.activeQuest)
	{
		if(Element.QuestID == aQuestID)
		{
			return Element;
		}
	}

	FQuestData empty = {};
	return empty;
}

FQuestStageData UQuestSubsystem::GetCurrentQuestStage(int aQuestID)
{
	FQuestData quest = GetActiveQuestData(aQuestID);

	if(quest.QuestID == 10000)
	{
		FQuestStageData empty;
		return empty;
	}
	
	FQuestStageData questStage = quest.QuestStageDatas[quest.currentQuestStage];
	return questStage;
}

void UQuestSubsystem::GiveQuestReward(FRewardsData aRewardData)
{
	partyManagerSubsystem->RewardParty(aRewardData);
}
