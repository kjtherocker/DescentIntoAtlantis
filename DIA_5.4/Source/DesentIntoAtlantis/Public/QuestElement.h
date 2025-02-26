// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "QuestData.h"
#include "QuestElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UQuestElement : public UBaseHighlightElement
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FQuestData QuestData;
	
	void Initialze(FQuestData aQuestData);
	
};
