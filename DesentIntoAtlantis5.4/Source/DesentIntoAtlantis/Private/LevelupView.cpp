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
	FCompleteClassData completeClassData = aPlayerCombatEntity->mainClass->completeClassData;

	int previousLevel = aPlayerCombatEntity->GetCurrentLevel();
	FPlayerIdentityData PlayerIdentityData = aPlayerCombatEntity->playerIdentityData;
	
	aPlayerCombatEntity->LevelUp(newLevel);
	TMap<EStatTypes, UCombatStat*> nextClassLevel    = aPlayerCombatEntity->abilityScoreMap;

	//if(completeClassData.unlockableSkillByLevel.Contains(completeClassData.currentLevel+ 1))
	//{
	//	ESkillIDS newSkillName = completeClassData.unlockableSkillByLevel[completeClassData.currentLevel + 1];
	//	FSkillsData newSKill = persistentGameinstance->skillFactorySubsystem->GetSkill(newSkillName)->skillData;
	//	BW_Skillbar->SetSkill(newSKill);
//
	//	BW_LevelupConversationalText->SetText(FText(FText::FromString(newSKill.skillDescription)));
	//}

	BW_CharacterPortrait->SetBrushFromTexture(aPlayerCombatEntity->playerIdentityData.fullBodyCharacterPortrait);
	
	BW_PreviousLevelNumber->SetText(FText(FText::AsNumber(previousLevel)));
	BW_CurrentLevelNumber->SetText(FText(FText::AsNumber(newLevel)));

	
	BW_StrengthLevelpanel->SetLevelupPanelElement(FString("Str"),
		FString::FromInt(Cast<UPlayerCombatStats>(nextClassLevel[EStatTypes::Strength])->GetStatByLevel(PlayerIdentityData,previousLevel)),
		   FString::FromInt(nextClassLevel[EStatTypes::Strength]->base));

	BW_MagicLevelPanel->SetLevelupPanelElement(FString("Mag"),
	FString::FromInt(Cast<UPlayerCombatStats>(nextClassLevel[EStatTypes::Magic])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(nextClassLevel[EStatTypes::Magic]->base));

	BW_HitLevelPanel->SetLevelupPanelElement(FString("Hit"),
	FString::FromInt(Cast<UPlayerCombatStats>(nextClassLevel[EStatTypes::Hit])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(nextClassLevel[EStatTypes::Hit]->base));

	BW_EvasionLevelPanel->SetLevelupPanelElement(FString("Eva"),
	FString::FromInt(Cast<UPlayerCombatStats>(nextClassLevel[EStatTypes::Evasion])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(nextClassLevel[EStatTypes::Evasion]->base));

	BW_DefencePanel->SetLevelupPanelElement(FString("Def"),
	FString::FromInt(Cast<UPlayerCombatStats>(nextClassLevel[EStatTypes::Defence])->GetStatByLevel(PlayerIdentityData,previousLevel)),
	   FString::FromInt(nextClassLevel[EStatTypes::Defence]->base));
	
	BW_ResistancePanel->SetLevelupPanelElement(FString("Res"),
	FString::FromInt(Cast<UPlayerCombatStats>(nextClassLevel[EStatTypes::Resistance])->GetStatByLevel(PlayerIdentityData,previousLevel)),
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
	
	SetupLevelupView(currentPlayerLevel,combatEntitysToLevelup[0]);
	combatEntitysToLevelup.RemoveAt(0);
	
}
