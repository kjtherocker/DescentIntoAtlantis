// Fill out your copyright notice in the Description page of Project Settings.
#include "SkillBase.h"
#include "CombatEntity.h"
#include "CombatEntityHub.h"
#include "CombatEntityWrapper.h"
#include "CombatLog_Full_Data.h"
#include "CombatLog_Evasion_Data.h"
#include "CombatLog_Hit_Data.h"
#include "CombatStat.h"
#include "Health.h"
#include "SkillType.h"


void USkillBase::Initialize(FSkillsData aSkillData)
{
	skillData = aSkillData;
}

FCombatLog_Hit_Data USkillBase::CalculateHit(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	FCombatLog_Hit_Data hitData;
	

	hitData.CombatLogEvasionData.victimEvasion = aVictim->GetEvasion();
	hitData.AttackerHit   =  aAttacker->GetHit();
	hitData.HitEvasionCalculation = (aAttacker->GetHit() - aVictim->GetEvasion()) / UCombatStat::ABILITYSCORE_CONVERSION_RATIO;
	hitData.CombatLogEvasionData.HitEvasionCalculation = hitData.HitEvasionCalculation ;
	hitData.skillHit = skillData.SkillHit;

	hitData.hitChance = hitData.skillHit + hitData.HitEvasionCalculation;
	int RandomNumber =  FMath::RandRange(1, 100);
	
	hitData.RandomNumber = RandomNumber;
	
	RandomNumber += hitData.HitEvasionCalculation;
	RandomNumber += hitData.skillHit;

	hitData.FinalNumber = RandomNumber;
	hitData.HitResult = RandomNumber > 100;

	hitData.CombatLogEvasionData.totalEvasion = aVictim->GetEvasion();
	return hitData;
}

FCombatLog_Full_Data USkillBase::ExecuteSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim, USkillBase* aSkill)
{
	FSkillsData skillsData = aSkill->skillData;
	
	FCombatLog_Full_Data CombatLog_Base_Data;
	CombatLog_Base_Data.skillUsed = skillsData;
	CombatLog_Base_Data.Attacker  = aAttacker;
	CombatLog_Base_Data.Victim    = aVictim;
	
	CombatLog_Base_Data.PressTurnReaction = EPressTurnReactions::Normal;

	CombatLog_Base_Data.CombatLog_Hit_Data = aSkill->CalculateHit(aAttacker,aVictim);

	if(CombatLog_Base_Data.CombatLog_Hit_Data.HitResult)
	{
		CombatLog_Base_Data.CombatLog_AttackDefense_Data = aSkill->UseSkill(aAttacker,aVictim);	
	}
	else
	{
		CombatLog_Base_Data.PressTurnReaction = EPressTurnReactions::Dodge;
	}
	
	return CombatLog_Base_Data;
}

bool USkillBase::CanUseSkill(UCombatEntity* aSkillOwner, ESkillResourceUsed SkillResourceUsed)
{
	ESkillResourceUsed skillResouce = SkillResourceUsed ==
		ESkillResourceUsed::None ? skillData.SkillResourceUsed : SkillResourceUsed;

	switch (skillResouce)
	{
	case ESkillResourceUsed::None:
		break;
	case ESkillResourceUsed::Mana:
		return aSkillOwner->currentMana > skillData.costToUse;
		break;
	case ESkillResourceUsed::Health:
		return aSkillOwner->health->GetHealth() > skillData.costToUse;
		break;
	}

	return false;
}

void USkillBase::SpendSkillCost(UCombatEntity* aSkillOwner, ESkillResourceUsed SkillResourceUsed )
{
	ESkillResourceUsed skillResouce = SkillResourceUsed ==
		ESkillResourceUsed::None ? skillData.SkillResourceUsed : SkillResourceUsed;
	
	switch (skillResouce)
	{
	    case ESkillResourceUsed::None:
	    	break;
	    case ESkillResourceUsed::Mana:
	    	aSkillOwner->DecrementMana(skillData.costToUse);
	    	break;
	    case ESkillResourceUsed::Health:
	    	aSkillOwner->DecrementHealth(aSkillOwner,skillData);
	    	break;
	}
}

FCombatLog_AttackDefense_Data USkillCombatToken::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	
	for (auto Element : skillData.combatTokensUsedOnSkill)
	{
		aVictim->combatEntityHub->combatTokenHandler->AddCombatToken(Element);	
	}
	
	return Super::UseSkill(aAttacker, aVictim);
}

void UAilment::Initialize(FSkillsData aSkillData)
{
}

void UAilment::ActivateAilment(UCombatEntity* aCombatEntity)
{
	aCombatEntity->AlimentDecrementHealth(10);
}

void UAilment_Fear::Initialize(FSkillsData aSkillData)
{
	Super::Initialize(aSkillData);
}

FCombatLog_AttackDefense_Data USkillBase::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	FCombatLog_AttackDefense_Data AttackDefense_Data;
	return AttackDefense_Data;
}

bool USkillAlimentAttack::CalculateAilmentInfliction(UCombatEntity* aAttacker, UCombatEntity* aVictim,EStatusAilments aAilment)
{
	AilmentHitCalculation =  FMath::RandRange(1, 100);
	AilmentHitCalculation += (aAttacker->GetAilmentInfliction(aAilment) - aVictim->GetAilmentResistance(aAilment));
	AilmentHitCalculation += skillData.CombatTokenHit; 
	return AilmentHitCalculation > 100;
}

FCombatLog_Hit_Data USkillCombatToken::CalculateHit(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	FCombatLog_Hit_Data Hit_Data;
	Hit_Data.HitResult = true;
	return Hit_Data;
}

FCombatLog_Full_Data USkillCombatToken::ExecuteSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim, USkillBase* aSkill)
{
	FCombatLog_Full_Data CombatLog_Full_Data;

	UseSkill(aAttacker, aVictim);
	
	return CombatLog_Full_Data;
}

// Each of these are structs that inherit from Skill_Base
FCombatLog_AttackDefense_Data USkillAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}

FCombatLog_AttackDefense_Data USyncSkill::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}




FCombatLog_AttackDefense_Data USkillAlimentAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{

	if(CalculateAilmentInfliction(aAttacker,aVictim,EStatusAilments::Fear))
	{
			aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
	}
	return aVictim->DecrementHealth(aAttacker,skillData);
	
}

FCombatLog_AttackDefense_Data USkillAlimentAttackFear::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	FCombatLog_AttackDefense_Data Combatlog = aVictim->DecrementHealth(aAttacker,skillData);
	
	if(CalculateAilmentInfliction(aAttacker,aVictim,EStatusAilments::Fear))
	{
		{
			aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
		}
	}

	return Combatlog;
}



FCombatLog_AttackDefense_Data USkillHeal::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	//TODO: make a combatlog setup for healing and buffs
	aVictim->IncrementHealth(aAttacker, skillData);
	FCombatLog_AttackDefense_Data emptyAttackDefences;
	return emptyAttackDefences;
}

FCombatLog_AttackDefense_Data USkillBuff::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	aVictim->ApplyBuff(aAttacker,skillData);
	FCombatLog_AttackDefense_Data emptyAttackDefences;
	return emptyAttackDefences;
}

FCombatLog_AttackDefense_Data USkillDebuff::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	return aVictim->DecrementHealth(aAttacker,skillData);
}


