// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CompleteElementalHandlerData.generated.h"

enum class EElementalReaction : uint8;
enum class EElementalType : uint8;
/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteElementalInfo: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	EElementalType elementalType;
	UPROPERTY(EditAnywhere)
	EElementalReaction elementalReaction;
	
};


enum class EElementalReaction : uint8;
enum class EElementalType : uint8;

USTRUCT()
struct DESENTINTOATLANTIS_API FCompleteElementalHandlerData: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TMap<EElementalType,FCompleteElementalInfo> elementalInfo;
};




