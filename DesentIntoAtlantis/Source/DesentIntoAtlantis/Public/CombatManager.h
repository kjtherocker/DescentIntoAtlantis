// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "FloorEnum.h"
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
class UTurnCounterView;
class UPartyHealthbarsView;
class UCombatEntity;
class AFloorGameMode;
/**
 * 
 */



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRoundEndDelegate);

UCLASS()
class DESENTINTOATLANTIS_API UCombatManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UTurnCounterView*     turnCounter;
	UPROPERTY()
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

	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersInCombat;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersDead;
	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember;
	UPROPERTY()
	TArray<UEnemyCombatEntity*> enemyCombatEntities;
	
public:
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FRoundEndDelegate OnRoundEndDelegate;

	
	FTriggerNextEventStage triggerNextEventStage;
	
	UPROPERTY()
	UPressTurnManager* pressTurnManager;

	void Initialize(AFloorGameMode* aGameModeBase,UWorld* aWorld);
	void StartCombat(FString aEnemyGroupName);
	void RemoveDeadPartyMembersFromCombat();
	void EndCombat(bool aHasWon = true);
	void AddEnemyToCombat(FEnemyEntityData AEnemyEntityData,int aPosition);
	void SwitchCombatSides();
	void TurnFinished();
	void AllyStartTurn();
	void EnemyStartTurn();
	void EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity);
	int GetEXP();
	UPlayerCombatEntity* GetCurrentActivePartyMember();
	
	TArray<UEnemyCombatEntity*> GetEnemysInCombat();
	TArray<UPlayerCombatEntity*> GetPlayersInCombat();


	UPROPERTY()
	AFloorGameMode* gameModeBase;
	
};
