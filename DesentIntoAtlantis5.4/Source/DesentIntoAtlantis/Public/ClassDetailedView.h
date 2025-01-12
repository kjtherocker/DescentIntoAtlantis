// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "SkillData.h"
#include "ClassDetailedView.generated.h"

struct FSkillClassData;
struct FPassiveSkillData;
enum class EEquipmentMenuSlot : uint8;
struct FCompleteClassData;
enum class EClassSlot : uint8;
class UPlayerCombatEntity;
class UPartyManagerSubsystem;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UClassDetailedView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

public:

	FViewSelection ReturnToPreviousMenu;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_ClassText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalSkillBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalPassiveBox;

	UPROPERTY()
	TArray<UBaseHighlightElement*> passiveHighlightElements;

	UPROPERTY()
	TArray<UBaseHighlightElement*> SkillHighlightElements;

	void ActivateInput();
	
	void CreateSkillbar(FSkillClassData aClassData,FSkillsData aSkillData);
	void CreatePassiveSkillbar(FPassiveSkillData aSkill);
	void SetDetailedClassView(FCompleteClassData aClassData, UPlayerCombatEntity* aPlayerCombatEntity,
											  UPersistentGameinstance* aPersistentGameinstance, EClassSlot aClassSlot);
	void ReturnToPreviousScreen() override;
	
	void ResetUI();
	UFUNCTION()
	void SkillClicked();
	UFUNCTION()
	void PassiveClicked();

};
