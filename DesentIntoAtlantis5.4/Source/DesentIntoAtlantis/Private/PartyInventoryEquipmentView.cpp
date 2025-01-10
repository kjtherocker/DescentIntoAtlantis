// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyInventoryEquipmentView.h"

#include "PartyManagerSubsystem.h"
#include "PassiveSkillElement.h"
#include "Components/VerticalBox.h"

class UPassiveSkillElement;

void UPartyInventoryEquipmentView::ActivateEquipMenu(UCombatEntity* aCombatEntity,UPartyManagerSubsystem* aPartyManagerSubsystem, int aEquipmentSlot)
{
	combatEntity = aCombatEntity;
	equipmentSlot = aEquipmentSlot;
	
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UPartyInventoryEquipmentView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UPartyInventoryEquipmentView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UPartyInventoryEquipmentView::ActivateInventoryMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UPartyInventoryEquipmentView::PopMostActiveView  );


	UPartyInventory* PartyInventory = aPartyManagerSubsystem->PartyInventory;
	TMap<EEquipmentID, UEquipmentPassive*> allEquipment = PartyInventory->GetAllEquipment();

	for (auto AllEquipment : allEquipment)
	{
		CreatePassiveSkillbar(AllEquipment.Value->GetPassiveSkill()->passiveSkillData);
		EquipmentIds.Add(AllEquipment.Key);
	}
}

void UPartyInventoryEquipmentView::MoveUp()
{
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::MoveUp();
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UPartyInventoryEquipmentView::MoveDown()
{
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::MoveDown();
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UPartyInventoryEquipmentView::ActivateInventoryMenuSelection()
{
	EEquipmentID EquipmentID = EquipmentIds[cursorPosition];
	combatEntity->combatEntityHub->equipmentHandler->EquipEquipment(EquipmentID,equipmentSlot);
	characterChange.Broadcast();
	PopMostActiveView();
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


