// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceHandler.h"

#include "Health.h"
#include "SkillData.h"
#include "SkillType.h"

void UResourceHandler::Initialize(UCombatEntity* aOwnedCombatEntity)
{
	OwnedCombatEntity = aOwnedCombatEntity;

	healthHandler                  = NewObject<UHealth>();
	manaHandler                    = NewObject<UMana>();
	SyncHandler                    = NewObject<USyncHandler>();

	healthHandler->InitializeHealth(ResourceHandlerCompleteData.HealthData,OwnedCombatEntity);
	manaHandler->InitializeMana(ResourceHandlerCompleteData.ManaData,OwnedCombatEntity);
	SyncHandler->InitializeSyncHandler(ResourceHandlerCompleteData.SyncData,OwnedCombatEntity);

	SetCombatWrapper(OwnedCombatEntity);
}

void UResourceHandler::SetResourceHandlerCompleteData(FResourceHandlerCompleteData aResourceHandlerCompleteData)
{
	ResourceHandlerCompleteData = aResourceHandlerCompleteData;

	healthHandler->InitializeHealth(ResourceHandlerCompleteData.HealthData,OwnedCombatEntity);
	manaHandler->InitializeMana(ResourceHandlerCompleteData.ManaData,OwnedCombatEntity);
	SyncHandler->InitializeSyncHandler(ResourceHandlerCompleteData.SyncData,OwnedCombatEntity);
	
}

void UResourceHandler::SetHealthandMana(FHealthData aHealthData, FManaData aManaData)
{
	healthHandler->SetResourceInfo(aHealthData.ResourceBarInfo);
	manaHandler->SetResourceInfo(aManaData.ResourceBarInfo);
}

void UResourceHandler::SetToDefaultState()
{
	healthHandler->MaxOutCurrentValue();
	manaHandler->MaxOutCurrentValue();
	
}

void UResourceHandler::SetCombatWrapper(UCombatEntity* aCombatEntity)
{
	OwnedCombatEntity = aCombatEntity;
	
	inUseCombatWrapper      = NewObject<UCombatEntityWrapper>();
	allDefaultCombatWrapper = NewObject<UCombatEntityWrapper>();
	allDefaultCombatWrapper->SetAttachedCombatEntity(this,OwnedCombatEntity);
	allDefaultCombatWrapper->SetCalculateDamageWrapper(NewObject<UCalculateDamage_Base>());
    
	inUseCombatWrapper->SetAttachedCombatEntity(this,OwnedCombatEntity);
	inUseCombatWrapper->SetCalculateDamageWrapper(allDefaultCombatWrapper->GetCalculateDamageWrapper());
}

void UResourceHandler::SetAWrapperToDefault(ECombatEntityWrapperType aShellType)
{
	switch (aShellType)
	{
	case ECombatEntityWrapperType::None:
            
		break;
	case ECombatEntityWrapperType::CalculateDamage:
		inUseCombatWrapper->SetCalculateDamageDefault(allDefaultCombatWrapper->GetCalculateDamageWrapper());
		break;
	}
}

void UResourceHandler::InflictAilment(UWrapperTakeOver* aAliment, ECombatEntityWrapperType aCombatEntityWrapperType)
{
	inUseCombatWrapper->SetAilment(aAliment,aCombatEntityWrapperType);
}

void UResourceHandler::DecrementResource(EResource aResource,int aValue)
{

	switch (aResource)
	{
	case EResource::None:
		break;
	case EResource::Mana:
		manaHandler->DecrementValue(aValue);
		break;
	case EResource::Health:
		healthHandler->DecrementHealth(aValue);
		break;
	case EResource::Sync:
		SyncHandler->DecrementValue(aValue);
		break;
	case EResource::ItemCharges:
		break;
	}

	hasValuesUpdated.Broadcast();
}

void UResourceHandler::IncrementResource(EResource aResource, int aValue)
{
	switch (aResource)
	{
	case EResource::None:
		break;
	case EResource::Mana:
		manaHandler->IncrementValue(aValue);
		break;
	case EResource::Health:
		healthHandler->IncrementValue(aValue);
		break;
	case EResource::Sync:
		SyncHandler->IncrementValue(aValue);
		break;
	case EResource::ItemCharges:
		break;
	}

	
	hasValuesUpdated.Broadcast();
}

FResourceHandlerCompleteData UResourceHandler::SaveAllResourcesAndReturn()
{
	ResourceHandlerCompleteData.HealthData = healthHandler->GetHealthData();
	ResourceHandlerCompleteData.ManaData   = manaHandler->GetManaData();
	ResourceHandlerCompleteData.SyncData   = SyncHandler->GetSyncData();

	return  ResourceHandlerCompleteData;
}

FCombatLog_AttackDefense_Data UResourceHandler::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
	return inUseCombatWrapper->ExecuteCalculateDamage(aAttacker,aSkill);
}

FCombatLog_AttackDefense_Data UResourceHandler::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FCombatLog_AttackDefense_Data combatLog = CalculateDamage( aAttacker,  aSkill);
	
	DecrementResource(EResource::Health,combatLog.FinalDamageResult);

	return combatLog;
}

int UResourceHandler::GetCurrentHealth()
{
	return healthHandler->GetCurrentValue();
}
