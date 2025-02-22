// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidgetMovingButtons.h"
#include "PlayerCombatEntity.h"
#include "MainMenuPlayerStatusView.generated.h"

class UStatusMainMenuElement;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UMainMenuPlayerStatusView : public UBaseUserWidgetMovingButtons
{
	GENERATED_BODY()


	TMap<ESlot,UStatusMainMenuElement*> statusMenuElements;

	TArray<UPlayerCombatEntity*> PlayerCombatEntities;
	
public:

	void InitializeStatusView(TMap<ESlot,UPlayerCombatEntity*> aPlayerCombatEntitys,UPersistentGameinstance* aPersistentGameinstance);
	
	void ActivateInput();

	void SetPlayerStatus(TMap<ESlot,UPlayerCombatEntity*> aPlayerCombatEntitys);

	void ReturnToPreviousScreen() override;

	UFUNCTION()
	void ActivateEquip();
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatusMainMenuElement* BW_Slot1;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatusMainMenuElement* BW_Slot2;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatusMainMenuElement* BW_Slot3;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UStatusMainMenuElement* BW_Slot4;
};
