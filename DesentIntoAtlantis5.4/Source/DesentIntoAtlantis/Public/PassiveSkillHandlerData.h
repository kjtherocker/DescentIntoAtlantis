// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PassiveSkillData.h"
#include "PassiveSkillHandlerData.generated.h"

/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FPassiveHandlerData:public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	TArray<FPassiveSkillData> PassiveSkillsDatas;

};