// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PlayerCombatEntity.h"
#include "Blueprint/UserWidget.h"
#include "CommandBoard.generated.h"

class UImage;
class UBorder;
struct FCombatEntity;
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
	UBorder* B_Attack;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* B_Skill;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
     UBorder* B_Domain;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* B_Item;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* B_Escape;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* B_Pass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_FullBodyPortrait;
	
	TArray<UBorder*> commandBoards;

	FLinearColor unhightlighedColor = FLinearColor(0.0,0.0,0.0,1.0);
	FLinearColor highlightedColor   = FLinearColor(1.0,1.0,1.0,1.0);

	FPlayerCombatEntity* currentActivePartyMember;
	
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
