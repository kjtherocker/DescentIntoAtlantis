// Fill out your copyright notice in the Description page of Project Settings.


#include "GodManagerSubsystem.h"

#include "SkillsData.h"

void UGodManagerSubsystem::InitializeSubsystem()
{

	UChallenge* testChallenge = NewObject<UChallenge>();
	ActivateChallenge(testChallenge);
	// Trigger an event
	SpecificEvent MyEvent(100);
	DispatchEvent(&MyEvent);
	TArray<EventBase*> test = EventListeners[EGodChallengeTypes::SpecificEvent];
}

void UGodManagerSubsystem::Subscribe(EGodChallengeTypes EventType, EventBase* Delegate)
{
	EventListeners.FindOrAdd(EventType).Add(Delegate);
}

void UGodManagerSubsystem::DispatchEvent(EventBase* Event)
{
	EGodChallengeTypes EventType = Event->GetEventType();

	if (EventListeners.Contains(EventType))
	{
		for (auto& Listener : EventListeners[EventType])
		{
			Listener(Event);
		}
	}
}

void UGodManagerSubsystem::ActivateChallenge(UChallenge* aChallenge)
{
	aChallenge->Initialize(this);
	aChallenge->ChallengeHasCompletedFinished.AddDynamic(this,&UGodManagerSubsystem::RemoveChallenge);
	
	activeChallenges.Add(aChallenge);
}

void UGodManagerSubsystem::RemoveChallenge(UChallenge* aChallenge)
{
	
	//EventListeners[aChallenge->godChallengeType].Remove()
	activeChallenges.Remove(aChallenge);
}



void UChallenge::Initialize(UGodManagerSubsystem* aGodmanagerSubsystem)
{
	// Subscribe to specific events
	
	//aGodmanagerSubsystem->Subscribe(godChallengeType, );
}

void UChallenge::EventRecieved(EventBase* Event)
{
	SpecificEvent* Specific = static_cast<SpecificEvent*>(Event);
	if (Specific && DoesEventFitChallenge(Specific->GetValue()))
	{
		OnChallengeCompleted();
	}
}

bool UChallenge::DoesEventFitChallenge(int32 aValue)
{
	currentValue += aValue;
	// Check if the event matches the challenge criteria
	return currentValue >= RequiredValue;
}

void UChallenge::OnChallengeCompleted()
{
	isComplete = true;
	ChallengeHasCompletedFinished.Broadcast(this);
}

void UDamageChallenge::Initialize(UGodManagerSubsystem* aGodmanagerSubsystem)
{
}

void UDamageChallenge::EventRecieved(EventBase* Event)
{
	DamageEvent* damageEvent = static_cast<DamageEvent*>(Event);
	if(damageEvent == nullptr)
	{
		return;
	}

	FSkillsData SkillsData = damageEvent->GetSkill()->skillData;
	int32 damageValue      = damageEvent->GetValue();
	if(SkillsData.elementalType == EElementalType::Shadow)
	{
		currentValue += damageValue;
	}

	if(currentValue >= RequiredValue)
	{
		OnChallengeCompleted();
	}
	
}

bool UDamageChallenge::DoesEventFitChallenge(int32 aValue)
{
	return true;
}

void UDamageChallenge::OnChallengeCompleted()
{
}
