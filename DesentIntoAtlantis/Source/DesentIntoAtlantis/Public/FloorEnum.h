// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EDataTableTypes.h"
#include "Views.h"
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
	Levelup         = 4,
	DialogueOnEnd   = 5,
	TutorialOnEnd   = 6,
	Completed       = 7,
};

UENUM()
enum class EFloorGimmicks
{
	None            = 0,
	Door            = 1,
	Movement        = 2,
	Lever           = 3,
	Lava            = 4,
	Teleporter      = 5,
	Stairs          = 6,
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
	
	UPROPERTY( EditAnywhere )
	TMap<FVector2D, EFloorGimmicks> floorGimmicks;
};


UENUM()
enum class EDialogueTriggers
{
	None,
	StartGame,
	Combat1Start,
	Combat1End,
	ArdusJoin,
	SeresFightStart,
	SeresFightEnd,
	FinalBossStart,
	FinalBossEnd
};
UENUM()
enum class ETutorialTriggers
{
	None,
	Combat1Start,
	Combat1End,
	ArdusJoin,
	Combat3End,
	
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
	ETutorialTriggers tutorialTriggerOnStart;

	UPROPERTY( EditAnywhere )
	ETutorialTriggers tutorialTriggerOnEnd;
	
	UPROPERTY( EditAnywhere )
	EDialogueTriggers dialogueTriggerOnStart;

	UPROPERTY( EditAnywhere )
	EDialogueTriggers dialogueTriggerOnEnd;

	UPROPERTY( EditAnywhere )
	EDataTableClasses partyMemberGainedOnEnd;
	
	UPROPERTY( EditAnywhere )
	EViews viewPushedOnEnd;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FTutorialData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	ETutorialTriggers tutorialTrigger;
	
	UPROPERTY( EditAnywhere )
	FString classTitle;

	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY( EditAnywhere )
	FString classDescription;

	UPROPERTY( EditAnywhere )
	FString bulletPoint1;

	UPROPERTY( EditAnywhere )
	FString bulletPoint2;

	UPROPERTY( EditAnywhere )
	FString bulletPoint3;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* characterPortrait;
};
