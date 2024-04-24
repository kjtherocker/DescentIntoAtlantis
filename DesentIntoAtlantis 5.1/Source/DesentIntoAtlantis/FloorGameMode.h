// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AtlantisGameModeBase.h"
#include "EnemyFactorySubSystem.h"
#include "PartyManagerSubsystem.h"
#include "SkillFactorySubsystem.h"
#include "Views.h"
#include "EDataTableTypes.h"
#include "FloorFactory.h"
#include "FloorManager.h"
#include "GameSettings.h"
#include "GameFramework/GameModeBase.h"
#include "FloorGameMode.generated.h"

class UGameManager;
class ASoundManager;
class UEventManagerSubSystem;
class UTutorialManagerSubsystem;
class AInGameHUD;
class ACombatGameModeBase;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API AFloorGameMode : public AAtlantisGameModeBase
{
	GENERATED_BODY()
	AFloorGameMode();

	
public:
	
	UFUNCTION()
	virtual void InitializeLevel() override;

};
