// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "PartyInventoryEquipmentView.h"
#include "PassiveSelectionView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPassiveSelectionView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()
	UPROPERTY()
	int passiveSlot;
	UPROPERTY()
	UPlayerCombatEntity* playerCombatEntity;
	TArray<EPassiveSkillID> passiveIDs;

	UPROPERTY()
	UPartyInventory* PartyInventory;
public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	FOnCharacterChange characterChange;
	
	UPROPERTY()
	TArray<UPassiveSkillElement*> PassiveSkillSlots;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalEquipBox;
	
	void ActivatePassiveMenu(UPlayerCombatEntity* aPlayerCombatEntity, int aPassiveSlot);

	UFUNCTION()
	virtual void ActivateInventoryMenuSelection();

	void CreatePassiveSkillbar(FPassiveSkillData aSkill);
};
