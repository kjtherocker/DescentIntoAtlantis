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
class UPartyHealthbars;
struct FCombatEntity;
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
	UPartyHealthbars* partyHealthbars;
	
	const float FULL_OPACITY = 100;
	bool hasCombatStarted;
	int currentActivePosition;
	AInGameHUD * GameHUD;
public:
	UPressTurnManager* pressTurnManager;

	void Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase);
	void StartCombat();
	void EndCombat();
	void AddEnemyToCombat(FEnemyEntityData* AEnemyEntityData);
	void TurnFinished();
	
	FPlayerCombatEntity* ReturnCurrentActivePartyMember();
	
	TArray<FEnemyCombatEntity*> GetEnemysInCombat();
	TArray<FPlayerCombatEntity*> GetPlayersInCombat();
	
	FPlayerCombatEntity* currentActivePartyMember;

	TArray<FEnemyCombatEntity*> enemyCombatEntities;

	TArray<FPlayerCombatEntity*> partyMembersInCombat;
	TArray<FPlayerCombatEntity*> partyMembersDead;
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	
};
