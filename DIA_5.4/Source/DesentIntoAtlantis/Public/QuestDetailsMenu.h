// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "QuestData.h"
#include "QuestDetailsMenu.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuestDetailsMenu : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	void SetQuestDetails(FQuestData aQuestData);

	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_QuestName;
	
};
