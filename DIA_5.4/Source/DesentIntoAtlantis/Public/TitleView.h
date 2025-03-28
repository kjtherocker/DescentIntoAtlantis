// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "GameManager.h"
#include "TitleMenuGameMode.h"
#include "TitleView.generated.h"

class UBorder;
/**
 * 
 */
UENUM()
enum class ETitleStates
{
	Start    = 0,
	Load     = 1,
	Settings = 2,
	Exit     = 3,
};


UCLASS()
class DESENTINTOATLANTIS_API UTitleView : public UBaseUserWidget
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<ETitleStates,FViewSelection > ViewSelection;
	
	FViewSelection titleBoardSelectionStartGame;
	FViewSelection titleBoardSelectionQuitGame;


	TArray<FViewSelection> titleMenuSelection;
private:
	UFUNCTION()
	virtual void StartGame();

	UFUNCTION()
	virtual void LoadGame();

	UFUNCTION()
	virtual void OpenSettings();

	
	UFUNCTION()
	virtual void ExitGame();
	
	virtual void ActivateTitleMenuSelection();
	UPROPERTY()
	TArray<UBorder*> titleSelections;

	FStartGameDelegate startGameDelegate;

	void CreateAndBindDelegateOption(ETitleStates aTitleState,typename TMemFunPtrType<false, UTitleView, void()>::Type InFunc, const FName& FuncName );

public:
	virtual void SetStartGameDelegate(FStartGameDelegate aStartGameDelegate);
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
	virtual void MoveUp() override;
	virtual void MoveDown() override;
	virtual void SetCursorPositionInfo() override;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_StartGame;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_LoadGame;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Setting;
	
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Exit;
};
