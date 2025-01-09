// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyInventoryEquipmentView.h"

#include "PartyManagerSubsystem.h"
#include "PassiveSkillElement.h"
#include "Components/VerticalBox.h"

class UPassiveSkillElement;

void UPartyInventoryEquipmentView::ActivateEquipMenu(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
//////
	UPartyInventory* PartyInventory = aPartyManagerSubsystem->PartyInventory;
	TMap<EEquipmentID, UEquipmentPassive*> allEquipment = PartyInventory->GetAllEquipment();

	for (auto AllEquipment : allEquipment)
	{
		CreatePassiveSkillbar(AllEquipment.Value->GetPassiveSkill()->passiveSkillData);
	}
}

void UPartyInventoryEquipmentView::CreatePassiveSkillbar(FPassiveSkillData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::PassiveSkillElement));

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	PassiveSkillSlots.Add(baseUserWidget);

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	BW_VerticalEquipBox->AddChild(skillBarElement);

	SetPassiveSkillBar(aSkill, baseUserWidget);
}

void UPartyInventoryEquipmentView::SetPassiveSkillBar(FPassiveSkillData aSkill,
	UPassiveSkillElement* PassiveSkillElement)
{
	if(aSkill.passiveSkillID == EPassiveSkillID::None)
	{
		return;
	}
	PassiveSkillElement->SetPassiveSkill(aSkill);
}


