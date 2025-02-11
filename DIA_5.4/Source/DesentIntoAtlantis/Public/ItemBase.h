// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerCombatEntity.h"
#include "SkillBase.h"
#include "ItemBase.generated.h"


UENUM()
enum class EItemID : uint8
{
	None,
	ItemNotFound,
	FlatHealPotion,
	PercentageHealPotion,
	FlatManaPotion,
	PercentageManaPotion,
	CancelNegativeCombatTokens,
	InvertCombatTokens,
};


USTRUCT()
struct DESENTINTOATLANTIS_API FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EItemID itemID;
	
	UPROPERTY(EditAnywhere)
	TMap<int,FSkillsData> itemTierSkillData;

	UPROPERTY()
	int baseItemTier = 0;
	
};


/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UItemBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	USkillBase* currentSkill;

	UPROPERTY()
	FItemData itemData;
	
	void InitializeItem(FItemData aItemData,USkillBase* aCurrentSkill);
	
	void SetItemTier(UPlayerCombatEntity* aPlayerCombatEntity);

	void IncreaseBaseItemTier();

	int GetItemTier(){return  GetItemData().baseItemTier;}
	
	FItemData GetItemData(){ return itemData;}
	
	USkillBase* GetItemBasedOnTier();
	
};
