// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatManager.h"

#include "EnemyBehaviour.h"
#include "EnemySkillView.h"
#include "InGameHUD.h"
#include "LevelupView.h"
#include "PartyHealthbarsView.h"
#include "PressTurnManager.h"
#include "TurnCounterView.h"
#include "EnemyCombatEntity.h"
#include "PlayerCombatEntity.h"
#include "PartyHealthbarElement.h"
#include "SkillFactory.h"
#include "SoundManager.h"
#include "Blueprint/UserWidget.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


void UCombatManager::Initialize(AFloorGameMode* aGameModeBase,UWorld* aWorld)
{
	gameModeBase = aGameModeBase;
	pressTurnManager = NewObject<UPressTurnManager>();
	pressTurnManager->Initialize(this,aGameModeBase);
	skillFactory = aGameModeBase->skillFactory;
	world = aWorld;
}

void UCombatManager::StartCombat(FString aEnemyGroupName)
{
	if(hasCombatStarted)
	{
		return;
	}

	
	gameModeBase->soundManager->PlayAudio(EAudioSources::CombatMusic,EAudio::Combat);

	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::CombatSoundEffect,false);
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::CombatMusic,false);
	
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::OverworldMusic,true);
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::OverworldSoundEffect,true);
	
	hasCombatStarted = true;
	
	GameHUD = gameModeBase->InGameHUD;

	partyMembersInCombat       = gameModeBase->partyManager->ReturnActiveParty();
	  
	currentActivePartyMember   = partyMembersInCombat[0];
	currentTurnType            = ECharactertype::Ally;
	
	TArray<FString> EnemyNames = gameModeBase->enemyFactory->ReturnEnemyGroupData(aEnemyGroupName);
		
	for(int i = 0 ; i < EnemyNames.Num();i++)
	{
		AddEnemyToCombat(gameModeBase->enemyFactory->ReturnEnemyEntityData(EnemyNames[i]),i);
	}
	
	if(GameHUD)
	{
		//hud->PushView(EViews::Dialogue,  EUiType::PersistentUi);
		GameHUD->PushView(EViews::CombatBackground,  EUiType::PersistentUi);
		GameHUD->PushView(EViews::EnemyPortraits,    EUiType::PersistentUi);
		
		turnCounter     = (UTurnCounterView*)GameHUD->PushAndGetView(EViews::TurnCounter,         EUiType::PersistentUi);
		partyHealthbars = (UPartyHealthbarsView*)GameHUD->PushAndGetView(EViews::Healthbars,  EUiType::PersistentUi);
	}
	

	combatExp = 0;
	pressTurnManager->SetAmountOfTurns(partyMembersInCombat.Num(),currentTurnType);
	
	AllyStartTurn();
	//GameHUD->PushView(EViews::Tutorial,    EUiType::PersistentUi);
}

void UCombatManager::RemoveDeadPartyMembersFromCombat()
{
	for(int i =  partyMembersInCombat.Num() -1 ; i >= 0;i--)
	{
		if(partyMembersInCombat[i]->GetIsMarkedForDeath())
		{
			partyMembersInCombat[i]->Death();
			partyMembersInCombat.RemoveAt(i);
		}
	}
}

void UCombatManager::AddEnemyToCombat(FEnemyEntityData AEnemyEntityData,int aPosition)
{
	if(AEnemyEntityData.characterName.IsEmpty())
	{
		return;
	}
	
	UEnemyCombatEntity* EnemyCombatEntity = NewObject<UEnemyCombatEntity>();
	EnemyCombatEntity->SetTacticsEntity(skillFactory);
	EnemyCombatEntity->SetTacticsEvents(this);
	EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData,skillFactory,static_cast<EEnemyCombatPositions>(aPosition));
	EnemyCombatEntity->enemyBestiaryData = gameModeBase->enemyFactory->GetBestiaryEntry(EnemyCombatEntity->enemyEntityData.characterName);
	enemyCombatEntities.Add(EnemyCombatEntity);

}

void UCombatManager::SwitchCombatSides()
{
	currentActivePosition = 0;
	currentTurnType = currentTurnType == ECharactertype::Ally ?  ECharactertype::Enemy : ECharactertype::Ally;
	
	int numberOfTurns = currentTurnType == ECharactertype::Ally
	? partyMembersInCombat.Num()
	: enemyCombatEntities.Num();
	
	pressTurnManager->SetAmountOfTurns(numberOfTurns,currentTurnType);
	GameHUD->PopAllActiveViews();

	if(currentTurnType == ECharactertype::Ally)
	{
		AllyStartTurn();
	}
	if(currentTurnType == ECharactertype::Enemy)
	{
		EnemyStartTurn();
	}
}

