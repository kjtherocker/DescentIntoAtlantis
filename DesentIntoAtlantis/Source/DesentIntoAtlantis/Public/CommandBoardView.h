// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "PlayerCombatEntity.h"
#include "Blueprint/UserWidget.h"
#include "CommandBoardView.generated.h"

class ACombatGameModeBase;
class UImage;
class UBorder;
class UCombatEntity;
/**
 * 
 */
UENUM()
enum class ECommandBoardStates
{
	Attack = 0,
	Skill  = 1,
	Escape = 2,
	Pass   = 3
};


UCLASS()
class DESENTINTOATLANTIS_API UCommandBoardView : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
public:
	virtual void SetCommandBoard(ACombatGameModeBase* aCombatGameModeBase);

private:
	UPROPERTY()
	ACombatGameModeBase* combatManager;
	TMap<ECommandBoardStates,FViewSelection > commandboardSelections;
	FViewSelection commandBoardSelectionAttack;
	FViewSelection commandBoardSelectionSkill;
	FViewSelection commandBoardSelectionEscape;
	FViewSelection commandBoardSelectionPass;

	UPROPERTY()
	USkillAttack* defaultAttack;
	protected:

	TArray<FViewSelection> commandBoardSelections;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Attack;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* BW_Skill;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* BW_Escape;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* BW_Pass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UImage* BW_FullBodyPortrait;
	
	UPROPERTY()
	TArray<UBorder*> commandBoards;

	


	UPROPERTY()
	UPlayerCombatEntity* currentActivePartyMember;


	virtual void SetCursorPositionInfo() override;
	virtual void MoveUp() override;
	virtual void MoveDown() override;
	
	const FString folderpath = "/Game/Ui/uiTextures";

	
	DECLARE_DELEGATE( FCommandBoardFunctions);
	TArray<FCommandBoardFunctions> CommandBoardFunctions;
	
	FCommandBoardFunctions commandBoardFunction;

	void ActivateCommandboardFunction();
	
	UFUNCTION()
	void Attack();
	UFUNCTION()
	void Skill();
	UFUNCTION()
	void Escape();
	UFUNCTION()
	void Pass();
};
