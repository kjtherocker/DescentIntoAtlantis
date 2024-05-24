// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "BaseUserWidgetMovingButtons.h"
#include "OptionView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UOptionView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	virtual void CreateAndBindDelegateOption(typename TMemFunPtrType<false, UOptionView, void()>::Type InFunc, const FName& FuncName, UBorder* aMenuSelection);


	UFUNCTION()
	void Load();
	UFUNCTION()
	void Save();
	UFUNCTION()
	void Setting();
	UFUNCTION()
	void Exit();
public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Load;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Save;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Setting;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Exit;
};
