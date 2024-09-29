// Fill out your copyright notice in the Description page of Project Settings.


#include "ChallengeSubsystem.h"

#include "SkillsData.h"

void UChallengeSubsystem::InitializeSubsystem(UDataTable* aChallengeTable)
{
	for(int i = 0 ; i < aChallengeTable->GetRowMap().Num(); i ++)
	{
		 FChallengeData ChallengeData = *aChallengeTable->FindRow<FChallengeData>(FName(FString::FromInt(i)),FString("Searching for Challenges"),true);
		 AllChallenges.Add(ChallengeData.ChallengeID,ChallengeData);
	}
	
	RequestCreateActiveChallenge(10000);
}

void UChallengeSubsystem::LoadSaveData(FChallengeManagerData aChallengeManagerData)
{
	ChallengeManagerData = aChallengeManagerData;
	for ( TTuple<EAtlantisEvents, FChallengeData> Element : aChallengeManagerData.activeChallenges)
	{
		FChallengeData ChallengeData      = Element.Value;
		FChallengeData ChallengeTableCopy = AllChallenges[ChallengeData.ChallengeID];
		if(ChallengeData.ChallengeName != ChallengeTableCopy.ChallengeName)
		{
			ChallengeTableCopy.currentValue = ChallengeData.currentValue;
			Element.Value = ChallengeTableCopy;
			ActivateChallenge(CreateChallenge(ChallengeTableCopy));
		}
		else
		{
			ActivateChallenge(CreateChallenge(ChallengeData));	
		}
	}
}

void UChallengeSubsystem::DispatchEvent(EventBase* aEvent)
{
	if(activeChallenges.Num() == 0)
	{
		return;
	}
	
	for (int i = 0 ; i < activeChallenges.Num();i++)
	{
		activeChallenges[i]->EventReceived(aEvent);
	}
	
}

bool UChallengeSubsystem::CanActivateChallenge(int32 challengeID)
{
	if(!AllChallenges.Contains(challengeID))
	{
		return false;
	}
	
	FChallengeData challengeToAdd = AllChallenges[challengeID];

	for (int32 Element : challengeToAdd.PreRequisiteChallenges)
	{
		if(!ChallengeManagerData.completedChallenge.Contains(Element))
		{
			return false;
		}
	}

	for (TTuple<EAtlantisEvents, FChallengeData> Element : ChallengeManagerData.activeChallenges)
	{
		int32 challengeToAddID = Element.Value.ChallengeID;
		if(challengeToAdd.ChallengeID == challengeToAddID)
		{
			return false;
		}
	}

	if(!challengeToAdd.canRepeat)
	{
		if(ChallengeManagerData.completedChallenge.Contains(challengeToAdd.ChallengeID))
		{
			return false;
		}
	}
	
	return true;
}

void UChallengeSubsystem::RequestCreateActiveChallenge(int32 challengeID)
{
	if(!AllChallenges.Contains(challengeID))
	{
		return;
	}
	
	 ActivateChallenge(CreateChallenge(AllChallenges[challengeID]));
}

UChallenge* UChallengeSubsystem::CreateChallenge(FChallengeData ChallengeData)
{
	if(!CanActivateChallenge(ChallengeData.ChallengeID))
	{
		return nullptr;
	}
	
	UChallenge* result = nullptr;
	switch (ChallengeData.EventLisener)
	{
		case EAtlantisEvents::Empty:
			break;
		case EAtlantisEvents::SpecificEvent:
			break;
		case EAtlantisEvents::AnotherEvent:
			break;
		case EAtlantisEvents::Damage:
			result = NewObject<UDamageChallenge>();
			break;
		case EAtlantisEvents::MAX:
			break;
	default: ;
	}

	if(result != nullptr)
	{
		result->Initialize(ChallengeData,this);
	}
	return result;
}

void UChallengeSubsystem::ActivateChallenge(UChallenge* aChallenge)
{
	if(aChallenge == nullptr)
	{
		return;
	}
	
	aChallenge->ChallengeHasCompletedFinished.AddDynamic(this,&UChallengeSubsystem::RemoveChallenge);
	
	activeChallenges.Add(aChallenge);
}

void UChallengeSubsystem::CreateNewChallengesOnEnd(TArray<int32> CreatedOnEndIDs)
{
	for (int32 challengeID : CreatedOnEndIDs)
	{
		RequestCreateActiveChallenge(challengeID);
	}
	
}

void UChallengeSubsystem::RemoveChallenge(UChallenge* aChallenge)
{
	FChallengeData ChallengeData = aChallenge->GetChallengeData();

	ChallengeData.amountOfTimesCompleted++;

	if(ChallengeManagerData.completedChallenge.Contains(ChallengeData.ChallengeID))
	{
		ChallengeManagerData.completedChallenge[ChallengeData.ChallengeID] = ChallengeData;
	}
	else
	{
		ChallengeManagerData.completedChallenge.Add(ChallengeData.ChallengeID,ChallengeData);
	}

	activeChallenges.Remove(aChallenge);
	aChallenge->ChallengeHasCompletedFinished.RemoveAll(this);
	CreateNewChallengesOnEnd(ChallengeData.ChallengesStartedOnEnd);
}



void UChallenge::Initialize(FChallengeData aChallengeData,UChallengeSubsystem* aChallengeSubsystem)
{
	challengeData = aChallengeData;
}

void UChallenge::EventReceived(EventBase* Event)
{
	SpecificEvent* Specific = static_cast<SpecificEvent*>(Event);
	if (Specific && DoesEventFitChallenge(Specific->GetValue()))
	{
		OnChallengeFinish();
	}
}

bool UChallenge::DoesEventFitChallenge(int32 aValue)
{
	challengeData.currentValue += aValue;
	// Check if the event matches the challenge criteria
	return challengeData.currentValue >= challengeData.RequiredValue;
}

FChallengeData UChallenge::GetChallengeData()
{
	return challengeData;
}

void UChallenge::OnChallengeFinish()
{
	challengeData.isComplete = true;
	ChallengeHasCompletedFinished.Broadcast(this);
}

EAtlantisEvents UChallenge::GetChallengeType()
{
	return EAtlantisEvents::SpecificEvent;
}

void UDamageChallenge::EventReceived(EventBase* Event)
{
	if(Event == nullptr)
	{
		return;
	}
	
	DamageEvent* damageEvent = static_cast<DamageEvent*>(Event);
	if(damageEvent == nullptr)
	{
		return;
	}

	FSkillsData SkillsData = damageEvent->GetSkill()->skillData;
	int32 damageValue      = damageEvent->GetValue();
	
	if(SkillsData.elementalType == EElementalType::Shadow)
	{
		challengeData.currentValue += damageValue;
	}

	if(challengeData.currentValue >= challengeData.RequiredValue)
	{
		OnChallengeFinish();
	}
	
}

bool UDamageChallenge::DoesEventFitChallenge(int32 aValue)
{
	return true;
}

EAtlantisEvents UDamageChallenge::GetChallengeType()
{
	return EAtlantisEvents::Damage;
}


