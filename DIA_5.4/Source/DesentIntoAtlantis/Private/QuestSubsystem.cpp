// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSubsystem.h"

void UQuestSubsystem::InitializeSubsystem(UDataTable* aQuestTable)
{
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

void UQuestSubsystem::CompleteQuest(int32 aQuestID)
{
	FQuestData completedQuest = allQuestData[aQuestID];
	questCompleteData.completedQuest.Add(aQuestID,completedQuest);
	questCompleteData.activeQuest.activeQuest.Remove(completedQuest);
}
