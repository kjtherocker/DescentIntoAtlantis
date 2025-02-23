// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "FloorEnum.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestSubsystem.generated.h"

/**
 * 
 */


UENUM()
enum class EQuestGoal  : uint8
{
	None,
	Event,
	Kill,
	Quest,
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
	FString questStageDescription = "Quest Description";
	
	UPROPERTY()
	FQuestPreRequisitesData PreRequisitesDataForTheNextStage;

	UPROPERTY(EditAnywhere)
	FQuestMarkerData QuestMarkerData;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestStageData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	FString questStageDescription = "Quest Description";
	
	UPROPERTY()
	TArray<FQuestGoalData> QuestGoals;
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere)
	int32 QuestID                   = 10000;
	UPROPERTY(EditAnywhere)
	FString QuestName               = "Quest Name";
	UPROPERTY(EditAnywhere)
	FString QuestDescription    = "Quest Description Undefined";

	UPROPERTY(EditAnywhere)
	TArray<FQuestStageData> QuestStageDatas;
	
	UPROPERTY(EditAnywhere)
	FQuestPreRequisitesData QuestPreRequisitesData;
	
	UPROPERTY(EditAnywhere)
	TArray<int32> QuestStartedOnEnd;
	UPROPERTY(EditAnywhere)
	FRewardsData RewardsData;

	UPROPERTY(EditAnywhere)
	FQuestMarkerData StartingQuestMarker;
	
	UPROPERTY()
	bool isComplete                       = false;
	UPROPERTY()
	int32 amountOfTimesCompleted          = 0;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FActiveQuestArray:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	TArray<FQuestData> activeQuest;

	UPROPERTY()
	FQuestData currentHighlightQuest;

	UPROPERTY()
	FQuestData currentMainQuest;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FQuestSubsystemCompleteData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	FActiveQuestArray activeQuest;
	UPROPERTY()
	TMap<int32,FQuestData> completedQuest;
};


UCLASS()
class DESENTINTOATLANTIS_API UQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()


	
private:
	UPROPERTY()
	FQuestSubsystemCompleteData questCompleteData;

	UPROPERTY()
	TMap<int,FQuestData> allQuestData;

	UPROPERTY()
	TArray<FQuestData> activeQuests;

	UPROPERTY()
	FQuestData currentHighlightQuest;

	UPROPERTY()
	FQuestData currentMainQuest;
	
public:

	void InitializeSubsystem(UDataTable* aQuestTable);

	void CompleteQuest(int32 aQuestID);

	FQuestSubsystemCompleteData GetQuestCompleteData(){return questCompleteData;}
};
