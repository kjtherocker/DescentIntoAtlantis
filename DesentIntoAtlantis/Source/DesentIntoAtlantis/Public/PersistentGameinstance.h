// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PersistentGameinstance.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPersistentGameinstance : public UGameInstance
{
	GENERATED_BODY()

	UPersistentGameinstance();
	virtual void Init() override;
	
};
