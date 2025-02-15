// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillData.h"
#include "SkillData.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KeyItemFactorySubsystem.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UKeyItemFactorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()


private:
	TMap<EKeyItemsID,FKeyItemData> allKeyItems;
	
public:
	void InitializeDatabase(UDataTable*  aSkillDataTable);

	FKeyItemData GetKeyItemData(EKeyItemsID aKeyItemsID);

	TMap<EKeyItemsID,FKeyItemData> GetAllKeyItems(){return allKeyItems;};
};
