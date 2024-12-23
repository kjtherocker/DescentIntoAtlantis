// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatLog_Full_Data.h"
#include "CombatLog_Hit_Data.h"
#include "Engine/DataTable.h"
#include "SkillData.h"
#include "SkillBase.generated.h"

enum class EStatusAilments : uint8;
class UCombatEntity;
/**
 * 
 */

UCLASS()
class UAilment: public UObject
{
	GENERATED_BODY()
public:
	
	EStatusAilments  currentAilment;
	
	virtual void Initialize(FSkillsData aSkillData);
	virtual void ActivateAilment(UCombatEntity* aCombatEntity);
};


UCLASS()
class UAilment_Fear: public UAilment
{
	GENERATED_BODY()
public:
	
	EStatusAilments  currentAilment;
	
	virtual void Initialize(FSkillsData aSkillData);
};


UCLASS()
class USkillBase : public UObject
{
	GENERATED_BODY()
public:

	FSkillsData skillData;
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim);
	
	virtual void Initialize(FSkillsData aSkillData);

	virtual FCombatLog_Hit_Data CalculateHit(UCombatEntity* aAttacker, UCombatEntity* aVictim);
	virtual FCombatLog_Full_Data ExecuteSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim, USkillBase* aSkill);
};

// All the different variations of Skills

UCLASS()
class USkillAttack : public USkillBase
{
	GENERATED_BODY()

	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USyncSkill : public USkillAttack
{
	GENERATED_BODY()

	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};


UCLASS()
class USkillAlimentAttack : public USkillAttack
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	UAilment* ailment;
	UPROPERTY(EditAnywhere)
	EStatusAilments statusAilments;

	UPROPERTY(EditAnywhere)
	int AilmentHitCalculation = 0;
protected:
	virtual bool CalculateAilmentInfliction(UCombatEntity* aAttacker, UCombatEntity* aVictim,EStatusAilments aAilment);
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillAlimentAttackFear: public USkillAlimentAttack
{
	GENERATED_BODY()
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;

};

UCLASS()
class USkillHeal : public USkillBase
{
	GENERATED_BODY()

	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillBuff : public USkillBase
{
	GENERATED_BODY()
	
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};

UCLASS()
class USkillDebuff: public USkillBase
{
	GENERATED_BODY()
	
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};
