// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "DialogueFactorySubsystem.h"
#include "Components/TextBlock.h"
#include "DialogueView.generated.h"

/**
 * 
 */

class AFloorManager;
class UPersistentGameinstance;
enum class EFloorEventStates;
struct FDialogueData;
class UImage;

UCLASS()
class DESENTINTOATLANTIS_API UDialogueView : public UBaseUserWidget
{
	GENERATED_BODY()

	bool reactivatePawnInputOnEnd;
	FTriggerNextEventStage triggerNextEventStage;
	FDialogueCompleteData currentDialogueCompleteData;
	TMap<EDialogueActorsLabel, FDialogueActorData> cutsceneActors;
	UPROPERTY()
	TMap<EDialogueActorsLabel, AFloorPawn*> spawnedActors;
public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*    BW_LeftCharacterPortrait;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*    BW_CenterCharacterPortrait;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*    BW_RightCharacterPortrait;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage*    BW_BackgroundCG;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_Name;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_DialogueText;

	EFloorEventStates      triggerOnEnd;
	
	UPROPERTY()
	TArray<FDialogueData> dialogueData;
	UPROPERTY()
	AFloorManager* floorManager;
	void SetFloorEventDialogueData(EDialogueTriggers aDialogueData, EFloorEventStates aTriggerOnEnd, FTriggerNextEventStage  aTriggerNextEventStage, AFloorManager* aFloorManager);
	void SetDialogueData(EDialogueTriggers aDialogueData);
	void SetDialogueImages(UTexture2D* aPortraitTexture,UImage* aPortraitImage);
	void SpawnActor(EDialogueActorsLabel aActorLabel, TSubclassOf<AActor> aActorToSpawn);
	void DialogueFinished();
	void ActivateNextDialogue();
	void SetNextDialogue(bool audio = false);
	
};


