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

UENUM()
enum class  EEquipmentMenuSlot  : uint8
{
	None             = 0,
	MainClass        = 1,
	SubClass         = 2,
	Equipment        = 3,
	Passive          = 4,
};


UCLASS()
class DESENTINTOATLANTIS_API UEquipMenuView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;

	void CreatePassiveSkillbar(EEquipmentMenuSlot aEquipmentSlot,FPassiveSkillData aSkill);
	void SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement);

	virtual void SetCursorPositionInfo() override;
	
	UFUNCTION()
	virtual void UpdateEquipScreen();

	UFUNCTION()
	virtual void MainClassClicked();
	UFUNCTION()
	virtual void SubClassClicked();
	UFUNCTION()
	virtual void EquipmentClicked();
	UFUNCTION()
	virtual void PassiveClicked();
	UPROPERTY()
	TMap<EEquipmentMenuSlot,FViewSelection > ViewSelection;

	UPROPERTY()
	UPartyManagerSubsystem* PartyManagerSubsystem;

	UPROPERTY()
	UPlayerCombatEntity* currentPlayer;

public:
	void SetEquipMenuView(UPartyManagerSubsystem* aPartyManagerSubsystem);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CharacterNameText;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_CPAmount;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_MainClassText;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_SubClassText;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalEquipBox;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalPassiveBox;
	UPROPERTY()
	TArray<UPassiveSkillElement*> passiveHighlightElements;
	UPROPERTY()
	TArray<UPassiveSkillElement*> equipmentSlots;
};
