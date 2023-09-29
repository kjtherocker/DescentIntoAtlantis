// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapButtonElement.h"
#include "MapEventEditorView.h"
#include "Blueprint/UserWidget.h"
#include "Components/GridPanel.h"
#include "Components/HorizontalBox.h"
#include "MapNodeEditorView.generated.h"

/**
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UMapNodeEditorView : public UUserWidget
{
	GENERATED_BODY()

	TArray<UMapButtonElement*> MapButtons;

	UPROPERTY()
	UMapButtonElement* SelectedMapButton;
	
public:
	
	void InitializeEditor();

	void SetUpMapNodePanel(UMapButtonElement* aMapNodeElement);
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void ChangeNodeDirection(UMapButtonElement* aMapNodeElement);

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox*  BW_MapNodePanel;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MapButtonElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMapEventEditorView* BW_MapEditorView;
	
};

