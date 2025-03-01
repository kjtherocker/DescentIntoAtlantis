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

UENUM()
enum class EPopupType   : uint8
{
	None               = 0,
	Item               = 1,
	KeyItem            = 2,
	Equipment          = 3,

};


USTRUCT()
struct DESENTINTOATLANTIS_API FPopupRequestData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EPopupType popupType;

	UPROPERTY(EditAnywhere)
	FKeyItemData KeyItemData;
	UPROPERTY(EditAnywhere)
	FItemData ItemData;

	UPROPERTY(EditAnywhere)
	FEquipmentPassiveData EquipmentData;
};


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

	TArray<FPopupRequestData> PopupRequestDatas;
	
	UPROPERTY()
	FOnPopUpClosed OnPopUpClosed;
	
	void SetGameMode(AAtlantisGameModeBase* aGameMode);

	bool isPopupAllowedToShowUp();
	
	UFUNCTION()
	void AddPopupRequest(FPopupRequestData aPopupRequest);
	void TriggerPopup();
	
	void SetPartySubsystem(UPartyManagerSubsystem* aPartyManagerSubsystem);
	UFUNCTION()
	void CreateKeyItemPopup(FKeyItemData aKeyItemData);
	UFUNCTION()
	void CreateItemPopup(FItemData aItemData);
	void CreateEquipmentPopup(FEquipmentPassiveData aEquipmentData);


	
	UFUNCTION()
	void OnPopupEnd();
};
