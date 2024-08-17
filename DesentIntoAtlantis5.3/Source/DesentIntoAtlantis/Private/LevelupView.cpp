// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelupView.h"
#include "PlayerCombatEntity.h"
#include "Components/TextBlock.h"
#include "LevelupPanelElement.h"
#include "PersistentGameinstance.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SkillBarElement.h"


void ULevelupView::InitializeCombatEntitysToLevelUp(TArray<UPlayerCombatEntity*> aPlayerCombatEntitys,FTriggerNextEventStage  aTriggerNextEventStage, EFloorEventStates aTriggerOnEnd)
{
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &ULevelupView::ActivateNextLevelup  );
	combatEntitysToLevelup = aPlayerCombatEntitys;
	ActivateNextLevelup();
	triggerNextEventStage = aTriggerNextEventStage;
	triggerOnEnd = aTriggerOnEnd;
}

void ULevelupView::SetupLevelupView(UPlayerCombatEntity* aPlayerCombatEntity)
{
	FCompleteClassData completeClassData = aPlayerCombatEntity->mainClass->completeClassData;
	TMap<EStatTypes, UCombatAbilityStats*> currentClassLevel = aPlayerCombatEntity->abilityScoreMap;
	aPlayerCombatEntity->LevelUp(4);
	TMap<EStatTypes, UCombatAbilityStats*> nextClassLevel    = aPlayerCombatEntity->abilityScoreMap;

	if(completeClassData.unlockableSkillByLevel.Contains(completeClassData.currentLevel+ 1))
	{
		ESkillIDS newSkillName = completeClassData.unlockableSkillByLevel[completeClassData.currentLevel + 1];
		FSkillsData newSKill = persistentGameinstance->skillFactorySubsystem->GetSkill(newSkillName)->skillData;
		BW_Skillbar->SetSkill(newSKill);

		BW_LevelupConversationalText->SetText(FText(FText::FromString(newSKill.skillDescription)));
	}

	
	BW_CharacterPortrait->SetBrushFromTexture(aPlayerCombatEntity->playerIdentityData.fullBodyCharacterPortrait);
	
	BW_PreviousLevelNumber->SetText(FText(FText::AsNumber(completeClassData.currentLevel )));
	BW_CurrentLevelNumber->SetText(FText(FText::AsNumber(completeClassData.currentLevel + 1)));
	
	BW_StrengthLevelpanel->SetLevelupPanelElement(FString("Str"),
		FString::FromInt(currentClassLevel[EStatTypes::Strength]->base),
		  FString::FromInt(nextClassLevel[EStatTypes::Strength]->base));

	BW_MagicLevelPanel->SetLevelupPanelElement(FString("Mag"),
	FString::FromInt(currentClassLevel[EStatTypes::Magic]->base),
	  FString::FromInt(nextClassLevel[EStatTypes::Magic]->base));

	BW_HitLevelPanel->SetLevelupPanelElement(FString("Hit"),
	FString::FromInt(currentClassLevel[EStatTypes::Hit]->base),
	  FString::FromInt(nextClassLevel[EStatTypes::Hit]->base));

	BW_EvasionLevelPanel->SetLevelupPanelElement(FString("Eva"),
	FString::FromInt(currentClassLevel[EStatTypes::Evasion]->base),
	  FString::FromInt(nextClassLevel[EStatTypes::Evasion]->base));

	BW_DefencePanel->SetLevelupPanelElement(FString("Def"),
	FString::FromInt(currentClassLevel[EStatTypes::Defence]->base),
	  FString::FromInt(nextClassLevel[EStatTypes::Defence]->base));
	
	BW_ResistancePanel->SetLevelupPanelElement(FString("Res"),
	FString::FromInt(currentClassLevel[EStatTypes::Resistance]->base),
	  FString::FromInt(nextClassLevel[EStatTypes::Resistance]->base));
}

void ULevelupView::ActivateNextLevelup()
{
	if(combatEntitysToLevelup.IsEmpty())
	{
		InGameHUD->PopMostRecentActiveView();
		triggerNextEventStage.Broadcast(triggerOnEnd);
		persistentGameinstance->LoadPreviousLevel();
		return;
	}
	
	SetupLevelupView(combatEntitysToLevelup[0]);
	combatEntitysToLevelup.RemoveAt(0);
	
}