void UCombatManager::EndCombat(bool aHasWon)
{
	hasCombatStarted = false;
	GameHUD->PopAllPersistantViews();
	GameHUD->PopAllActiveViews();

	for(int i =  enemyCombatEntities.Num() -1 ; i >= 0;i--)
	{
		enemyCombatEntities.RemoveAt(i);
	}

	gameModeBase->partyManager->ResetActivePartyToDefaultState();
	
	if(aHasWon)
	{
		triggerNextEventStage.Broadcast(EFloorEventStates::Levelup);
	}
	else
	{
		gameModeBase->floorEventManager->EventNotCompleted();
	}
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::CombatSoundEffect,true);
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::CombatMusic,true);
	gameModeBase->soundManager->PlayAudio(EAudioSources::OverworldMusic,EAudio::Overword);
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::OverworldSoundEffect,false);
	gameModeBase->soundManager->SetAudioPauseState(EAudioSources::OverworldMusic,false);
}

void UCombatManager::TurnFinished()
{
	if(currentTurnType == ECharactertype::Ally)
	{
		currentActivePosition++;
		if(currentActivePosition >= partyMembersInCombat.Num())
		{
			currentActivePosition = 0;
		}

		partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,0);

		for(int i =  enemyCombatEntities.Num() -1 ; i >= 0;i--)
		{
			if(enemyCombatEntities[i]->GetIsMarkedForDeath())
			{
				combatExp += enemyCombatEntities[i]->enemyEntityData.experience;
				enemyCombatEntities[i]->Death();
				enemyCombatEntities.RemoveAt(i);
			}
		}
		
		if(enemyCombatEntities.Num() == 0)
		{
			EndCombat();
			return;
		}
	
		if(pressTurnManager->GetNumberOfActivePressTurns() == 0)
		{
			SwitchCombatSides();
			return;
		}
		
		currentActivePartyMember = partyMembersInCombat[currentActivePosition];
		partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	
		GameHUD->PopAllActiveViews();
		GameHUD->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
	}

	if(currentTurnType == ECharactertype::Enemy)
	{
		FTimerHandle handle;

		world->GetTimerManager().SetTimer(handle,this,&UCombatManager::EnemyStartTurn,ENEMY_TURN_TIME,false);
	}
}

void UCombatManager::AllyStartTurn()
{
	OnRoundEndDelegate.Broadcast();
	RemoveDeadPartyMembersFromCombat();
	if(partyMembersInCombat.Num() == 0)
	{
		GameHUD->PushView(EViews::Death,    EUiType::PersistentUi);
		return;
	}
	currentActivePosition = 0;
	currentActivePartyMember = partyMembersInCombat[currentActivePosition];
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	GameHUD->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
}

void UCombatManager::EnemyStartTurn()
{
	GameHUD->PopMostRecentActiveView();
	
	RemoveDeadPartyMembersFromCombat();
	if(partyMembersInCombat.Num() == 0)
	{
		GameHUD->PushView(EViews::Death,    EUiType::PersistentUi);
		return;
	}
	
	if(pressTurnManager->GetNumberOfActivePressTurns() == 0)
	{
		SwitchCombatSides();
		return;
	}

	if(currentActivePosition <= enemyCombatEntities.Num() -1)
	{
		EnemyActivateSkill(enemyCombatEntities[currentActivePosition]);
		currentActivePosition++;
	}
	else
	{
		currentActivePosition = 0;
		EnemyActivateSkill(enemyCombatEntities[currentActivePosition]);
		currentActivePosition++;
	}
}

void UCombatManager::EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity)
{
	UEnemySkillView* enemySkillView = (UEnemySkillView*)GameHUD->PushAndGetView(EViews::EnemySkill,      EUiType::ActiveUi);

	USkillBase* skillObject = aEnemyCombatEntity->enemyBehaviour->GetSkill();
	FSkillsData skillData = skillObject->skillData;
	
	enemySkillView->SetSkill(skillData,aEnemyCombatEntity);

	int playerToAttack = aEnemyCombatEntity->enemyBehaviour->PlayerToAttack(partyMembersInCombat);

	pressTurnManager->ActivateSkill(aEnemyCombatEntity,playerToAttack,skillObject);
}

int UCombatManager::GetEXP()
{
	return combatExp;
}

UPlayerCombatEntity* UCombatManager::GetCurrentActivePartyMember()
{
	return currentActivePartyMember;
}

TArray<UEnemyCombatEntity*> UCombatManager::GetEnemysInCombat()
{
	return enemyCombatEntities;
}

TArray<UPlayerCombatEntity*> UCombatManager::GetPlayersInCombat()
{
	return partyMembersInCombat;
}
