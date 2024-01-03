// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Gimmick_Base.generated.h"

class AFloorPawn;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UGimmick_Base : public UObject
{
	GENERATED_BODY()
	
public:

	void ActivateGimmick(AFloorPawn* aFloorPawn);
	
};
