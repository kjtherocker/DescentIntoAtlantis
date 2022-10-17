// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnemyFactory.h"
#include "PartyManager.h"
#include "SkillFactory.h"
#include "Views.h"
#include "EDataTableTypes.h"
#include "GameFramework/GameModeBase.h"
#include "DesentIntoAtlantisGameModeBase.generated.h"

class AInGameHUD;
class UCombatManager;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API ADesentIntoAtlantisGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	ADesentIntoAtlantisGameModeBase();
public:
	virtual void PostInitializeComponents() override;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableClasses,UDataTable*> dataTablesClasses;

	UPROPERTY()
	USkillFactory*  skillFactory;
	UPROPERTY()
	UEnemyFactory*  enemyFactory;
	UPROPERTY()
	UPartyManager*  partyManager;
	UPROPERTY()
	UCombatManager* combatManager;
	UPROPERTY()
	AInGameHUD*     InGameHUD;
};
