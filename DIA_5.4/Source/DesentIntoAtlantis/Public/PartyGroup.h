// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PartyData.h"
#include "UObject/NoExportTypes.h"
#include "PartyGroup.generated.h"

class UPartyManagerSubsystem;
enum class EPartyMembersID;
class UPlayerCombatEntity;
enum class ESlot : uint8;
/**
 * 
 */


UCLASS()
class DESENTINTOATLANTIS_API UPartyGroup : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FPartyInfo PartyInfo;

	UPROPERTY()
	UPartyManagerSubsystem* partyManagerSubsystem;

public:
	
	virtual void Initialize(UPartyManagerSubsystem* aPartyManagerSubsystem, FPartyInfo aPartyInfo);

	virtual void ProcessPartyInfo( FPartyInfo aPartyInfo);

	virtual void AddPartyMember(EPartyMembersID aPlayer);
	virtual void RemovePartyMember(EPartyMembersID aPlayer);
	virtual UPlayerCombatEntity* GetSpecificPlayerEntity(EPartyMembersID aPartyMember);
	virtual FPartyInfo GetPartyInfo(){return  PartyInfo;}
	virtual void Reset();
};
