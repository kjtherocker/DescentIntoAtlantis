// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AtlantisGameModeBase.h"
#include "CombatGameModeBase.generated.h"
class USkillResolveSubsystem;
class UNumbersUIView;
class UCombatInterruptManager;
class UCombatLogSimplifiedView;
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

	inline float     static CAMERA_DISTANCE     = 8.5f;
	inline float     static CAMERA_OFFSET_RANGE = 13.5f;
	inline int       static CAMERA_SPEED        = 2000;
	//Enemy
	inline FVector3d static ENEMY_POSITION1 = FVector3d(900,-475,-260);
	inline FVector3d static ENEMY_POSITION2 = FVector3d(900,0,-260);
	inline FVector3d static ENEMY_POSITION3 = FVector3d(900,475,-260);
	inline FRotator  static ENEMY_ROTATION  = FRotator(0,180,0);

};

UENUM()
enum class ECombatState  : uint8
{
	None,
	Start,
	Player,
	Enemy,
	SwitchState,
	Interruption,
	SuccessfulEnd,
	FailedEnd,
	NewRoundStart,
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRoundEndDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamTurnFinished,ECharactertype,aCharacterType);
UCLASS()
class DESENTINTOATLANTIS_API ACombatGameModeBase : public AAtlantisGameModeBase
{
	GENERATED_BODY()


	UFUNCTION()
	virtual void InitializeLevel() override;


	
	UPROPERTY(EditAnywhere)
	FVector3d CAMERA_POSITION = UCombatSettings::INITIAL_CAMERA_POSITION;
	UPROPERTY(EditAnywhere)
	FRotator CAMERA_ROTATION  = UCombatSettings::INITIAL_CAMERA_ROTATION;
	const FVector ENEMY_POSITION1 = UCombatSettings::ENEMY_POSITION1;
	const FVector ENEMY_POSITION2 = UCombatSettings::ENEMY_POSITION2;
	const FVector ENEMY_POSITION3 = UCombatSettings::ENEMY_POSITION3;
	
	const float FULL_OPACITY    = 100;
	const int   ENEMY_TURN_TIME = 2;
	bool hasCombatStarted;
	int currentActivePosition;
	int combatExp = 0;
	int gainedCP  = 0;
	
	UPROPERTY()
	ECombatWinCondition CombatWinCondition;
	UPROPERTY()
	APlayerController* PlayerController;
	UPROPERTY()
	USkillResolveSubsystem* SkillResolveSubsystem;
	UPROPERTY()
	UCombatEntity* currentCombatEntity;
	UPROPERTY()
	TArray<ECharactertype> roundOrder;
	UPROPERTY()
	TArray<ECharactertype> currentRoundOrder;
	UPROPERTY()
	ECharactertype CharacterTypeTurn;

	
	UPROPERTY()
	UNumbersUIView* NumbersUIView;
	UPROPERTY()
	UCombatLogSimplifiedView*     combatLogView;
	UPROPERTY()
	UTurnCounterView*     turnCounter;
	UPROPERTY()
	UPartyHealthbarsView* partyHealthbars;



	UPROPERTY()
	TArray<FCombatLog_Full_Data> mostRecentCombatLogs;
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
	UPassiveFactorySubsystem* passiveSkillFactorySubsystem;

	UPROPERTY()
	ECombatState currentCombatState;
	
public:
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FRoundEndDelegate OnRoundEndDelegate;
	
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FOnTeamTurnFinished OnTeamTurnFinished;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> enemyPortraitElementReference;
	
	FTriggerNextEventStage triggerNextEventStage;
	UPROPERTY()
	TArray<FCombatLog_Full_Data> last50CombatLogs;


	UPROPERTY()
	UCombatInterruptManager* combatInterruptManager;
	UPROPERTY()
	UPressTurnManager* pressTurnManager;
	
	void StartCombat(FString aEnemyGroupName);
	void SetCombatState(ECombatState aCombatState);
	void StartNewRound();

	void PossessCombatCamera();
	
	void AddEnemyToCombat(FEnemyEntityCompleteData AEnemyEntityData,EEnemyCombatPositions aPosition,ERowType aRowType);
	void SetRoundSide(ECharactertype aCharacterType);
	void TurnEnd();
	void ValidateNextTurn();
	void TriggerTurnEndTimers();
	void TriggerLevelupMenu(TArray<UPlayerCombatEntity*> aPlayerCombatEntity, int aExperience,int aClassPoints);
	void AllyStartTurn();

	UFUNCTION()
	void EntityDied(UCombatEntity* aCombatEntity);
	UFUNCTION()
	void ResurrectEntity(UCombatEntity* aCombatEntity);
	
	void EnemyStartTurn();
	void EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity);

	void ValidateEndingState(ECombatWinCondition aCombatWinCondition);
	
	void ResetEnemyPortraits();
	
	void IterateToNextPlayer();
	void IterateToNextEnemy();

	void SwitchCombatSides();

	void CheckAllEntitysForInterruptions();

	ECharactertype RemoveAndGetFirstInRoundOrder();

	void AddInterruption(UCombatInterrupt* aCombatInterrupt);

	void AddCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas);
	void CreateCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas);
	void RemoveDeadPartyMembersFromCombat();
	void EndCombat(bool aHasWon = true);	
	int GetEXP();
	
	UPlayerCombatEntity* GetCurrentActivePartyMember();
	
	TArray<UEnemyCombatEntity*> GetEnemysInCombat();
	TArray<UPlayerCombatEntity*> GetPlayersInCombat();
};


