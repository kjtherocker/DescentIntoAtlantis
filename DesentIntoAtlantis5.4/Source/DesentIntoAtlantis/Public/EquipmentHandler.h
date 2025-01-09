// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentPassive.h"
#include "UObject/NoExportTypes.h"
#include "EquipmentHandler.generated.h"

/**
 * 
 */


USTRUCT()
struct DESENTINTOATLANTIS_API FEquipmentHandlerData:public  FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY( EditAnywhere )
	TArray<FEquipmentPassiveData> equipmentPassiveData;

};

UCLASS()
class DESENTINTOATLANTIS_API UEquipmentHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<UEquipmentPassive*> equipedEquipment;

	UPROPERTY()
	UCombatEntity* ownedCombatEntity;
	
	UPROPERTY()
	UPassiveFactorySubsystem* PassiveFactorySubsystem;
	UPROPERTY()
	UPassiveHandler* passiveHandler;
public:
	const int AMOUNT_OF_EQUIPMENT_SLOTS = 4;
	
	 void InitializeEquipmentHandler(UPassiveHandler* aPassiveHandler,UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem);
	 void SetEquipmentState(FEquipmentHandlerData EquipmentHandlerData);
	 void EquipEquipment(EEquipmentID EquipmentID, int aSlot = -1);
	 void RemoveEquipment(int aSlot);
	 UEquipmentPassive* CreateEquipment(EEquipmentID EquipmentID);
	 bool isEquipmentInHandler(	EEquipmentID  aEquipmentID);
	 TArray<UEquipmentPassive*> GetAllEquipment() {return equipedEquipment; }
	
};
