// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/ComboBox.h"
#include "Components/ComboBoxString.h"
#include "Components/EditableTextBox.h"
#include "MapEventEditorView.generated.h"

class UMapButtonElement;
struct FFloorEventData;
/**
 * 
 */
UCLASS()

class DESENTINTOATLANTIS_API UMapEventEditorView : public UUserWidget
{
	GENERATED_BODY()
	 void InitializeComboBox(UComboBoxString* aCombobox,FString aEnumName);

	const FString TUTORIAL_ENUM = TEXT("ETutorialTriggers");
	const FString DIALOGUE_ENUM = TEXT("EDialogueTriggers");
	const FString ALLY_ENUM     = TEXT("EDataTableClasses");
	const FString VIEW_ENUM     = TEXT("EViews");

	UMapButtonElement* currentMapButtonElement;
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFloorEventDelegate, int, aFloorEventDataTableIndex, FFloorEventData&, aNewEventData);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloorEventDeletionDelegate, int, aFloorEventDataTableIndex);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloorEventCreationDelegate, FFloorEventData&, aFloorEventData);
	
	void SetComboxBoxIndex(UMapButtonElement* aMapButtonElement);
	void InitializeEvent();
	
	UFUNCTION(BlueprintCallable)
	void SaveEvent();

	UFUNCTION(BlueprintCallable)
	void DeleteEvent();
	
	void VerifyGroup();
	void SetCombobox();
	
	TArray<FName> GetAllEnumNames(UEnum* EnumType);

	UPROPERTY(BlueprintAssignable)
	FFloorEventDelegate onFloorEventSave;
	
	UPROPERTY(BlueprintAssignable)
	FFloorEventDeletionDelegate onFloorEventDeletion;

	UPROPERTY(BlueprintAssignable)
	FFloorEventCreationDelegate onFloorEventCreation;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_DeleteEventButton;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_SaveEventButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_VerifyGroupButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UEditableTextBox* BW_EnemyGroupTextBox;
	
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
	UComboBoxString* BW_ViewOnEnd;

};
