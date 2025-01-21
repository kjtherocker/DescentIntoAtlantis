// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLogElement.h"
#include "CombatLog_Full_Data.h"
#include "Components/RichTextBlock.h"
#include "CombatLogSimplifiedView.generated.h"


UENUM()
enum class ECombatLogType : uint8
{
	None          = 0,
	Hit           = 1,
	AttackDefence = 2,
	Full          = 3,
};

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogSimplifiedView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

public:
	void EnableInput();
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase);
	void CreateCombatLog(FCombatLog_Full_Data CombatLog_Base_Data);
	void CreateCombatTab(FCombatLog_Full_Data CombatLog_Base_Data,ECombatLogType aCombatLogType);
	void RemoveCombatTab();
	UFUNCTION()
	virtual void ActivateMenuSelection() override;
	virtual void SetCursorPositionInfo() override;
	UPROPERTY()
	TArray<UCombatLogElement*> commandLogTabs;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;
	
};
