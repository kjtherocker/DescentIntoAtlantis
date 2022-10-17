// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"

#include "LevelupView.generated.h"

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
	TArray<UPlayerCombatEntity*> combatEntitysToLevelup;
	
public:
	void InitializeCombatEntitysToLevelUp(TArray<UPlayerCombatEntity*> aPlayerCombatEntitys);
	
	void SetupLevelupView(UPlayerCombatEntity* aPlayerCombatEntity);

	void ActivateNextLevelup();
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_CharacterPortrait;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_Name;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_LevelupConversationalText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_PreviousLevelNumber;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CurrentLevelNumber;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	USkillBarElement* BW_Skillbar;
	
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
