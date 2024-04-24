// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueFactorySubsystem.h"

void UDialogueFactorySubsystem::InitializeDatabase(UDataTable* aDialogueDatabase)
{
	UDataTable* datatable = aDialogueDatabase;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		FDialogueData DialogueData = *datatable->FindRow<FDialogueData>(FName(FString::FromInt(i)),FString("Searching for Floors"),true);

		dialogueData.Add(DialogueData);
	}
}

TArray<FDialogueData> UDialogueFactorySubsystem::GetDialogueDataByTrigger(EDialogueTriggers aDialogueData)
{
	TArray<FDialogueData> dialogueDataByTrigger;

	for(int i = 0 ; i < dialogueData.Num();i++)
	{
		if(dialogueData[i].DialogueTriggers == aDialogueData)
		{
			dialogueDataByTrigger.Add(dialogueData[i]);
		}
	}

	return dialogueDataByTrigger;
	
}
