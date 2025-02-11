// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SkillBase.h"
#include "SkillFactorySubsystem.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API USkillFactorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	
	
		
	UPROPERTY()
	TMap<ESkillIDS,USkillBase*> allSkillsMap;

			
	UPROPERTY()
	TMap<EItemID,UItemBase*> allItemsMap;

	UPROPERTY()
	TMap<EStatusAilments,UAilment*> allAliments;
public:
	void InitializeDatabase(UDataTable*  aSkillDataTable,UDataTable*  aItemSkillDataTable);
	USkillBase* GetSkill(ESkillIDS aSkillID);
	UItemBase*  GetItem(EItemID aItemID);
	UAilment*   GetAilment(EStatusAilments aAilment);
	USkillBase* GetSkillClass(FSkillsData skillData);
	
};
