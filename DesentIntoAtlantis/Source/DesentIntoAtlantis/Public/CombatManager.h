// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCombatEntity.h"
#include "PlayerCombatEntity.h"
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
	void AddEnemyToCombat(FEnemyEntityData* AEnemyEntityData);
	
	FPlayerCombatEntity* ReturnCurrentActivePartyMember();
	
	TArray<FEnemyCombatEntity*> ReturnEnemysInCombat();
	
	FPlayerCombatEntity* currentActivePartyMember;

	TArray<FEnemyCombatEntity*> enemyCombatEntities;

	TArray<FPlayerCombatEntity*> partyMembersInCombat;
	TArray<FPlayerCombatEntity*> partyMembersDead;
	ADesentIntoAtlantisGameModeBase* gameModeBase;
	
};
