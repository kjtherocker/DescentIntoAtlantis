// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "PlayerCombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatManager.generated.h"

class UPressTurnManager;
class AInGameHUD;
class UTurnCounter;
class UPartyHealthbarsView;
class UCombatEntity;
class ADesentIntoAtlantisGameModeBase;
/**
 * 
 */





UCLASS()
class DESENTINTOATLANTIS_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	UTurnCounter*     turnCounter;    
	UPartyHealthbarsView* partyHealthbars;
	
	const float FULL_OPACITY    = 100;
	const int   ENEMY_TURN_TIME = 2;
	bool hasCombatStarted;
	int currentActivePosition;
	int combatExp;
	AInGameHUD * GameHUD;
	USkillFactory * skillFactory;
	UWorld* world;
	ECharactertype currentTurnType; 
public:
	UPressTurnManager* pressTurnManager;

	void Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase);
	void StartCombat(UWorld* aWorld);
	void EndCombat();
	void AddEnemyToCombat(FEnemyEntityData AEnemyEntityData);
	void SwitchCombatSides();
	void TurnFinished();
	void AllyStartTurn();
	void EnemyStartTurn();
	void EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity);
	

	
	UPlayerCombatEntity* ReturnCurrentActivePartyMember();
	
	TArray<UEnemyCombatEntity*> GetEnemysInCombat();
	TArray<UPlayerCombatEntity*> GetPlayersInCombat();
	
	UPlayerCombatEntity* currentActivePartyMember;

	TArray<UEnemyCombatEntity*> enemyCombatEntities;

	TArray<UPlayerCombatEntity*> partyMembersInCombat;
	TArray<UPlayerCombatEntity*> partyMembersDead;
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	
};
