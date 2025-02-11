// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentPassive.h"
#include "UObject/NoExportTypes.h"
#include "UPartyInventory.generated.h"

class UItemBase;
struct FItemData;
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
	USkillFactorySubsystem* SkillFactorySubsystem;
	
	UPROPERTY()
	UPassiveFactorySubsystem* passiveFactorySubsystem;
	
public:
	UPROPERTY()
	TArray<FEquipmentPassiveData> equipmentPassiveSkillData;

	TMap<EItemID,UItemBase*> AllUnlockedItems;

	void SetAllItemsTier(UPlayerCombatEntity* aPlayerCombatEntity);
	
	int GetBaseItemTier(EItemID aItemId);

	void AddItem(EItemID aItemId);

	void UnlockBrandNewItem(EItemID aItemId);
	
	void InitializePartyInventory(FPartyInventoryCompleteData aPartyInventoryCompleteData,UPassiveFactorySubsystem* aPassiveFactorySubsystem,USkillFactorySubsystem* aSkillFactorySubsystem );

	void AddMoreStacksOfEquipment(FEquipmentRequestInfo aEquipmentRequest);

	void ReturnEquipment(EPartyMembers aOldOwner,EEquipmentID aEquipmentID);
	UEquipmentPassive* TakeOutEquipment(EPartyMembers aNewOwner,EEquipmentID aEquipmentID);
	
	
	FPartyInventoryCompleteData GetPartyInventoryCompleteData(){return partyInventoryCompleteData;}

	virtual bool isEquipmentFreeToTake(EEquipmentID aEquipmentID);

	virtual  FEquipmentPassiveInventoryInfo  GetEquipment(EEquipmentID aEquipmentID);

	virtual TMap<EEquipmentID,FEquipmentPassiveInventoryInfo> GetAllEquipment(){ return GetPartyInventoryCompleteData().equipmentInventoryInfo;}

	virtual FPassiveSkillData GetEquipmentPassiveSkillData(EEquipmentID aEquipmentID);
	void AddEquipmentToInventory(FEquipmentRequestInfo aEquipmentRequest);


};
