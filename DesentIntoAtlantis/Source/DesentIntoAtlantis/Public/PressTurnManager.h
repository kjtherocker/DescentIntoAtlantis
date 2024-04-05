// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PressTurnManager.generated.h"

class AAtlantisGameModeBase;
enum class PressTurnReactions;
class USkillBase;
enum class ECharactertype;
class UTurnCounterView;
class AFloorGameMode;
class UCombatEntity;
class UCombatManager;
struct FSkillsData;
/**
 * 
 */

UCLASS()
class DESENTINTOATLANTIS_API UPressTurn : public UObject
{
	GENERATED_BODY()
public:
	 int turnCount;
	 bool isEmpowered;
	 bool wasUsed;
};

UCLASS()
class DESENTINTOATLANTIS_API UPressTurnManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UCombatManager* combatManager;
	const int AMOUNT_OF_PRESSTURNS = 10;

	UPROPERTY()
	AAtlantisGameModeBase* gameModeBase;
	UPROPERTY()
	UTurnCounterView* turnCounter;
	UPROPERTY()
	TArray<UPressTurn*> activePressTurns;
	UPROPERTY()
	TArray<UPressTurn*> inActivePressTurns;
	ECharactertype characterType;
	
	void ConsumeTurn(int aAmountOfTurnsConsumed);
	void EmpowerTurn();
public:
	

	UPressTurn* GetInActivePressturns();
	int         GetNumberOfActivePressTurns();
	void Initialize(UCombatManager* aCombatManager, AAtlantisGameModeBase* aGameModeBase );

	void SetAmountOfTurns(int aTurnAmount, ECharactertype aCharacterType );
	
	void ActivateSkill(UCombatEntity* aAttacker, int aCursorPosition, USkillBase* aSkill);
	
	void ProcessTurn(TArray<PressTurnReactions> aAllTurnReactions);



};
