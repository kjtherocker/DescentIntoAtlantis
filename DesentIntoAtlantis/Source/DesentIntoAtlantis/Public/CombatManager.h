// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombatManager.generated.h"

struct FCombatEntity;
class ADesentIntoAtlantisGameModeBase;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatManager : public UObject
{
	GENERATED_BODY()
public:

	void Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase);
	void StartCombat();
	void EndCombat();

	FCombatEntity* ReturnCurrentActivePartyMember();
	
	FCombatEntity* currentActivePartyMember;
	

	TArray<FCombatEntity*> partyMembersInCombat;
	TArray<FCombatEntity*> partyMembersDead;
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	
};
