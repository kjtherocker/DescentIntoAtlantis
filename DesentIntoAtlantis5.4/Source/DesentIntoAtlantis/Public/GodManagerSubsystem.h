// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <functional>

#include "CoreMinimal.h"
#include "EGodChallengeTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GodManagerSubsystem.generated.h"

class USkillBase;
enum class EPressTurnReactions;
enum class EElementalType;
class UChallenge;
class UGodManagerSubsystem;
/**
 * 
 */
class DESENTINTOATLANTIS_API EventBase
{
public:
	virtual ~EventBase() {}
	// Define a function to identify the type of event
	virtual EGodChallengeTypes GetEventType() const = 0;
};

class DESENTINTOATLANTIS_API SpecificEvent : public EventBase
{
public:
	SpecificEvent(int32 InValue) : Value(InValue) {}

	virtual EGodChallengeTypes GetEventType() const override { return EGodChallengeTypes::SpecificEvent; }
    
	int32 GetValue() const { return Value; }
    
private:
	int32 Value;
};

class DESENTINTOATLANTIS_API DamageEvent : public EventBase
{
public:
	DamageEvent(int32 InValue,EPressTurnReactions InPressTurnReactions,USkillBase* InSkillBase)
	: Value(InValue), pressturnReaction(InPressTurnReactions), skillBase(InSkillBase) {}

	virtual EGodChallengeTypes GetEventType() const override { return EGodChallengeTypes::SpecificEvent; }
    
	int32 GetValue() const { return Value; }
	EPressTurnReactions GetPressTurn() const { return pressturnReaction; }
	USkillBase* GetSkill() const { return skillBase; }
    
private:
	int32 Value;
	EPressTurnReactions pressturnReaction;
	USkillBase* skillBase;
};


UCLASS()
class DESENTINTOATLANTIS_API UGodManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	using EventDelegate = std::function<void(EventBase*)>;
//	
//	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeEvent,EventBase*,result);
public :
	void InitializeSubsystem();


	


	void Subscribe(EGodChallengeTypes EventType, EventBase* Delegate);

	void DispatchEvent(EventBase* Event);

	void ActivateChallenge(UChallenge* aChallenge);
	UFUNCTION()
	void RemoveChallenge(UChallenge* aChallenge);
private:
	TMap<EGodChallengeTypes, TArray<EventBase*>> EventListeners;

	TArray<UChallenge*> activeChallenges;
	
};



UCLASS()
class DESENTINTOATLANTIS_API UChallenge : public UObject
{
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeHasCompletedFinished,UChallenge*,result);
	GENERATED_BODY()
public:

	void Initialize(UGodManagerSubsystem* aGodmanagerSubsystem);

	void EventRecieved(EventBase* Event);
	bool DoesEventFitChallenge(int32 aValue);


	void OnChallengeCompleted();

	
	EGodChallengeTypes godChallengeType = EGodChallengeTypes::SpecificEvent;
	FChallengeHasCompletedFinished ChallengeHasCompletedFinished;
private:
	int32 currentValue  = 0;
	int32 rewardValue   = 10;
	int32 RequiredValue = 100;  // Set some required condition for this challenge
	bool isComplete     = false;
};

UCLASS()
class DESENTINTOATLANTIS_API UDamageChallenge : public UObject
{
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeHasCompletedFinished,UChallenge*,result);
	GENERATED_BODY()
public:

	void Initialize(UGodManagerSubsystem* aGodmanagerSubsystem);

	void EventRecieved(EventBase* Event);
	bool DoesEventFitChallenge(int32 aValue);


	void OnChallengeCompleted();

	
	EGodChallengeTypes godChallengeType = EGodChallengeTypes::SpecificEvent;
	FChallengeHasCompletedFinished ChallengeHasCompletedFinished;
private:
	int32 currentValue  = 0;
	int32 rewardValue   = 10;
	int32 RequiredValue = 100;  // Set some required condition for this challenge
	bool isComplete     = false;
};
