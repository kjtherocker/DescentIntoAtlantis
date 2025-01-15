// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueView.h"

#include "DialogueFactorySubsystem.h"
#include "EventManagerSubSystem.h"
#include "PersistentGameinstance.h"
#include "SoundManager.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


void UDialogueView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UDialogueView::ActivateNextDialogue);
	InputComponent->BindAction("Tab"  ,IE_Pressed ,this, &UDialogueView::DialogueFinished);

	persistentGameinstance = Cast<UPersistentGameinstance>( GetGameInstance());
}

void UDialogueView::SetFloorEventDialogueData(EDialogueTriggers aDialogueData, EFloorEventStates aTriggerOnEnd,
	FTriggerNextEventStage aTriggerNextEventStage, AFloorManager* aFloorManager)
{
	currentDialogueCompleteData           = persistentGameinstance->dialogueManagerSubsystem->GetDialogueDataByTrigger(aDialogueData);
	dialogueData                          = currentDialogueCompleteData.DialogueData;
	
	TArray<FDialogueActorData>
	dialogueActorData                     = currentDialogueCompleteData.AllActorsInDialogue;
	
	for(int i = 0 ; i < dialogueActorData.Num();i++)
	{
		EDialogueActorsLabel dialogueActor = dialogueActorData[i].dialogueActor;
		TSubclassOf<AActor> newActor = persistentGameinstance->dialogueManagerSubsystem->GetDialogueActorDataByLabel(dialogueActor).actorReference;
		aFloorManager->SpawnCutsceneFloorPawn(dialogueActorData[i],newActor);
	
	}
	floorManager = aFloorManager;
	
	triggerOnEnd          = aTriggerOnEnd;
	triggerNextEventStage = aTriggerNextEventStage;
	
	SetNextDialogue(false);
}

void UDialogueView::SetDialogueData(EDialogueTriggers aDialogueData)
{
	reactivatePawnInputOnEnd = true;
	dialogueData             =  persistentGameinstance->dialogueManagerSubsystem->GetDialogueDataByTrigger(aDialogueData).DialogueData;
	SetNextDialogue(false);
}


void UDialogueView::ActivateNextDialogue()
{
	SetNextDialogue(true);
}

void UDialogueView::SetNextDialogue(bool audio)
{
	if(dialogueData.Num() == 0)
	{
		DialogueFinished();
		return;
	}
	
	FDialogueData nextDialogueData = dialogueData[0];
	dialogueData.RemoveAt(0);

	BW_Name->SetText(FText(FText::FromString(nextDialogueData.SpeakerName)));
	BW_DialogueText->SetText(FText(FText::FromString(nextDialogueData.Dialogue)));
	
	SetDialogueImages(nextDialogueData.LeftPortrait, BW_LeftCharacterPortrait);
	SetDialogueImages(nextDialogueData.CenterPortrait,BW_CenterCharacterPortrait);
	SetDialogueImages(nextDialogueData.RightPortrait,BW_RightCharacterPortrait);
	SetDialogueImages(nextDialogueData.BackgroundCG, BW_BackgroundCG);

	if(floorManager != nullptr)
	{
		TArray<FDialogueActorData> dialogueActors = nextDialogueData.dialogueActor;
		for(int i = 0 ; i < dialogueActors.Num();i++)
		{
			floorManager->MoveCutscenePawnToLocation(dialogueActors[i]);	
		}
	}
	
	if(audio)
	{
	//	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldSoundEffect,EAudio::Accept);
	}

	if(nextDialogueData.musicToPlay != EAudio::None)
	{
		gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldMusic,nextDialogueData.musicToPlay );
	}
}

void UDialogueView::SetDialogueImages(UTexture2D* aPortraitTexture, UImage* aPortraitImage)
{
	float portraitOpacity = aPortraitTexture == nullptr ? NO_OPACITY:MAX_OPACITY;
	aPortraitImage->SetOpacity(portraitOpacity);
	if( aPortraitTexture != nullptr)
	{
		aPortraitImage->SetBrushFromTexture(aPortraitTexture);
	}
}

void UDialogueView::SpawnActor(EDialogueActorsLabel aActorLabel, TSubclassOf<AActor> aActorToSpawn)
{
	
		//FVector PositionOffset = FVector(0,0,SPAWNED_OBJECT_OFFSET);
//
		//FVector ActorFinalSpawnPoint = GetNode(aCompleteFloorPawnData.completeFloorPawnData.currentNodePositionInGrid)->GetActorLocation() + PositionOffset;
	FVector ActorFinalSpawnPoint = FVector(-1,-1,-1);
		//Rotation
	FRotator rotator = FRotator::ZeroRotator;
	
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		//ActorSpawnParameters.Owner = this;

		//int startPositionIndex = currentFloor->GetIndex( aCompleteFloorPawnData.completeFloorPawnData.currentNodePositionInGrid.X,
		//	aCompleteFloorPawnData.completeFloorPawnData.currentNodePositionInGrid.Y) ;
	
	AFloorPawn* floorPawn = Cast<AFloorPawn>(GetWorld()->SpawnActor<AActor>(aActorToSpawn, ActorFinalSpawnPoint, rotator,ActorSpawnParameters));
	floorPawn->Initialize();
	spawnedActors.Add(aActorLabel,floorPawn);

}

void UDialogueView::DialogueFinished()
{
	InGameHUD->PopMostRecentActiveView();
	if(reactivatePawnInputOnEnd)
	{
		gameModeBase->floorPawn->SetFloorPawnInput(true);
	}
	
	if(triggerOnEnd != EFloorEventStates::None)
	{
		triggerNextEventStage.Broadcast(triggerOnEnd);
	}
}

