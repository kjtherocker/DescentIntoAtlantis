// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHighlightElement.h"
#include "CombatClass.h"
#include "ClassSelectionElement.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UClassSelectionElement : public UBaseHighlightElement
{
	GENERATED_BODY()

private:
	EClassID classID;
	
public:

	void SetClassSelectionElement(FCompleteClassData aCompleteClassData);

	EClassID GetClassID(){return classID;}
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_ArchtypeText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_SubArchtypeText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_ClassIcon;

};
