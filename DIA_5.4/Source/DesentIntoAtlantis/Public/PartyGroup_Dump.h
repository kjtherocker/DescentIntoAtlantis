// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PartyGroup.h"
#include "PartyGroup_Dump.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyGroup_Dump : public UPartyGroup
{
	GENERATED_BODY()


protected:
	UPROPERTY()
	TArray<EPartyMembersID> partyGroup;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> partyGroupCombatEntitys;
	
public:
	virtual void Initialize(UPartyManagerSubsystem* aPartyManagerSubsystem, FPartyInfo aPartyInfo);
	virtual void ProcessPartyInfo( FPartyInfo aPartyInfo);
	virtual void AddPartyMember(EPartyMembersID aPlayer);
	virtual void RemovePartyMember(EPartyMembersID aPlayer);
	virtual UPlayerCombatEntity* RemoveAndGetPartyMember(EPartyMembersID aPlayer);
	virtual UPlayerCombatEntity* GetSpecificPlayerEntity(EPartyMembersID aPartyMember);

	virtual FPartyInfo GetPartyInfo() override ;
};
