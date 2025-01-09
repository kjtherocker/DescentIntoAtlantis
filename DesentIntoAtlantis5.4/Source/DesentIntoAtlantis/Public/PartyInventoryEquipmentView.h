// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PartyInventoryEquipmentView.generated.h"

class UPartyManagerSubsystem;
class UPassiveSkillElement;
struct FPassiveSkillData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyInventoryEquipmentView : public UBaseUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TArray<UPassiveSkillElement*> PassiveSkillSlots;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalEquipBox;
	
	void ActivateEquipMenu(UPartyManagerSubsystem* aPartyManagerSubsystem);

	void CreatePassiveSkillbar(FPassiveSkillData aSkill);
	void SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement);
};
