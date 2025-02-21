// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PartyGroup.h"
#include "PartyGroup_Slot.generated.h"

struct FDefaultTestFightData;
struct FDefaultTestPlayerFightData;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyGroup_Slot : public UPartyGroup
{
	GENERATED_BODY()

	
	UPROPERTY()
	TMap<ESlot,EPartyMembersID> partyGroup;

	UPROPERTY()
	TMap<ESlot,UPlayerCombatEntity*> partyGroupCombatEntitys;

public:
	virtual void Initialize(UPartyManagerSubsystem* aPartyManagerSubsystem, FPartyInfo aPartyInfo);
	virtual void ProcessPartyInfo( FPartyInfo aPartyInfo);

	void CreateParty(FPartyInfo aPartyInfo);
	bool AddPlayerToActiveParty(EPartyMembersID aPlayer);
	void SwapPartyMemberSlots(ESlot aSlot1, ESlot aSlot2);
	virtual void RemovePartyMember(EPartyMembersID aPlayer);

	virtual void CreateTestParty(TArray<FDefaultTestFightData> aDefaultTestPlayerFightData);
	virtual UPlayerCombatEntity* GetSpecificPlayerEntity(EPartyMembersID aPartyMember);

	TArray<UPlayerCombatEntity*> ReturnActiveParty();

	ESlot GetSpecificPartyMemberSlot(EPartyMembersID aPlayer);
	
	ESlot GetMostAvaliableSlot();
	
	virtual void Reset();
	virtual FPartyInfo GetPartyInfo() override;
};
