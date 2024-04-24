// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "FloorFactory.h"
#include "MapButtonElement.h"
#include "MapNodeEditorView.h"
#include "Components/Button.h"
#include "Components/ComboBoxKey.h"
#include "Components/TextBlock.h"
#include "DesentIntoAtlantis/EFloorIdentifier.h"
#include "LevelGeneratorUtilityWidget.generated.h"

/**
 * 
 */


UCLASS()
class DESENTINTOATLANTIS_API ULevelGeneratorUtilityWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

private:
	
	const int MAP_NODE_POSITION_OFFSET = 50;
	
	TMap<EFloorIdentifier,FName> FloorNames;
	UFloorFactory* floorFactory;
	const FString FLOOR_ENUM = TEXT("EFloorIdentifier");
	UPROPERTY()
	UFloorBase* CurrentFloor;
	UPROPERTY()
	EFloorIdentifier FloorIdentifier ;
	UPROPERTY()
	TArray<UMapButtonElement*> MapButtons;

	void InitializeComboBox(UComboBoxString* aCombobox,FString aEnumName);
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void ActivateMapNodeEditor(UMapButtonElement* aMapButtonElement);

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void SaveCurrentMap();

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void SaveCurrentEvent(int aFloorEventDataTableIndex, FFloorEventData& aNewEventData);

	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void CreateEvent(FFloorEventData& aNewEventData);
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void DeleteEvent(int aFloorEventDataTableIndex);

	void RefreshGridGimmicks();
	
public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMapNodeEditorView* BW_MapNodeEditor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_GenerateButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_SaveButton;

		
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UWrapBox* BW_HorizontalBox;
	
	UPROPERTY(EditAnywhere)
	 TSubclassOf<UUserWidget> MapButtonElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxString* BW_LevelSelector;
	
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	virtual void GenerateLevel();
	
	UFUNCTION(BlueprintCallable)
	virtual void CreateGrid(UFloorBase* aFloor);

	UFUNCTION(BlueprintCallable)
	void SpawnMapButton(int aRow, int aColumn, int aIndex);

	TArray<FName> GetAllEnumNames(UEnum* EnumType);
};




