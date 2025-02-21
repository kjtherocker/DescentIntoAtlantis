// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyGroup_Dump.h"

#include "PartyManagerSubsystem.h"

void UPartyGroup_Dump::Initialize(UPartyManagerSubsystem* aPartyManagerSubsystem, FPartyInfo aPartyInfo)
{
	partyGroup.Empty();
	partyGroupCombatEntitys.Empty();
	
	Super::Initialize(aPartyManagerSubsystem, aPartyInfo);
}

void UPartyGroup_Dump::ProcessPartyInfo(FPartyInfo aPartyInfo)
{
	Super::ProcessPartyInfo(aPartyInfo);

	for (auto Element : aPartyInfo.partyMemberDump)
	{
		partyGroup.Add(Element);
		UPlayerCombatEntity* CombatEntity = partyManagerSubsystem->GetAndCreatePlayerEntity(Element);

		if(CombatEntity == nullptr)
		{
			continue;
		}
		
		partyGroupCombatEntitys.Add(CombatEntity);
	}

}

void UPartyGroup_Dump::AddPartyMember(EPartyMembersID aPlayer)
{
	partyGroup.Add(aPlayer);
	UPlayerCombatEntity* CombatEntity = partyManagerSubsystem->GetAndCreatePlayerEntity(aPlayer);
	
	if(CombatEntity == nullptr)
	{
		return;
	}
		
	partyGroupCombatEntitys.Add(CombatEntity);
}

void UPartyGroup_Dump::RemovePartyMember(EPartyMembersID aPlayer)
{
	for(int i = 0 ; i < partyGroup.Num();i++)
	{
		if(partyGroup[i] == aPlayer)
		{
			partyGroup[i] = EPartyMembersID::None;
			partyGroupCombatEntitys[i] = nullptr;

			return;
		}
	}
}

UPlayerCombatEntity*  UPartyGroup_Dump::RemoveAndGetPartyMember(EPartyMembersID aPlayer)
{
	UPlayerCombatEntity* PlayerCombatEntity = nullptr;
	for(int i = 0 ; i < partyGroup.Num();i++)
	{
		if(partyGroup[i] == aPlayer)
		{
			PlayerCombatEntity = partyGroupCombatEntitys[i];
			partyGroup[i] = EPartyMembersID::None;
			partyGroupCombatEntitys[i] = nullptr;

			return PlayerCombatEntity;
		}
	}
	

	return PlayerCombatEntity;
}

UPlayerCombatEntity* UPartyGroup_Dump::GetSpecificPlayerEntity(EPartyMembersID aPartyMember)
{
	for (auto Element : partyGroupCombatEntitys)
	{
		if(Element->GetPartyMemberID() == aPartyMember)
		{
			return Element;
		}
	}
	
	return nullptr;
}

FPartyInfo UPartyGroup_Dump::GetPartyInfo()
{
	PartyInfo.partyMemberDump = partyGroup;
	return Super::GetPartyInfo();
}
