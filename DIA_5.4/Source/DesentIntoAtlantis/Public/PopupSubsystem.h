// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InGameHUD.h"
#include "SkillData.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PopupSubsystem.generated.h"

class UPartyManagerSubsystem;
struct FEquipmentPassiveData;
struct FItemData;
class AAtlantisGameModeBase;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPopUpClosed);
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

	UPROPERTY()
	FOnPopUpClosed OnPopUpClosed;
	
	void SetGameMode(AAtlantisGameModeBase* aGameMode);
	void SetPartySubsystem(UPartyManagerSubsystem* aPartyManagerSubsystem);
	UFUNCTION()
	void CreateKeyItemPopup(FKeyItemData aKeyItemData);
	UFUNCTION()
	void CreateItemPopup(FItemData aItemData);
	void CreateEquipmentPopup(FEquipmentPassiveData aEquipmentData);

	UFUNCTION()
	void OnPopupEnd();
};
