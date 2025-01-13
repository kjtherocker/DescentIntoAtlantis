// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatClass.h"
#include "UObject/NoExportTypes.h"
#include "CompleteClassHandlerData.generated.h"

/**
 * 
 */

USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteClassHandlerData: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY()
	FCompleteClassData mainClassData;

	UPROPERTY()
	FCompleteClassData subClassData;
	
	UPROPERTY(EditAnywhere)
	TMap<EClassID,FCompleteClassData> unlockedPlayerClasses;
	
	UPROPERTY(EditAnywhere)
	TMap<EPassiveSkillID,FPassiveSkillClassData> unlockedPassives;

	UPROPERTY()
	int ClassPoints;
};
