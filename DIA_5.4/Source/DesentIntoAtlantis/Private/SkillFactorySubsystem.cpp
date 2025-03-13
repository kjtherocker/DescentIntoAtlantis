// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillFactorySubsystem.h"

#include "CombatEntity.h"
#include "ESkillID.h"
#include "Engine/DataTable.h"
#include "SkillBase.h"
#include "SkillType.h"
#include "SkillUsage.h"


void USkillFactorySubsystem::InitializeDatabase(UDataTable*  aSkillDataTable,UDataTable*  aItemSkillDataTable)
{

	UDataTable*  datatable = aSkillDataTable;

	allAliments.Add(EStatusAilments::Fear,NewObject<UAilment_Fear>());
	
	if(datatable)
	{
		for (auto Element : datatable->GetRowNames())
		{
			FSkillsData skillData = *datatable->FindRow<FSkillsData>(FName(Element),FString("Searching for Skills"),true);
			
			USkillBase* skillBase = GetSkillClass(skillData);
			if(skillBase != nullptr)
			{
				skillBase->Initialize(skillData);
				allSkillsMap.Add(skillData.skillID,skillData);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}

	UDataTable*  itemDataTable = aItemSkillDataTable;

	if(itemDataTable)
	{
		for (auto Element : itemDataTable->GetRowNames())
		{
			FItemData ItemData = *itemDataTable->FindRow<FItemData>(FName(Element),FString("Searching for Skills"),true);
			USkillBase* skillBase = GetSkillClass(ItemData.itemTierSkillData[0]);
			if(skillBase != nullptr)
			{
				skillBase->Initialize(ItemData.itemTierSkillData[0]);
				UItemBase* newItem = NewObject<UItemBase>();
				newItem->InitializeItem(ItemData,skillBase);
				allItemsMap.Add(ItemData.itemID,newItem);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("SkillFactory isnt receving the correct Skills Datatable"));

	}
	
	
}

USkillBase* USkillFactorySubsystem::GetSkill(ESkillIDS aSkillID)
{
	FSkillsData SkillsData = allSkillsMap.FindRef(aSkillID);
	USkillBase* skillToReturn = GetSkillClass(SkillsData);

	skillToReturn->Initialize(SkillsData);
	if(skillToReturn == nullptr)
	{
		FSkillsData skillData;
		skillData.skillName    = "Doesnt Exist";
		skillData.skillID      = ESkillIDS::Uninitialized;
		skillData.skillType    = ESkillType::Attack;
		skillData.skillUsage   = ESkillUsage::Opponents;
		
		return GetSkillClass( skillData);
	}
	
	return skillToReturn;
}

FSkillsData USkillFactorySubsystem::GetSkillData(ESkillIDS aSkillID)
{
	if(!allSkillsMap.Contains(aSkillID))
	{
		FSkillsData skillData;
		
		skillData.skillName    = "Doesnt Exist";
		skillData.skillID      = ESkillIDS::Uninitialized;
		skillData.skillType    = ESkillType::Attack;
		skillData.skillUsage   = ESkillUsage::Opponents;
		
		return skillData;
	}
	
	FSkillsData SkillsData = allSkillsMap.FindRef(aSkillID);

	return SkillsData;
}

UItemBase* USkillFactorySubsystem::GetItem(EItemID aItemID)
{
	UItemBase* itemToReturn = allItemsMap.FindRef(aItemID);
	if(itemToReturn == nullptr)
	{
		FSkillsData skillData;
		skillData.skillName    = "Doesnt Exist";
		skillData.skillID      = ESkillIDS::Uninitialized;
		skillData.skillType    = ESkillType::Attack;
		skillData.skillUsage   = ESkillUsage::Opponents;

		UItemBase* fakeItem = NewObject<UItemBase>();

		FItemData ItemData;
		ItemData.itemTierSkillData.Add(0,skillData);
		ItemData.itemID = EItemID::ItemNotFound;
		fakeItem->InitializeItem(ItemData,GetSkillClass( skillData));
		return fakeItem;
	}
	
	return itemToReturn;
}

UAilment* USkillFactorySubsystem::GetAilment(EStatusAilments aAilment)
{
	return allAliments[aAilment];
}

USkillBase* USkillFactorySubsystem::GetSkillClass(FSkillsData skillData)
{
	//Unique Hand made skills that have there own classes 
	switch (skillData.skillID)
	{
		case ESkillIDS::Uninitialized:
			return NewObject<UDefaultSkillAttack>();
		break;
		case ESkillIDS::Bonk:
			return NewObject<USkillAttackCombatToken>();
			break;
		case ESkillIDS::Boo:
			return NewObject<USkillAlimentAttackFear>();
			break;
		case ESkillIDS::CoupDeGrace:
			return NewObject<USkillCoupDeGrace>();
			break;
		case ESkillIDS::SpreadInfection:
			return NewObject<USkillSpreadTheInfection>();
			break;
		case ESkillIDS::WavesSweetRelease:
			return NewObject<UWavesSweetRelease>();
			break;
		case ESkillIDS::FeyDuality:
			return NewObject<UFeyDuality>();
			break;
		case ESkillIDS::BansheesGaze:
			return NewObject<UBansheesGaze>();
			break;
	}

	//More generic Easily Flexible skills
	switch (skillData.skillType)
	{
		case ESkillType::Attack:
			return NewObject<UDefaultSkillAttack>();
			break;
		case ESkillType::Heal:
			return NewObject<USkillHeal>();
			break;
		case ESkillType::PositiveCombatToken:
			return NewObject<USkillCombatToken>();
			break;
		case ESkillType::NegativeCombatToken:
			return NewObject<USkillCombatToken>();
			break;
		case ESkillType::HealPositiveCombatToken:
			break;
		case ESkillType::AttackNegativeCombatToken:
			return NewObject<USkillAttackCombatToken>();
			break;
		case ESkillType::Start:
			break;
		case ESkillType::Unique:
			break;
	}

	return nullptr;
}
