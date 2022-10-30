// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PressTurnManager.generated.h"

enum class PressTurnReactions;
class USkillBase;
enum class ECharactertype;
class UTurnCounter;
class ADesentIntoAtlantisGameModeBase;
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
	 int m_Turns;
	 bool m_IsEmpowered;
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
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	UPROPERTY()
	UTurnCounter* turnCounter;
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
	void Initialize(UCombatManager* aCombatManager, ADesentIntoAtlantisGameModeBase* aGameModeBase );

	void SetAmountOfTurns(int aTurnAmount, ECharactertype aCharacterType );
	
	void ActivateSkill(UCombatEntity* aAttacker, int aCursorPosition, USkillBase* aSkill);
	
	void ProcessTurn(TArray<PressTurnReactions> aAllTurnReactions);



};
