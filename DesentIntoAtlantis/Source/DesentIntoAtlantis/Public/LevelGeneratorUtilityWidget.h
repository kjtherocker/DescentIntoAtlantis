// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "FloorFactory.h"
#include "MapButtonElement.h"
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
	TMap<EFloorIdentifier,FName> FloorNames;
	UFloorFactory* floorFactory;
public:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UButton* BW_GenerateButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UMapButtonElement* BW_MapButtonElement;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* BW_TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UComboBoxKey* BW_ComboBoxKey;
	
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	virtual void GenerateLevel();
	
	UFUNCTION(BlueprintCallable, Category = "MyEditorUtility")
	virtual void CreateGrid(UFloorBase* aFloor);
};
