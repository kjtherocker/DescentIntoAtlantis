// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatEntity.h"
#include "UPartyInventory.h"
#include "PartyInventoryEquipmentView.generated.h"

class UPartyManagerSubsystem;
class UPassiveSkillElement;
struct FPassiveSkillData;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterChange);
UCLASS()
class DESENTINTOATLANTIS_API UPartyInventoryEquipmentView : public UBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY()
	int equipmentSlot;
	UPROPERTY()
	UCombatEntity* combatEntity;
	TArray<EEquipmentID> EquipmentIds;
public:

	FOnCharacterChange characterChange;
	
	UPROPERTY()
	TArray<UPassiveSkillElement*> PassiveSkillSlots;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalEquipBox;
	
	void ActivateEquipMenu(UCombatEntity* aCombatEntity, UPartyManagerSubsystem* aPartyManagerSubsystem, int aEquipmentSlot);

	virtual void MoveUp() override;
	virtual void MoveDown() override;

	UFUNCTION()
	virtual void ActivateInventoryMenuSelection();

	void CreatePassiveSkillbar(FPassiveSkillData aSkill);
	void SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement);
};
