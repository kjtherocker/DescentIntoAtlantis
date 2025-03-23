// Fill out your copyright notice in the Description page of Project Settings.


#include "PassiveSkillFactorySubsystem.h"

#include "EquipmentPassive.h"
#include "PassiveSkills.h"

void UPassiveFactorySubsystem::InitializeDatabase(UDataTable* aPassiveDataTable,UDataTable*  aCombatTokenDataTable,UDataTable*  aEquipmentDataTable)
{
	
	UDataTable*  datatable = aPassiveDataTable;
	if(datatable)
	{
		for (auto Element : datatable->GetRowNames())
		{
			FPassiveSkillData skillData = *datatable->FindRow<FPassiveSkillData>(FName(Element),FString("Searching for Classes"),true) ;
			allPassiveSkills.Add(skillData.passiveSkillID, CreatePassiveSkill(skillData.passiveSkillID));
			allPassiveSkills[skillData.passiveSkillID]->InitializePassiveSkilData(skillData);
		}
	}
	
	
	UDataTable*  combatTokenDataTable = aCombatTokenDataTable;
	if(combatTokenDataTable)
	{
		for (auto Element : combatTokenDataTable->GetRowNames())
		{
			FCombatToken_Base_Data equipmentData = *combatTokenDataTable->FindRow<FCombatToken_Base_Data>(FName(Element),FString("Searching for Classes"),true) ;
			allCombatTokensData.Add(equipmentData.CombatTokenID,equipmentData );
		}
	}
	
	

	UDataTable*  equipmentDatatable = aEquipmentDataTable;
	if(equipmentDatatable)
	{
		for (auto Element : equipmentDatatable->GetRowNames())
		{
			FEquipmentPassiveData equipmentData = *equipmentDatatable->FindRow<FEquipmentPassiveData>(FName(Element),FString("Searching for Classes"),true) ;
			allEquipmentData.Add(equipmentData.EquipmentID,equipmentData);
		}
	}
}

UPassiveSkills* UPassiveFactorySubsystem::GetPassiveSkill(EPassiveSkillID aPassiveSkillID)
{
	if(aPassiveSkillID == EPassiveSkillID::None)
	{
		return nullptr;
	}
	
	if(!allPassiveSkills.Contains(aPassiveSkillID))
	{
		UE_LOG(LogTemp, Log, TEXT("PassiveSkillNotSetIn PassiveSkillFactory"));
		return nullptr;
	}
	return allPassiveSkills[aPassiveSkillID];
}

UPassiveSkills* UPassiveFactorySubsystem::CreatePassiveSkill(EPassiveSkillID aPassiveSkillID)
{
	switch (aPassiveSkillID) {
	case EPassiveSkillID::None:
		break;
	case EPassiveSkillID::StatusAdept:
		return NewObject<UGenericOnAttackPassive>();
		break;
	case EPassiveSkillID::DarkIncrease:
		return NewObject<UGenericOnAttackPassive>();
		break;
	case EPassiveSkillID::DarkResist:
		return NewObject<UGenericOnAttackPassive>();
		break;
	case EPassiveSkillID::Hydrocity:
		return NewObject<UGenericOnAttackPassive>();
		break;
	case EPassiveSkillID::MerchantZeal:
		return NewObject<UMerchantsZeal>();
		break;
	case EPassiveSkillID::BonkDefenceResistDown:
		return NewObject<UGenericModifyPassive>();
		break;
	case EPassiveSkillID::FelineAgility:
		return  NewObject<UFelineAgility>();
		break;
	}

	return NewObject<UGenericOnAttackPassive>();
}

FCombatToken_Base_Data UPassiveFactorySubsystem::GetCombatTokenData(ECombatTokenID combatTokenID)
{
	FCombatToken_Base_Data empty;
	if(combatTokenID == ECombatTokenID::None)
	{
		return empty;
	}
	
	if(!allCombatTokensData.Contains(combatTokenID))
	{
		UE_LOG(LogTemp, Log, TEXT("CombatToken not set in PassiveSkillFactory"));
		return empty;
	}
	
	return allCombatTokensData[combatTokenID];
}

bool UPassiveFactorySubsystem::DoesPassiveSkillExist(EPassiveSkillID aPassiveSkillID)
{
	return allPassiveSkills.Contains(aPassiveSkillID);
}

UEquipmentPassive* UPassiveFactorySubsystem::CreateEquipment(EEquipmentID aEquipmentID)
{
	UEquipmentPassive* newEquipment = NewObject<UEquipmentPassive>();
	switch (aEquipmentID)
	{
	case EEquipmentID::None:
		return nullptr;
		break;
	case EEquipmentID::statup:
		newEquipment = NewObject<UEquipmentPassive>();
		break;
	case EEquipmentID::BonkMod:
		newEquipment = NewObject<UEquipmentPassive>();
		break;
	}
	

	if(newEquipment != nullptr && allEquipmentData.Contains(aEquipmentID))
	{
		newEquipment->InitializeEquipmentPassive(aEquipmentID,GetPassiveSkill(allEquipmentData[aEquipmentID].attachedPassive));
	}

	return newEquipment;
}

FPassiveSkillData UPassiveFactorySubsystem::GetEquipmentPassiveSkillData(EEquipmentID aEquipmentID)
{
	FPassiveSkillData PassiveSkillData;

	if(!allEquipmentData.Contains(aEquipmentID))
	{
		return PassiveSkillData;
	}

	if(!allPassiveSkills.Contains(allEquipmentData[aEquipmentID].attachedPassive))
	{
		return PassiveSkillData;
	}

	PassiveSkillData = allPassiveSkills[allEquipmentData[aEquipmentID].attachedPassive]->passiveSkillData;
	
	return PassiveSkillData;
}
