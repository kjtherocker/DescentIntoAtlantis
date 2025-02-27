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
	AllActiveQuestsObjects.Empty();
	for (auto Element : aQuestCompleteData.currentQuestInfo.activeQuest)
	{
		FQuestData questData = Element.Value;
		if(!allQuestData.Contains(questData.QuestID))
		{
			continue;
		}
		FQuestData RawQuestData = allQuestData[questData.QuestID];

		RawQuestData.isComplete        = questData.isComplete;
		RawQuestData.currentQuestStage = questData.currentQuestStage;

		for (int i = 0; i < questData.QuestStageDatas.Num();i++)
		{
			FQuestStageData RawQuestStageGoals = RawQuestData.QuestStageDatas[i];
			FQuestStageData SavedStageGoals    = questData.QuestStageDatas[i];
			RawQuestStageGoals.isComplete      = questData.QuestStageDatas[i].isComplete;
			
			for(int j = 0; j < questData.QuestStageDatas[i].QuestGoals.Num();j++)
			{
				RawQuestStageGoals.QuestGoals[j].isComplete = SavedStageGoals.QuestGoals[j].isComplete;
			}
		}
		
		aQuestCompleteData.currentQuestInfo.activeQuest[Element.Key] = RawQuestData;
	}

	for (auto Element : aQuestCompleteData.completedQuest)
	{
		FQuestData questData = Element.Value;
		if(!allQuestData.Contains(questData.QuestID))
		{
			continue;
		}
		FQuestData RawQuestData = allQuestData[questData.QuestID];

		RawQuestData.isComplete        = questData.isComplete;
		RawQuestData.currentQuestStage = questData.currentQuestStage;

		for (int i = 0; i < questData.QuestStageDatas.Num();i++)
		{
			FQuestStageData RawQuestStageGoals = RawQuestData.QuestStageDatas[i];
			FQuestStageData SavedStageGoals    = questData.QuestStageDatas[i];
			RawQuestStageGoals.isComplete      = questData.QuestStageDatas[i].isComplete;
			
			for(int j = 0; j < questData.QuestStageDatas[i].QuestGoals.Num();j++)
			{
				RawQuestStageGoals.QuestGoals[j].isComplete = SavedStageGoals.QuestGoals[j].isComplete;
			}
		}
		
		aQuestCompleteData.completedQuest[Element.Key] = RawQuestData;
	}

	aQuestCompleteData.currentQuestInfo.currentMainQuest =
		aQuestCompleteData.currentQuestInfo.activeQuest[aQuestCompleteData.currentQuestInfo.currentMainQuest.QuestID];
	
	questCompleteData = aQuestCompleteData;
	CreateAllSavedActiveQuests();
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
	
	
	questCompleteData.currentQuestInfo.activeQuest.Add(aQuestID,QuestData);

	if(QuestData.questType == EQuestType::MainQuest
		&& questCompleteData.currentQuestInfo.currentMainQuest.QuestID == INVALID_QUEST_ID)
	{
		questCompleteData.currentQuestInfo.currentMainQuest = QuestData;
	}

	AllActiveQuestsObjects.Add(aQuestID,CreateQuest(QuestData));

	OnQuestStart.Broadcast(QuestData);
	SaveQuestSubsystem();
}

void UQuestSubsystem::CreateAllSavedActiveQuests()
{
	for (auto QuestData : questCompleteData.currentQuestInfo.activeQuest)
	{
		UQuest_Base* quest = CreateQuest(QuestData.Value);
		AllActiveQuestsObjects.Add(quest->GetQuestID(),quest);
	}
}

void UQuestSubsystem::SaveQuestSubsystem()
{
	questCompleteData.currentQuestInfo.activeQuest.Empty();
	for (auto Element : AllActiveQuestsObjects)
	{
		questCompleteData.currentQuestInfo.activeQuest.Add( Element.Key,Element.Value->SaveAndReturn());
	}

	QuestSubsystemHasChanged.Broadcast(questCompleteData);
}

bool UQuestSubsystem::isQuestCompleted(int32 aQuestID)
{
	return questCompleteData.completedQuest.Contains(aQuestID);
}

void UQuestSubsystem::QuestUpdated(int aQuestID, FQuestData aQuestData)
{
	FQuestData QuestData = aQuestData;
	
	onQuestUpdated.Broadcast(QuestData);
}

void UQuestSubsystem::QuestCompleted(int aQuestID, FQuestData aQuestData)
{

	MarkQuestAsCompleted( aQuestID);
}

void UQuestSubsystem::MarkQuestAsCompleted(int32 aQuestID)
{
	if( questCompleteData.currentQuestInfo.currentMainQuest.QuestID == aQuestID)
	{
		 questCompleteData.currentQuestInfo.currentMainQuest.QuestID = INVALID_QUEST_ID;
	}

	
	FQuestData completedQuest = allQuestData[aQuestID];

	completedQuest.isComplete = true;
	questCompleteData.completedQuest.Add(aQuestID,completedQuest);
	questCompleteData.currentQuestInfo.activeQuest.Remove(aQuestID);
	AllActiveQuestsObjects.Remove(aQuestID);
	
	SaveQuestSubsystem();

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

FQuestData UQuestSubsystem::GetCurrentMainQuest()
{
	return  AllActiveQuestsObjects[questCompleteData.currentQuestInfo.currentMainQuest.QuestID]->GetQuestData();
}

FQuestData UQuestSubsystem::GetActiveQuestData(int aQuestID)
{
	for (auto Element : 	questCompleteData.currentQuestInfo.activeQuest)
	{
		if(Element.Value.QuestID == aQuestID)
		{
			return Element.Value;
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
