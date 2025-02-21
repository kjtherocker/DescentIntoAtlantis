// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyGroup.h"

void UPartyGroup::Initialize(UPartyManagerSubsystem* aPartyManagerSubsystem, FPartyInfo aPartyInfo)
{
	partyManagerSubsystem = aPartyManagerSubsystem;
	PartyInfo             = aPartyInfo;

	ProcessPartyInfo( aPartyInfo);
}

void UPartyGroup::ProcessPartyInfo(FPartyInfo aPartyInfo)
{
}

void UPartyGroup::AddPartyMember(EPartyMembersID aPlayer)
{
}

void UPartyGroup::RemovePartyMember(EPartyMembersID aPlayer)
{
}

UPlayerCombatEntity* UPartyGroup::GetSpecificPlayerEntity(EPartyMembersID aPartyMember)
{
	return nullptr;
}

void UPartyGroup::Reset()
{
}

