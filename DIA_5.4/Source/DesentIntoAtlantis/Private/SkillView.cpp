// Fill out your copyright notice in the Description page of Project Settings.

#include "SkillView.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "CombatEntity.h"
#include "Components/VerticalBox.h"
#include "SkillBarElement.h"
#include "CombatClass.h"
#include "Components/TextBlock.h"
#include "CombatGameModeBase.h"
#include "CombatSelectionView.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatEntity.h"
#include "SkillTraitHighlightElement.h"


void USkillView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &USkillView::SelectSkill  );

	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &USkillView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &USkillView::MoveDown  );
	InputComponent->BindAction("E"       ,IE_Pressed ,this, &USkillView::ReturnToPreviousScreen  );

	if(ClassSlot != EClassSlot::None)
	{
		InitializeSkills((ACombatGameModeBase*)aGameModeBase,ClassSlot);
	}
	
}

void USkillView::InitializeSkills(ACombatGameModeBase* aCombatGameMode,EClassSlot aClassSlot)
{
	ClassSlot = aClassSlot;
	combatGameMode = aCombatGameMode;
	currentActivePartyMember = aCombatGameMode->GetCurrentActivePartyMember();
	TArray<USkillBase*> combatClass = currentActivePartyMember->classHandler->GetClassSkills(aClassSlot);

	BW_CharacterName->SetText(FText(FText::FromString(currentActivePartyMember->playerIdentityData.characterName)));
	
	FString className = GetCombatClass()->completeClassData.className;
	
	BW_ClassName->SetText(FText(FText::FromString(className)));
	
	for(int i = 0 ; i < combatClass.Num();i++)
	{
		if(combatClass[i] != nullptr)
		{
			CreateSkillbar(combatClass[i]->skillData);	
		}
	}

	if(skillBarElements[cursorPosition] != nullptr)
	{
		skillBarElements[cursorPosition]->BW_BackgroundHighlight->SetOpacity(1);
		SkillSelection(combatClass[cursorPosition]);	
	}
	
	SetCursorPositionInfo();
}

UCombatClass* USkillView::GetCombatClass()
{
	switch (ClassSlot)
	{
	case EClassSlot::None:
		break;
	case EClassSlot::Main:
		return currentActivePartyMember->classHandler->mainClass;
		break;
	case EClassSlot::Sub:
		return currentActivePartyMember->classHandler->subClass;
		break;
	}
	return nullptr;
}

void USkillView::SetCursorPositionInfo()
{
	Super::SetCursorPositionInfo();
	cursorPosition    =  0;
	minCursorPosition =  0;
	maxCursorPosition = skillBarElements.Num()-1;
}

void USkillView::MoveUp()
{
	if(skillBarElements.Num() == 0)
	{
		return;
	}
	
	skillBarElements[cursorPosition]->UnHightlight();

	Super::MoveUp();
	
	SkillSelection(currentActivePartyMember->classHandler->GetClassSkills(EClassSlot::Main)[cursorPosition]);
	skillBarElements[cursorPosition]->Highlight();
}

void USkillView::MoveDown()
{
	if(skillBarElements.Num() == 0)
	{
		return;
	}

	
	skillBarElements[cursorPosition]->UnHightlight();

	Super::MoveDown();
	
	SkillSelection(currentActivePartyMember->classHandler->GetClassSkills(EClassSlot::Main)[cursorPosition]);
	skillBarElements[cursorPosition]->Highlight();
}



void USkillView::CreateSkillbar(FSkillsData aSkill)
{
	UUserWidget* skillBarElement = CreateWidget(this, InGameHUD->GetElement(EViewElements::SkillBar));

	USkillBarElement* baseUserWidget = (USkillBarElement*)skillBarElement;
	baseUserWidget->UiInitialize(gameModeBase);
	skillBarElement->AddToViewport();

	baseUserWidget->SetSkill(aSkill);

	skillBarElements.Add(baseUserWidget);
	
	BW_VerticalBox->AddChild(skillBarElement);
}

