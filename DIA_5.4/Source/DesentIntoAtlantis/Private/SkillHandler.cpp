// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillHandler.h"

#include "ESkillID.h"
#include "InterruptHandler.h"
#include "SkillBase.h"
#include "SkillDamageType.h"
#include "SkillFactorySubsystem.h"

void USkillHandler::InitializeSkillStrings()
{
	elementalTypeString.Add(EElementalType::Null, "Null");
	elementalTypeString.Add(EElementalType::Light, "Light");
	elementalTypeString.Add(EElementalType::Shadow, "Shadow");
	elementalTypeString.Add(EElementalType::Ice, "Ice");
	elementalTypeString.Add(EElementalType::Fire, "Fire");
	elementalTypeString.Add(EElementalType::Wind, "Wind");
	elementalTypeString.Add(EElementalType::Earth, "Earth");
	elementalTypeString.Add(EElementalType::Lighting, "Lightning");

	skillDamageTypeString.Add(ESkillDamageType::Physical, "Physical");
	skillDamageTypeString.Add(ESkillDamageType::Magic, "Magic");
	
	skillDescriptionParse.Add("<Damage>", ESkillStringParseType::Damage);
	skillDescriptionParse.Add("<Element>", ESkillStringParseType::Element);
	skillDescriptionParse.Add("<DamageType>", ESkillStringParseType::DamageType);
}

void USkillHandler::Initialize(UCombatEntity* aAttachedCombatEntity,USkillFactorySubsystem* aSkillFactorySubsystem, UPassiveHandler* aPassiveHandler)
{
	currentSkills.Empty();
	SkillFactorySubsystem = aSkillFactorySubsystem;
	attachedCombatEntity = aAttachedCombatEntity;
	attachedPassiveHandler = aPassiveHandler;
	
	InitializeSkillStrings();
	
	for (auto Element : attachedPassiveHandler->GetAllPassives())
	{
		if (IModifySkillPassive* ModifySkill = Cast<IModifySkillPassive>(Element))
		{
			PassiveAdded(Element);
		}
	}

	attachedPassiveHandler->PassiveAdded.AddDynamic(this,&USkillHandler::PassiveAdded);
	attachedPassiveHandler->PassiveRemoved.AddDynamic(this,&USkillHandler::PassiveAdded);
//	attachedCombatEntity->OnTurnStart.AddDynamic(this,&USkillHandler::OnTurnStart);
}

void USkillHandler::AddSkill(ESkillIDS aSkillID)
{
	if(currentSkills.Contains(aSkillID))
	{
		return;
	}
	
	USkillBase* skill =  SkillFactorySubsystem->GetSkill(aSkillID);
	currentSkills.Add(skill->skillData.skillID,skill);
	ValidateAllSkillModifications();

	USkillBase* test =  SkillFactorySubsystem->GetSkill(aSkillID);
}

void USkillHandler::RemoveSkill(ESkillIDS aSkillID)
{
	if(currentSkills.Contains(aSkillID))
	{
		currentSkills.Remove(aSkillID);
	}
}

USkillBase* USkillHandler::GetActiveSkill(ESkillIDS aSkillID)
{
	if(currentSkills.Contains(aSkillID))
	{
		return currentSkills[aSkillID];
	}

	return nullptr;
}


TArray<USkillBase*> USkillHandler::GetSkillsByID(TArray<ESkillIDS> aSkillIds)
{
	TArray<USkillBase*> skills;

	for (auto Skill : aSkillIds)
	{
		USkillBase* skill = GetActiveSkill(Skill);
		if(skill == nullptr)
		{
			continue;
		}
		skills.Add(skill);
	}

	return  skills;
}

TArray<USkillBase*> USkillHandler::GetAllCurrentSkills()
{
	ValidateAllSkillModifications();
	TArray<USkillBase*> skills;

	for (auto Skill : currentSkills)
	{
		if(Skill.Key == ESkillIDS::None)
		{
			continue;
		}
		if(Skill.Value == nullptr)
		{
			continue;
		}

		
		skills.Add(Skill.Value);
	}

	
	return skills;
}

void USkillHandler::PassiveAdded(UPassiveSkills* PassiveSkills)
{
	if (IModifySkillPassive* ModifySkill = Cast<IModifySkillPassive>(PassiveSkills))
	{
		EPassiveSkillID PassiveSkillID       = PassiveSkills->passiveSkillData.passiveSkillID;
		FSkillModification SkillModification = PassiveSkills->passiveSkillData.skillModification;
		
		AddSkillModification(PassiveSkillID,PassiveSkills->passiveSkillData.skillModification);
	}
}

