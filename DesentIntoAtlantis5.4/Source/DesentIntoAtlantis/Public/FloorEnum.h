// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EDataTableTypes.h"
#include "FloorPawn.h"

#include "Views.h"
#include "DesentIntoAtlantis/ECardinalDirections.h"
#include "DesentIntoAtlantis/EFloorIdentifier.h"
#include "Engine/DataTable.h"
#include "FloorEnum.generated.h"

class AFloorDoor;
class UPersistentGameinstance;

UENUM()
enum class EFloorEventStates
{
	None                  = 0,
	DialogueOnStart       = 1,
	TutorialOnStart       = 2,
	Combat                = 3,
	PostCombatLevelSwap   = 4,
	DialogueOnEnd         = 5,
	TutorialOnEnd         = 6,
	Completed             = 7,
};

UENUM()
enum class EFloorGimmicks
{
	None            = 0,
	Door            = 1,
	ForcedMovement        = 2,
	Lever           = 3,
	Lava            = 4,
	Teleporter      = 5,
	Stairs          = 6,
};

UENUM()
enum class ECombatArena
{
	None            = 0,
	Water           = 1,
	Prison          = 2,
};


USTRUCT()
struct FEnemyPatrolPath
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	FVector2D StartPath;
	UPROPERTY(EditAnywhere)
	FVector2D EndPath;
};


USTRUCT()
struct FFloorEnemyPawnCompleteData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FCompleteFloorPawnData completeFloorPawnData;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorEnemyPawnReference;
	UPROPERTY(EditAnywhere)
	FString EnemyGroupName;
	UPROPERTY(EditAnywhere)
	FEnemyPatrolPath enemyPatrolPath;
};



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNodeHasBeenWalkedOn, FVector2D, aPositionInGrid);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerNextEventStage, EFloorEventStates, aFloorEventStates);


USTRUCT()
struct DESENTINTOATLANTIS_API FGimmickData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	FVector2D positionInGrid = FVector2D(-1,-1);

	UPROPERTY(EditAnywhere)
	bool activateWhenPlayerIsOnNode = true;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FGimmickInteractableData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	FVector2D positionInGrid = FVector2D(-1,-1);

	UPROPERTY( EditAnywhere)
	ECardinalNodeDirections interactDirection = ECardinalNodeDirections::Empty;

	UPROPERTY(EditAnywhere)
	bool activateWhenPlayerIsOnNode = true;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FTeleporterGimmick : public FGimmickData
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY( EditAnywhere )
	EFloorIdentifier floorIdentifier = EFloorIdentifier::None;

	UPROPERTY(EditAnywhere)
	ECardinalNodeDirections nextLevelSpawnDirection = ECardinalNodeDirections::Empty;

	UPROPERTY( EditAnywhere )
	FVector2D nextLevelsSpawnPosition;
	

};

USTRUCT()
struct DESENTINTOATLANTIS_API FForcedMovementGimmick: public FGimmickData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	ECardinalNodeDirections movedNodeDirection;

};

USTRUCT()
struct DESENTINTOATLANTIS_API FDoorGimmick: public FGimmickInteractableData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	ECardinalNodeDirections movedNodeDirection;
	UPROPERTY()
	AFloorDoor* floorDoor = nullptr;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FDoorComplete : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	FDoorGimmick DoorSpotA;

	UPROPERTY( EditAnywhere )
	FDoorGimmick DoorSpotB;

};



USTRUCT()
struct DESENTINTOATLANTIS_API FFloorData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	TArray<int> floorBlueprint;
	
	UPROPERTY( EditAnywhere )
	EFloorIdentifier floorIdentifier = EFloorIdentifier::None;
	
	UPROPERTY( EditAnywhere )
	FVector2D startPosition = FVector2d::Zero();
	UPROPERTY(EditAnywhere)
	ECardinalNodeDirections startRotation = ECardinalNodeDirections::Up;

	UPROPERTY(EditAnywhere)
	TArray<FTeleporterGimmick> teleporterGimmicks;

	UPROPERTY(EditAnywhere)
	TArray<FForcedMovementGimmick> forcedMovementGimmick;

	UPROPERTY(EditAnywhere)
	TArray<FDoorComplete> doorGimmick;

	UPROPERTY(EditAnywhere)
	TArray<FFloorEnemyPawnCompleteData> EnemyPawns;
};


UENUM()
enum class EDialogueTriggers
{
	None            = 0,
	StartGame       = 1,
	Combat1Start    = 2,
	Combat1End      = 3,
	ArdusJoin       = 4,
	SeresFightStart = 5,
	SeresFightEnd   = 6,
	FinalBossStart  = 7,
	FinalBossEnd    = 8
};

UENUM()
enum class EDialogueActorsLabel
{
	None                = 0,
	Rain                = 1,
	Kriede              = 2,
	Fienne              = 3,
	GuardShark          = 4,
	CutsceneCamera      = 5
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
	EFloorIdentifier floorIdentifier = EFloorIdentifier::None;

	UPROPERTY( EditAnywhere )
	TSubclassOf<AActor> eventActorReference;
	
	UPROPERTY( EditAnywhere )
	FVector2D positionInGrid = FVector2D(-1,-1);

	UPROPERTY( EditAnywhere )
	FString enemyGroupName  = "DefaultTest";

	UPROPERTY( EditAnywhere )
	ETutorialTriggers tutorialTriggerOnStart = ETutorialTriggers::None;

	UPROPERTY( EditAnywhere )
	ETutorialTriggers tutorialTriggerOnEnd   = ETutorialTriggers::None;
	
	UPROPERTY( EditAnywhere )
	EDialogueTriggers dialogueTriggerOnStart = EDialogueTriggers::None;

	UPROPERTY( EditAnywhere )
	EDialogueTriggers dialogueTriggerOnEnd   = EDialogueTriggers::None;

	UPROPERTY( EditAnywhere )
	EPartyMembers partyMemberGainedOnEnd     = EPartyMembers::None;
	
	UPROPERTY( EditAnywhere )
	EViews viewPushedOnEnd = EViews::None;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatArenaData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	FString levelName      = "Uninitialized";
	
	UPROPERTY( EditAnywhere )
	FString enemyGroupName = "Uninitialized";
};

USTRUCT()
struct DESENTINTOATLANTIS_API FTutorialData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	ETutorialTriggers tutorialTrigger = ETutorialTriggers::None;
	
	UPROPERTY( EditAnywhere )
	FString classTitle = "Uninitialized";

	UPROPERTY( EditAnywhere )
	FString characterName = "Uninitialized";

	UPROPERTY( EditAnywhere )
	FString classDescription= "Uninitialized";

	UPROPERTY( EditAnywhere )
	FString bulletPoint1 = "Uninitialized";

	UPROPERTY( EditAnywhere )
	FString bulletPoint2 = "Uninitialized";

	UPROPERTY( EditAnywhere )
	FString bulletPoint3 = "Uninitialized";
	
	UPROPERTY( EditAnywhere )
	UTexture2D* characterPortrait;
};
