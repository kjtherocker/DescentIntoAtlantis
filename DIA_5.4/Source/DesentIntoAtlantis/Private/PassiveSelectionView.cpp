// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSelectionView.h"

#include "PartyManagerSubsystem.h"
#include "PassiveSkillElement.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"
#include "Components/VerticalBox.h"

class UPassiveSkillElement;

void UPassiveSelectionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UPassiveSelectionView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UPassiveSelectionView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UPassiveSelectionView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UPassiveSelectionView::PopMostActiveView  );
}

void UPassiveSelectionView::ActivatePassiveMenu(UPlayerCombatEntity* aPlayerCombatEntity, int aPassiveSlot)
{
	playerCombatEntity = aPlayerCombatEntity;
	passiveSlot = aPassiveSlot;

	UPassiveFactorySubsystem* PassiveFactorySubsystem = persistentGameinstance->passiveFactorySubsystem;
	
	TMap<EPassiveSkillID, FPassiveSkillClassData> UnlockedPassives = playerCombatEntity->classHandler->GetUnlockedPassives();
	

	if(UnlockedPassives.Num() == 0)
	{
		PopMostActiveView();
		return;
	}

	for (auto AllEquipment : UnlockedPassives)
	{
		CreatePassiveSkillbar(PassiveFactorySubsystem->GetPassiveSkill(AllEquipment.Value.passiveSkillID)->passiveSkillData );
		passiveIDs.Add(AllEquipment.Key);
	}

	SetHighLightElements((TArray<UBaseHighlightElement*>)PassiveSkillSlots);
	SetDefaultMenuState();
}


void UPassiveSelectionView::ActivateInventoryMenuSelection()
{
	UPassiveFactorySubsystem* PassiveFactorySubsystem = persistentGameinstance->passiveFactorySubsystem;
	EPassiveSkillID PassiveSkillID = passiveIDs[cursorPosition];
	playerCombatEntity->EquipPassive(PassiveFactorySubsystem->GetPassiveSkill(PassiveSkillID),passiveSlot);
	characterChange.Broadcast();
	PopMostActiveView();
}

void UPassiveSelectionView::CreatePassiveSkillbar(FPassiveSkillData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::PassiveSkillElement));

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	PassiveSkillSlots.Add(baseUserWidget);

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	BW_VerticalEquipBox->AddChild(skillBarElement);

	baseUserWidget->ViewSelection.AddDynamic(this,&UPassiveSelectionView::ActivateInventoryMenuSelection );
	SetPassiveSkillBar(aSkill, baseUserWidget);
}


