// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombatTokenStateInfo.generated.h"




USTRUCT()
struct DESENTINTOATLANTIS_API FCombatTokenStateInfo :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	int32 currentTokenStack;
	UPROPERTY(EditAnywhere)
	int32 turnsRemaining;
};

