// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueFactorySubsystem.h"

void UDialogueFactorySubsystem::InitializeDatabase(UDataTable* aDialogueDatabase,UDataTable* aDialogueActorDatabase)
{
	UDataTable* datatable = aDialogueDatabase;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		FDialogueCompleteData DialogueData = *datatable->FindRow<FDialogueCompleteData>(FName(FString::FromInt(i)),FString("Searching for Dialogue"),true);

		dialogueData.Add(DialogueData.DialogueTriggers,DialogueData);
	}

	UDataTable* datatable2 = aDialogueActorDatabase;
	TMap<EDialogueActors, FAllDialogueActors> tempdialogueActors;
	for(int i = 0 ; i < datatable2->GetRowMap().Num(); i ++)
	{
		FAllDialogueActors actorData = *datatable2->FindRow<FAllDialogueActors>(FName(FString::FromInt(i)),FString("Searching for Actor"),true);

		tempdialogueActors.Add(actorData.dialogueActor,actorData);
	}
	dialogueActors = tempdialogueActors;
}

FDialogueCompleteData UDialogueFactorySubsystem::GetDialogueDataByTrigger(EDialogueTriggers aDialogueData)
{
	return dialogueData[aDialogueData];
}

FAllDialogueActors UDialogueFactorySubsystem::GetDialogueActorDataByLabel(EDialogueActors aActorData)
{
	return dialogueActors[aActorData];
}
