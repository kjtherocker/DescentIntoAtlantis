// Fill out your copyright notice in the Description page of Project Settings.
#include "SkillBase.h"
#include "CombatEntity.h"
#include "CombatEntityHub.h"
#include "CombatEntityWrapper.h"
#include "CombatGameModeBase.h"
#include "CombatLog_Full_Data.h"
#include "CombatLog_Evasion_Data.h"
#include "CombatLog_Hit_Data.h"
#include "CombatStat.h"
#include "Health.h"
#include "ItemChargeHandler.h"
#include "ResourceHandler.h"
#include "SkillRange.h"
#include "SkillType.h"
#include "SkillUsage.h"
#include "SyncHandler.h"


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

FCombatLog_Full_Data USkillBase::ExecuteSkill(UCombatEntity* aSkillActivator, TArray<UCombatEntity*> aVictims, USkillBase* aSkill)
{
	FSkillsData skillsData = aSkill->skillData;
	
	FCombatLog_Full_Data CombatLog_Base_Data;
	CombatLog_Base_Data.skillUsed = skillsData;
	CombatLog_Base_Data.Attacker  = aSkillActivator;
	CombatLog_Base_Data.Victim    = aVictims;
	
	CombatLog_Base_Data.PressTurnReaction = EPressTurnReactions::Normal;

	bool isSkillExecuted = true;
	

	if(skillData.skillChargeData.canCharge && !isChargeSkillReady() && !skillData.skillChargeData.ChargeFinished  )
	{
		CombatLog_Base_Data.CombatLog_AttackDefense_Data = StartChargingSkill(aSkillActivator,aVictims);
	}
	else
	{
		for (auto victim : aVictims)
		{
			if(victim == nullptr)
			{
				continue;
			}
			
			if (ISkillHit* skillHit = Cast<ISkillHit>(this))
			{
				CombatLog_Base_Data.CombatLog_Hit_Data = skillHit->I_CalculateHit_Implementation(aSkillActivator,victim);
				isSkillExecuted = CombatLog_Base_Data.CombatLog_Hit_Data.HitResult;
			}
		
		
	
			if(isSkillExecuted)
			{
				CombatLog_Base_Data.CombatLog_AttackDefense_Data = aSkill->UseSkill(aSkillActivator,victim);	
				victim->combatEntityHub->SpawnParticles(skillsData.SkillInWorldParticle);
				if (IOnGiveCombatToken* attackDefencePassive = Cast<IOnGiveCombatToken>(this))
				{
					int skillAmount = 1;
					attackDefencePassive->I_GiveCombatToken_Implementation(skillAmount,aSkillActivator,victim,skillData);
				}
			}
			else
			{
				aSkillActivator->combatEntityHub->OnAttackEvaded(	CombatLog_Base_Data.CombatLog_Hit_Data);
				victim->combatEntityHub->OnEvadedAttack(	CombatLog_Base_Data.CombatLog_Hit_Data);
		
				CombatLog_Base_Data.PressTurnReaction = EPressTurnReactions::Dodge;
			}

			skillData.skillChargeData.ChargeFinished = false;
			skillData.skillChargeData.currentChargeStage = 0;
		}
	}
	
	return CombatLog_Base_Data;
}

bool USkillBase::CanUseSkill(UCombatEntity* aSkillOwner, EResource SkillResourceUsed)
{
	EResource skillResouce = SkillResourceUsed ==
		EResource::None ? skillData.SkillResourceUsed : SkillResourceUsed;

	switch (skillResouce)
	{
	case EResource::None:
		break;
	case EResource::Mana:
		return aSkillOwner->ResourceHandler->manaHandler->GetCurrentValue() >= skillData.costToUse;
		break;
	case EResource::Health:
		return aSkillOwner->ResourceHandler->healthHandler->GetCurrentValue() >= skillData.costToUse;
		break;
	case EResource::Sync:
		if(aSkillOwner->ResourceHandler->SyncHandler->GetSyncisLockedState())
		{
			return false;
		}
		else
		{
			return aSkillOwner->ResourceHandler->SyncHandler->GetCurrentValue()  >= skillData.costToUse;	
		}
		
		break;
	case EResource::ItemCharges:
		return aSkillOwner->ResourceHandler->ItemChargeHandler->isItemChargeAvaliable();
		break;
	}

	return false;
}

void USkillBase::SpendSkillCost(UCombatEntity* aSkillOwner, EResource SkillResourceUsed )
{
	aSkillOwner->ResourceHandler->SpendSkillCost(skillData,SkillResourceUsed,aSkillOwner);
}

FCombatLog_AttackDefense_Data USkillBase::StartChargingSkill(UCombatEntity* aAttacker, TArray<UCombatEntity*> aVictims)
{
	skillData.skillChargeData.isCharging = true;
	skillData.skillChargeData.ChargeFinished = false;
	skillData.skillChargeData.currentChargeStage = 0;
	skillData.skillChargeData.EntityToAttackOnChargeEnd = aVictims;
	skillData.skillChargeData.skillOwner = aAttacker;
	aAttacker->combatEntityHub->skillHandler->SetChargingSkill(this);
	
	FCombatLog_AttackDefense_Data AttackDefense_Data;

	AttackDefense_Data.wasInitializedOnSkill = true;
	AttackDefense_Data.ForcedDescription = aAttacker->GetEntityName() + "Has Started To Charge " + skillData.skillName;
		
	return AttackDefense_Data;
}

