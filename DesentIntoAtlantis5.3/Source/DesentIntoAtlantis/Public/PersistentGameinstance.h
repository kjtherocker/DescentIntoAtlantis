// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventManagerSubSystem.h"

#include "Engine/GameInstance.h"
#include "PersistentGameinstance.generated.h"

class USaveGameData;
class AFloorPawn;
class UEnemyFactorySubSystem;
class USkillFactorySubsystem;
class UPartyManagerSubsystem;
class UTutorialManagerSubsystem;
class UDialogueFactorySubsystem;
enum class ESkillType;
enum class EClasses;
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
	void ReturnToPreviousLevel();

	UFUNCTION()
	void SaveFloorPawn(AFloorPawn* aFloorPawn);

	UFUNCTION()
	void SaveSessionData();

	UFUNCTION()
	FVector2D LoadFloorPawnPosition();

	UFUNCTION()
	void LoadPreSetLevel();

	UFUNCTION()
	void LoadSaveDataAndTransitionToMap(FString aLevelName);

	UFUNCTION()
	void LoadCombatLevel(FString aEnemyGroupName,ECombatArena aCombatArena);

	
	void GetCurrentLevelName(FString aLevelName);

	bool ConsumeGameSaveLoadingFlag();
	FCombatArenaData ConsumeArenaDataFlag();

	
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EClasses,UDataTable*> dataTablesClasses;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<ESkillType,UDataTable*> dataTablesSkills;

	UPROPERTY()
	UPartyManagerSubsystem*    partyManagerSubsystem;
	UPROPERTY()
	USkillFactorySubsystem*    skillFactorySubsystem;
	UPROPERTY()
	UEnemyFactorySubSystem*    enemyFactorySubSystem;
	UPROPERTY()
	UTutorialManagerSubsystem* tutorialManagerSubsystem;
	UPROPERTY()
	UDialogueFactorySubsystem* dialogueManagerSubsystem;
	UPROPERTY()
	UEventManagerSubSystem*    EventManagerSubSystem;

	
	UPROPERTY()
	UFloorFactory*      floorFactory;
	
	UPROPERTY()
	USaveGameData* SessionSaveGameObject;

private:
	FCombatArenaData aCombatArenaData;
	bool isGameSaveBeingLoaded;
	FString currentLevelName;
	FString previousLevelName;
	FString preSetLevelName;
	
	
};
