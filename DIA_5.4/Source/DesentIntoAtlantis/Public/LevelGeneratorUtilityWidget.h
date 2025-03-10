// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorFactory.h"
#include "MapButtonElement.h"
#include "MapNodeEditorView.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "DesentIntoAtlantis/EFloorID.h"
#include "LevelGeneratorUtilityWidget.generated.h"

/**
 * 
 */


UCLASS()
class DESENTINTOATLANTIS_API ULevelGeneratorUtilityWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	
	const int MAP_NODE_POSITION_OFFSET = 50;
	
	TMap<EFloorID,FName> FloorNames;
	UFloorFactory* floorFactory;
	const FString FLOOR_ENUM = TEXT("EFloorID");
	UPROPERTY()
	UFloorBase* CurrentFloor;
	UPROPERTY()
	EFloorID FloorIdentifier ;
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
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	void ResetAllNodes();
	
public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMapNodeEditorView* BW_MapNodeEditor;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_GenerateButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_ResetButton;

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



