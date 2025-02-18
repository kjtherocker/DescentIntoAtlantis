// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueManagerSubsystem.h"

#include "DialogueView.h"
#include "InGameHUD.h"

class UDialogueView;

void UDialogueManagerSubsystem::InitializeDatabase(UDataTable* aDialogueDatabase,UDataTable* aDialogueActorDatabase)
{
	UDataTable* datatable = aDialogueDatabase;

	if(datatable)
	{
		for (auto Element : datatable->GetRowNames())
		{
			FDialogueCompleteData DialogueData = *datatable->FindRow<FDialogueCompleteData>(FName(Element),FString("Searching for Dialogue"),true);


			dialogueData.Add(DialogueData.DialogueTriggers,DialogueData);
		}
	}

	UDataTable* datatable2 = aDialogueActorDatabase;
	TMap<EDialogueActorsLabel, FPortaitActorData> tempdialogueActors;

	if(datatable2)
	{
		for (auto Element : datatable2->GetRowNames())
		{
			FPortaitActorData actorData = *datatable2->FindRow<FPortaitActorData>(FName(Element),FString("Searching for Actor"),true);

			tempdialogueActors.Add(actorData.dialogueActor,actorData);
		}
	}
		
	dialogueActors = tempdialogueActors;
}

FDialogueCompleteData UDialogueManagerSubsystem::GetDialogueDataByTrigger(EDialogueTriggers aDialogueData)
{
	return dialogueData[aDialogueData];
}

FPortaitActorData UDialogueManagerSubsystem::GetDialogueDataByLabel(EDialogueActorsLabel aActorData)
{
	if(dialogueActors.Contains(aActorData))
	{
		return dialogueActors[aActorData];		
	}
	else
	{
		FPortaitActorData portraitActorData;
		return portraitActorData;
	}

}

FCharacterCostumeData UDialogueManagerSubsystem::GetCostumeData(EDialogueActorsLabel aActorData,
	ECharacterCostume aCharacterCostume)
{
	FPortaitActorData PortraitActorData = GetDialogueDataByLabel(aActorData);

	if(!PortraitActorData.CharacterData.CostumeData.Contains(aCharacterCostume))
	{
		return PortraitActorData.CharacterData.CostumeData[ECharacterCostume::DefaultOutFit];
	}
	
	return PortraitActorData.CharacterData.CostumeData[aCharacterCostume];
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

void UDialogueManagerSubsystem::StartDialogue(EDialogueTriggers aDialogueData,
                                              FTriggerNextEventStage aTriggerNextEventStage, AFloorManager* aFloorManager , AInGameHUD* aInGameHud)
{
	UDialogueView * dialogueView = (UDialogueView*)aInGameHud->PushAndGetView(EViews::Dialogue,EUiType::ActiveUi);

	dialogueView->SetFloorEventDialogueData(aDialogueData ,aTriggerNextEventStage,aFloorManager );
}

