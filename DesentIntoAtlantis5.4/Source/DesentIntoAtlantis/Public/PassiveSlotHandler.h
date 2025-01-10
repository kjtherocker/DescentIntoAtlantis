// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkills.h"
#include "UObject/NoExportTypes.h"
#include "PassiveSlotHandler.generated.h"

/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveSlotHandlerData:public  FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY( EditAnywhere )
	TArray<EPassiveSkillID> equipmentPassiveData;

};

UCLASS()
class DESENTINTOATLANTIS_API UPassiveSlotHandler : public UObject
{
	GENERATED_BODY()
private:
	UPROPERTY()
	TArray<UPassiveSkills*> equipedPassives;
	UPROPERTY()
	UPassiveHandler* PassiveHandler;
	UPROPERTY()
	UCombatEntity* OwnedCombatEntity;
	UPROPERTY()
	UPassiveFactorySubsystem* PassiveSkillFactorySubsystem;

public:
	FPassiveSlotHandlerData PassiveSlotHandlerData;
	const int AMOUNT_OF_PASSIVE_SLOTS = 4;
	
	void InitializePassiveSlotHandler(UPassiveHandler* aPassiveHandler,UCombatEntity* aOwnedCombatEntity,UPassiveFactorySubsystem* aPassiveSkillFactorySubsystem);
	
	void SetPassiveSlotState(FPassiveSlotHandlerData aPassiveSlotData);
	void EquipPassiveInSlot(EPassiveSkillID passiveSkillID, int aSlot = -1);
	UPassiveSkills* EquipPassiveInSlotAndReturnPrevious(EPassiveSkillID passiveSkillID, int aSlot = -1);
	void RemovePassiveInSlot(int aSlot);
	TArray<UPassiveSkills*> GetAllSlotedPassives(){ return equipedPassives;  }

	FPassiveSlotHandlerData GetPassiveSlotData(){ return PassiveSlotHandlerData;}
};
