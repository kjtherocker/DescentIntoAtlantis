// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/ComboBox.h"
#include "Components/ComboBoxString.h"
#include "MapEventEditorView.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UMapEventEditorView : public UUserWidget
{
	GENERATED_BODY()

	 void SetupComboBox(UComboBoxString* aCombobox);

	const FString TUTORIAL_ENUM = TEXT("ETutorialTriggers");
	
public:

	void InitializeEvent();

	void SaveEvent();

	void CreateEvent();

	void VerifyGroup();

	void SetCombobox();
	
	TArray<FName> GetAllEnumNames(UEnum* EnumType);

	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_CreateEventButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_SaveEventButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_VerifyGroupButton;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_TutorialOnStart;
		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_TutorialOnEnd;
		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_AllyGained;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_DialogueOnStart;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_DialogueOnEnd;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_ViewOnENd;

};
