// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <functional>

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "EAtlantisEvents.h"
#include "EElementalType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ChallengeSubsystem.generated.h"

class UDamageChallenge;
enum class ECharactertype;
class USkillBase;
enum class EPressTurnReactions;
enum class EElementalType;
class UChallenge;
class UChallengeSubsystem;
/**
 * 
 */
class DESENTINTOATLANTIS_API EventBase
{
public:
	virtual ~EventBase() {}
	// Define a function to identify the type of event
	virtual EAtlantisEvents GetEventType() const = 0;
};

class DESENTINTOATLANTIS_API SpecificEvent : public EventBase
{
public:
	SpecificEvent(int32 InValue) : Value(InValue) {}

	virtual EAtlantisEvents GetEventType() const override { return EAtlantisEvents::SpecificEvent; }
    
	int32 GetValue() const { return Value; }
    
private:
	int32 Value;
};

class DESENTINTOATLANTIS_API DamageEvent : public EventBase
{
public:
	DamageEvent(int32 InValue,EPressTurnReactions InPressTurnReactions,USkillBase* InSkillBase)
	: Value(InValue), pressturnReaction(InPressTurnReactions), skillBase(InSkillBase) {}

	virtual EAtlantisEvents GetEventType() const override { return EAtlantisEvents::Damage; }
    
	int32 GetValue() const { return Value; }
	EPressTurnReactions GetPressTurn() const { return pressturnReaction; }
	USkillBase* GetSkill() const { return skillBase; }
    
private:
	int32 Value;
	EPressTurnReactions pressturnReaction;
	USkillBase* skillBase;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FChallengeData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere)
	int32 ChallengeID               = 10000;
	UPROPERTY(EditAnywhere)
	FString ChallengeName           = "Challenge Name Undefined";
	UPROPERTY(EditAnywhere)
	FString ChallengeDescription    = "Challenge Description Undefined";

	UPROPERTY(EditAnywhere)
	TArray<int32> PreRequisiteChallenges;
	UPROPERTY(EditAnywhere)
	TArray<int32> ChallengesStartedOnEnd;
	
	UPROPERTY()
	int32 currentValue              = 0;
	UPROPERTY(EditAnywhere)
	int32 rewardValue               = 10;
	UPROPERTY(EditAnywhere)
	int32 RequiredValue             = 100;
	UPROPERTY(EditAnywhere)
	bool canRepeat                = true;
	UPROPERTY(EditAnywhere)
	EAtlantisEvents EventLisener;
	
	UPROPERTY(EditAnywhere)
	EElementalType elementalTypeChallenge = EElementalType::None;
	UPROPERTY(EditAnywhere)
	ECharactertype characterTypeChallenge = ECharactertype::Undefined;

	UPROPERTY()
	bool isComplete                       = false;
	UPROPERTY()
	int32 amountOfTimesCompleted          = 0;
};


USTRUCT()
struct DESENTINTOATLANTIS_API FChallengeManagerData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	TMap<EAtlantisEvents,FChallengeData> activeChallenges;
	UPROPERTY()
	TMap<int32,FChallengeData> completedChallenge;
};

UCLASS()
class DESENTINTOATLANTIS_API UChallengeSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public :
	void InitializeSubsystem(UDataTable* aChallengeTable);

	void LoadSaveData(FChallengeManagerData aChallengeManagerData);
	void DispatchEvent(EventBase* aEvent);

	bool CanActivateChallenge(int32 challengeID);
	void RequestCreateActiveChallenge(int32 challengeID);
private:

	UChallenge* CreateChallenge(FChallengeData ChallengeData);
	void ActivateChallenge(UChallenge* aChallenge);

	void CreateNewChallengesOnEnd(TArray<int32> CreatedOnEndIDs);
	
	UFUNCTION()
	void RemoveChallenge(UChallenge* aChallenge);
	
	UPROPERTY()
	FChallengeManagerData ChallengeManagerData;
	UPROPERTY()
	TMap<int32, FChallengeData> AllChallenges;
	UPROPERTY()
	TArray<UChallenge*> activeChallenges;
	
};



UCLASS()
class DESENTINTOATLANTIS_API UChallenge : public UObject
{
	
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeHasCompletedFinished,UChallenge*,result);

	virtual void Initialize(FChallengeData aChallengeData,UChallengeSubsystem* aChallengeSubsystem);

	virtual void EventReceived(EventBase* Event);
	virtual bool DoesEventFitChallenge(int32 aValue);

    virtual FChallengeData GetChallengeData();
	virtual void OnChallengeFinish();

	virtual EAtlantisEvents GetChallengeType();
	FChallengeHasCompletedFinished ChallengeHasCompletedFinished;

protected:
	FChallengeData challengeData;
};

UCLASS()
class DESENTINTOATLANTIS_API UDamageChallenge : public UChallenge
{

	GENERATED_BODY()
public:


	virtual void EventReceived(EventBase* Event) override;
	virtual bool DoesEventFitChallenge(int32 aValue) override;

	virtual EAtlantisEvents GetChallengeType() override;
	FChallengeHasCompletedFinished ChallengeHasCompletedFinished;
	
protected:

};