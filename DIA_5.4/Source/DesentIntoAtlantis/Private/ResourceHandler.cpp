// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceHandler.h"

#include "CombatEntityHub.h"
#include "Health.h"
#include "SkillData.h"
#include "SkillType.h"

void UResourceHandler::Initialize(UCombatEntity* aOwnedCombatEntity,UPersistentGameinstance* aPersistantGameInstance)
{
	AttachedCombatEntity      = aOwnedCombatEntity;
	persistantGameInstance = aPersistantGameInstance;

	healthHandler                  = NewObject<UHealth>();
	manaHandler                    = NewObject<UMana>();
	SyncHandler                    = NewObject<USyncHandler>();
	ItemChargeHandler              = NewObject<UItemChargeHandler>();

	ValidateLifeStatusEvent.AddDynamic(this,&UResourceHandler::ValidateLifeStatus);
	
	healthHandler->InitializeHealth(ResourceHandlerCompleteData.HealthData,AttachedCombatEntity);
	manaHandler->InitializeMana(ResourceHandlerCompleteData.ManaData,AttachedCombatEntity);
	SyncHandler->InitializeSyncHandler(ResourceHandlerCompleteData.SyncData,AttachedCombatEntity);
	ItemChargeHandler->InitializeItemChargeHandler();

	DefenceLayers.Add(EResource::Health);

	SetCombatWrapper(AttachedCombatEntity);
}

void UResourceHandler::SetResourceHandlerCompleteData(FResourceHandlerCompleteData aResourceHandlerCompleteData)
{
	ResourceHandlerCompleteData = aResourceHandlerCompleteData;

	healthHandler->InitializeHealth(ResourceHandlerCompleteData.HealthData,AttachedCombatEntity);
	manaHandler->InitializeMana(ResourceHandlerCompleteData.ManaData,AttachedCombatEntity);
	SyncHandler->InitializeSyncHandler(ResourceHandlerCompleteData.SyncData,AttachedCombatEntity);
	
}

void UResourceHandler::ValidateLifeStatus()
{
	AttachedCombatEntity->DeathCheck();
}

bool UResourceHandler::DeathCheck()
{
	if(GetCurrentHealth() <= 0)
	{
		isMarkedForDeath = true;
	}
	if(GetCurrentHealth() > 0)
	{
		isMarkedForDeath = false;
	}
	

	return isMarkedForDeath;
}

void UResourceHandler::OnDeath()
{
	SyncHandler->SetCurrentValue(0);

	if(mostRecentAttacks.Num() > 0)
	{
		mostRecentAttacks[mostRecentAttacks.Num() -1].hasKilledEntity = true;	
	}
	
}

void UResourceHandler::Resurrection()
{
	healthHandler->SetCurrentValue(1);
	isMarkedForDeath = false;
	
	AttachedCombatEntity->combatEntityHub->
	SendGenericTrigger(AttachedCombatEntity,EGenericTrigger::OnResurrected);
	
	persistantGameInstance->SkillResolveSubsystem->CreateResurrectInterrupt(AttachedCombatEntity);
	
}

void UResourceHandler::SetHealthandMana(FHealthData aHealthData, FManaData aManaData)
{
	healthHandler->SetResourceInfo(aHealthData.ResourceBarInfo);
	manaHandler->SetResourceInfo(aManaData.ResourceBarInfo);
}

void UResourceHandler::LoadSavedCurrentResources(FResourceHandlerCompleteData aResourceHandlerCompleteData)
{
	healthHandler->SetCurrentValue(aResourceHandlerCompleteData.HealthData.ResourceBarInfo.Current);
	manaHandler->SetCurrentValue(aResourceHandlerCompleteData.ManaData.ResourceBarInfo.Current);
	SyncHandler->SetCurrentValue(aResourceHandlerCompleteData.SyncData.ResourceBarInfo.Current);
}



void UResourceHandler::SetToDefaultState()
{
	healthHandler->MaxOutCurrentValue();
	manaHandler->MaxOutCurrentValue();
	
}

