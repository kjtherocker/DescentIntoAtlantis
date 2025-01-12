// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassDetailedView.h"

#include "ClassSkillHighlightElement.h"
#include "CombatClass.h"
#include "EquipMenuView.h"
#include "PassiveSkillElement.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PersistentGameinstance.h"
#include "SkillBarElement.h"
#include "Components/VerticalBox.h"

class UPassiveSkillElement;

void UClassDetailedView::SetDetailedClassView(FCompleteClassData aClassData, UPlayerCombatEntity* aPlayerCombatEntity,
                                              UPersistentGameinstance* aPersistentGameinstance, EClassSlot aClassSlot)
{
	ResetUI();

	BW_ClassText->SetText(FText::FromString(aClassData.className));
	
	aClassData.skillClassData;

	USkillFactorySubsystem* SkillFactorySubsystem = aPersistentGameinstance->skillFactorySubsystem;
	UPassiveFactorySubsystem* PassiveFactorySubsystem = aPersistentGameinstance->passiveFactorySubsystem;
	
	for (auto Element : aClassData.skillClassData)
	{
		CreateSkillbar(Element,SkillFactorySubsystem->GetSkill(Element.SkillIds)->skillData);
	}

	for (auto Element : aClassData.classPassives)
	{
		FPassiveSkillClassData PassiveSkillClassData = Element;
		FPassiveSkillData PassiveSkillData =
			PassiveFactorySubsystem->GetPassiveSkill(PassiveSkillClassData.passiveSkillID)->passiveSkillData;
		
		CreatePassiveSkillbar(PassiveSkillData);
	}
	
}

void UClassDetailedView::ReturnToPreviousScreen()
{
	InputComponent->Deactivate();
	ReturnToPreviousMenu.Broadcast();
}

void UClassDetailedView::ResetUI()
{
	for (int32 Index = highlightElements.Num() - 1; Index >= 0; --Index)
	{
		if (highlightElements[Index]) // Ensure the element is valid before accessing it
		{
			highlightElements[Index]->RemoveFromParent();
			highlightElements.RemoveAt(Index);
		}
	}
}

void UClassDetailedView::SkillClicked()
{
}

void UClassDetailedView::PassiveClicked()
{
}


void UClassDetailedView::ActivateInput()
{
	InitializeInputComponent();
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UClassDetailedView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UClassDetailedView::MoveDown  );
	InputComponent->BindAction("Left"    ,IE_Pressed ,this, &UClassDetailedView::ReturnToPreviousScreen  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UClassDetailedView::ActivateHighLightSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UClassDetailedView::PopMostActiveView  );
	
	SetDefaultMenuState();

}

void UClassDetailedView::CreateSkillbar(FSkillClassData aClassData,FSkillsData aSkillData)
{
	UUserWidget* skillBarElement = InGameHUD->CreateElement(this,EViewElements::ClassSkillHightlightElement);

	UClassSkillHighlightElement* baseUserWidget = (UClassSkillHighlightElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	highlightElements.Add(baseUserWidget);

	baseUserWidget->SetMainText("");

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);


	BW_VerticalSkillBox->AddChild(skillBarElement);
	baseUserWidget->ViewSelection.AddDynamic(this, &UClassDetailedView::SkillClicked);
	
	baseUserWidget->SetSkill(aSkillData);
	baseUserWidget->SetClassInformation(aClassData);
}

void UClassDetailedView::CreatePassiveSkillbar(FPassiveSkillData aSkill)
{
	UUserWidget* skillBarElement  = InGameHUD->CreateElement(this,EViewElements::PassiveSkillElement);

	UPassiveSkillElement* baseUserWidget = (UPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	highlightElements.Add(baseUserWidget);

	baseUserWidget->SetMainText("");

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);


	BW_VerticalPassiveBox->AddChild(skillBarElement);
	baseUserWidget->ViewSelection.AddDynamic(this, &UClassDetailedView::PassiveClicked);
	

	SetPassiveSkillBar(aSkill, baseUserWidget);
}
