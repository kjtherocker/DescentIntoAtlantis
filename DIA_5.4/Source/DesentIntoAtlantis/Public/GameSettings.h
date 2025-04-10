// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameSettings.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UGameSettings : public UObject
{
	GENERATED_BODY()

public:
	inline bool static AUDIO_OFF           = true;
	inline bool static DEBUG_MODE          = true;
	inline bool static DISABLE_CUTSCENES   = false;
	inline bool static DISABLE_TUTORIAL    = true;
	inline bool static isPrologueDisabled  = true;


	inline float static SKILL_INTERRUPT_TIMER        = 2.5f;
	inline float static PASSIVE_INTERRUPT_TIMER      = 0.6f;
	inline float static ENTITY_RESURRECTION_TIMER    = 0.2f;
	inline float static ENTITY_DIED_INTERRUPT_TIMER  = 0.2f;
	
};


