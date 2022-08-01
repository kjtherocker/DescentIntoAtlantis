// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "CommandBoard.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCommandBoard : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize() override;
	protected:


	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UBorder* B_Attack;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UBorder* B_Skill;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
    class UBorder* B_Domain;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UBorder* B_Item;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UBorder* B_Escape;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UBorder* B_Pass;

	TArray<UBorder*> commandBoards;

	FLinearColor unhightlighedColor = FLinearColor(0.0,0.0,0.0,1.0);
	FLinearColor highlightedColor   = FLinearColor(1.0,1.0,1.0,1.0);
	
	int cursorPosition;

	void MoveUp();
	void MoveDown();
	
	const FString folderpath = "/Game/Ui/uiTextures";

	
	DECLARE_DELEGATE( FCommandBoardFunctions);
	TArray<FCommandBoardFunctions> CommandBoardFunctions;
	
	FCommandBoardFunctions commandBoardFunction;

	void ActivateCommandboardFunction();
	
	UFUNCTION()
	void Attack();
	
	void Testo();
};
