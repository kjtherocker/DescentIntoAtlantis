// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MapButtonElement.h"
#include "MapEventEditorView.h"
#include "Blueprint/UserWidget.h"
#include "Components/GridPanel.h"
#include "Components/ComboBoxString.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
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

	const int MAP_NODE_POSITION_OFFSET = 50;
	
public:

	const FString TILE_SETS_ENUM_NAME = TEXT("ETileSets");
	const FString TILE_VARIANT_ENUM_NAME = TEXT("ETileVariants");
	
	void InitializeEditor();

	void SetUpMapNodePanel(UMapButtonElement* aMapNodeElement);
	TArray<FName> GetAllEnumNames(UEnum* EnumType);
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void ChangeNodeDirection(UMapButtonElement* aMapNodeElement);

	void InitializeComboBox(UComboBoxString* aCombobox,FString aEnumName);


	UFUNCTION()
	void SetTileSet( FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void SetTileVariant(FString SelectedItem, ESelectInfo::Type SelectionType);
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox*  BW_MapNodePanel;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MapButtonElement;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMapEventEditorView* BW_MapEventEditorView;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_MapIndex;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_TileSet;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_Variant;
	
};

