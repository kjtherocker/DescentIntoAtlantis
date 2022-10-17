// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PressTurnManager.generated.h"

enum class ECharactertype;
class UTurnCounter;
class ADesentIntoAtlantisGameModeBase;
class UCombatEntity;
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
	
	TArray<UPressTurn*> activePressTurns;
	TArray<UPressTurn*> inActivePressTurns;
	ECharactertype characterType;
public:
	

	UPressTurn* GetInActivePressturns();
	int         GetNumberOfActivePressTurns();
	void Initialize(UCombatManager* aCombatManager, ADesentIntoAtlantisGameModeBase* aGameModeBase );

	void SetAmountOfTurns(int aTurnAmount, ECharactertype aCharacterType );
	
	void ActivateSkill(UCombatEntity* aAttacker,int aCursorPosition,FSkills_Base aSkill);
	
	void ProcessTurn(TArray<PressTurnReactions> aAllTurnReactions);
	void ConsumeTurn(int aAmountOfTurnsConsumed);
	void EmpowerTurn();


};