bool USkillBase::isChargeSkillReady()
{
	return skillData.skillChargeData.currentChargeStage >= skillData.skillChargeData.chargeStageToReach;
}

FCombatLog_CombatToken USkillBase::GiveCombatToken(int& aAmount, UCombatEntity* aEntityCreatedToken,UCombatEntity* aEntityToGiveToken, FSkillsData aSkillData)
{
	FCombatLog_CombatToken combatLogCombatToken;
	for (auto Element : skillData.combatTokensUsedOnSkill)
	{
		Element.TokenCreator = aEntityCreatedToken;
		combatLogCombatToken.combatTokenData
		.Add(aEntityToGiveToken->combatEntityHub->combatTokenHandler->AddCombatToken(Element));
		combatLogCombatToken.passiveTokenAmount = aAmount;
	}

	return combatLogCombatToken;
}

TArray<UCombatEntity*> USkillBase::GetSkillCombatEntity(ACombatGameModeBase* aCombatGameMode,int aCursor, UCombatEntity* aSkillOwner)
{
	TArray<UCombatEntity*>  enemyInCombat    = TArray<UCombatEntity*>(aCombatGameMode->GetEnemysInCombat());
	TArray<UCombatEntity*>  playersInCombat  = TArray<UCombatEntity*>(aCombatGameMode->GetPlayersInCombat());

	TArray<UCombatEntity*> entitySkillsAreUsedOn;
	
	if(aSkillOwner->characterType == ECharactertype::Ally)
	{
		entitySkillsAreUsedOn = skillData.skillUsage == ESkillUsage::Opponents ? enemyInCombat : playersInCombat;
	}
	else if(aSkillOwner->characterType == ECharactertype::Enemy)
	{
		entitySkillsAreUsedOn = skillData.skillUsage == ESkillUsage::Opponents ? playersInCombat : enemyInCombat;
	}
	
	switch (skillData.skillRange)
	{
		case ESkillRange::None:
			break;
		case ESkillRange::Single:
		{
				TArray<UCombatEntity*> singleVictim;

				singleVictim.Add(entitySkillsAreUsedOn[aCursor]);
				
				return singleVictim;
		}
		break;
		case ESkillRange::Multi:
		{
			return entitySkillsAreUsedOn;
		}
	}


	return entitySkillsAreUsedOn;
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
	FCombatLog_AttackDefense_Data attackDefenceCombatLog = aVictim->AttackResource(skillData.ResourceUsedOn,aAttacker,skillData);
	skillData.damage = originalSkillDamage;

	aVictim->combatEntityHub->combatTokenHandler->RemoveAllCombatTokens(ECombatTokenType::Negative);
    	
	return attackDefenceCombatLog;
	
}

FCombatLog_AttackDefense_Data USkillSpreadTheInfection::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	aVictim->combatEntityHub->combatTokenHandler->AddAStackOfAllCombatTokens(ECombatTokenType::Negative);

	return aVictim->AttackResource(skillData.ResourceUsedOn,aAttacker,skillData);
}

FCombatLog_AttackDefense_Data USyncSkill::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	FCombatLog_AttackDefense_Data AttackDefense_Data;

	switch(skillData.ResourceUsedOn)
	{

	case EResource::None:
		break;
	case EResource::Mana:
		AttackDefense_Data = aVictim->AttackResource(EResource::Mana,aAttacker,skillData);
		break;
	case EResource::Health:
		AttackDefense_Data = aVictim->AttackResource(EResource::Health,aAttacker,skillData);
		break;
	case EResource::Sync:
		AttackDefense_Data = aVictim->AttackResource(EResource::Sync,aAttacker,skillData);
		break;
	case EResource::ItemCharges:
		aVictim->ResourceHandler->ItemChargeHandler->IncrementItemChargesPercentage(skillData.damage);
		break;
	}

	return AttackDefense_Data;
	
}




FCombatLog_AttackDefense_Data USkillAlimentAttack::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{

	if(CalculateAilmentInfliction(aAttacker,aVictim,EStatusAilments::Fear))
	{
			aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
	}
	return aVictim->AttackResource(skillData.ResourceUsedOn,aAttacker,skillData);
	
}

FCombatLog_AttackDefense_Data USkillAlimentAttackFear::UseSkill(UCombatEntity* aAttacker, UCombatEntity* aVictim)
{
	FCombatLog_AttackDefense_Data Combatlog = aVictim->AttackResource(skillData.ResourceUsedOn,aAttacker,skillData);
	
	if(CalculateAilmentInfliction(aAttacker,aVictim,EStatusAilments::Fear))
	{
		{
			aVictim->InflictAilment(NewObject<UCalculateDamage_Fear>(),ECombatEntityWrapperType::CalculateDamage);
		}
	}

	return Combatlog;
}
