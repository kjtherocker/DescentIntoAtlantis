// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AtlantisGameModeBase.h"
#include "EnemyCombatEntity.h"
#include "FloorEnum.h"
#include "PlayerCombatEntity.h"
#include "UObject/NoExportTypes.h"

#include "CombatGameModeBase.generated.h"
class AAtlantisGameModeBase;
class USkillFactorySubsystem;
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
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRoundEndDelegate);
UCLASS()
class DESENTINTOATLANTIS_API ACombatGameModeBase : public AAtlantisGameModeBase
{
	GENERATED_BODY()


	UFUNCTION()
	virtual void InitializeLevel() override;
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
	ECharactertype currentTurnType;

	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersInCombat;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersDead;
	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember;
	UPROPERTY()
	TArray<UEnemyCombatEntity*> enemysInCombat;

	UPROPERTY()
	TMap<EEnemyCombatPositions,AEnemyPortraitElement*> Portraits;

	UPROPERTY()
	TMap<EEnemyCombatPositions,FVector3d> portraitsLocations;
	
	void CreateEnemyPortraits();
public:
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FRoundEndDelegate OnRoundEndDelegate;

	
	const FVector3d ENEMY_POSITION1 = FVector3d(3622,1779,449);
	const FVector3d ENEMY_POSITION2 = FVector3d(3622,2127,449);
	const FVector3d ENEMY_POSITION3 = FVector3d(3622,2463,449);

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> enemyPortraitElementReference;
	
	FTriggerNextEventStage triggerNextEventStage;
	
	UPROPERTY()
	UPressTurnManager* pressTurnManager;
	
	void StartCombat(FString aEnemyGroupName);
	void RemoveDeadPartyMembersFromCombat();
	void EndCombat(bool aHasWon = true);
	void AddEnemyToCombat(FEnemyEntityData AEnemyEntityData,int aPosition);
	void SwitchCombatSides();
	void TurnFinished();
	void AllyStartTurn();
	void TriggerLevelupMenu(TArray<UPlayerCombatEntity*> aPlayerCombatEntity, int aExperience);
	void EnemyStartTurn();
	void EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity);
	int GetEXP();
	
	UPlayerCombatEntity* GetCurrentActivePartyMember();
	
	TArray<UEnemyCombatEntity*> GetEnemysInCombat();
	TArray<UPlayerCombatEntity*> GetPlayersInCombat();
};