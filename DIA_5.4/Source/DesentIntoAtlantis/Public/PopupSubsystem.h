// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameHUD.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PopupSubsystem.generated.h"

class UPartyManagerSubsystem;
struct FEquipmentPassiveData;
struct FItemData;
class AAtlantisGameModeBase;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPopupSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()


	UPROPERTY()
	AInGameHUD* InGameHUD;
	UPROPERTY()
	AAtlantisGameModeBase* GameModeBase;

	UPROPERTY()
	UPartyManagerSubsystem* PartyManagerSubsystem;
	
public:
	void SetGameMode(AAtlantisGameModeBase* aGameMode);
	void SetPartySubsystem(UPartyManagerSubsystem* aPartyManagerSubsystem);
	UFUNCTION()
	void CreateItemPopup(FItemData aItemData);
	void CreateEquipmentPopup(FEquipmentPassiveData aEquipmentData);
};
