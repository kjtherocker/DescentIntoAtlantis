// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PartyManager.h"
#include "SkillFactory.h"
#include "GameFramework/GameModeBase.h"
#include "DesentIntoAtlantisGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API ADesentIntoAtlantisGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	ADesentIntoAtlantisGameModeBase();
public:
	
	USkillFactory* skillFactory;
	UPartyManager* partyManager;
};
