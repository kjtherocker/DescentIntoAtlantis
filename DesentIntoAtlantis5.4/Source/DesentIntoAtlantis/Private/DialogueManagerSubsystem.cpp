// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueManagerSubsystem.h"

#include "DialogueView.h"
#include "InGameHUD.h"

class UDialogueView;

void UDialogueManagerSubsystem::InitializeDatabase(UDataTable* aDialogueDatabase,UDataTable* aDialogueActorDatabase)
{
	UDataTable* datatable = aDialogueDatabase;
	for(int i = 0 ; i < datatable->GetRowMap().Num(); i ++)
	{
		FDialogueCompleteData DialogueData = *datatable->FindRow<FDialogueCompleteData>(FName(FString::FromInt(i)),FString("Searching for Dialogue"),true);

		dialogueData.Add(DialogueData.DialogueTriggers,DialogueData);
	}

	UDataTable* datatable2 = aDialogueActorDatabase;
	TMap<EDialogueActorsLabel, FAllDialogueActors> tempdialogueActors;
	for(int i = 0 ; i < datatable2->GetRowMap().Num(); i ++)
	{
		FAllDialogueActors actorData = *datatable2->FindRow<FAllDialogueActors>(FName(FString::FromInt(i)),FString("Searching for Actor"),true);

		tempdialogueActors.Add(actorData.dialogueActor,actorData);
	}
	dialogueActors = tempdialogueActors;
}

FDialogueCompleteData UDialogueManagerSubsystem::GetDialogueDataByTrigger(EDialogueTriggers aDialogueData)
{
	return dialogueData[aDialogueData];
}

FAllDialogueActors UDialogueManagerSubsystem::GetDialogueActorDataByLabel(EDialogueActorsLabel aActorData)
{
	return dialogueActors[aActorData];
}

void UDialogueManagerSubsystem::DialogueFinished()
{
	onDialogueEnd.Broadcast();

	onDialogueEnd.Clear();
}

void UDialogueManagerSubsystem::StartDialogue(EDialogueTriggers aDialogueData, AInGameHUD* aInGameHud)
{
	UDialogueView * dialogueView = (UDialogueView*)aInGameHud->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);
	dialogueView->SetDialogueData(aDialogueData);
	dialogueView->onDialogueEnd.AddDynamic(this,&UDialogueManagerSubsystem::DialogueFinished);
}

void UDialogueManagerSubsystem::StartDialogue(EDialogueTriggers aDialogueData, EFloorEventStates aTriggerOnEnd,
                                              FTriggerNextEventStage aTriggerNextEventStage, AFloorManager* aFloorManager , AInGameHUD* aInGameHud)
{
	UDialogueView * dialogueView = (UDialogueView*)aInGameHud->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);

	dialogueView->SetFloorEventDialogueData(aDialogueData, aTriggerOnEnd ,aTriggerNextEventStage,aFloorManager );
}

