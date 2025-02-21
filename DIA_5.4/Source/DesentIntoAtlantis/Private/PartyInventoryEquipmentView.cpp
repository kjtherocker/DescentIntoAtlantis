// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyInventoryEquipmentView.h"

#include "Inventory_Equipment.h"
#include "PartyManagerSubsystem.h"
#include "PassiveSkillElement.h"
#include "Components/VerticalBox.h"

class UPassiveSkillElement;

void UPartyInventoryEquipmentView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UPartyInventoryEquipmentView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UPartyInventoryEquipmentView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UPartyInventoryEquipmentView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UPartyInventoryEquipmentView::PopMostActiveView  );
}

void UPartyInventoryEquipmentView::ActivateEquipMenu(UPlayerCombatEntity* aPlayerCombatEntity,UPartyManagerSubsystem* aPartyManagerSubsystem, int aEquipmentSlot)
{
	playerCombatEntity = aPlayerCombatEntity;
	equipmentSlot = aEquipmentSlot;
	
	


	PartyInventory = aPartyManagerSubsystem->PartyInventory;
	TMap<EEquipmentID,  FEquipmentPassiveInventoryInfo> allEquipment = PartyInventory->GetInventoryEquipment()->GetAllEquipment();

	if(allEquipment.Num() == 0)
	{
		PopMostActiveView();
		return;
	}

	for (auto AllEquipment : allEquipment)
	{
		CreatePassiveSkillbar(PartyInventory->GetInventoryEquipment()->GetEquipmentPassiveSkillData(AllEquipment.Key) );
		EquipmentIds.Add(AllEquipment.Key);
	}

	SetHighLightElements((TArray<UBaseHighlightElement*>)PassiveSkillSlots);
	SetDefaultMenuState();
}


void UPartyInventoryEquipmentView::ActivateInventoryMenuSelection()
{
	EEquipmentID EquipmentID = EquipmentIds[cursorPosition];
	if(!PartyInventory->GetInventoryEquipment()->isEquipmentFreeToTake(EquipmentID))
	{
		return;
	}
	EPartyMembersID partyMember = playerCombatEntity->playerIdentityData.characterIdentifier;
	playerCombatEntity->EquipEquipment(PartyInventory->GetInventoryEquipment()->TakeOutEquipment(partyMember,EquipmentID),equipmentSlot);
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

	baseUserWidget->ViewSelection.AddDynamic(this,&UPartyInventoryEquipmentView::ActivateInventoryMenuSelection );
	SetPassiveSkillBar(aSkill, baseUserWidget);
}


