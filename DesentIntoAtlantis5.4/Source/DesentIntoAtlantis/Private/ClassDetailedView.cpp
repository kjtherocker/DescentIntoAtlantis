// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassDetailedView.h"

#include "BaseDialoguebox.h"
#include "ClassPassiveSkillElement.h"
#include "ClassSkillHighlightElement.h"
#include "CombatClass.h"
#include "EquipMenuView.h"
#include "PassiveSkillElement.h"
#include "PassiveSkillFactorySubsystem.h"
#include "PersistentGameinstance.h"
#include "SkillBarElement.h"
#include "Components/VerticalBox.h"

class UPassiveSkillElement;

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

void UClassDetailedView::SetDetailedClassView(FCompleteClassData aClassData, UPlayerCombatEntity* aPlayerCombatEntity,
                                              UPersistentGameinstance* aPersistentGameinstance, EClassSlot aClassSlot)
{
	ResetUI();

	BW_ClassText->SetText(FText::FromString(aClassData.className));

	playerCombatEntity = aPlayerCombatEntity;

	classData = aClassData;

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
		
		CreatePassiveSkillbar(PassiveSkillData, PassiveSkillClassData);
	}
	
}

void UClassDetailedView::CreatePassiveSkillbar(FPassiveSkillData aSkill,FPassiveSkillClassData passiveClassData)
{
	UUserWidget* skillBarElement  = InGameHUD->CreateElement(this,EViewElements::ClassPassiveSkillElement);

	UClassPassiveSkillElement* baseUserWidget = (UClassPassiveSkillElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();
	
	highlightElements.Add(baseUserWidget);

	baseUserWidget->SetMainText("");

	baseUserWidget->BW_BackgroundHighlight->SetColorAndOpacity(unhightlighedColorNoAlpha);
	
	BW_VerticalPassiveBox->AddChild(skillBarElement);
	baseUserWidget->ViewSelection.AddDynamic(this, &UClassDetailedView::PassiveClicked);
	
	baseUserWidget->SetClassInformation(passiveClassData);
	SetPassiveSkillBar(aSkill, baseUserWidget);
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
	if(!aClassData.isSkillOwned)
	{
		baseUserWidget->ViewSelection.AddDynamic(this, &UClassDetailedView::SkillClicked);
	}
	
	baseUserWidget->SetSkill(aSkillData);
	baseUserWidget->SetClassInformation(aClassData);
}

void UClassDetailedView::SkillClicked()
{
	UBaseDialoguebox* popupDialogueBox = (UBaseDialoguebox*)InGameHUD->PushAndGetView(EViews::DialoguePopupbox,  EUiType::ActiveUi);

	UClassSkillHighlightElement* ClassSkillHighlightElement = (UClassSkillHighlightElement*)highlightElements[cursorPosition];
	if(ClassSkillHighlightElement)
	{
		popupDialogueBox->SetTitleText("Unlock");
		popupDialogueBox->SetDescriptionText("Do you want to unlock " + ClassSkillHighlightElement->skillName + " for " +
			FString::FromInt(ClassSkillHighlightElement->SkillClassData.CPCost));
	}
	
	
	popupDialogueBox->BW_YesElement->ViewSelection.AddDynamic(this ,&UClassDetailedView::UnlockSkill);
	popupDialogueBox->BW_NoElement->ViewSelection.AddDynamic(this ,&UClassDetailedView::PopMostActiveView);
}

void UClassDetailedView::UnlockSkill()
{
	UClassSkillHighlightElement* ClassSkillHighlightElement = (UClassSkillHighlightElement*)highlightElements[cursorPosition];
	if(ClassSkillHighlightElement)
	{
		playerCombatEntity->classHandler->UnlockSkill(classData.classIdentifer,ClassSkillHighlightElement->SkillClassData.SkillIds);
		ClassSkillHighlightElement->SetSkillLock(false);
	}
}

void UClassDetailedView::PassiveClicked()
{
	UBaseDialoguebox* popupDialogueBox = (UBaseDialoguebox*)InGameHUD->PushAndGetView(EViews::DialoguePopupbox,  EUiType::ActiveUi);

	UClassPassiveSkillElement* ClassSkillHighlightElement = (UClassPassiveSkillElement*)highlightElements[cursorPosition];
	if(ClassSkillHighlightElement)
	{
		popupDialogueBox->SetTitleText("Unlock");
		popupDialogueBox->SetDescriptionText("Do you want to unlock " + ClassSkillHighlightElement->skillName + " for " +
			FString::FromInt(ClassSkillHighlightElement->passiveSkillClassData.CPCost));
	}
	
	popupDialogueBox->BW_YesElement->ViewSelection.AddDynamic(this ,&UClassDetailedView::UnlockPassive);
	popupDialogueBox->BW_NoElement->ViewSelection.AddDynamic(this ,&UClassDetailedView::PopMostActiveView);
}

void UClassDetailedView::UnlockPassive()
{
	UClassPassiveSkillElement* ClassPassiveSkillElement = (UClassPassiveSkillElement*)highlightElements[cursorPosition];
	if(ClassPassiveSkillElement)
	{
		playerCombatEntity->classHandler->UnlockPassiveSkill(classData.classIdentifer,ClassPassiveSkillElement->passiveSkillClassData.passiveSkillID);
		ClassPassiveSkillElement->SetSkillLock(false);
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

