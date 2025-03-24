// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "UObject/NoExportTypes.h"
#include "CombatTokenCurrentStatInfo.generated.h"




USTRUCT()
struct DESENTINTOATLANTIS_API FCombatTokenCurrentStatInfo :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	int32 currentTokenStack;
	UPROPERTY(EditAnywhere)
	int32 turnsRemaining;

	UPROPERTY(EditAnywhere)
	UCombatEntity* tokenCreator;
};

