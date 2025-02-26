// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "QuestData.h"
#include "QuestMenuView.generated.h"

class UQuestDetailsMenu;
class UBase_Header_Vertical_Box;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuestMenuView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()
public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void CreateQuestbar(FQuestData aQuestData);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UQuestDetailsMenu* BW_QuestDetailsMenu;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBase_Header_Vertical_Box* BW_MainQuestHeader;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBase_Header_Vertical_Box* BW_CompletedQuestHeader;
};
