// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "PartyManagerSubsystem.h"
#include "PassiveSkillElement.h"
#include "EquipMenuView.generated.h"

struct FPassiveSkillData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UEquipMenuView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void CreatePassiveSkillbar();
	void SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement);

	virtual void SetCursorPositionInfo() override;

	virtual void MoveUp() override;
	virtual void MoveDown() override;

public:
	void SetEquipMenuView(UPartyManagerSubsystem* aPartyManagerSubsystem);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalPassiveBox;
	UPROPERTY()
	TArray<UPassiveSkillElement*> PassiveSkillElements;
};
