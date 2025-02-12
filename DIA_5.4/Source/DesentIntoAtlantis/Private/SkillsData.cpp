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
	hitData.wasHitInitializedOnSkill = true;

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

	bool isSkillExecuted = true;

	if (ISkillHit* skillHit = Cast<ISkillHit>(this))
	{
		CombatLog_Base_Data.CombatLog_Hit_Data = skillHit->I_CalculateHit_Implementation(aAttacker,aVictim);
		isSkillExecuted = CombatLog_Base_Data.CombatLog_Hit_Data.HitResult;
	}
	
	if(isSkillExecuted)
	{
		CombatLog_Base_Data.CombatLog_AttackDefense_Data = aSkill->UseSkill(aAttacker,aVictim);
		aVictim->combatEntityHub->SpawnParticles(skillsData.SkillInWorldParticle);
		if (IOnGiveCombatToken* attackDefencePassive = Cast<IOnGiveCombatToken>(this))
		{
			int skillAmount = 1;
			attackDefencePassive->I_GiveCombatToken_Implementation(skillAmount,aVictim,skillData);
		}
	}
	else
	{
	   aAttacker->combatEntityHub->OnAttackEvaded(	CombatLog_Base_Data.CombatLog_Hit_Data);
	   aVictim->combatEntityHub->OnEvadedAttack(	CombatLog_Base_Data.CombatLog_Hit_Data);
		
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
		return aSkillOwner->health->GetCurrentHealth() > skillData.costToUse;
		break;
	case ESkillResourceUsed::Sync:
		return aSkillOwner->currentSync > skillData.costToUse;
		break;
	case ESkillResourceUsed::ItemCharges:
		return true;
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
		case ESkillResourceUsed::Sync:
			 aSkillOwner->DecrementSync(skillData.costToUse);
			break;
		case ESkillResourceUsed::ItemCharges:
			break;
	}
}

FCombatLog_CombatToken USkillBase::GiveCombatToken(int& aAmount, UCombatEntity* aEntityToGiveToken, FSkillsData aSkillData)
{
	FCombatLog_CombatToken combatLogCombatToken;
	for (auto Element : skillData.combatTokensUsedOnSkill)
	{
		combatLogCombatToken.combatTokenData
		.Add(aEntityToGiveToken->combatEntityHub->combatTokenHandler->AddCombatToken(Element.combatTokenID,Element));
		combatLogCombatToken.passiveTokenAmount = aAmount;
	}

	return combatLogCombatToken;
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



FCombatLog_AttackDefense_Data USkillCoupDeGrace::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	TArray<UCombatToken_Base*> negativeCombatTokens =
		aVictim->combatEntityHub->combatTokenHandler->GetAllCombatTokens(ECombatTokenType::Negative);

	int additonalDamageStackCount = 0;

	for (auto Element : negativeCombatTokens)
	{
		additonalDamageStackCount += Element->GetCombatTokenStateInfo().currentTokenStack;
	}
	
	int originalSkillDamage = skillData.damage;
	skillData.damage += additonalDamageStackCount * 5;
	FCombatLog_AttackDefense_Data attackDefenceCombatLog = aVictim->DecrementHealth(aAttacker,skillData);
	skillData.damage = originalSkillDamage;

	aVictim->combatEntityHub->combatTokenHandler->RemoveAllCombatTokens(ECombatTokenType::Negative);
    	
	return attackDefenceCombatLog;
	
}

FCombatLog_AttackDefense_Data USkillSpreadTheInfection::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	aVictim->combatEntityHub->combatTokenHandler->AddAStackOfAllCombatTokens(ECombatTokenType::Negative);

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
