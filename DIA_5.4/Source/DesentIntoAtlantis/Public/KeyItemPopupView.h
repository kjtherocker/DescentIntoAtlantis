// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base_PopupView.h"
#include "SkillData.h"
#include "KeyItemPopupView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UKeyItemPopupView : public UBase_PopupView
{
	GENERATED_BODY()


public:

	void SetKeyItemPopup(FKeyItemData aKeyItemData);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_ItemName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_ItemDescription;

};
