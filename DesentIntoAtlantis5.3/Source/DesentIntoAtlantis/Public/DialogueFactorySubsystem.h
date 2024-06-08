// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "FloorEnum.h"
#include "DialogueFactorySubsystem.generated.h"


enum class EAudio;



USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueActor : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	EDialogueActors dialogueActor;
	
	UPROPERTY(EditAnywhere)
	bool hasMovement = false;
	
	UPROPERTY(EditAnywhere)
	bool actorToBePossessed = false;
	
	UPROPERTY(EditAnywhere)
	FCompleteFloorPawnData pawnData;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	FString     Dialogue;

	UPROPERTY( EditAnywhere )
	FString     SpeakerName;

	UPROPERTY( EditAnywhere )
	UTexture2D* CenterPortrait;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* LeftPortrait;

	UPROPERTY( EditAnywhere )
	UTexture2D* RightPortrait;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* BackgroundCG;

	UPROPERTY( EditAnywhere )
	EAudio      musicToPlay;

	UPROPERTY( EditAnywhere )
	TArray<FDialogueActor> dialogueActor;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueCompleteData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	EDialogueTriggers DialogueTriggers;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueData> DialogueData;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueActor> AllActorsInDialogue;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FAllDialogueActors : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EDialogueActors dialogueActor;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> actorReference;
};

UCLASS()
class DESENTINTOATLANTIS_API UDialogueFactorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	void InitializeDatabase(UDataTable* aDialogueDatabase, UDataTable* aDialogueActorDatabase);
	FDialogueCompleteData GetDialogueDataByTrigger(EDialogueTriggers aDialogueData);
	FAllDialogueActors GetDialogueActorDataByLabel(EDialogueActors aActorData);

	UPROPERTY(EditAnywhere)
	TMap<EDialogueActors, FAllDialogueActors> dialogueActors;
	
	UPROPERTY(EditAnywhere)
	TMap<EDialogueTriggers, FDialogueCompleteData> dialogueData;
};
