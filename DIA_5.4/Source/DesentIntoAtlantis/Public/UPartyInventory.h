// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentPassive.h"
#include "KeyItemFactorySubsystem.h"
#include "SkillData.h"
#include "UObject/NoExportTypes.h"
#include "UPartyInventory.generated.h"

class UInventory_KeyItems;
class UInventory_Items;
class UInventory_Equipment;
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
	
	UPROPERTY(EditAnywhere)
	TMap<EKeyItemsID,FKeyItemData> keyItemData;
};


UCLASS()
class DESENTINTOATLANTIS_API UPartyInventory : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FPartyInventoryCompleteData partyInventoryCompleteData;
	
	UPROPERTY()
	UInventory_Equipment* PartyEquipment;

	UPROPERTY()
	UInventory_Items* PartyItems;
	
	UPROPERTY()
	UInventory_KeyItems* KeyItems;
	
	UPROPERTY()
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;
	
public:
	
	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,
	                              UPassiveFactorySubsystem* aPassiveFactorySubsystem, USkillFactorySubsystem* aSkillFactorySubsystem,
	                              UKeyItemFactorySubsystem* aKeyItemFactorySubSystem);

	void SavePartyInventory();

	FPartyInventoryCompleteData GetPartyInventoryCompleteData();
	
	UInventory_Equipment* GetInventoryEquipment(){ return PartyEquipment;}
	UInventory_Items*     GetInventoryItems(){return PartyItems;}
	UInventory_KeyItems*  GetInventoryKeyItems(){return KeyItems;}
};
