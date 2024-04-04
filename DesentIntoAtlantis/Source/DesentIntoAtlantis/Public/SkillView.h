// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PlayerCombatEntity.h"
#include "SkillView.generated.h"

class USkillBarElement;
class UCombatEntity;
struct FSkillsData;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillView : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize(AFloorGameMode* aGameModeBase) override;

	void CreateSkillbar(FSkillsData aSkill);
	void SkillSelection(FSkillsData aSkill);
	void SelectSkill();
	virtual void MoveUp() override;
	virtual void MoveDown() override;
	virtual void SetCursorPositionInfo() override;
public:

	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember;
	
	UPROPERTY()
	TArray<USkillBarElement*> skillBarElements;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CharacterName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_ClassName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_SkillName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_SkillDescription;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;
};
