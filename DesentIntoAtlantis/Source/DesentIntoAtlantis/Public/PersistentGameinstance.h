// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/GameInstance.h"
#include "PersistentGameinstance.generated.h"

class UEnemyFactorySubSystem;
class USkillFactorySubsystem;
class UPartyManagerSubsystem;
class UTutorialManagerSubsystem;
class UDialogueFactorySubsystem;
enum class ESkillType;
enum class EDataTableClasses;
class UDataTable;
enum class EDataTableTypes;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPersistentGameinstance : public UGameInstance
{
	GENERATED_BODY()
public:
	
	UPersistentGameinstance();
	virtual void Init() override;

	UFUNCTION()
	void UnloadLevel(FString aLevelName);
	UFUNCTION()
	void LoadLevel(FString aLevelName);

	UFUNCTION()
	void LoadPreSetLevel();

	
	void GetCurrentLevelName(FString aLevelName);
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableClasses,UDataTable*> dataTablesClasses;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<ESkillType,UDataTable*> dataTablesSkills;

	UPROPERTY()
	UPartyManagerSubsystem* partyManagerSubsystem;
	UPROPERTY()
	USkillFactorySubsystem* skillFactorySubsystem;
	UPROPERTY()
	UEnemyFactorySubSystem* enemyFactorySubSystem;
	UPROPERTY()
	UTutorialManagerSubsystem* tutorialManagerSubsystem;
	UPROPERTY()
	UDialogueFactorySubsystem* dialogueManagerSubsystem;

private:
	FString currentLevelName;
	FString preSetLevelName;

	
};
