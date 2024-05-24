// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "MainMenuView.generated.h"

class UPlayerCombatEntity;
class UStatusMainMenuElement;
class UHorizontalBox;
class UBorder;
/**
 * 
 */
UENUM()
enum class EMainMenuStates
{
	None   = 0,
	Item   = 1,
	Skills = 2,
	Class  = 3,
	Status = 4,
	Option = 5
};

UCLASS()
class DESENTINTOATLANTIS_API UMainMenuView : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	void CreateAndBindDelegateOption(typename TMemFunPtrType<false, UMainMenuView, void()>::Type InFunc, const FName& FuncName);

	void SpawnMainMenuStatusElement(UPlayerCombatEntity* aCombatEntity);
	
	virtual void MoveUp() override;
	virtual void MoveDown() override;
	void ActivateMenuSelection();
	UFUNCTION()
	void Item();
	UFUNCTION()
	void Skills();
	UFUNCTION()
	void Class();
	UFUNCTION()
	void Status();
	UFUNCTION()
	void Option();
	
	UPROPERTY()
	TArray<UStatusMainMenuElement*> statusMainMenuElements;
	
public:
	virtual void SetCursorPositionInfo() override;
	UPROPERTY()
	TArray<FViewSelection > MainMenuSelection;

	UPROPERTY()
	TArray<UBorder*> menuSelections;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Item;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Skills;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Classes;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Status;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Option;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox* BW_PartyHorizontalBox;
};
