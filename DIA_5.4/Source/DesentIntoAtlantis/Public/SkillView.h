// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatTokenDescriptionElement.h"
#include "PlayerCombatEntity.h"
#include "SkillTraitHighlightElement.h"
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
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void CreateSkillbar(FSkillsData aSkill);
	void SkillSelection(USkillBase* aSkill);

	void SetCombatToken(FSkillsData aSkillsData);
	void SetSkillTrait(USkillBase*  aSkill);

	void CreateCombatToken(FCombatTokenStackData aCombatTokenData);

	void CreateSkillTrait(FSkillsData aSkillsData, ESkillTraitType aSkillTraitType);
	
	void SelectSkill();
	virtual void MoveUp() override;
	virtual void MoveDown() override;
	virtual void SetCursorPositionInfo() override;

	ACombatGameModeBase* combatGameMode;

protected:

	UPROPERTY()
	TArray<UCombatTokenDescriptionElement*> CombatTokenDescriptionElements;

	UPROPERTY()
	TArray<USkillTraitHighlightElement*> skillTraitHighlightElements;
	
public:
	
	void InitializeSkills(ACombatGameModeBase* aCombatGameMode,EClassSlot aClassSlot);

	UCombatClass* GetCombatClass();

	UPROPERTY(EditAnywhere)
	EClassSlot ClassSlot;
	
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
	URichTextBlock* BW_SkillDescription;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_CombatTokenVerticalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UHorizontalBox* BW_SkillTraitHorizontalBox;
};


