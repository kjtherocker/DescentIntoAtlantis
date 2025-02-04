// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueView.h"

#include "DialogueManagerSubsystem.h"
#include "EventManagerSubSystem.h"
#include "PersistentGameinstance.h"
#include "SoundManager.h"
#include "Components/Image.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


void UDialogueView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UDialogueView::ActivateNextDialogue);
	InputComponent->BindAction("Tab"  ,IE_Pressed ,this, &UDialogueView::DialogueFinished);

	DialoguePortraitImages.Add(EDialoguePortraitPositions::Left,BW_LeftCharacterPortrait);
	DialoguePortraitImages.Add(EDialoguePortraitPositions::Center,BW_CenterCharacterPortrait);
	DialoguePortraitImages.Add(EDialoguePortraitPositions::Right,BW_RightCharacterPortrait);
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
		TSubclassOf<AActor> newActor = persistentGameinstance->dialogueManagerSubsystem->GetDialogueDataByLabel(dialogueActor).actorReference[ECharacterCostume::DefaultOutFit];
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
	
	FCutsceneData nextDialogueData = dialogueData[0];
	dialogueData.RemoveAt(0);

	ELanguages currentLanguage = ELanguages::English;
	
	if(nextDialogueData.dialogueData.Contains(currentLanguage))
	{
		FDialogueData textData =  nextDialogueData.dialogueData[currentLanguage];

		BW_Name->SetText(FText(FText::FromString(textData.SpeakerName)));
		BW_DialogueText->SetText(FText(FText::FromString(textData.Dialogue)));
	}
	
	SetPortaits(nextDialogueData);

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

void UDialogueView::SetPortaits(FCutsceneData aDialogueData)
{
	for (auto Element : 	aDialogueData.PortraitData)
	{
		EDialogueActorsLabel CharacterID   = Element.CharacterID;
		FPortaitActorData DialogueActors  = persistentGameinstance->dialogueManagerSubsystem->GetDialogueDataByLabel(CharacterID);
		ECharacterCostume CharacterCostume = Element.ForcedCostume == ECharacterCostume::None ? ECharacterCostume::DefaultOutFit : Element.ForcedCostume;
		
		if(!DialogueActors.CharacterData.CostumeData.Contains(CharacterCostume))
		{
			continue;
		}
		
		FCharacterCostumeData CostumeData = DialogueActors.CharacterData.CostumeData[CharacterCostume];

		if(!DialoguePortraitImages.Contains(Element.portraitPositions))
		{
			continue;
		}

		UImage* portraitImage = DialoguePortraitImages[ Element.portraitPositions];

		if(!CostumeData.costumeExpressionTextures.Contains(Element.portraitExpression))
		{
			continue;
		}
		
		UTexture2D* CostumePortrait  = CostumeData.costumeExpressionTextures[Element.portraitExpression];
		SetDialogueImages(CostumePortrait, portraitImage);		
	}
	
	SetDialogueImages(aDialogueData.BackgroundCG, BW_BackgroundCG);
}

void UDialogueView::DialogueFinished()
{
	InGameHUD->PopMostRecentActiveView();
	onDialogueEnd.Broadcast();
	
	if(triggerOnEnd != EFloorEventStates::None)
	{
		if(reactivatePawnInputOnEnd)
		{
			gameModeBase->floorPawn->SetFloorPawnInput(true);
		}
		triggerNextEventStage.Broadcast(triggerOnEnd);
	}
}

