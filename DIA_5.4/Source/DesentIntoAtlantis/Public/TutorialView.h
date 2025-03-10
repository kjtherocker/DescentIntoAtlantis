// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "TutorialManagerSubsystem.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "TutorialView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UTutorialView : public UBaseUserWidget
{
	GENERATED_BODY()
private:
	FTriggerNextEventStage nextEventStage;
	EFloorEventTypes floorEventToTriggerOnEnd;
public:
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void SetupTutorialView(FTutorialData aTutorialData);
	void ContinueToNextEventStage();
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ClassTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CharacterName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ClassDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_Portait;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_BulletPoint1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_BulletPoint2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_BulletPoint3;
};
