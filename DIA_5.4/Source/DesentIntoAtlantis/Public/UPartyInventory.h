// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentPassive.h"
#include "SkillData.h"
#include "UObject/NoExportTypes.h"
#include "UPartyInventory.generated.h"

class UInventoryItems;
class UInventoryEquipment;
class UPlayerCombatEntity;
class UItemBase;

enum class EItemID : uint8;
enum class EEquipmentID : uint8;
class UEquipmentPassive;
struct FEquipmentPassiveData;
/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPartyInventoryCompleteData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	TMap<EEquipmentID,FEquipmentPassiveInventoryInfo> equipmentInventoryInfo;

	UPROPERTY(EditAnywhere)
	TMap<EItemID,FItemData> ItemInventoryInfo;
	
};


UCLASS()
class DESENTINTOATLANTIS_API UPartyInventory : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;
	
	UPROPERTY()
	UInventoryEquipment* PartyEquipment;

	UPROPERTY()
	UInventoryItems* PartyItems;

	UPROPERTY()
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;
	
public:
	
	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,USkillFactorySubsystem* aSkillFactorySubsystem );

	void SavePartyInventory();

	FPartyInventoryCompleteData GetPartyInventoryCompleteData();
	
	UInventoryEquipment* GetInventoryEquipment(){ return PartyEquipment;}
	UInventoryItems*     GetInventoryItems(){return PartyItems;}
};
