// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipMenuView.h"

#include "CombatEntityHub.h"
#include "PartyInventoryEquipmentView.h"
#include "PassiveHandler.h"
#include "PassiveSkillElement.h"
#include "PassiveSkills.h"
#include "Components/VerticalBox.h"

void UEquipMenuView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UEquipMenuView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UEquipMenuView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UEquipMenuView::ActivateEquipMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UEquipMenuView::PopMostActiveView  );

}

void UEquipMenuView::SetEquipMenuView(UPartyManagerSubsystem* aPartyManagerSubsystem)
{
	UPlayerCombatEntity* currentPlayer = aPartyManagerSubsystem->playerCombatEntity[0];
	PartyManagerSubsystem = aPartyManagerSubsystem;
	
	BW_CPAmount->SetText(FText::FromString(FString::FromInt(currentPlayer->classHandler->GetClassPoints())));

	BW_MainClassText->SetText(FText::FromString(currentPlayer->classHandler->GetClassName(EClassSlot::Main)));
	BW_SubClassText->SetText(FText::FromString(currentPlayer->classHandler->GetClassName(EClassSlot::Sub)));

	CreateAndBindDelegateOption(EEquipmentMenuSlot::MainClass, &UEquipMenuView::MainClassClicked ,TEXT("MainClassClicked"));
	CreateAndBindDelegateOption(EEquipmentMenuSlot::SubClass, &UEquipMenuView::SubClassClicked ,TEXT("SubClassClicked"));
	CreateAndBindDelegateOption(EEquipmentMenuSlot::Equipment, &UEquipMenuView::EquipmentClicked ,TEXT("EquipmentClicked"));
	CreateAndBindDelegateOption(EEquipmentMenuSlot::Passive, &UEquipMenuView::PassiveClicked ,TEXT("PassiveClicked"));

	UEquipmentHandler* EquipmentHandler =  currentPlayer->combatEntityHub->equipmentHandler;
	TArray<UEquipmentPassive*> Equipment = EquipmentHandler->GetAllEquipment();
	FPassiveSkillData genericNotData;
	
	for(int i = 0 ; i < EquipmentHandler->AMOUNT_OF_EQUIPMENT_SLOTS;i++)
	{
		if(Equipment[i] != nullptr)
		{
		   CreatePassiveSkillbar(EEquipmentMenuSlot::Equipment,Equipment[i]->GetPassiveSkill()->passiveSkillData);		
		}
		else
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Equipment,genericNotData);	
		}
	}
	
	UPassiveHandler* PassiveHandler =  currentPlayer->combatEntityHub->passiveHandler;
	TArray<UPassiveSkills*> passiveSkills = currentPlayer->combatEntityHub->passiveHandler->GetAllFreeSlotPassives();
	
	for(int i = 0 ; i < PassiveHandler->AMOUNT_OF_PASSIVE_SLOTS;i++)
	{
		if(passiveSkills.Num() == 0)
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,genericNotData);
			continue;
		}

		if(i > passiveSkills.Num() )
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,genericNotData);
			continue;
		}
		
		if(passiveSkills[i])
		{
			CreatePassiveSkillbar(EEquipmentMenuSlot::Passive,passiveSkills[i]->passiveSkillData);		
		}
		
	}


	
	SetCursorPositionInfo();
}

void UEquipMenuView::CreateAndBindDelegateOption(EEquipmentMenuSlot aTitleState,
	TMemFunPtrType<false, UEquipMenuView, void()>::Type InFunc, const FName& FuncName)
{
	FViewSelection newViewSelection;
	newViewSelection.__Internal_AddDynamic(this,InFunc,FuncName);
	ViewSelection.Add(aTitleState,newViewSelection );
}

void UEquipMenuView::CreatePassiveSkillbar(EEquipmentMenuSlot aEquipmentSlot,FPassiveSkillData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::PassiveSkillElement));

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	PassiveSkillSlots.Add(baseUserWidget);

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);

	switch (aEquipmentSlot)
	{
		case EEquipmentMenuSlot::None:
			break;

		case EEquipmentMenuSlot::Equipment:
			BW_VerticalEquipBox->AddChild(skillBarElement);
			break;
		case EEquipmentMenuSlot::Passive:
			BW_VerticalPassiveBox->AddChild(skillBarElement);
			break;
	}
	
	SetPassiveSkillBar(aSkill, baseUserWidget);
}

void UEquipMenuView::SetPassiveSkillBar(FPassiveSkillData aSkill, UPassiveSkillElement* PassiveSkillElement)
{
	if(aSkill.passiveSkillID == EPassiveSkillID::None)
	{
		return;
	}
	PassiveSkillElement->SetPassiveSkill(aSkill);
}

void UEquipMenuView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	int classOffset   = 2;
	int equipSlots    = equipmentSlots.Num()-1;
	int passiveSlots  = PassiveSkillSlots.Num()-1;
	maxCursorPosition = PassiveSkillSlots.Num()-1;
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UEquipMenuView::MoveUp()
{
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::Super::MoveUp();
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UEquipMenuView::MoveDown()
{
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	Super::Super::MoveDown();
	PassiveSkillSlots[cursorPosition]->BW_BackgroundHighlight->SetColorAndOpacity(highlightedColor);
}

void UEquipMenuView::MainClassClicked()
{
}

void UEquipMenuView::SubClassClicked()
{
}

void UEquipMenuView::EquipmentClicked()
{
}

void UEquipMenuView::PassiveClicked()
{
}

void UEquipMenuView::ActivateEquipMenuSelection()
{
	UPartyInventoryEquipmentView* partyInventoryEquipment = (UPartyInventoryEquipmentView*)InGameHUD->PushAndGetView(EViews::PartyInventoryEquipment,  EUiType::ActiveUi);

	partyInventoryEquipment->ActivateEquipMenu(PartyManagerSubsystem);
}
