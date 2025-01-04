// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatEntityHub.h"
#include "CombatLog_Full_Data.h"
#include "CombatLog_Hit_Data.h"
#include "Engine/DataTable.h"
#include "SkillData.h"
#include "SkillType.h"
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

UINTERFACE(BlueprintType)
class UOnGiveCombatToken : public UInterface
{
	GENERATED_BODY()
};

class IOnGiveCombatToken 
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	FCombatLog_CombatToken I_GiveCombatToken(int& aAmount, UCombatEntity* aEntityToGiveToken, FSkillsData aSkillData);
	
};

UINTERFACE(BlueprintType)
class USkillHit : public UInterface
{
	GENERATED_BODY()
};

class ISkillHit 
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Skill")
	FCombatLog_Hit_Data I_CalculateHit(UCombatEntity* aAttacker, UCombatEntity* aVictim);
	
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
	virtual bool CanUseSkill(UCombatEntity* aSkillOwner, ESkillResourceUsed SkillResourceUsed = ESkillResourceUsed::None);
	virtual void SpendSkillCost(UCombatEntity* aSkillOwner, ESkillResourceUsed SkillResourceUsed = ESkillResourceUsed::None);

	virtual FCombatLog_CombatToken GiveCombatToken(int& aAmount, UCombatEntity* aEntityToGiveToken, FSkillsData aSkillData);
};

// All the different variations of Skills


UCLASS()
class USkillCombatToken : public USkillBase , public IOnGiveCombatToken
{
	GENERATED_BODY()
public:
	
	virtual FCombatLog_CombatToken I_GiveCombatToken_Implementation(int& aAmount, UCombatEntity* aEntityToGiveToken, FSkillsData aSkillData) override
	{
		return USkillBase::GiveCombatToken(aAmount, aEntityToGiveToken, aSkillData);
	};
	
	virtual FCombatLog_Full_Data ExecuteSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim, USkillBase* aSkill) override
	{
		FCombatLog_Full_Data CombatLog_Full_Data;

		int AmountOfGivenStacks = 1;
		CombatLog_Full_Data.CombatLog_CombatToken_Data = I_GiveCombatToken_Implementation(AmountOfGivenStacks,aVictim,aSkill->skillData);
	
		return CombatLog_Full_Data;
	};
};

UCLASS()
class UDefaultSkillAttack : public USkillBase , public ISkillHit
{
	GENERATED_BODY()


	virtual FCombatLog_Hit_Data I_CalculateHit_Implementation(UCombatEntity* aAttacker, UCombatEntity* aVictim) override
	{
		return USkillBase::CalculateHit(aAttacker, aVictim);
	};
	
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override
	{
		return aVictim->DecrementHealth(aAttacker,skillData);
	};
	
};


UCLASS()
class USkillCoupDeGrace : public UDefaultSkillAttack 
{
	GENERATED_BODY()
	
	
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
};

UCLASS()
class USkillSpreadTheInfection : public UDefaultSkillAttack 
{
	GENERATED_BODY()
	
	
	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;

	
};




UCLASS()
class USkillAttackCombatToken : public UDefaultSkillAttack , public IOnGiveCombatToken
{
	GENERATED_BODY()


	virtual FCombatLog_CombatToken I_GiveCombatToken_Implementation(int& aAmount, UCombatEntity* aEntityToGiveToken, FSkillsData aSkillData) override
	{
		return USkillBase::GiveCombatToken(aAmount, aEntityToGiveToken, aSkillData);
	};
};


UCLASS()
class USyncSkill : public UDefaultSkillAttack
{
	GENERATED_BODY()

	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override;
	
};


UCLASS()
class USkillAlimentAttack : public UDefaultSkillAttack
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

	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override
	{
		//TODO: make a combatlog setup for healing and buffs
		aVictim->IncrementHealth(aAttacker, skillData);
		FCombatLog_AttackDefense_Data emptyAttackDefences;
		return emptyAttackDefences;
	};
	
};

UCLASS()
class UFeyDuality : public USkillBase
{
	GENERATED_BODY()

	virtual FCombatLog_AttackDefense_Data UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim) override
	{
		aVictim->combatEntityHub->combatTokenHandler->InvertAllCombatToken();
		FCombatLog_AttackDefense_Data emptyAttackDefences;
		return emptyAttackDefences;
	};
	
};

