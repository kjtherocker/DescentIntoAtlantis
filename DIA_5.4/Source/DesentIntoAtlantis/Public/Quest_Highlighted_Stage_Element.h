// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "QuestData.h"
#include "Quest_Highlighted_Stage_Element.generated.h"

class UQuest_Goal_Element;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuest_Highlighted_Stage_Element : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FQuestData questData;
	
	UPROPERTY()
	FQuestStageData questStageData;

	TArray<UQuest_Goal_Element*> questGoalElements;

	void Initialize(AInGameHUD* aInGameHud);
	void SetQuest(FQuestData aQuestData);
	void SetQuestStage(FQuestStageData aQuestStageData);

	void CreateQuestbar(FQuestGoalData aQuestStageData);

	void UpdateAllQuestGoals();

	int32 GetCurrentQuestID(){return questData.QuestID;}

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_QuestName;
	
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_GoalVerticalBox;
};
