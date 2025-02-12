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
	Attack     = 0,
	MainSkill  = 1,
	SubSkill   = 2,
	Item       = 3,
	Escape     = 4,
	Pass       = 5
};


UCLASS()
class DESENTINTOATLANTIS_API UCommandBoardView : public UBaseUserWidget
{
	GENERATED_BODY()
	virtual void UiInitialize(AAtlantisGameModeBase* aGameModeBase) override;
public:
	virtual void SetCommandBoard(ACombatGameModeBase* aCombatGameModeBase);
	virtual void PushCombatLog();

private:
	UPROPERTY()
	ACombatGameModeBase* combatManager;
	TMap<ECommandBoardStates,FViewSelection > commandboardSelections;
	FViewSelection commandBoardSelectionAttack;
	FViewSelection commandBoardSelectionMainSkill;
	FViewSelection commandBoardSelectionSubSkill;
	FViewSelection commandBoardSelectionItem;
	FViewSelection commandBoardSelectionEscape;
	FViewSelection commandBoardSelectionPass;

	USkillFactorySubsystem* SkillFactorySubsystem;
	UPROPERTY()
	UDefaultSkillAttack* defaultAttack;
	protected:

	TArray<FViewSelection> commandBoardSelections;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Attack;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	 UBorder* BW_MainSkill;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_SubSkill;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UBorder* BW_Item;
	
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
	void MainClassSkill();
	UFUNCTION()
	void SubClassSkill();
	UFUNCTION()
	void Item();
	UFUNCTION()
	void Escape();
	UFUNCTION()
	void Pass();
};
