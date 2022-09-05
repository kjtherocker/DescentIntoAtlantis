// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PlayerCombatEntity.h"
#include "SkillMenu.generated.h"

class USkillBarElement;
struct FCombatEntity;
struct FSkills_Base;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillMenu : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize() override;

	void CreateSkillbar(FSkills_Base* aSkill);
	void ReturnToPreviousScreen();
	void SkillSelection(FSkills_Base* aSkill);
	void SelectSkill();
	void MoveUp();
	void MoveDown();
public:
	
	FPlayerCombatEntity* currentActivePartyMember;

	int cursorPosition;

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
