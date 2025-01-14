// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "FloorEnum.h"

#include "LevelupView.generated.h"

class FTriggerNextEventStage;
class USkillBarElement;
class UPlayerCombatEntity;
class UTextBlock;
class UImage;
class ULevelupPanelElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API ULevelupView : public UBaseUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY()
	TArray<UPlayerCombatEntity*> combatEntitysToLevelup;

	FTriggerNextEventStage  triggerNextEventStage;
	
	EFloorEventStates triggerOnEnd;

	int currentPlayerLevel = 0;
	
public:
	void InitializeCombatEntitysToLevelUp( int newLevel,TArray<UPlayerCombatEntity*> aPlayerCombatEntitys,
		FTriggerNextEventStage  aTriggerNextEventStage, EFloorEventStates aTriggerOnEnd);
	
	void SetupLevelupView(int newLevel,UPlayerCombatEntity* aPlayerCombatEntity);

	void ActivateNextLevelup();
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_CharacterPortrait;
	
	

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_PreviousLevelNumber;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CurrentLevelNumber;
	
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	ULevelupPanelElement * BW_StrengthLevelpanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	ULevelupPanelElement * BW_MagicLevelPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	ULevelupPanelElement * BW_HitLevelPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	ULevelupPanelElement * BW_EvasionLevelPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	ULevelupPanelElement * BW_DefencePanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	ULevelupPanelElement * BW_ResistancePanel;
	
};
