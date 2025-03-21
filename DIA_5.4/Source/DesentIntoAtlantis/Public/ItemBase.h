// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillData.h"

#include "ItemBase.generated.h"

class USkillBase;
class UPlayerCombatEntity;


/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UItemBase : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FItemData itemData;

public:
	UPROPERTY()
	USkillBase* currentSkill;
	
	
	void InitializeItem(FItemData aItemData,USkillBase* aCurrentSkill);
	
	void SetItemTier(UPlayerCombatEntity* aPlayerCombatEntity);

	void IncreaseBaseItemTier();

	int GetItemTier(){return  GetItemData().baseItemTier;}

	void SetItemData(FItemData aItemData){ itemData = aItemData;}
	FItemData GetItemData(){ return itemData;}
	
	USkillBase* GetItemBasedOnTier();
	
};
