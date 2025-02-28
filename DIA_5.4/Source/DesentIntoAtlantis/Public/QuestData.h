// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "QuestData.generated.h"



UENUM()
enum class EQuestGoal  : uint8
{
	None,
	Event,
	Kill,
	Quest,
};

UENUM()
enum class EQuestType  : uint8
{
	None,
	MainQuest,
	SideQuest,
	GodQuest,
};




USTRUCT()
struct DESENTINTOATLANTIS_API FQuestKillEnemyData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	EEnemyLabelID enemyToKill;

	UPROPERTY(EditAnywhere)
	int killAmount;
	
	UPROPERTY()
	int currentAmountKilled;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FQuestPreRequisitesData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	TArray<int32> PreRequisiteQuests;
	UPROPERTY(EditAnywhere)
	TArray<int32> PreRequisiteEvents;

	UPROPERTY(EditAnywhere)
	TArray<FQuestKillEnemyData> PreRequisiteEnemyKilled;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestMarkerData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FQuestPreRequisitesData MarkerRequirementsToStayUp;
	UPROPERTY(EditAnywhere)
	EFloorID floorID;
	UPROPERTY(EditAnywhere)
	FVector2D positionInGrid;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestGoalData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EQuestGoal QuestGoal;
	
	UPROPERTY(EditAnywhere)
	FString questGoalDescription = "Quest Description";
	
	UPROPERTY(EditAnywhere)
	int32 GoalID;
	
	UPROPERTY(EditAnywhere)
	FQuestKillEnemyData PreRequisiteEnemyKilled;
	
	UPROPERTY(EditAnywhere)
	FQuestMarkerData QuestMarkerData;
	
	UPROPERTY()
	bool isComplete;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestStageData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	bool isComplete;
	
	UPROPERTY(EditAnywhere)
	FString questStageDescription = "Quest Description";
	
	UPROPERTY(EditAnywhere)
	TArray<FQuestGoalData> QuestGoals;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	
	UPROPERTY(EditAnywhere, Category = "ID")
	int32 QuestID                   = 10000;
	UPROPERTY(EditAnywhere, Category = "ID")
	EQuestType questType            = EQuestType::MainQuest;
	
	UPROPERTY(EditAnywhere, Category = "TEXT")
	FString QuestName               = "Quest Name";
	UPROPERTY(EditAnywhere, Category = "TEXT")
	FString QuestDescription        = "Quest Description Undefined";

	UPROPERTY(EditAnywhere, Category = "Stage")
	TArray<FQuestStageData> QuestStageDatas;
	
	UPROPERTY(EditAnywhere, Category = "Start_Requirements")
	FQuestPreRequisitesData QuestPreRequisitesData;

	UPROPERTY(EditAnywhere)
	FQuestMarkerData StartingQuestMarker;
	
	UPROPERTY(EditAnywhere, Category = "End")
	TArray<int32> QuestStartedOnEnd;
	
	UPROPERTY(EditAnywhere, Category = "End")
	FRewardsData questReward;

	UPROPERTY(EditAnywhere)
	bool activateWhenRequirementsAreMet = false;

	UPROPERTY()
	int currentQuestStage = 0;
	
	UPROPERTY()
	bool isComplete                       = false;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FActiveQuestArray:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	TMap<int32,FQuestData> activeQuest;

	UPROPERTY()
	FQuestData currentHighlightQuest;

	UPROPERTY()
	int currentMainQuestID = 10000;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestSubsystemCompleteData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	FActiveQuestArray currentQuestInfo;
	UPROPERTY()
	TMap<int32,FQuestData> completedQuest;
};
