// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "GameManager.h"
#include "MainMenuGameMode.h"
#include "TitleView.generated.h"

class UBorder;
/**
 * 
 */
UENUM()
enum class ETitleStates
{
	Start = 0,
	Exit  = 1,
};


UCLASS()
class DESENTINTOATLANTIS_API UTitleView : public UBaseUserWidget
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<ETitleStates,FViewSelection > commandboardSelections;
	
	FViewSelection titleBoardSelectionStartGame;
	FViewSelection titleBoardSelectionQuitGame;


	TArray<FViewSelection> titleMenuSelection;
private:
	UFUNCTION()
	virtual void StartGame();
	UFUNCTION()
	virtual void ExitGame();
	
	virtual void ActivateTitleMenuSelection();
	UPROPERTY()
	TArray<UBorder*> titleSelections;

	FStartGameDelegate startGameDelegate;

public:
	virtual void SetStartGameDelegate(FStartGameDelegate aStartGameDelegate);
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	virtual void MoveUp() override;
	virtual void MoveDown() override;
	virtual void SetCursorPositionInfo() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_StartGame;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Exit;
};
