// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelupView.h"
#include "PlayerCombatEntity.h"
#include "Components/TextBlock.h"
#include "LevelupPanelElement.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "SkillBarElement.h"


void ULevelupView::InitializeCombatEntitysToLevelUp(TArray<UPlayerCombatEntity*> aPlayerCombatEntitys)
{
	InitializeInputComponent();
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &ULevelupView::ActivateNextLevelup  );
	combatEntitysToLevelup = aPlayerCombatEntitys;
	ActivateNextLevelup();
}

void ULevelupView::SetupLevelupView(UPlayerCombatEntity* aPlayerCombatEntity)
{
	FClassData currentClassLevel = aPlayerCombatEntity->baseClass->currentClassLevel;
	FClassData nextClassLevel    = aPlayerCombatEntity->baseClass->Levelup();
	
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	FSkillsData newSKill = GameModeBase->skillFactory->GetSkill(nextClassLevel.newlyObtainedSkill)->skillData;
	
	BW_Skillbar->SetSkill(newSKill);

	BW_LevelupConversationalText->SetText(FText(FText::FromString(newSKill.skillDescription)));
	
	BW_CharacterPortrait->SetBrushFromTexture(aPlayerCombatEntity->playerEntityData.fullBodyCharacterPortrait);
	
	BW_PreviousLevelNumber->SetText(FText(FText::FromString(currentClassLevel.classLevelID)));
	BW_CurrentLevelNumber->SetText(FText(FText::FromString(nextClassLevel.classLevelID)));
	
	BW_StrengthLevelpanel->SetLevelupPanelElement(FString("Str"),
		FString::FromInt(currentClassLevel.baseStrength),
		  FString::FromInt(nextClassLevel.baseStrength));

	BW_MagicLevelPanel->SetLevelupPanelElement(FString("Mag"),
	FString::FromInt(currentClassLevel.baseMagic),
	  FString::FromInt(nextClassLevel.baseMagic));

	BW_HitLevelPanel->SetLevelupPanelElement(FString("Hit"),
	FString::FromInt(currentClassLevel.baseHit),
	  FString::FromInt(nextClassLevel.baseHit));

	BW_EvasionLevelPanel->SetLevelupPanelElement(FString("Eva"),
	FString::FromInt(currentClassLevel.baseEvasion),
	  FString::FromInt(nextClassLevel.baseEvasion));

	BW_DefencePanel->SetLevelupPanelElement(FString("Def"),
	FString::FromInt(currentClassLevel.baseDefence),
	  FString::FromInt(nextClassLevel.baseDefence));
	
	BW_ResistancePanel->SetLevelupPanelElement(FString("Res"),
	FString::FromInt(currentClassLevel.baseResistance),
	  FString::FromInt(nextClassLevel.baseResistance));
}

void ULevelupView::ActivateNextLevelup()
{
	if(combatEntitysToLevelup.IsEmpty())
	{
		InGameHUD->PopMostRecentActiveView();
		return;
	}
	
	SetupLevelupView(combatEntitysToLevelup[0]);
	combatEntitysToLevelup.RemoveAt(0);
	
}
