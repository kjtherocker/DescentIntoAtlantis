// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Components/VerticalBox.h"
#include "Base_Header_Vertical_Box.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UBase_Header_Vertical_Box : public UBaseUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UVerticalBox* BW_VerticalBox;
};
