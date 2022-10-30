// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "PlayerCombatEntity.h"
#include "UObject/NoExportTypes.h"

#include "CombatManager.generated.h"
class USkillFactory;
enum class ECharactertype;
class UPlayerCombatEntity;
class UEnemyCombatEntity;
struct FEnemyEntityData;
class UPressTurnManager;
class AInGameHUD;
class UTurnCounter;
class UPartyHealthbarsView;
class UCombatEntity;
class ADesentIntoAtlantisGameModeBase;
/**
 * 
 */



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRoundEndDelegate);

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
	UPROPERTY()
	AInGameHUD * GameHUD;
	
	UPROPERTY()
	USkillFactory * skillFactory;
	
	UPROPERTY()
	UWorld* world;
	ECharactertype currentTurnType; 
public:
	

	UPROPERTY(BlueprintAssignable, Category = "Test")
	FRoundEndDelegate OnRoundEndDelegate;


	
	UPROPERTY()
	UPressTurnManager* pressTurnManager;

	void Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase,UWorld* aWorld);
	void StartCombat(FString aEnemyGroupName);
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

	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember;
	UPROPERTY()
	TArray<UEnemyCombatEntity*> enemyCombatEntities;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersInCombat;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersDead;
	UPROPERTY()
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	
};
