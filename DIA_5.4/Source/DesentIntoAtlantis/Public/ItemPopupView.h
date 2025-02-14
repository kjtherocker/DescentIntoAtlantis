// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Base_PopupView.h"
#include "SkillData.h"
#include "ItemPopupView.generated.h"

class USkillBarElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UItemPopupView : public UBase_PopupView
{
	GENERATED_BODY()

public:
	
	virtual void SetItemPopup(FItemData ItemData);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_PreviousDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_NewDescription;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	USkillBarElement* BW_PreviousItem;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	USkillBarElement* BW_NewItem;
};
