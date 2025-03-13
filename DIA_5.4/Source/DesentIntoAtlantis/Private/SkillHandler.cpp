// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillHandler.h"

#include "SkillBase.h"

void USkillHandler::Initialize(UCombatEntity* aAttachedCombatEntity, UPassiveHandler* aPassiveHandler)
{
	attachedCombatEntity = aAttachedCombatEntity;
	attachedPassiveHandler = aPassiveHandler;
}

void USkillHandler::AddSkillModification(EPassiveSkillID aPassiveSkillID,FSkillModification aSkillModification)
{
	skillModification.Add(aPassiveSkillID,aSkillModification);

	ValidateAllSkillModifications();
}

void USkillHandler::ValidateAllSkillModifications()
{
	for (auto skills : currentSkills)
	{
		TArray<FSkillModification> SkillModifications;
		for (auto skillModification : skillModification)
		{
			if(isSkillModifcationValidForSkill(skills->skillData,skillModification.Value))
			{
				SkillModifications.Add(skillModification.Value);
			
			}
		}
		ModifySkill(skills->skillData,SkillModifications);
	}
	
}

FSkillsData USkillHandler::ModifySkill(FSkillsData aSkillData,TArray<FSkillModification> aSkillModification)
{
	FSkillsData ModifiedSkill = aSkillData;

	ModifiedSkill.skillName += "(Modified)";
	
	ModifiedSkill = ModifyDamage( ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifyCostToUse( ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillHit( ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillElementalType( ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillResource( ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillDamageType(ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillScaleStat(ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillUsage(ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillRange(ModifiedSkill, aSkillModification);
	ModifiedSkill = ModifySkillCombatTokens(ModifiedSkill, aSkillModification);
	
	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifyDamage(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.BaseDamage)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.damage = BaseDamage.Value;
			}
		}
	}
	
	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.BaseDamage)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Subtractive)
			{
				ModifiedSkill.damage -= BaseDamage.Value;
			}
		}
	}

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.BaseDamage)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Additional)
			{
				ModifiedSkill.damage += BaseDamage.Value;
			}
		}
	}
	

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifyCostToUse(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.costToUse)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.costToUse = BaseDamage.Value;
			}
		}
	}
	
	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.costToUse)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Subtractive)
			{
				ModifiedSkill.costToUse -= BaseDamage.Value;
			}
		}
	}

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.costToUse)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Additional)
			{
				ModifiedSkill.costToUse += BaseDamage.Value;
			}
		}
	}
	

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillHit(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.SkillHit)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.SkillHit = BaseDamage.Value;
			}
		}
	}
	
	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.SkillHit)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Subtractive)
			{
				ModifiedSkill.SkillHit -= BaseDamage.Value;
			}
		}
	}

	for (auto SkillModification : aModifySkill)
	{
		for (auto BaseDamage : SkillModification.SkillHit)
		{
			if(BaseDamage.Key == ESkillModificationCommand::Additional)
			{
				ModifiedSkill.SkillHit += BaseDamage.Value;
			}
		}
	}
	

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillElementalType(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto ElementalType : SkillModification.SkillElementalType)
		{
			if(ElementalType.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.elementalType = ElementalType.Value;
			}
		}
	}


	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillResource(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto SkillResource : SkillModification.skillResource)
		{
			if(SkillResource.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.SkillResourceUsed = SkillResource.Value;
			}
		}
	}

	return ModifiedSkill;
	
}

FSkillsData USkillHandler::ModifySkillDamageType(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto DamageType : SkillModification.skillDamageType)
		{
			if(DamageType.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.skillDamageType = DamageType.Value;
			}
		}
	}

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillScaleStat(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto ScaleStat : SkillModification.skillScaleStat)
		{
			if(ScaleStat.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.skillScaleStat = ScaleStat.Value;
			}
		}
	}

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillType(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto skillType : SkillModification.skillType)
		{
			if(skillType.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.skillType = skillType.Value;
			}
		}
	}

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillUsage(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto skillUsage : SkillModification.skillUsage)
		{
			if(skillUsage.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.skillUsage = skillUsage.Value;
			}
		}
	}

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillRange(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto SkillRange : SkillModification.skillRange)
		{
			if(SkillRange.Key == ESkillModificationCommand::Replace)
			{
				ModifiedSkill.skillRange = SkillRange.Value;
			}
		}
	}

	return ModifiedSkill;
}

FSkillsData USkillHandler::ModifySkillCombatTokens(FSkillsData aSkillData, TArray<FSkillModification> aModifySkill)
{
	FSkillsData ModifiedSkill = aSkillData;

	for (auto SkillModification : aModifySkill)
	{
		for (auto combatTokenDAta : SkillModification.CombatTokens)
		{
			if(combatTokenDAta.Key == ESkillModificationCommand::Replace)
			{
				for (auto combatToken : combatTokenDAta.Value.CombatTokenStackDatas)
				{
					for(int i =0 ; i < ModifiedSkill.combatTokensUsedOnSkill.Num();i++)
					{
						if(ModifiedSkill.combatTokensUsedOnSkill[i].combatTokenID == combatToken.combatTokenID)
						{
							ModifiedSkill.combatTokensUsedOnSkill[i] = combatToken;
						}
					}
				}
			}
		}
	}

	for (auto SkillModification : aModifySkill)
	{
		for (auto combatTokenData : SkillModification.CombatTokens)
		{
			if(combatTokenData.Key == ESkillModificationCommand::Removal)
			{
				for (auto combatToken : combatTokenData.Value.CombatTokenStackDatas)
				{
					for (int i = ModifiedSkill.combatTokensUsedOnSkill.Num() - 1; i >= 0; i--)
					{
						if (ModifiedSkill.combatTokensUsedOnSkill[i].combatTokenID == combatToken.combatTokenID)
						{
							ModifiedSkill.combatTokensUsedOnSkill.RemoveAt(i);
						}
					}
				}
				
			}
		}
	}

	for (auto SkillModification : aModifySkill)
	{
		for (auto combatTokenData : SkillModification.CombatTokens)
		{
			if(combatTokenData.Key == ESkillModificationCommand::Additional)
			{
				for (auto combatToken : combatTokenData.Value.CombatTokenStackDatas)
				{
					ModifiedSkill.combatTokensUsedOnSkill.Add(combatToken);
				}
			}
		}
	}
	

	return ModifiedSkill;
}


bool USkillHandler::isSkillModifcationValidForSkill(FSkillsData aSkill, FSkillModification aSkillModification)
{
	for (auto Element : aSkillModification.SkillsThatCanBeModified)
	{
		if(aSkill.skillID == Element)
		{
			return true;
		}
			
	}
	
	return false;
}
