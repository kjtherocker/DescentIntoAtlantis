// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelupView.h"
#include "PlayerCombatEntity.h"
#include "Components/TextBlock.h"
#include "LevelupPanelElement.h"
#include "PersistentGameinstance.h"
#include "PlayerCombatStat.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SkillBarElement.h"


void ULevelupView::InitializeCombatEntitysToLevelUp(int newLevel,TArray<UPlayerCombatEntity*> aPlayerCombatEntitys,FTriggerNextEventStage  aTriggerNextEventStage, EFloorEventStates aTriggerOnEnd)
{
	InitializeInputComponent();
	
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &ULevelupView::ActivateNextLevelup  );
	
	combatEntitysToLevelup = aPlayerCombatEntitys;
	currentPlayerLevel = newLevel;

	triggerNextEventStage = aTriggerNextEventStage;
	triggerOnEnd = aTriggerOnEnd;
	
	ActivateNextLevelup();
}

void ULevelupView::SetupLevelupView(int newLevel, UPlayerCombatEntity* aPlayerCombatEntity)
{
	FCompleteClassData completeClassData = aPlayerCombatEntity->classHandler->mainClass->completeClassData;

	int previousLevel = aPlayerCombatEntity->GetCurrentLevel();
	FPlayerIdentityData PlayerIdentityData = aPlayerCombatEntity->playerIdentityData;
	
	aPlayerCombatEntity->LevelUp(newLevel);
	TMap<EStatTypes, UCombatStat*> abilityStatScores    = aPlayerCombatEntity->abilityScoreMap;
	
	BW_CharacterPortrait->SetBrushFromTexture(aPlayerCombatEntity->GetCurrentCostumeData().fullBodyCharacterPortrait);
	
	BW_PreviousLevelNumber->SetText(FText(FText::AsNumber(previousLevel)));
	BW_CurrentLevelNumber->SetText(FText(FText::AsNumber(newLevel)));

	
	BW_StrengthLevelpanel->SetLevelupPanelElement(FString("Str"),
		FString::FromInt(Cast<UPlayerCombatStats>(abilityStatScores[EStatTypes::Strength])->GetStatByLevel(PlayerIdentityData,previousLevel)),
		   FString::FromInt(abilityStatScores[EStatTypes::Strength]->base));

	BW_MagicLevelPanel->SetLevelupPanelElement(FString("Mag"),
	FString::FromInt(Cast<UPlayerCombatStats>(abilityStatScores[EStatTypes::Magic])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(abilityStatScores[EStatTypes::Magic]->base));

	BW_HitLevelPanel->SetLevelupPanelElement(FString("Hit"),
	FString::FromInt(Cast<UPlayerCombatStats>(abilityStatScores[EStatTypes::Hit])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(abilityStatScores[EStatTypes::Hit]->base));

	BW_EvasionLevelPanel->SetLevelupPanelElement(FString("Eva"),
	FString::FromInt(Cast<UPlayerCombatStats>(abilityStatScores[EStatTypes::Evasion])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(abilityStatScores[EStatTypes::Evasion]->base));

	BW_DefencePanel->SetLevelupPanelElement(FString("Def"),
	FString::FromInt(Cast<UPlayerCombatStats>(abilityStatScores[EStatTypes::Defence])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(abilityStatScores[EStatTypes::Defence]->base));
	
	BW_ResistancePanel->SetLevelupPanelElement(FString("Res"),
	FString::FromInt(Cast<UPlayerCombatStats>(abilityStatScores[EStatTypes::Resistance])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(abilityStatScores[EStatTypes::Resistance]->base));
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
	
	SetupLevelupView(currentPlayerLevel,combatEntitysToLevelup[0]);
	combatEntitysToLevelup.RemoveAt(0);
	
}
