// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "FloorEnum.h"
#include "DialogueFactory.generated.h"


enum class EAudio;
USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY( EditAnywhere )
	EDialogueTriggers DialogueTriggers;
	
	UPROPERTY( EditAnywhere )
	FString Dialogue;

	UPROPERTY( EditAnywhere )
	FString SpeakerName;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* LeftPortrait;

	UPROPERTY( EditAnywhere )
	UTexture2D* RightPortrait;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* BackgroundCG;

	UPROPERTY( EditAnywhere )
	EAudio musicToPlay;

};


UCLASS()
class DESENTINTOATLANTIS_API UDialogueFactory : public UObject
{
	GENERATED_BODY()
public:
	void InitializeDatabase(UDataTable* aDialogueDatabase);

	TArray<FDialogueData> GetDialogueDataByTrigger(EDialogueTriggers aDialogueData);
	UPROPERTY()
	TArray<FDialogueData> dialogueData;
};
