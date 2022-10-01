// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PressTurnManager.generated.h"

class UTurnCounter;
class ADesentIntoAtlantisGameModeBase;
struct FCombatEntity;
class UCombatManager;
struct FSkills_Base;
/**
 * 
 */
UENUM()
enum class  PressTurnReactions
{
	Normal,
	Weak,
	Strong,
	Dodge,
	Null,
	Pass
};

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
	UCombatManager* combatManager;
	const int AMOUNT_OF_PRESSTURNS = 10;

	ADesentIntoAtlantisGameModeBase* gameModeBase;
	UTurnCounter* turnCounter;
public:
	
	TArray<UPressTurn*> activePressTurns;
	TArray<UPressTurn*> inActivePressTurns;

	UPressTurn* GetInActivePressturns();
	
	void Initialize(UCombatManager* aCombatManager, ADesentIntoAtlantisGameModeBase* aGameModeBase );

	void SetAmountOfTurns(int aTurnAmount);
	
	void ActivateSkill(FCombatEntity* aAttacker,int aCursorPosition,FSkills_Base* aSkill);
	
	void ProcessTurn(TArray<PressTurnReactions> aAllTurnReactions);
	void ConsumeTurn(int aAmountOfTurnsConsumed);
	void EmpowerTurn();


};
