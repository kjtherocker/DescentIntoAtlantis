// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatManager.h"

#include "EnemyBehaviour.h"
#include "EnemySkillView.h"
#include "InGameHUD.h"
#include "LevelupView.h"
#include "PartyHealthbarsView.h"
#include "PressTurnManager.h"
#include "TurnCounter.h"
#include "Blueprint/UserWidget.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Kismet/GameplayStatics.h"


void UCombatManager::Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase)
{
	gameModeBase = aGameModeBase;
	pressTurnManager = NewObject<UPressTurnManager>();
	pressTurnManager->Initialize(this,aGameModeBase);
	skillFactory = aGameModeBase->skillFactory;
}

void UCombatManager::StartCombat(UWorld* aWorld)
{
	if(hasCombatStarted)
	{
		return;
	}

	world =aWorld;
	
	hasCombatStarted = true;
	
	GameHUD = gameModeBase->InGameHUD;

	partyMembersInCombat     = gameModeBase->partyManager->ReturnActivePartyEntityData();
	currentActivePartyMember = partyMembersInCombat[1];
	currentTurnType          = ECharactertype::Ally;
	
	TArray<FString> EnemyNames = gameModeBase->enemyFactory->ReturnEnemyGroupData("FloorFight1");

	for(int i = 0 ; i < EnemyNames.Num();i++)
	{
		AddEnemyToCombat(gameModeBase->enemyFactory->ReturnEnemyEntityData(EnemyNames[i]));
	}
	
	if(GameHUD)
	{
		//hud->PushView(EViews::Dialogue,  EUiType::PersistentUi);
		GameHUD->PushView(EViews::CombatBackground,  EUiType::PersistentUi);
		//GameHUD->PushView(EViews::EnemyPortraits,    EUiType::PersistentUi);
		ULevelupView * testo = (ULevelupView*)GameHUD->PushAndGetView(EViews::Levelup,    EUiType::ActiveUi);
		testo->SetupLevelupView(currentActivePartyMember);

		//turnCounter     = (UTurnCounter*)GameHUD->PushAndGetView(EViews::TurnCounter,         EUiType::PersistentUi);
		//partyHealthbars = (UPartyHealthbarsView*)GameHUD->PushAndGetView(EViews::Healthbars,  EUiType::PersistentUi);
	}

	//pressTurnManager->SetAmountOfTurns(partyMembersInCombat.Num());
	//AllyStartTurn();
	
}

void UCombatManager::AddEnemyToCombat(FEnemyEntityData* AEnemyEntityData)
{
	if(AEnemyEntityData != nullptr)
	{
		FEnemyCombatEntity* EnemyCombatEntity = new FEnemyCombatEntity;
		EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData,skillFactory);
		
		enemyCombatEntities.Add(EnemyCombatEntity);
		EnemyCombatEntity->enemyCombatPosition = static_cast<EEnemyCombatPositions>(enemyCombatEntities.Num()-1);
	}
}

void UCombatManager::SwitchCombatSides()
{
	currentActivePosition = 0;
	currentTurnType = currentTurnType == ECharactertype::Ally ?  ECharactertype::Enemy : ECharactertype::Ally;
	
	int numberOfTurns = currentTurnType == ECharactertype::Ally
	? partyMembersInCombat.Num()
	: enemyCombatEntities.Num();
	
	pressTurnManager->SetAmountOfTurns(numberOfTurns);
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

void UCombatManager::EndCombat()
{
	hasCombatStarted = false;
	GameHUD->PopAllPersistantViews();
	GameHUD->PopAllActiveViews();
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

	}
}

void UCombatManager::AllyStartTurn()
{
	GameHUD->PushView(EViews::CommandBoard,      EUiType::ActiveUi);
	currentActivePosition = 0;
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
}

void UCombatManager::EnemyStartTurn()
{
	GameHUD->PopMostRecentActiveView();
	
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


	if(world)
	{
		FTimerHandle handle;

		world->GetTimerManager().SetTimer(handle,this,&UCombatManager::EnemyStartTurn,ENEMY_TURN_TIME,false);
	}
	
	
}

void UCombatManager::EnemyActivateSkill(FEnemyCombatEntity* aEnemyCombatEntity)
{
	UEnemySkillView* enemySkillView = (UEnemySkillView*)GameHUD->PushAndGetView(EViews::EnemySkill,      EUiType::ActiveUi);

	FSkills_Base* skill = aEnemyCombatEntity->enemyBehaviour->GetSkill();
	
	enemySkillView->SetSkill(skill,aEnemyCombatEntity);

	int playerToAttack = aEnemyCombatEntity->enemyBehaviour->PlayerToAttack(static_cast<TArray<FCombatEntity*>>(partyMembersInCombat));

	pressTurnManager->ActivateSkill(aEnemyCombatEntity,playerToAttack,skill);
}

FPlayerCombatEntity* UCombatManager::ReturnCurrentActivePartyMember()
{
	return currentActivePartyMember;
}

TArray<FEnemyCombatEntity*> UCombatManager::GetEnemysInCombat()
{
	return enemyCombatEntities;
}

TArray<FPlayerCombatEntity*> UCombatManager::GetPlayersInCombat()
{
	return partyMembersInCombat;
}
