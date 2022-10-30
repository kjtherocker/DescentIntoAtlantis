// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DesentIntoAtlantis/EFloorIdentifier.h"
#include "Engine/DataTable.h"
#include "FloorEnum.generated.h"



UENUM()
enum class EFloorEventStates
{
	None            = 0,
	DialogueOnStart = 1,
	TutorialOnStart = 2,
	Combat          = 3,
	DialogueOnEnd   = 4,
	TutorialOnEnd   = 5,
	Completed       = 6,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloorEventHasBeenTriggered, FVector2D, aPositionInGrid);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerNextEventStage, EFloorEventStates, aFloorEventStates);

USTRUCT()
struct DESENTINTOATLANTIS_API FFloorData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	TArray<int> floorBlueprint;
	
	UPROPERTY( EditAnywhere )
	EFloorIdentifier floorIdentifier;
	
	UPROPERTY( EditAnywhere )
	FVector2D startPosition;
};


UENUM()
enum class EDialogueTriggers
{
	None,
	StartGame,
	Combat1Start,
	Combat1End,
	
	
	
};
UENUM()
enum class TutorialTriggers
{
	None,
	Combat1,
	Combat2,
	Combat3,
	Combat4,
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FFloorEventData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	EFloorIdentifier floorIdentifier;
	
	UPROPERTY( EditAnywhere )
	FVector2D positionInGrid;

	UPROPERTY( EditAnywhere )
	FString enemyGroupName;

	UPROPERTY( EditAnywhere )
	TutorialTriggers tutorialTriggerOnStart;

	UPROPERTY( EditAnywhere )
	TutorialTriggers tutorialTriggerOnEnd;
	
	UPROPERTY( EditAnywhere )
	EDialogueTriggers dialogueTriggerOnStart;

	UPROPERTY( EditAnywhere )
	EDialogueTriggers dialogueTriggerOnEnd;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FTutorialData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	TutorialTriggers tutorialTrigger;
	
	UPROPERTY( EditAnywhere )
	FString classTitle;

	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	FString classDescription;

	UPROPERTY( EditAnywhere )
	UTexture2D* characterPortrait;

	UPROPERTY( EditAnywhere )
	TArray<int> intTable;

};
