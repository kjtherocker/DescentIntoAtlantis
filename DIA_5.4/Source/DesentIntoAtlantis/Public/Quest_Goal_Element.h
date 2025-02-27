// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "QuestData.h"
#include "Components/Image.h"
#include "Quest_Goal_Element.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuest_Goal_Element : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FQuestGoalData questGoalData;

	void SetQuestGoalElement(FQuestGoalData aQuestGoalData);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_CompletedICon;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_GoalDescription;
};
