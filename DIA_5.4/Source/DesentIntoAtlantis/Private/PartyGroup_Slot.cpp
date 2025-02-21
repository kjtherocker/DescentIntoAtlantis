// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyGroup_Slot.h"

#include "PartyManagerSubsystem.h"

void UPartyGroup_Slot::Initialize(UPartyManagerSubsystem* aPartyManagerSubsystem, FPartyInfo aPartyInfo)
{
	partyGroup.Add(ESlot::Slot1,EPartyMembersID::None);
	partyGroup.Add(ESlot::Slot2,EPartyMembersID::None);
	partyGroup.Add(ESlot::Slot3,EPartyMembersID::None);
	partyGroup.Add(ESlot::Slot4,EPartyMembersID::None);

	partyGroupCombatEntitys.Add(ESlot::Slot1,nullptr);
	partyGroupCombatEntitys.Add(ESlot::Slot2,nullptr);
	partyGroupCombatEntitys.Add(ESlot::Slot3,nullptr);
	partyGroupCombatEntitys.Add(ESlot::Slot4,nullptr);
	
	Super::Initialize(aPartyManagerSubsystem, aPartyInfo);
}

void UPartyGroup_Slot::ProcessPartyInfo(FPartyInfo aPartyInfo)
{
	if(aPartyInfo.activePartyMembers.Num() == 0)
	{
		return;
	}
	
	CreateParty(aPartyInfo);
}

void UPartyGroup_Slot::CreateParty(FPartyInfo aPartyInfo)
{
	partyGroup = aPartyInfo.activePartyMembers;
	for (auto Element : aPartyInfo.activePartyMembers)
	{
		partyGroupCombatEntitys[Element.Key] = partyManagerSubsystem->GetAndCreatePlayerEntity(Element.Value);	
	}
}

bool UPartyGroup_Slot::AddPlayerToActiveParty(EPartyMembersID aPlayer)
{
	ESlot MostAvaliableSlot = GetMostAvaliableSlot();

	if(MostAvaliableSlot == ESlot::Full)
	{
		return false;
	}

	for (auto Element : partyGroup)
	{
		if(Element.Value == aPlayer)
		{
			return false;
		}
	}

	partyGroup[MostAvaliableSlot] = aPlayer;
	partyGroupCombatEntitys[MostAvaliableSlot] = partyManagerSubsystem->GetAndCreatePlayerEntity(aPlayer);

	return true;
}

void UPartyGroup_Slot::SwapPartyMemberSlots(ESlot aSlot1, ESlot aSlot2)
{
	EPartyMembersID slot1Player = partyGroup[aSlot1];
	UPlayerCombatEntity* slot1CombatEntity = partyGroupCombatEntitys[aSlot1];

	partyGroup[aSlot1] = partyGroup[aSlot2];
	partyGroupCombatEntitys[aSlot1] = partyGroupCombatEntitys[aSlot2];
	
	partyGroup[aSlot2] = slot1Player;
	partyGroupCombatEntitys[aSlot2] = slot1CombatEntity;
}

void UPartyGroup_Slot::RemovePartyMember(EPartyMembersID aPlayer)
{
	ESlot slot = GetSpecificPartyMemberSlot(aPlayer);

	if(slot == ESlot::Full)
	{
		return;
	}
	
	partyGroup[slot] = EPartyMembersID::None;
	partyGroupCombatEntitys[slot] = nullptr;
}

void UPartyGroup_Slot::CreateTestParty(TArray<FDefaultTestFightData> aDefaultTestPlayerFightData)
{
	for (int i = 0 ; i < aDefaultTestPlayerFightData[0].PlayerFightData.Num();i++)
	{
		FDefaultTestPlayerFightData PlayerFightData = aDefaultTestPlayerFightData[0].PlayerFightData[i];
		AddPlayerToActiveParty(PlayerFightData.characterIdentifier);

		ESlot mostAvaliableSlot = GetMostAvaliableSlot();
		
		partyGroupCombatEntitys[mostAvaliableSlot]->classHandler->UnlockClass(PlayerFightData.CompleteClassHandlerData.mainClassData.classIdentifer);
		partyGroupCombatEntitys[mostAvaliableSlot]->classHandler->UnlockClass(PlayerFightData.CompleteClassHandlerData.subClassData.classIdentifer);

		if(PlayerFightData.CompleteClassHandlerData.mainClassData.classIdentifer != EClassID::None)
		{
			partyGroupCombatEntitys[mostAvaliableSlot]->classHandler->SetClass(PlayerFightData.CompleteClassHandlerData.mainClassData.classIdentifer,EClassSlot::Main);	
		}

		if(PlayerFightData.CompleteClassHandlerData.subClassData.classIdentifer != EClassID::None)
		{
			partyGroupCombatEntitys[mostAvaliableSlot]->classHandler->SetClass(PlayerFightData.CompleteClassHandlerData.subClassData.classIdentifer,EClassSlot::Sub);
		}
		
		partyGroupCombatEntitys[mostAvaliableSlot]->SetEquipmentState(PlayerFightData.DefaultSpawnEquipmentHandlerData);

		partyGroupCombatEntitys[mostAvaliableSlot]->combatEntityHub->passiveHandler->PassiveSlotHandler->SetPassiveSlotState(PlayerFightData.PassiveSlotHandlerData);
		switch (PlayerFightData.TestCharacterState)
		{
		case ETestCharacterState::None:
			break;
		case ETestCharacterState::UnlockEverything:
			partyGroupCombatEntitys[mostAvaliableSlot]->classHandler->UnlockAllSkills();
			partyGroupCombatEntitys[mostAvaliableSlot]->classHandler->UnlockAllMainClassPassives();
			break;
		}
	}
}

UPlayerCombatEntity* UPartyGroup_Slot::GetSpecificPlayerEntity(EPartyMembersID aPartyMember)
{
	ESlot slot = GetSpecificPartyMemberSlot(aPartyMember);

	if(slot == ESlot::Full)
	{
		return nullptr;
	}
	
	return partyGroupCombatEntitys[slot];
}

TArray<UPlayerCombatEntity*> UPartyGroup_Slot::ReturnActiveParty()
{
	TArray<UPlayerCombatEntity*> PlayerCombatEntities;

	for (auto Element : partyGroupCombatEntitys)
	{
		PlayerCombatEntities.Add(Element.Value);
	}
	
	return PlayerCombatEntities;
}

ESlot UPartyGroup_Slot::GetSpecificPartyMemberSlot(EPartyMembersID aPlayer)
{
	for (auto Element : partyGroup)
	{
		if(Element.Value == aPlayer)
		{
			return Element.Key;
		}
	}

	return ESlot::Full;
}

ESlot UPartyGroup_Slot::GetMostAvaliableSlot()
{
	for (auto Element : partyGroup)
	{
		if(Element.Value == EPartyMembersID::None)
		{
			return Element.Key;
		}
	}

	return ESlot::Full;
}

void UPartyGroup_Slot::Reset()
{
	partyGroupCombatEntitys.Empty();
	partyGroup.Empty();
}

FPartyInfo UPartyGroup_Slot::GetPartyInfo()
{
	PartyInfo.activePartyMembers = partyGroup;
	return  PartyInfo;
}
