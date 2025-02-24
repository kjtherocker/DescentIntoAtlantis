// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestData.h"
#include "QuestGoal_Base.h"
#include "UObject/NoExportTypes.h"
#include "Quest_Base.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuest_Base : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
	FQuestData questData;

	UPROPERTY()
	int questStageIndex;

	UPROPERTY()
	FQuestStageData QuestStageData;

	UPROPERTY()
	TArray<UQuestGoal_Base*> QuestGoals;
public:

	void SetQuest(FQuestData aQuestData);

	void StartQuest();
	void SetQuestStage(FQuestStageData aQuestStageData);
	void QuestStageFinished();
	void QuestFinshed();
	void CheckAllQuestGoals();
};