void USkillView::SkillSelection(USkillBase*  aSkill)
{
	FSkillsData SkillsData = aSkill->skillData;
		
	SetCombatToken(SkillsData);
	SetSkillTrait( aSkill);
	
	BW_SkillName->SetText(FText(FText::FromString(SkillsData.skillName)));
	BW_SkillDescription->SetText
	(FText(FText::FromString(currentActivePartyMember->combatEntityHub->skillHandler->ParseSkillDescription(SkillsData))));
}

void USkillView::SetCombatToken(FSkillsData aSkillsData)
{
	for (int i = CombatTokenDescriptionElements.Num() - 1; i >= 0; i--)
	{
		CombatTokenDescriptionElements[i]->RemoveFromParent();
		CombatTokenDescriptionElements.RemoveAt(i);
	}


	for(auto Element : aSkillsData.combatTokensUsedOnSkill)
	{
		CreateCombatToken(Element);
	}
	
}

void USkillView::SetSkillTrait(USkillBase*  aSkill)
{

	FSkillsData SkillsData = aSkill->skillData;
	for (int i = skillTraitHighlightElements.Num() - 1; i >= 0; i--)
	{
		skillTraitHighlightElements[i]->RemoveFromParent();
		skillTraitHighlightElements.RemoveAt(i);
	}

	if(SkillsData.skillType != ESkillType::None)
	{
		CreateSkillTrait( SkillsData, ESkillTraitType::skillType);		
	}

	if(SkillsData.skillType == ESkillType::Attack ||SkillsData.skillType == ESkillType::AttackNegativeCombatToken )
	{
		CreateSkillTrait( SkillsData, ESkillTraitType::DamageType);		
	}

	if(SkillsData.skillScaleStat != EStatTypes::None)
	{
		CreateSkillTrait( SkillsData, ESkillTraitType::ScaleStat);
	}

	if (ISkillHit* skillHit = Cast<ISkillHit>(aSkill))
	{
		CreateSkillTrait( SkillsData, ESkillTraitType::SkillHit);
	}
}

void USkillView::CreateCombatToken(FCombatTokenStackData aCombatTokenData)
{
	UUserWidget* basewidget = CreateWidget(this, InGameHUD->GetElement(EViewElements::CombatTokenDescriptionElement));

	UCombatTokenDescriptionElement* CombatTokenDescriptionElement = (UCombatTokenDescriptionElement*)basewidget;
	CombatTokenDescriptionElement->UiInitialize(gameModeBase);
	basewidget->AddToViewport();

	CombatTokenDescriptionElement->SetCombatToken(persistentGameinstance->passiveFactorySubsystem,aCombatTokenData);

	CombatTokenDescriptionElements.Add(CombatTokenDescriptionElement);
	
	BW_CombatTokenVerticalBox->AddChild(basewidget);
}

void USkillView::CreateSkillTrait(FSkillsData aSkillsData, ESkillTraitType aSkillTraitType)
{
	UUserWidget* basewidget = CreateWidget(this, InGameHUD->GetElement(EViewElements::SkillTraitElement));

	USkillTraitHighlightElement* skillTraitElement = (USkillTraitHighlightElement*)basewidget;
	skillTraitElement->UiInitialize(gameModeBase);
	basewidget->AddToViewport();

	skillTraitElement->InitializeSkillTrait(currentActivePartyMember->combatEntityHub->skillHandler,aSkillTraitType,aSkillsData);

	skillTraitHighlightElements.Add(skillTraitElement);
	
	BW_SkillTraitHorizontalBox->AddChild(basewidget);
}

void USkillView::SelectSkill()
{
	TArray<USkillBase*> skillBase = currentActivePartyMember->classHandler->GetClassSkills(ClassSlot);
	
	if(skillBase[cursorPosition]->CanUseSkill(currentActivePartyMember))
	{
		InGameHUD->PopMostRecentActiveView();
		UCombatSelectionView* SelectionView = (UCombatSelectionView*)InGameHUD->PushAndGetView(EViews::CombatSelection,  EUiType::ActiveUi);
		SelectionView->SetCombatGameMode(combatGameMode);
		
		SelectionView->SetSkill(skillBase[cursorPosition]);
	}
}

