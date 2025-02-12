// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.h"
#include "PlayerCombatEntity.h"
#include "ItemView.generated.h"

class USkillBarElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UItemView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()


public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void CreateSkillbar(FSkillsData aSkill);
	void CreateItems();
	void SetItemView(UPlayerCombatEntity* aPlayerCombatEntity);
	void SelectSkill();


	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember ;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;
	
	UPROPERTY()
	TArray<USkillBarElement*> skillBarElements;
};
