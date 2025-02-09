// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatEntity.h"
#include "UPartyInventory.h"
#include "BaseUserWidgetMovingButtons.h"
#include "PartyInventoryEquipmentView.generated.h"

class UPlayerCombatEntity;
class UPartyManagerSubsystem;
class UPassiveSkillElement;
struct FPassiveSkillData;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterChange);
UCLASS()
class DESENTINTOATLANTIS_API UPartyInventoryEquipmentView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

private:
	UPROPERTY()
	int equipmentSlot;
	UPROPERTY()
	UPlayerCombatEntity* playerCombatEntity;
	TArray<EEquipmentID> EquipmentIds;

	UPROPERTY()
	UPartyInventory* PartyInventory;
public:

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	FOnCharacterChange characterChange;
	
	UPROPERTY()
	TArray<UPassiveSkillElement*> PassiveSkillSlots;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalEquipBox;
	
	void ActivateEquipMenu(UPlayerCombatEntity* aPlayerCombatEntity, UPartyManagerSubsystem* aPartyManagerSubsystem, int aEquipmentSlot);

	UFUNCTION()
	virtual void ActivateInventoryMenuSelection();

	void CreatePassiveSkillbar(FPassiveSkillData aSkill);
};