void UResourceHandler::SetCombatWrapper(UCombatEntity* aCombatEntity)
{
	AttachedCombatEntity = aCombatEntity;
	
	inUseCombatWrapper      = NewObject<UCombatEntityWrapper>();
	allDefaultCombatWrapper = NewObject<UCombatEntityWrapper>();
	allDefaultCombatWrapper->SetAttachedCombatEntity(this,AttachedCombatEntity);
	allDefaultCombatWrapper->SetCalculateDamageWrapper(NewObject<UCalculateDamage_Base>());
    
	inUseCombatWrapper->SetAttachedCombatEntity(this,AttachedCombatEntity);
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

int UResourceHandler::DecrementResourceReturnOverFlow(EResource aResource,int aValue)
{

	int overflowValue = 0;
	
	switch (aResource)
	{
	case EResource::None:
		break;
	case EResource::Mana:
		overflowValue = manaHandler->DecrementValue(aValue);
		break;
	case EResource::Health:
		overflowValue = healthHandler->DecrementHealth(aValue);
		IncrementResource(EResource::Sync,5);
		break;
	case EResource::Sync:
		overflowValue = SyncHandler->DecrementValue(aValue);
		break;
	case EResource::ItemCharges:
		{
			float convert = aValue / 100;
			ItemChargeHandler->DecrementItemCharges(convert);
			
			break;
		}
	}

	hasValuesUpdated.Broadcast();

	return overflowValue;
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
		{
			float convert = aValue / 100;
			ItemChargeHandler->IncrementItemChargesPercentage(convert);
			
			break;
		}
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

FCombatLog_AttackDefense_Data UResourceHandler::AttackResource(EResource aResource, UCombatEntity* aAttacker, int aDecrementBy)
{
	FCombatLog_AttackDefense_Data combatLog;
	combatLog.wasInitializedOnSkill = false;
	
	StartDecrementResource( aResource,  aDecrementBy);
	AddRecentAttackCombatLog(combatLog);
	
	return combatLog;
}

FCombatLog_AttackDefense_Data UResourceHandler::AttackResourceWithSkill(EResource aResource,UCombatEntity* aAttacker, FSkillsData aSkill)
{
	FCombatLog_AttackDefense_Data combatLog = CalculateDamage( aAttacker,  aSkill);
	
	StartDecrementResource( aResource, combatLog.FinalDamageResult);
	AddRecentAttackCombatLog(combatLog);
	
	return combatLog;
}

void UResourceHandler::StartDecrementResource(EResource aResource, int aDecrementBy)
{
	//Health is considered main damage while the other resources can be
	//targeted health has defensive layers that could happen instead of health first
	if(aResource == EResource::Damage)
	{
		DealDamage(aDecrementBy);
	}
	else
	{
		DecrementResourceReturnOverFlow(aResource,aDecrementBy);		
	}
}

void UResourceHandler::AddRecentAttackCombatLog(FCombatLog_AttackDefense_Data aCombatLog)
{
	mostRecentAttacks.Add(aCombatLog);

	if(mostRecentAttacks.Num() > 10)
	{
		mostRecentAttacks.RemoveAt(0);
	}
}

void UResourceHandler::DealDamage(int aResourceAmount)
{
	int resourceAmount = aResourceAmount;

	for (int i = DefenceLayers.Num() - 1; i >= 0; i--)
	{
		if(resourceAmount <= 0)
		{
			break;
		}
		resourceAmount = DecrementResourceReturnOverFlow(DefenceLayers[i],resourceAmount);
	}
	
	AttachedCombatEntity->PostDamage();
}

int UResourceHandler::GetCurrentHealth()
{
	return healthHandler->GetCurrentValue();
}

void UResourceHandler::SpendSkillCost(FSkillsData skillData, EResource SkillResourceUsed, UCombatEntity* aSkillOwner)
{
	EResource skillResouce = SkillResourceUsed ==
	EResource::None ? skillData.SkillResourceUsed : SkillResourceUsed;
	
	switch (skillResouce)
	{
	case EResource::None:
		break;
	case EResource::Mana:
		aSkillOwner->DecrementMana(skillData.costToUse);
		break;
	case EResource::Health:
		DecrementResourceReturnOverFlow(EResource::Health,skillData.costToUse);
		break;
	case EResource::Sync:
		DecrementResourceReturnOverFlow(EResource::Sync,skillData.costToUse);
		break;
	case EResource::ItemCharges:
		ItemChargeHandler->ConsumeItemCharge(skillData.costToUse);
		break;
	}
}
