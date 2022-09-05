// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UObject/NoExportTypes.h"
#include "PartyManager.generated.h"

struct FPlayerCombatEntity;
struct FCombatEntity;
class USkillFactory;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyManager : public UObject
{
	GENERATED_BODY()
	UPartyManager();
	USkillFactory* skillFactory;


public:
	
	void Initialize(USkillFactory* aSkillFactory);

	TArray<FPlayerCombatEntity*> ReturnActivePartyEntityData();
	
	TArray<FPlayerCombatEntity*> playerEntityData;
	TArray<FPlayerCombatEntity*> activePartyEntityData;;

	
};
