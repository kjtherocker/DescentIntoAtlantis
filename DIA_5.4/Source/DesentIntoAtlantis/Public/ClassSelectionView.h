// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "ClassDetailedView.h"
#include "ClassSelectionElement.h"
#include "EDataTableTypes.h"
#include "PartyInventoryEquipmentView.h"
#include "PartyManagerSubsystem.h"
#include "ClassSelectionView.generated.h"

class UPlayerCombatEntity;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UClassSelectionView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()

private:
	UPlayerCombatEntity* playerCombatEntity;
	UPartyManagerSubsystem* partyManagerSubsystem;
	EClassSlot classSlot;

	UPROPERTY()
	UClassHandler* classHandler;
	UPROPERTY()
	TArray<UClassSelectionElement*> ClassSelectionElements;
public:

	FOnCharacterChange characterChange;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UClassDetailedView* BW_ClassDetailedView;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UVerticalBox* BW_VerticalEquipBox;

	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	
	void ActivateClassSelectionView(UPlayerCombatEntity* aPlayerCombatEntity, UPartyManagerSubsystem* aPartyManagerSubsystem, EClassSlot aClassSlot);
	UFUNCTION()
	void ActivateInput();
	void SetClassDetailedView(UClassSelectionElement* aClassSelectionElement);
	void CreateClassHighlightElement(FCompleteClassData aClassData);

	virtual void MoveRight();
	virtual void MoveUp() override;
	virtual void MoveDown() override;

	virtual void SetDefaultMenuState() override;
	UFUNCTION()
	void ClassSelected();
};
