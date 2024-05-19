// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombatEntityWrapper.generated.h"

/**
 * 
 */

struct FSkillsData;
class UCombatEntity;

UENUM()
enum class ECombatEntityWrapperType
{
	None            = 0,
	CalculateDamage = 1,

};

//UENUM()
//class enum ECreaturesAilment
//{
//	None,
//	Poison,
//	Daze,
//	Sleep,
//	Rage,
//};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResetOneWrapperToDefault,ECombatEntityWrapperType,shelltype);
UCLASS()
class  DESENTINTOATLANTIS_API UAilmentShellTakeOver : public UObject
{
	GENERATED_BODY()
public:
	FResetOneWrapperToDefault resetShellToDefault;
	ECombatEntityWrapperType  combatEntityWrapperType;

	virtual void Initialize(UCombatEntity* aAttachedEntity,ECombatEntityWrapperType aWrapperType);
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill);
	
	int ailmentLength = 0;
	virtual void SetAilmentTurnLength(int aActiveTurnLength);
	virtual void TurnEnd();
};


UCLASS()
class  DESENTINTOATLANTIS_API UCalculateDamage_Base : public UAilmentShellTakeOver
{
	GENERATED_BODY()
public:
	int ailmentLength = 0;
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill) override;
	virtual void TurnEnd() override;

};

UCLASS()
class DESENTINTOATLANTIS_API UCalculateDamage_Fear :public  UCalculateDamage_Base
{
	GENERATED_BODY()
public:
	virtual int CalculateDamage(UCombatEntity* aAttachedEntity,UCombatEntity* aAttacker,FSkillsData aSkill) override;
};

UCLASS()
class DESENTINTOATLANTIS_API UCombatEntityWrapper : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UCalculateDamage_Base* calculateDamage;
	FResetOneWrapperToDefault resetOneWrapperToDefault;
public:
	UPROPERTY()
	UCombatEntity* AttachedCombatEntity;

	virtual void SetAttachedCombatEntity(UCombatEntity* aCombatEntity);
	virtual void SetCalculateDamageWrapper(UCalculateDamage_Base* aCalculateDamageWrapper);
	virtual int ExecuteCalculateDamage(UCombatEntity* aAttacker,FSkillsData aSkill);
	virtual UCalculateDamage_Base* GetCalculateDamageWrapper();
	virtual void TurnEnd();
	//virtual PressTurnReactions IncrementHealth(UCombatEntity* aHealer,   FSkillsData aSkill);
	//virtual PressTurnReactions ApplyBuff(      UCombatEntity* aBuffer,   FSkillsData aSkill);
	//virtual void DecrementMana(int aDecrementBy);
};