void USkillHandler::PassiveRemoved(UPassiveSkills* PassiveSkills)
{
	if (IModifySkillPassive* ModifySkill = Cast<IModifySkillPassive>(PassiveSkills))
	{
		EPassiveSkillID PassiveSkillID       = PassiveSkills->passiveSkillData.passiveSkillID;
		FSkillModification SkillModification = PassiveSkills->passiveSkillData.skillModification;
		
		AddSkillModification(PassiveSkillID,PassiveSkills->passiveSkillData.skillModification);
	}
}

void USkillHandler::RemoveSkillModification(EPassiveSkillID aPassiveSkillID)
{
	skillModification.Remove(aPassiveSkillID);
	ValidateAllSkillModifications();
}

void USkillHandler::AddSkillModification(EPassiveSkillID aPassiveSkillID,FSkillModification aSkillModification)
{
	skillModification.Add(aPassiveSkillID,aSkillModification);

	ValidateAllSkillModifications();
}

void USkillHandler::ValidateAllSkillModifications()
{
	if(skillModification.Num() == 0)
	{
		return;
	}
	
	for (auto skills : currentSkills)
	{
		TArray<FSkillModification> SkillModifications;
		FSkillsData baseSkillData = SkillFactorySubsystem->GetSkillData(skills.Value->skillData.skillID);
		for (auto Modification : skillModification)
		{
			if(isSkillModifcationValidForSkill(baseSkillData,Modification.Value))
			{
				SkillModifications.Add(Modification.Value);
			
			}
		}
		currentSkills[baseSkillData.skillID]->Initialize(ModifySkill(baseSkillData,SkillModifications));
	}
	
}

void USkillHandler::SetChargingSkill(USkillBase* aSkillData)
{
	chargingSkill = aSkillData;
}

bool USkillHandler::isSkillCharging()
{
	if(chargingSkill == nullptr)
	{
		return false;
	}
	
	return chargingSkill->skillData.skillChargeData.isCharging;
}

FString USkillHandler::ParseSkillDescription(FSkillsData aSkillData)
{
	FString finalString;
	FString skillDescription = aSkillData.skillDescription;

	bool parsingNewString = false;
	FString parsableString;
	
	for (int i = 0; i < skillDescription.Len(); i++)
	{
		TCHAR Character = skillDescription[i];

		if(Character == '<')
		{
			parsingNewString = true;
		}
		
		if(parsingNewString)
		{
			parsableString += Character;
		}
		else
		{
			finalString += Character;	
		}


		if(Character == '>')
		{
			if(skillDescriptionParse.Contains(parsableString))
			{
				FString parsedInfo = GetSkillValuesStrings(aSkillData,skillDescriptionParse[parsableString]);

				finalString += parsedInfo;		
			}
		
			parsingNewString = false;

			parsableString = "";
		}
	
		
	
	}

	return finalString;
}

FString USkillHandler::GetSkillValuesStrings(FSkillsData aSkillData, ESkillStringParseType aSkillStringParseType)
{
	switch (aSkillStringParseType)
	{
	case ESkillStringParseType::None:
		break;
	case ESkillStringParseType::Damage:
		return "<Hit>" + FString::FromInt(aSkillData.damage)+"</>";
		break;
	case ESkillStringParseType::Element:
		return elementalTypeString[aSkillData.elementalType];
		break;
	case ESkillStringParseType::DamageType:
		return skillDamageTypeString[aSkillData.skillDamageType];
		break;
	}

	return "";
}

void USkillHandler::OnTurnStart()
{
	if(!isSkillCharging())
	{
		return;
	}

	if(chargingSkill->isChargeSkillReady())
	{
		FCombatInterruptData CombatInterruptData;
		CombatInterruptData.executeInterruptImmediately = true;
		CombatInterruptData.interruptType = EInterruptType::Skill;
		CombatInterruptData.InterruptionSkill = chargingSkill;
		
		attachedCombatEntity->combatEntityHub->InterruptHandler->AddCombatInterrupt(
			attachedCombatEntity->combatEntityHub->InterruptHandler->CreateInterrupt(EInterruptType::Skill,CombatInterruptData));

		chargingSkill = nullptr;
	}
	else
	{
		chargingSkill->skillData.skillChargeData.currentChargeStage++;		
	}
	

}

FSkillsData USkillHandler::ModifySkill(FSkillsData aSkillData,TArray<FSkillModification> aSkillModification)
{
	FSkillsData ModifiedSkill = aSkillData;

	if(aSkillModification.Num() == 0)
	{
		return ModifiedSkill;
	}
	

	ModifiedSkill.skillName += "(Modded)";
	
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
