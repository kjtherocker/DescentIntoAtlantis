// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AtlantisGameModeBase.h"
#include "CombatLog_Base_Data.h"
#include "EnemyCombatEntity.h"
#include "FloorEnum.h"
#include "PlayerCombatEntity.h"
#include "UObject/NoExportTypes.h"

#include "CombatGameModeBase.generated.h"
class UCombatLogView;
class UChallengeSubsystem;
class ACombatCameraPawn;
class AAtlantisGameModeBase;
class USkillFactorySubsystem;
enum class ECharactertype  : uint8;
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

UCLASS()
class DESENTINTOATLANTIS_API UCombatSettings : public UObject
{
	GENERATED_BODY()

public:

	//Camera
	inline FVector3d static INITIAL_CAMERA_POSITION = FVector(0,0,100);
	inline FVector3d static CAMERA_ZOOM_IN_POSITION = FVector(0,0,100);
	inline FRotator  static INITIAL_CAMERA_ROTATION = FRotator(0,0,0);

	inline float     static CAMERA_DISTANCE     = 2.5f;
	inline float     static CAMERA_OFFSET_RANGE = 9.5f;
	inline int       static CAMERA_SPEED        = 2000;
	//Enemy
	inline FVector3d static ENEMY_POSITION1 = FVector3d(900,-475,-260);
	inline FVector3d static ENEMY_POSITION2 = FVector3d(900,0,-260);
	inline FVector3d static ENEMY_POSITION3 = FVector3d(900,475,-260);
	inline FRotator  static ENEMY_ROTATION  = FRotator(0,180,0);

};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRoundEndDelegate);
UCLASS()
class DESENTINTOATLANTIS_API ACombatGameModeBase : public AAtlantisGameModeBase
{
	GENERATED_BODY()


	UFUNCTION()
	virtual void InitializeLevel() override;

		
	UPROPERTY()
	UCombatLogView*     combatLogView;
	UPROPERTY()
	UTurnCounterView*     turnCounter;
	UPROPERTY()
	UPartyHealthbarsView* partyHealthbars;

	
	const float FULL_OPACITY    = 100;
	const int   ENEMY_TURN_TIME = 2;
	bool hasCombatStarted;
	int currentActivePosition;
	int combatExp = 0;
	
	UPROPERTY()
	ECharactertype currentTurnType;

	UPROPERTY(EditAnywhere)
	FVector3d CAMERA_POSITION = UCombatSettings::INITIAL_CAMERA_POSITION;
	UPROPERTY(EditAnywhere)
	FRotator CAMERA_ROTATION  = UCombatSettings::INITIAL_CAMERA_ROTATION;
	
		
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersInCombat;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyMembersDead;
	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember;
	UPROPERTY()
	TArray<UEnemyCombatEntity*> enemysInCombat;

	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> cameraReference;

	UPROPERTY()
	TMap<EEnemyCombatPositions,AEnemyPortraitElement*> Portraits;

	UPROPERTY()
	TMap<EEnemyCombatPositions,FVector3d> portraitsLocations;
	
	void CreateEnemyPortraits();
	UPROPERTY()
	ACombatCameraPawn* combatCamera;

	UPROPERTY()
	UChallengeSubsystem* godManagerSubsystem;
	UPROPERTY()
	UPassiveSkillFactorySubsystem* passiveSkillFactorySubsystem;
	
public:
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FRoundEndDelegate OnRoundEndDelegate;

	
	const FVector ENEMY_POSITION1 = UCombatSettings::ENEMY_POSITION1;
	const FVector ENEMY_POSITION2 = UCombatSettings::ENEMY_POSITION2;
	const FVector ENEMY_POSITION3 = UCombatSettings::ENEMY_POSITION3;

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
	UFUNCTION()
	void ActivateSkill(UCombatEntity* aAttacker, int aCursorPosition, USkillBase* aSkill);
	
	
	UPlayerCombatEntity* GetCurrentActivePartyMember();
	
	TArray<UEnemyCombatEntity*> GetEnemysInCombat();
	TArray<UPlayerCombatEntity*> GetPlayersInCombat();
};


