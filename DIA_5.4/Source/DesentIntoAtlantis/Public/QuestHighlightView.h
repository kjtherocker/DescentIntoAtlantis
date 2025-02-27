// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "QuestData.h"
#include "Quest_Highlighted_Stage_Element.h"
#include "QuestHighlightView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuestHighlightView : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY()
	UQuestSubsystem* QuestSubsystem;
	
	UPROPERTY()
	TArray<UQuest_Highlighted_Stage_Element*> questStageHighlightElements;
	
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void CreateQuestbar(FQuestData aQuestData);

	UFUNCTION()
	virtual void OnQuestUpdate(FQuestData aQuestData);


	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UQuest_Highlighted_Stage_Element* BW_TestQuestStageElement;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox* BW_StageVerticalBox;
};
